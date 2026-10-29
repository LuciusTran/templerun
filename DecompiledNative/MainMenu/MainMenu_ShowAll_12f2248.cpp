// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void ShowAll(bool inShowBannerAds = true) { }
// Ghidra address: 013f6248; ELF VA: 0x12f6248; file offset: 0x12f2248
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0133bdf0) */
/* WARNING: Removing unreachable block (ram,0x0133be38) */
/* WARNING: Removing unreachable block (ram,0x0133be4c) */
/* WARNING: Removing unreachable block (ram,0x0133be60) */
/* WARNING: Removing unreachable block (ram,0x0133be68) */
/* WARNING: Removing unreachable block (ram,0x0133be7c) */
/* WARNING: Removing unreachable block (ram,0x0133becc) */
/* WARNING: Removing unreachable block (ram,0x0133be80) */
/* WARNING: Removing unreachable block (ram,0x0133beb0) */

void MainMenu_ShowAll_12f2248(MainMenu *self,bool inShowBannerAds,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *inTitle;
  void *inMessage;
  void *inAppID;
  void *inRateMessage;
  void *inDeclineMessage;
  void *inRemindLaterMessage;
  undefined4 in_stack_ffffffffffffffa4;
  
  BasePanel_ShowAll_12df6a4((BasePanel *)self,inShowBannerAds,(void *)0x0);
  puVar6 = PTR_DAT_029c0df0;
  puVar5 = PTR_DAT_029c0de8;
  puVar4 = PTR_DAT_029c0de0;
  puVar3 = PTR_DAT_029c0dd8;
  puVar2 = PTR_DAT_029c08f8;
  puVar1 = PTR_DAT_029b8618;
  if ((bRam0000000002b9501e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0df0);
    NativeHelper_011df0b4(PTR_DAT_029c0de0);
    NativeHelper_011df0b4(PTR_DAT_029c0de8);
    NativeHelper_011df0b4(PTR_DAT_029c08f8);
    NativeHelper_011df0b4(PTR_DAT_029c0dd8);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b9501e = 1;
  }
  inRemindLaterMessage = *(void **)puVar1;
  inTitle = Strings_Txt_131380c(*(void **)puVar3,false,(void *)0x0);
  inMessage = Strings_Txt_131380c(*(void **)puVar4,false,(void *)0x0);
  inAppID = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
  inRateMessage = Strings_Txt_131380c(*(void **)puVar5,false,(void *)0x0);
  inDeclineMessage = Strings_Txt_131380c(*(void **)puVar6,false,(void *)0x0);
  Imangi_Utilities_ImangiRateAppManager_AskForReview_1237ed0
            (10,0x30,inTitle,inMessage,inAppID,inRateMessage,inDeclineMessage,inRemindLaterMessage,
             (void *)CONCAT44(in_stack_ffffffffffffffa4,1),(void *)0x0);
  return;
}

