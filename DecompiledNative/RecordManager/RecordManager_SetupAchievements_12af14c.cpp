// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetupAchievements() { }
// Ghidra address: 013b314c; ELF VA: 0x12b314c; file offset: 0x12af14c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void RecordManager_SetupAchievements_12af14c(RecordManager *self,void *runtimeMethod)

{
  void *pvVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  RecordManager_cAchievement *self_00;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *in_x6;
  long lVar16;
  long lVar17;
  
  puVar11 = PTR_DAT_029be918;
  puVar10 = PTR_DAT_029be910;
  puVar9 = PTR_DAT_029be908;
  puVar8 = PTR_DAT_029be900;
  puVar7 = PTR_DAT_029be8f8;
  puVar6 = PTR_DAT_029be8f0;
  puVar5 = PTR_DAT_029be8e8;
  puVar4 = PTR_DAT_029be218;
  puVar3 = PTR_DAT_029be1b0;
  if ((bRam0000000002b94dd7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be920);
    NativeHelper_011df0b4(PTR_DAT_029be1a0);
    NativeHelper_011df0b4(PTR_DAT_029be928);
    NativeHelper_011df0b4(PTR_DAT_029be930);
    NativeHelper_011df0b4(PTR_DAT_029be1a8);
    NativeHelper_011df0b4(PTR_DAT_029be910);
    NativeHelper_011df0b4(PTR_DAT_029be1b0);
    NativeHelper_011df0b4(PTR_DAT_029be1b8);
    NativeHelper_011df0b4(PTR_DAT_029be1c0);
    NativeHelper_011df0b4(PTR_DAT_029be938);
    NativeHelper_011df0b4(PTR_DAT_029be940);
    NativeHelper_011df0b4(PTR_DAT_029be1c8);
    NativeHelper_011df0b4(PTR_DAT_029be948);
    NativeHelper_011df0b4(PTR_DAT_029be950);
    NativeHelper_011df0b4(PTR_DAT_029be958);
    NativeHelper_011df0b4(PTR_DAT_029be1d0);
    NativeHelper_011df0b4(PTR_DAT_029be960);
    NativeHelper_011df0b4(PTR_DAT_029be968);
    NativeHelper_011df0b4(PTR_DAT_029be970);
    NativeHelper_011df0b4(PTR_DAT_029be978);
    NativeHelper_011df0b4(PTR_DAT_029be980);
    NativeHelper_011df0b4(PTR_DAT_029be8f8);
    NativeHelper_011df0b4(PTR_DAT_029be1d8);
    NativeHelper_011df0b4(PTR_DAT_029be1e0);
    NativeHelper_011df0b4(PTR_DAT_029be1e8);
    NativeHelper_011df0b4(PTR_DAT_029be1f0);
    NativeHelper_011df0b4(PTR_DAT_029be988);
    NativeHelper_011df0b4(PTR_DAT_029be990);
    NativeHelper_011df0b4(PTR_DAT_029be1f8);
    NativeHelper_011df0b4(PTR_DAT_029be998);
    NativeHelper_011df0b4(PTR_DAT_029be9a0);
    NativeHelper_011df0b4(PTR_DAT_029be200);
    NativeHelper_011df0b4(PTR_DAT_029be9a8);
    NativeHelper_011df0b4(PTR_DAT_029be208);
    NativeHelper_011df0b4(PTR_DAT_029be9b0);
    NativeHelper_011df0b4(PTR_DAT_029be908);
    NativeHelper_011df0b4(PTR_DAT_029be9b8);
    NativeHelper_011df0b4(PTR_DAT_029be9c0);
    NativeHelper_011df0b4(PTR_DAT_029be9c8);
    NativeHelper_011df0b4(PTR_DAT_029be9d0);
    NativeHelper_011df0b4(PTR_DAT_029be9d8);
    NativeHelper_011df0b4(PTR_DAT_029be210);
    NativeHelper_011df0b4(PTR_DAT_029be9e0);
    NativeHelper_011df0b4(PTR_DAT_029be9e8);
    NativeHelper_011df0b4(PTR_DAT_029be9f0);
    NativeHelper_011df0b4(PTR_DAT_029be9f8);
    NativeHelper_011df0b4(PTR_DAT_029bea00);
    NativeHelper_011df0b4(PTR_DAT_029bea08);
    NativeHelper_011df0b4(PTR_DAT_029bea10);
    NativeHelper_011df0b4(PTR_DAT_029bea18);
    NativeHelper_011df0b4(PTR_DAT_029bea20);
    NativeHelper_011df0b4(PTR_DAT_029bea28);
    NativeHelper_011df0b4(PTR_DAT_029bea30);
    NativeHelper_011df0b4(PTR_DAT_029bea38);
    NativeHelper_011df0b4(PTR_DAT_029bea40);
    NativeHelper_011df0b4(PTR_DAT_029bea48);
    NativeHelper_011df0b4(PTR_DAT_029be218);
    NativeHelper_011df0b4(PTR_DAT_029be220);
    NativeHelper_011df0b4(PTR_DAT_029be228);
    NativeHelper_011df0b4(PTR_DAT_029be230);
    NativeHelper_011df0b4(PTR_DAT_029be238);
    NativeHelper_011df0b4(PTR_DAT_029bea50);
    NativeHelper_011df0b4(PTR_DAT_029bea58);
    NativeHelper_011df0b4(PTR_DAT_029bea60);
    NativeHelper_011df0b4(PTR_DAT_029bea68);
    NativeHelper_011df0b4(PTR_DAT_029bea70);
    NativeHelper_011df0b4(PTR_DAT_029bea78);
    NativeHelper_011df0b4(PTR_DAT_029bea80);
    NativeHelper_011df0b4(PTR_DAT_029bea88);
    NativeHelper_011df0b4(PTR_DAT_029bea90);
    NativeHelper_011df0b4(PTR_DAT_029be240);
    NativeHelper_011df0b4(PTR_DAT_029bea98);
    NativeHelper_011df0b4(PTR_DAT_029beaa0);
    NativeHelper_011df0b4(PTR_DAT_029be248);
    NativeHelper_011df0b4(PTR_DAT_029be250);
    NativeHelper_011df0b4(PTR_DAT_029beaa8);
    NativeHelper_011df0b4(PTR_DAT_029beab0);
    NativeHelper_011df0b4(PTR_DAT_029beab8);
    NativeHelper_011df0b4(PTR_DAT_029be258);
    NativeHelper_011df0b4(PTR_DAT_029beac0);
    NativeHelper_011df0b4(PTR_DAT_029beac8);
    NativeHelper_011df0b4(PTR_DAT_029be260);
    NativeHelper_011df0b4(PTR_DAT_029bead0);
    NativeHelper_011df0b4(PTR_DAT_029bead8);
    NativeHelper_011df0b4(PTR_DAT_029beae0);
    NativeHelper_011df0b4(PTR_DAT_029be268);
    NativeHelper_011df0b4(PTR_DAT_029beae8);
    NativeHelper_011df0b4(PTR_DAT_029beaf0);
    NativeHelper_011df0b4(PTR_DAT_029be270);
    NativeHelper_011df0b4(PTR_DAT_029beaf8);
    NativeHelper_011df0b4(PTR_DAT_029be278);
    NativeHelper_011df0b4(PTR_DAT_029beb00);
    NativeHelper_011df0b4(PTR_DAT_029beb08);
    NativeHelper_011df0b4(PTR_DAT_029beb10);
    NativeHelper_011df0b4(PTR_DAT_029beb18);
    NativeHelper_011df0b4(PTR_DAT_029beb20);
    NativeHelper_011df0b4(PTR_DAT_029beb28);
    NativeHelper_011df0b4(PTR_DAT_029beb30);
    NativeHelper_011df0b4(PTR_DAT_029beb38);
    NativeHelper_011df0b4(PTR_DAT_029beb40);
    NativeHelper_011df0b4(PTR_DAT_029beb48);
    NativeHelper_011df0b4(PTR_DAT_029beb50);
    NativeHelper_011df0b4(PTR_DAT_029beb58);
    NativeHelper_011df0b4(PTR_DAT_029be280);
    NativeHelper_011df0b4(PTR_DAT_029beb60);
    NativeHelper_011df0b4(PTR_DAT_029beb68);
    NativeHelper_011df0b4(PTR_DAT_029be288);
    NativeHelper_011df0b4(PTR_DAT_029beb70);
    NativeHelper_011df0b4(PTR_DAT_029beb78);
    NativeHelper_011df0b4(PTR_DAT_029beb80);
    NativeHelper_011df0b4(PTR_DAT_029beb88);
    NativeHelper_011df0b4(PTR_DAT_029be290);
    NativeHelper_011df0b4(PTR_DAT_029beb90);
    NativeHelper_011df0b4(PTR_DAT_029beb98);
    NativeHelper_011df0b4(PTR_DAT_029beba0);
    NativeHelper_011df0b4(PTR_DAT_029beba8);
    NativeHelper_011df0b4(PTR_DAT_029be298);
    NativeHelper_011df0b4(PTR_DAT_029bebb0);
    NativeHelper_011df0b4(PTR_DAT_029be2a0);
    NativeHelper_011df0b4(PTR_DAT_029be2a8);
    NativeHelper_011df0b4(PTR_DAT_029bebb8);
    NativeHelper_011df0b4(PTR_DAT_029bebc0);
    NativeHelper_011df0b4(PTR_DAT_029bebc8);
    NativeHelper_011df0b4(PTR_DAT_029be2b0);
    NativeHelper_011df0b4(PTR_DAT_029bebd0);
    NativeHelper_011df0b4(PTR_DAT_029bebd8);
    NativeHelper_011df0b4(PTR_DAT_029bebe0);
    NativeHelper_011df0b4(PTR_DAT_029bebe8);
    NativeHelper_011df0b4(PTR_DAT_029be2b8);
    NativeHelper_011df0b4(PTR_DAT_029bebf0);
    NativeHelper_011df0b4(PTR_DAT_029bebf8);
    NativeHelper_011df0b4(PTR_DAT_029bec00);
    NativeHelper_011df0b4(PTR_DAT_029be2c0);
    NativeHelper_011df0b4(PTR_DAT_029bec08);
    NativeHelper_011df0b4(PTR_DAT_029be2c8);
    NativeHelper_011df0b4(PTR_DAT_029bec10);
    NativeHelper_011df0b4(PTR_DAT_029bec18);
    NativeHelper_011df0b4(PTR_DAT_029be2d0);
    NativeHelper_011df0b4(PTR_DAT_029bec20);
    NativeHelper_011df0b4(PTR_DAT_029bec28);
    NativeHelper_011df0b4(PTR_DAT_029bec30);
    NativeHelper_011df0b4(PTR_DAT_029bec38);
    NativeHelper_011df0b4(PTR_DAT_029bec40);
    NativeHelper_011df0b4(PTR_DAT_029be2d8);
    NativeHelper_011df0b4(PTR_DAT_029bec48);
    NativeHelper_011df0b4(PTR_DAT_029bec50);
    NativeHelper_011df0b4(PTR_DAT_029bec58);
    NativeHelper_011df0b4(PTR_DAT_029bec60);
    NativeHelper_011df0b4(PTR_DAT_029be900);
    NativeHelper_011df0b4(PTR_DAT_029bec68);
    NativeHelper_011df0b4(PTR_DAT_029be2e0);
    NativeHelper_011df0b4(PTR_DAT_029bec70);
    NativeHelper_011df0b4(PTR_DAT_029bec78);
    NativeHelper_011df0b4(PTR_DAT_029bec80);
    NativeHelper_011df0b4(PTR_DAT_029be8f0);
    NativeHelper_011df0b4(PTR_DAT_029bec88);
    NativeHelper_011df0b4(PTR_DAT_029be2e8);
    NativeHelper_011df0b4(PTR_DAT_029bec90);
    NativeHelper_011df0b4(PTR_DAT_029bec98);
    NativeHelper_011df0b4(PTR_DAT_029be2f0);
    NativeHelper_011df0b4(PTR_DAT_029be918);
    NativeHelper_011df0b4(PTR_DAT_029be2f8);
    NativeHelper_011df0b4(PTR_DAT_029beca0);
    NativeHelper_011df0b4(PTR_DAT_029be300);
    NativeHelper_011df0b4(PTR_DAT_029beca8);
    NativeHelper_011df0b4(PTR_DAT_029becb0);
    NativeHelper_011df0b4(PTR_DAT_029becb8);
    NativeHelper_011df0b4(PTR_DAT_029becc0);
    NativeHelper_011df0b4(PTR_DAT_029becc8);
    NativeHelper_011df0b4(PTR_DAT_029becd0);
    NativeHelper_011df0b4(PTR_DAT_029be308);
    NativeHelper_011df0b4(PTR_DAT_029becd8);
    NativeHelper_011df0b4(PTR_DAT_029bece0);
    NativeHelper_011df0b4(PTR_DAT_029bece8);
    NativeHelper_011df0b4(PTR_DAT_029becf0);
    NativeHelper_011df0b4(PTR_DAT_029becf8);
    NativeHelper_011df0b4(PTR_DAT_029bed00);
    NativeHelper_011df0b4(PTR_DAT_029bed08);
    NativeHelper_011df0b4(PTR_DAT_029be310);
    NativeHelper_011df0b4(PTR_DAT_029bed10);
    NativeHelper_011df0b4(PTR_DAT_029bed18);
    NativeHelper_011df0b4(PTR_DAT_029bed20);
    NativeHelper_011df0b4(PTR_DAT_029be318);
    NativeHelper_011df0b4(PTR_DAT_029be320);
    NativeHelper_011df0b4(PTR_DAT_029be328);
    NativeHelper_011df0b4(PTR_DAT_029bed28);
    NativeHelper_011df0b4(PTR_DAT_029bed30);
    NativeHelper_011df0b4(PTR_DAT_029bed38);
    NativeHelper_011df0b4(PTR_DAT_029bed40);
    NativeHelper_011df0b4(PTR_DAT_029bed48);
    NativeHelper_011df0b4(PTR_DAT_029bed50);
    NativeHelper_011df0b4(PTR_DAT_029bed58);
    NativeHelper_011df0b4(PTR_DAT_029be338);
    NativeHelper_011df0b4(PTR_DAT_029bed60);
    NativeHelper_011df0b4(PTR_DAT_029bed68);
    NativeHelper_011df0b4(PTR_DAT_029bed70);
    NativeHelper_011df0b4(PTR_DAT_029bed78);
    NativeHelper_011df0b4(PTR_DAT_029bed80);
    NativeHelper_011df0b4(PTR_DAT_029bed88);
    NativeHelper_011df0b4(PTR_DAT_029bed90);
    NativeHelper_011df0b4(PTR_DAT_029bed98);
    NativeHelper_011df0b4(PTR_DAT_029beda0);
    NativeHelper_011df0b4(PTR_DAT_029be8e8);
    NativeHelper_011df0b4(PTR_DAT_029beda8);
    NativeHelper_011df0b4(PTR_DAT_029bedb0);
    NativeHelper_011df0b4(PTR_DAT_029be340);
    NativeHelper_011df0b4(PTR_DAT_029bedb8);
    NativeHelper_011df0b4(PTR_DAT_029bedc0);
    NativeHelper_011df0b4(PTR_DAT_029bedc8);
    NativeHelper_011df0b4(PTR_DAT_029bedd0);
    NativeHelper_011df0b4(PTR_DAT_029bedd8);
    NativeHelper_011df0b4(PTR_DAT_029be348);
    NativeHelper_011df0b4(PTR_DAT_029bede0);
    NativeHelper_011df0b4(PTR_DAT_029bede8);
    NativeHelper_011df0b4(PTR_DAT_029bedf0);
    NativeHelper_011df0b4(PTR_DAT_029bedf8);
    NativeHelper_011df0b4(PTR_DAT_029be350);
    NativeHelper_011df0b4(PTR_DAT_029bee00);
    NativeHelper_011df0b4(PTR_DAT_029bee08);
    NativeHelper_011df0b4(PTR_DAT_029bee10);
    NativeHelper_011df0b4(PTR_DAT_029bee18);
    NativeHelper_011df0b4(PTR_DAT_029be358);
    NativeHelper_011df0b4(PTR_DAT_029be360);
    NativeHelper_011df0b4(PTR_DAT_029bee20);
    bRam0000000002b94dd7 = 1;
  }
  RecordManager_AddAchievement_12b2524
            (self,*(void **)puVar4,*(void **)puVar5,*(void **)puVar6,*(void **)puVar7,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)puVar3,*(void **)puVar8,*(void **)puVar9,*(void **)puVar10,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2c8,*(void **)puVar11,*(void **)PTR_DAT_029bee00,
             *(void **)PTR_DAT_029bea10,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be228,*(void **)PTR_DAT_029bea30,*(void **)PTR_DAT_029beae8,
             *(void **)PTR_DAT_029bec00,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2f0,*(void **)PTR_DAT_029bec50,*(void **)PTR_DAT_029bebd8,
             *(void **)PTR_DAT_029bed38,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be260,*(void **)PTR_DAT_029beaa0,*(void **)PTR_DAT_029becd8,
             *(void **)PTR_DAT_029beb68,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be340,*(void **)PTR_DAT_029bec20,*(void **)PTR_DAT_029beca8,
             *(void **)PTR_DAT_029beac0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be318,*(void **)PTR_DAT_029be9f8,*(void **)PTR_DAT_029bedf0,
             *(void **)PTR_DAT_029bedd0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be300,*(void **)PTR_DAT_029bea60,*(void **)PTR_DAT_029be948,
             *(void **)PTR_DAT_029bea18,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be208,*(void **)PTR_DAT_029beb98,*(void **)PTR_DAT_029bec30,
             *(void **)PTR_DAT_029bed78,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2f8,*(void **)PTR_DAT_029becb8,*(void **)PTR_DAT_029be978,
             *(void **)PTR_DAT_029bebe0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be360,*(void **)PTR_DAT_029beb48,*(void **)PTR_DAT_029bed80,
             *(void **)PTR_DAT_029be9d8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be328,*(void **)PTR_DAT_029bea90,*(void **)PTR_DAT_029beca0,
             *(void **)PTR_DAT_029bedb0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be288,*(void **)PTR_DAT_029bede8,*(void **)PTR_DAT_029bed30,
             *(void **)PTR_DAT_029bea78,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1a8,*(void **)PTR_DAT_029bec08,*(void **)PTR_DAT_029be988,
             *(void **)PTR_DAT_029bec80,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2c0,*(void **)PTR_DAT_029beaa8,*(void **)PTR_DAT_029be960,
             *(void **)PTR_DAT_029bed88,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2d8,*(void **)PTR_DAT_029be998,*(void **)PTR_DAT_029bee10,
             *(void **)PTR_DAT_029bead0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2b8,*(void **)PTR_DAT_029beb38,*(void **)PTR_DAT_029bea50,
             *(void **)PTR_DAT_029bea68,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be290,*(void **)PTR_DAT_029be9f0,*(void **)PTR_DAT_029bebc8,
             *(void **)PTR_DAT_029be940,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be240,*(void **)PTR_DAT_029becc8,*(void **)PTR_DAT_029beb28,
             *(void **)PTR_DAT_029becb0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2e0,*(void **)PTR_DAT_029bec48,*(void **)PTR_DAT_029bea48,
             *(void **)PTR_DAT_029beb80,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1b8,*(void **)PTR_DAT_029becd0,*(void **)PTR_DAT_029bebf0,
             *(void **)PTR_DAT_029bebd0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be268,*(void **)PTR_DAT_029bec10,*(void **)PTR_DAT_029beb58,
             *(void **)PTR_DAT_029bed68,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be270,*(void **)PTR_DAT_029beb30,*(void **)PTR_DAT_029be930,
             *(void **)PTR_DAT_029bedb8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be210,*(void **)PTR_DAT_029beaf8,*(void **)PTR_DAT_029beda8,
             *(void **)PTR_DAT_029bebb0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1d8,*(void **)PTR_DAT_029bed40,*(void **)PTR_DAT_029bec60,
             *(void **)PTR_DAT_029bed08,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1e8,*(void **)PTR_DAT_029bed60,*(void **)PTR_DAT_029bebe8,
             *(void **)PTR_DAT_029beb60,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be350,*(void **)PTR_DAT_029bea58,*(void **)PTR_DAT_029bee20,
             *(void **)PTR_DAT_029bed20,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be308,*(void **)PTR_DAT_029be968,*(void **)PTR_DAT_029be9d0,
             *(void **)PTR_DAT_029beda0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2d0,*(void **)PTR_DAT_029bedf8,*(void **)PTR_DAT_029bea80,
             *(void **)PTR_DAT_029be920,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be220,*(void **)PTR_DAT_029bea08,*(void **)PTR_DAT_029bec98,
             *(void **)PTR_DAT_029bea00,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1f0,*(void **)PTR_DAT_029bea28,*(void **)PTR_DAT_029beae0,
             *(void **)PTR_DAT_029bed90,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be338,*(void **)PTR_DAT_029be990,*(void **)PTR_DAT_029bed48,
             *(void **)PTR_DAT_029bec90,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be258,*(void **)PTR_DAT_029bece0,*(void **)PTR_DAT_029beb70,
             *(void **)PTR_DAT_029bed10,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1f8,*(void **)PTR_DAT_029beb40,*(void **)PTR_DAT_029beb90,
             *(void **)PTR_DAT_029bec38,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be200,*(void **)PTR_DAT_029beb78,*(void **)PTR_DAT_029bec78,
             *(void **)PTR_DAT_029beb00,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2a8,*(void **)PTR_DAT_029bebf8,*(void **)PTR_DAT_029bead8,
             *(void **)PTR_DAT_029bec18,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be248,*(void **)PTR_DAT_029bec40,*(void **)PTR_DAT_029beb50,
             *(void **)PTR_DAT_029beb08,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2e8,*(void **)PTR_DAT_029bece8,*(void **)PTR_DAT_029bebb8,
             *(void **)PTR_DAT_029be9b8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be280,*(void **)PTR_DAT_029bee08,*(void **)PTR_DAT_029bec28,
             *(void **)PTR_DAT_029beba8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be278,*(void **)PTR_DAT_029bea20,*(void **)PTR_DAT_029be9a8,
             *(void **)PTR_DAT_029be9e8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1a0,*(void **)PTR_DAT_029be9a0,*(void **)PTR_DAT_029be938,
             *(void **)PTR_DAT_029bea38,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be358,*(void **)PTR_DAT_029bea40,*(void **)PTR_DAT_029beab0,
             *(void **)PTR_DAT_029bea88,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1d0,*(void **)PTR_DAT_029bed28,*(void **)PTR_DAT_029beb88,
             *(void **)PTR_DAT_029bedd8,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1c0,*(void **)PTR_DAT_029bee18,*(void **)PTR_DAT_029bed00,
             *(void **)PTR_DAT_029bea70,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be348,*(void **)PTR_DAT_029becf8,*(void **)PTR_DAT_029bedc8,
             *(void **)PTR_DAT_029be950,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be238,*(void **)PTR_DAT_029beac8,*(void **)PTR_DAT_029be928,
             *(void **)PTR_DAT_029bedc0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1c8,*(void **)PTR_DAT_029bebc0,*(void **)PTR_DAT_029beba0,
             *(void **)PTR_DAT_029bec68,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2b0,*(void **)PTR_DAT_029bede0,*(void **)PTR_DAT_029bed98,
             *(void **)PTR_DAT_029bea98,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be320,*(void **)PTR_DAT_029bec88,*(void **)PTR_DAT_029be9e0,
             *(void **)PTR_DAT_029bed70,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be310,*(void **)PTR_DAT_029beb18,*(void **)PTR_DAT_029beb10,
             *(void **)PTR_DAT_029beaf0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be1e0,*(void **)PTR_DAT_029be9c8,*(void **)PTR_DAT_029beab8,
             *(void **)PTR_DAT_029becc0,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be230,*(void **)PTR_DAT_029bed58,*(void **)PTR_DAT_029be970,
             *(void **)PTR_DAT_029bed18,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be250,*(void **)PTR_DAT_029be9c0,*(void **)PTR_DAT_029beb20,
             *(void **)PTR_DAT_029be958,false,in_x6);
  RecordManager_AddAchievement_12b2524
            (self,*(void **)PTR_DAT_029be2a0,*(void **)PTR_DAT_029bec70,*(void **)PTR_DAT_029becf0,
             *(void **)PTR_DAT_029bec58,false,in_x6);
  puVar3 = PTR_DAT_029bef58;
  pvVar12 = *(void **)PTR_DAT_029be298;
  pvVar13 = *(void **)PTR_DAT_029be9b0;
  pvVar14 = *(void **)PTR_DAT_029bed50;
  pvVar15 = *(void **)PTR_DAT_029be980;
  if ((bRam0000000002b94dd6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bef60);
    NativeHelper_011df0b4(PTR_DAT_029bef58);
    bRam0000000002b94dd6 = 1;
  }
  self_00 = (RecordManager_cAchievement *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
  RecordManager_cAchievement_cAchievement_12b52ac(self_00,(void *)0x0);
  if (self_00 != (RecordManager_cAchievement *)0x0) {
    pvVar1 = pvVar14;
    if (pvVar15 != (void *)0x0) {
      pvVar1 = pvVar15;
    }
    self_00->achievementId = pvVar12;
    self_00->name = pvVar13;
    self_00->preDescription = pvVar14;
    self_00->postDescription = pvVar1;
    self_00->hidden = false;
    pvVar12 = self->TRAchievements;
    if (pvVar12 != (void *)0x0) {
      lVar16 = *(long *)((long)pvVar12 + 0x10);
      lVar17 = *(long *)PTR_DAT_029bef60;
      *(int *)((long)pvVar12 + 0x1c) = *(int *)((long)pvVar12 + 0x1c) + 1;
      if (lVar16 != 0) {
        uVar2 = *(uint *)((long)pvVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)((long)pvVar12 + 0x18) = uVar2 + 1;
          *(RecordManager_cAchievement **)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = self_00;
          return;
        }
        uVar2 = *(uint *)((long)pvVar12 + 0x18);
        func_0x01a2ffdc(pvVar12,uVar2 + 1,
                        *(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                       0x70) + 0x20) + 0xc0) + 0x78));
        lVar16 = *(long *)((long)pvVar12 + 0x10);
        *(uint *)((long)pvVar12 + 0x18) = uVar2 + 1;
        if (lVar16 != 0) {
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(RecordManager_cAchievement **)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = self_00;
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

