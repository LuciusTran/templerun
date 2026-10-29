// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Shake(float magnitude, float duration, float freqMult, float delay = 0) { }
// Ghidra address: 013d764c; ELF VA: 0x12d764c; file offset: 0x12d364c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_Shake_12d364c
               (GameCamera *self,float magnitude,float duration,float freqMult,float delay,
               void *runtimeMethod)

{
  if ((0.0 < magnitude) && (0.0 < duration)) {
    if (0.0 < delay) {
      self->ShakeDurationAfterDelay = duration;
      self->ShakeFrequencyMultiplierAfterDelay = freqMult;
      self->ShakeAfterDelay = true;
      self->ShakeDelay = delay;
      self->ShakeMagnitudeAfterDelay = magnitude;
      return;
    }
    if (self->IsCameraShaking == false) {
      self->IsCameraShaking = true;
    }
    self->ShakeAfterDelay = false;
    self->TimeSinceCameraShakeStart = 0.0;
    self->CameraShakeMagnitude = magnitude;
    self->CameraShakeDuration = duration;
    self->CameraShakeDamperRate = magnitude / duration;
    self->CameraShakeFrequencyMultiplier = freqMult;
  }
  return;
}

