# APK logic audit — 2026-10-29

The playable reconstruction was checked again against the native library and metadata inside the supplied XAPK. **It is closer to the original after the corrections below, but complete game equivalence is not established.** The previous smoke checks established a playable flow; they did not prove that every translated branch matched the APK.

## Input and regression evidence

The XAPK hash still matches the initial inventory. The ARM64 library and metadata were read again from their APK entries and compared with the extracted analysis inputs. Both match. Digests are retained in [the audit report](../Evidence/logic-audit.json).

An additional native execution case reproduced an actual pre-fix discrepancy: `SetGroundHeight(-15)` with a previously set raised-ground flag. Original ARM64 retained the flag, while the C# implementation cleared it. The old checkout failed the new Unity comparison with `Native/C# mismatch: SetGroundHeight [-15,-15,1]`. The corrected code passes.

## Corrections

| Area | Previous behavior | Corrected behavior and original evidence |
|---|---|---|
| Ground-height flag | Equal/lower ground queries cleared the raised-ground flag. | Preserve it until landing, as in `CharacterPlayer.SetGroundHeight`. Verified directly against original ARM64 cases. |
| Landing | A falling or raised-ground landing could snap to the road without stumbling. | Apply the original strict two-unit stumble threshold and six-unit falling landing window; invincibility suppresses the stumble. The falling and raised-ground checks stay independent: both can trigger in one frame and cause a lethal second stumble. See `CharacterPlayer.Update`. |
| Delayed actions and falling | Jump ran before a simultaneous delayed stumble; the first falling frame already accumulated time. | Stumble runs first, so its state can reject the jump. The first falling frame resets elapsed time to zero. See `CharacterPlayer.Update`. |
| Power timers | Permanent wings still advanced recharge; zero-duration invincibility could leave boost active in its main segment. | Preserve the permanent-wing timer branch and evaluate expiry independently of whether the boost timer decremented. See `CharacterPlayer.Update`. |
| Boost acceleration | The slowdown tail returned zero force once speed reached its pre-boost value. | Fall back to the original acceleration curve; brake at 150 only while faster than the saved speed. Restore the native constructor's 50-unit slowdown field. See `GameController.HandleControls`. |
| Frame duration | The host capped the entire simulation step, including timers and forces. | Use `Time.smoothDeltaTime` for the host step, with the 1/15-second cap only for displacement. See `MovingObject.Simulate` and `CharacterPlayer.Update`. |
| Head Start | Accepted endpoint distances, allowed falling, added a full boost distance, and set the Mega flag for the longer utility. | Require `25 < distance < 100` in normal mode, reject falling, subtract already-traveled distance, and pass `isMega=false` for both utility types, as this APK does. An eligible utility can also replace an existing boost. See `GameController.UseHeadStart` and `UseHeadStartMega`. The serialized endpoints are 950 and 2350; `StartBoost` adds its 50-unit tail. |
| Wings activation | Falling did not block activation. | Apply the native falling guard and exact recharge-zero condition. See `GameController.UseAngelWings`. |
| Obstacle contacts | A tile-wide hit latch replaced the native entry rule; combined hazards used the slide death type. | Skip contacts when the previous point is already inside the obstacle and detect entering/crossing segments. Combined jump/slide hazards use Tangle on planks and Burnt otherwise. The host rebases the shared temple hazard's world-height threshold when placing it in another biome. See `GameController.HandleCollisionWithObstacles`. |
| Pickups and magnet | Collection used a custom horizontal/vertical distance test; magnet attraction used a 35-unit horizontal range and fixed movement speed. | Restore the player's native world-axis bounds, type-specific sphere radii, the 90-unit three-dimensional attraction range, inverse-square force and magnetized state. Honor the pickup's serialized score value. See `CharacterPlayer.GetWorldSpaceBounds`, `MovingObject.DoesSphereIntersectBoundingBox` and `GameController.HandleBonusItemPickup`. ELF constants are recorded in `Evidence/native-constants.json`. |
| Power-up pacing and animation | The host could schedule another power-up before the original cooldown; sliding did not queue its loop clip. | Observe the native 15-second power-up gate and queue `Slide Loop` after `Slide Start`. Exact course distribution remains authored. |
| Local continue | Reloading a run could reset wings cooldown and omit several native state fields. | Version the local run snapshot and retain recharge, power timing, fall/ground state, score multiplier and maximum bonus level. This fixes the authored persistence integration; the original Android save format is not restored. |

The native store price function was additionally decompiled with Ghidra in read-only mode. It confirms utility list indices **wings=0, permanent wings=1, Head Start=2, Mega Head Start=3**. The existing playable store mapping was already correct: 500, 2500 and 10000 coins for its three offered utilities. The enum values alone would have suggested the wrong list ordering. The new pseudocode is in [RecordManager.GetPriceForUpgradeType](../DecompiledNative/RecordManager/RecordManager_GetPriceForUpgradeType_12b3654.cpp).

## Verification and limits

- **927 original ARM64 cases across 19 selected methods**, followed by comparisons with their C# outputs. This adds ground-height flag, horizontal speed, wings, vacuum and boost cases to the previous coverage. Boost executes the original invincibility/texture helpers with empty renderer arrays. IL2CPP type-cache initialization uses explicit fixtures; material rendering and Android execution are outside that lane.
- **52 source-reviewed regression checks** run inside Unity/player code for frame state, thresholds, acceleration, world bounds, magnet constants and actual extracted obstacle polygons. These expectations come from the native branches, but these checks do not execute the complete native Unity frame.
- **64 headless and 66 graphical Linux player checks**, including the native vectors and reviewed regressions, save/continue, purchases, utility boundaries, animation, connected corners and biome ground. The generated routes have different corner counts. Graphical testing used Xvfb/OpenGL/llvmpipe.
- A separate validation checkout was used so the user's open Unity editor did not need to close.

Reports: [native execution](../Evidence/native-logic-verification.json), [editor checks](../Evidence/unity-native-core-verification.json), [headless player](../Evidence/player-smoke.json), [graphical player](../Evidence/player-graphical-smoke.json).

There is no overall accuracy percentage. Course generation, steering and swipe buffering, guided invincibility, revive orchestration, camera, UI and local persistence are still authored or partial integrations. Native score-multiplier progression, records/achievements, automatic biome transitions and intro choreography are not fully restored. Following-path movement, non-default velocity limits, degenerate polygon boundaries, original component update ordering and Android/touch/accelerometer behavior remain unverified. The recovered rules and tested cases are useful evidence for development, not a claim that the entire reconstructed game behaves identically to the APK.
