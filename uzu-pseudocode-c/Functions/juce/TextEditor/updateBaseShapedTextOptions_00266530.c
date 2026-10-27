// Function : updateBaseShapedTextOptions
// Namespace: juce:TextEditor
// Entry    : 00266530
// Prototype: undefined updateBaseShapedTextOptions(TextEditor * this)
// Body     : 00266530 - 002679ea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TextEditor::updateBaseShapedTextOptions() */

void __thiscall juce::TextEditor::updateBaseShapedTextOptions(TextEditor *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  int iVar25;
  undefined8 *puVar26;
  long *plVar27;
  byte *pbVar28;
  long *plVar29;
  long lVar30;
  byte *pbVar31;
  int *piVar32;
  byte *pbVar33;
  ulong uVar34;
  ulong uVar35;
  TextEditor *pTVar36;
  bool bVar37;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  float fStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined8 *local_378;
  undefined8 *puStack_370;
  undefined8 *local_368;
  long *local_360;
  long *plStack_358;
  long *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  long local_338;
  byte *pbStack_330;
  undefined7 uStack_328;
  undefined4 local_321;
  undefined4 uStack_31d;
  undefined4 local_318;
  undefined4 uStack_314;
  long *plStack_310;
  TextEditor *local_308;
  void *pvStack_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  int local_2e0;
  int local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined8 *local_2b0;
  undefined8 *puStack_2a8;
  undefined8 *local_2a0;
  long *local_298;
  long *plStack_290;
  long *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_270;
  byte *local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  float fStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined1 local_230 [16];
  undefined8 *local_220;
  long *local_218;
  long *plStack_210;
  long *local_208;
  undefined7 local_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  long local_1f0;
  byte *pbStack_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  long *local_198;
  long *local_190;
  undefined7 local_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  long local_170;
  byte *local_168;
  undefined7 local_158;
  undefined4 uStack_151;
  undefined5 uStack_14d;
  long local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  uStack_120 = 0;
  pvStack_100 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_b8 = (undefined1 *)0x0;
  local_128 = 9;
  local_108 = 0;
  detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&pvStack_100);
  uStack_d0 = _DAT_005dd140;
  local_c8 = _UNK_005dd148;
  uStack_c0 = 0x7fffffffffffffff;
  local_b8 = &DAT_0061ac58;
                    /* try { // try from 002665db to 002665f4 has its CatchHandler @ 00267a34 */
  detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(&local_a8,&local_128,1);
                    /* try { // try from 002665ff to 00266613 has its CatchHandler @ 00267a2f */
  detail::ShapedTextOptions::withJustification
            ((undefined4 *)&local_1d8,&local_a8,*(uint *)(this + 0x1a8) & 0x47);
  puVar23 = local_1b0;
  local_158 = (undefined7)local_1d8;
  uStack_151._0_1_ = (undefined1)((ulong)local_1d8 >> 0x38);
  uStack_151._1_3_ = (undefined3)uStack_1d0;
  uStack_14d = (undefined5)((ulong)uStack_1d0 >> 0x18);
  local_148 = local_1c8;
  uStack_140 = uStack_1c0;
  local_138 = local_1b8;
  uVar34 = (long)local_1a8 - (long)local_1b0 >> 4;
  if ((long)local_1a8 - (long)local_1b0 == 0) {
    puVar22 = (undefined8 *)0x0;
    plVar24 = local_198;
    plVar27 = local_190;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar34;
    if (SUB168(auVar12 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679cd to 002679d1 has its CatchHandler @ 00267a77 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00266677 to 0026667e has its CatchHandler @ 00267a77 */
    puVar22 = operator_new(SUB168(auVar12 * ZEXT816(0x10),0));
    plVar24 = local_198;
    plVar27 = local_190;
  }
  puVar26 = puVar22;
  if (puVar23 != local_1a8) {
    do {
      uVar18 = puVar23[1];
      *puVar26 = *puVar23;
      puVar26[1] = uVar18;
      puVar23 = puVar23 + 2;
      puVar26 = puVar26 + 2;
    } while (puVar23 != local_1a8);
  }
  uVar35 = (long)plVar27 - (long)plVar24 >> 3;
  local_190 = plVar27;
  local_308 = this;
  local_198 = plVar24;
  if ((long)plVar27 - (long)plVar24 == 0) {
    local_218 = (long *)0x0;
  }
  else {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar35;
    if (SUB168(auVar13 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679d2 to 002679d6 has its CatchHandler @ 00267a65 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 002666f8 to 002666ff has its CatchHandler @ 00267a65 */
    local_218 = operator_new(SUB168(auVar13 * ZEXT816(8),0));
  }
  pTVar36 = local_308;
  plStack_210 = local_218;
  if (plVar24 != plVar27) {
    do {
      lVar10 = *plVar24;
      *plStack_210 = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar24 = plVar24 + 1;
      plStack_210 = plStack_210 + 1;
    } while (plVar24 != plVar27);
  }
  local_220 = puVar22 + uVar34 * 2;
  local_208 = local_218 + uVar35;
  uStack_31d = (undefined4)((uint7)uStack_178 >> 0x18);
  uStack_328 = local_180;
  local_321 = CONCAT31((int3)uStack_178,uStack_179);
  pbVar31 = local_168 + -0x10;
  if (pbVar31 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar31 = *(int *)pbVar31 + 1;
    UNLOCK();
  }
  local_238 = local_138;
  local_248 = (undefined4)local_148;
  fStack_244 = (float)((ulong)local_148 >> 0x20);
  uStack_240 = (undefined4)uStack_140;
  uStack_23c = (undefined4)((ulong)uStack_140 >> 0x20);
  local_258._0_4_ = (undefined4)local_158;
  local_258._4_4_ = (undefined4)(CONCAT17((undefined1)uStack_151,local_158) >> 0x20);
  uStack_250 = (undefined4)CONCAT53(uStack_14d,uStack_151._1_3_);
  uStack_24c = (undefined4)((uint5)uStack_14d >> 8);
  local_230._8_8_ = puVar26;
  local_230._0_8_ = puVar22;
  local_200 = local_180;
  uStack_1f9 = uStack_179;
  uStack_1f8 = (undefined7)(CONCAT44(uStack_31d,local_321) >> 8);
  uStack_1f1 = 1;
  local_1f0 = local_170;
  pbStack_1e8 = local_168;
                    /* try { // try from 00266841 to 00266852 has its CatchHandler @ 00267a1d */
  detail::ShapedTextOptions::withLeading
            (*(undefined4 *)(local_308 + 0x2ec),(undefined8 *)&local_3a0,&local_258);
  if (pbVar31 == (byte *)&emptyString) {
LAB_00266869:
    plVar24 = local_218;
    plVar27 = plStack_210;
    if (local_218 != plStack_210) {
LAB_00266ca9:
      do {
        plVar29 = (long *)*plVar24;
        if (plVar29 != (long *)0x0) {
          LOCK();
          plVar11 = plVar29 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar29 + 8))();
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar27);
    }
  }
  else {
    LOCK();
    iVar25 = *(int *)pbVar31;
    *(int *)pbVar31 = *(int *)pbVar31 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_00266869;
    operator_delete__(pbVar31);
    plVar24 = local_218;
    plVar27 = plStack_210;
    if (local_218 != plStack_210) goto LAB_00266ca9;
  }
  if (local_218 != (long *)0x0) {
    operator_delete(local_218);
  }
  if ((void *)local_230._0_8_ != (void *)0x0) {
    operator_delete((void *)local_230._0_8_);
  }
  pbVar31 = local_168 + -0x10;
  if (pbVar31 == (byte *)&emptyString) {
LAB_002668c3:
    plVar24 = local_198;
    plVar27 = local_190;
    if (local_198 != local_190) {
LAB_00266d09:
      do {
        plVar29 = (long *)*plVar24;
        if (plVar29 != (long *)0x0) {
          LOCK();
          plVar11 = plVar29 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar29 + 8))();
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar27);
    }
  }
  else {
    LOCK();
    iVar25 = *(int *)pbVar31;
    *(int *)pbVar31 = *(int *)pbVar31 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_002668c3;
    operator_delete__(pbVar31);
    plVar24 = local_198;
    plVar27 = local_190;
    if (local_198 != local_190) goto LAB_00266d09;
  }
  if (local_198 != (long *)0x0) {
    operator_delete(local_198);
  }
  if (local_1b0 != (undefined8 *)0x0) {
    operator_delete(local_1b0);
  }
  piVar32 = (int *)(local_38 + -0x10);
  if (piVar32 == &emptyString) {
LAB_0026691d:
    plVar24 = local_68;
    if (local_68 != local_60) {
LAB_00266d69:
      do {
        plVar27 = (long *)*plVar24;
        if (plVar27 != (long *)0x0) {
          LOCK();
          plVar29 = plVar27 + 1;
          *(int *)plVar29 = (int)*plVar29 + -1;
          UNLOCK();
          if ((int)*plVar29 == 0) {
            (**(code **)(*plVar27 + 8))();
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != local_60);
    }
  }
  else {
    LOCK();
    iVar25 = *piVar32;
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_0026691d;
    operator_delete__(piVar32);
    plVar24 = local_68;
    if (local_68 != local_60) goto LAB_00266d69;
  }
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  piVar32 = (int *)(local_b8 + -0x10);
  if (piVar32 == &emptyString) {
LAB_00266977:
    plVar24 = local_e8;
    plVar27 = plStack_e0;
    if (local_e8 != plStack_e0) {
LAB_00266dc9:
      do {
        plVar29 = (long *)*plVar24;
        if (plVar29 != (long *)0x0) {
          LOCK();
          plVar11 = plVar29 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar29 + 8))();
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar27);
    }
  }
  else {
    LOCK();
    iVar25 = *piVar32;
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_00266977;
    operator_delete__(piVar32);
    plVar24 = local_e8;
    plVar27 = plStack_e0;
    if (local_e8 != plStack_e0) goto LAB_00266dc9;
  }
  if (local_e8 != (long *)0x0) {
    operator_delete(local_e8);
  }
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  if (pTVar36[0x1cb] == (TextEditor)0x0) {
    iVar20 = *(int *)(*(long *)(pTVar36 + 0x188) + 0x150) - *(int *)(pTVar36 + 0x278);
    iVar25 = 3;
    if (3 < iVar20) {
      iVar25 = iVar20;
    }
    local_a8 = CONCAT44(uStack_398,uStack_39c);
    uStack_a0 = CONCAT44(uStack_390,uStack_394);
    local_158 = CONCAT43(uStack_384,uStack_388._1_3_);
    uStack_151 = uStack_380;
    uVar34 = (long)puStack_370 - (long)local_378 >> 4;
    local_318 = local_3a0;
    if ((long)puStack_370 - (long)local_378 == 0) {
      puVar22 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)0x0;
      if (local_378 != puStack_370) goto LAB_00266ec1;
    }
    else {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      if (SUB168(auVar14 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679e1 to 002679e5 has its CatchHandler @ 002679f5 */
        std::__throw_bad_array_new_length();
      }
                    /* try { // try from 00266c4b to 00266c52 has its CatchHandler @ 002679f5 */
      puVar23 = operator_new(SUB168(auVar14 * ZEXT816(0x10),0));
      puVar22 = puVar23;
      if (local_378 != puStack_370) {
LAB_00266ec1:
        puVar26 = local_378;
        puVar23 = puVar22;
        do {
          uVar18 = puVar26[1];
          *puVar23 = *puVar26;
          puVar23[1] = uVar18;
          puVar26 = puVar26 + 2;
          puVar23 = puVar23 + 2;
        } while (puVar26 != puStack_370);
      }
    }
    uVar35 = (long)plStack_358 - (long)local_360 >> 3;
    if ((long)plStack_358 - (long)local_360 == 0) {
      plVar24 = (long *)0x0;
    }
    else {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar35;
      if (SUB168(auVar15 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679e6 to 002679ea has its CatchHandler @ 002679f3 */
        std::__throw_bad_array_new_length();
      }
                    /* try { // try from 00266f11 to 00266f18 has its CatchHandler @ 002679f3 */
      plVar24 = operator_new(SUB168(auVar15 * ZEXT816(8),0));
    }
    pTVar36 = local_308;
    pbVar31 = pbStack_330;
    puVar26 = local_378;
    plVar27 = plVar24;
    if (local_360 != plStack_358) {
      plVar29 = local_360;
      do {
        lVar10 = *plVar29;
        *plVar27 = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        plVar29 = plVar29 + 1;
        plVar27 = plVar27 + 1;
      } while (plVar29 != plStack_358);
    }
    fStack_38c = (float)(iVar25 + -2);
    local_368 = puVar22 + uVar34 * 2;
    local_248 = (undefined4)local_338;
    fStack_244 = (float)((ulong)local_338 >> 0x20);
    local_258._0_4_ = (undefined4)local_348;
    local_258._4_4_ = (undefined4)((ulong)local_348 >> 0x20);
    uStack_250 = (undefined4)uStack_340;
    uStack_24c = (undefined4)((ulong)uStack_340 >> 0x20);
    pbVar28 = pbStack_330 + -0x10;
    if (pbVar28 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar28 = *(int *)pbVar28 + 1;
      UNLOCK();
    }
    plVar29 = plVar24 + uVar35;
    local_128 = local_a8;
    uStack_120 = uStack_a0;
    uStack_328 = local_158;
    local_321 = uStack_151;
    local_1d8 = local_348;
    uStack_1d0 = uStack_340;
    local_1c8 = local_338;
    local_3a0 = local_318;
    uStack_39c = (undefined4)local_a8;
    uStack_398 = (undefined4)((ulong)local_a8 >> 0x20);
    uStack_394 = (undefined4)uStack_a0;
    uStack_390 = (undefined4)((ulong)uStack_a0 >> 0x20);
    uStack_388._1_3_ = (undefined3)local_158;
    uStack_388 = CONCAT31(uStack_388._1_3_,1);
    uStack_384 = (undefined4)((uint7)local_158 >> 0x18);
    uStack_380 = uStack_151;
    bVar37 = local_378 != (undefined8 *)0x0;
    local_378 = puVar22;
    puStack_370 = puVar23;
    if (bVar37) {
      local_318 = SUB84(plVar24,0);
      uStack_314 = (undefined4)((ulong)plVar24 >> 0x20);
      plStack_310 = plVar27;
      operator_delete(puVar26);
      plVar24 = (long *)CONCAT44(uStack_314,local_318);
      plVar27 = plStack_310;
    }
    plVar1 = plStack_358;
    plVar11 = local_360;
    bVar37 = local_360 != plStack_358;
    plStack_358 = plVar27;
    local_350 = plVar29;
    if (bVar37) {
      plVar27 = local_360;
      local_360 = plVar24;
      do {
        plVar24 = (long *)*plVar27;
        if (plVar24 != (long *)0x0) {
          LOCK();
          plVar29 = plVar24 + 1;
          *(int *)plVar29 = (int)*plVar29 + -1;
          UNLOCK();
          if ((int)*plVar29 == 0) {
            (**(code **)(*plVar24 + 8))();
          }
        }
        plVar27 = plVar27 + 1;
        plVar24 = local_360;
      } while (plVar27 != plVar1);
    }
    local_360 = plVar24;
    if (plVar11 != (long *)0x0) {
      operator_delete(plVar11);
    }
    local_338 = local_1c8;
    local_348 = local_1d8;
    uStack_340 = uStack_1d0;
    pbVar28 = pbStack_330 + -0x10;
    pbStack_330 = pbVar31;
    if (pbVar28 != (byte *)&emptyString) {
      LOCK();
      iVar25 = *(int *)pbVar28;
      *(int *)pbVar28 = *(int *)pbVar28 + -1;
      UNLOCK();
      if (iVar25 == 0) {
        operator_delete__(pbVar28);
      }
    }
  }
  else {
    iVar20 = *(int *)(*(long *)(pTVar36 + 0x188) + 0x150) - *(int *)(pTVar36 + 0x278);
    iVar25 = 3;
    if (3 < iVar20) {
      iVar25 = iVar20;
    }
                    /* try { // try from 002669e3 to 002669f4 has its CatchHandler @ 00267a0d */
    detail::ShapedTextOptions::withWordWrapWidth
              ((float)(iVar25 + -2),&local_1d8,(undefined8 *)&local_3a0);
                    /* try { // try from 002669f5 to 00266a09 has its CatchHandler @ 002679fd */
    detail::ShapedTextOptions::withAllowBreakingInsideWord
              ((ShapedTextOptions *)&local_258,&local_1d8);
    puVar23 = local_378;
    local_3a0 = (undefined4)local_258;
    uStack_39c = local_258._4_4_;
    uStack_398 = uStack_250;
    uStack_394 = uStack_24c;
    uStack_390 = local_248;
    fStack_38c = fStack_244;
    uStack_388 = uStack_240;
    uStack_384 = uStack_23c;
    uStack_380 = local_238;
    local_378 = (undefined8 *)local_230._0_8_;
    puStack_370 = (undefined8 *)local_230._8_8_;
    local_368 = local_220;
    local_230 = (undefined1  [16])0x0;
    local_220 = (undefined8 *)0x0;
    if (puVar23 != (undefined8 *)0x0) {
      operator_delete(puVar23);
    }
    plVar27 = plStack_358;
    plVar24 = local_360;
    local_360 = local_218;
    plStack_358 = plStack_210;
    local_350 = local_208;
    local_218 = (long *)0x0;
    plStack_210 = (long *)0x0;
    local_208 = (long *)0x0;
    if (plVar24 != plVar27) {
      plVar29 = plVar24;
      do {
        plVar11 = (long *)*plVar29;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        plVar29 = plVar29 + 1;
      } while (plVar29 != plVar27);
    }
    if (plVar24 != (long *)0x0) {
      operator_delete(plVar24);
    }
    pbVar28 = pbStack_1e8;
    pbVar31 = pbStack_330;
    local_348 = CONCAT17(uStack_1f9,local_200);
    uStack_340 = CONCAT17(uStack_1f1,uStack_1f8);
    local_338 = local_1f0;
    pbStack_330 = pbStack_1e8;
    pbStack_1e8 = pbVar31;
    pbVar33 = pbVar31 + -0x10;
    if (pbVar33 == (byte *)&emptyString) {
LAB_00266b2e:
      plVar24 = local_218;
      plVar27 = plStack_210;
      if (local_218 != plStack_210) {
LAB_00266e29:
        do {
          plVar29 = (long *)*plVar24;
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar11 = plVar29 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)(*plVar29 + 8))();
            }
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != plVar27);
      }
    }
    else {
      LOCK();
      iVar25 = *(int *)pbVar33;
      *(int *)pbVar33 = *(int *)pbVar33 + -1;
      UNLOCK();
      if (iVar25 != 0) goto LAB_00266b2e;
      operator_delete__(pbVar33);
      plVar24 = local_218;
      plVar27 = plStack_210;
      if (local_218 != plStack_210) goto LAB_00266e29;
    }
    if (local_218 != (long *)0x0) {
      operator_delete(local_218);
    }
    if ((void *)local_230._0_8_ != (void *)0x0) {
      operator_delete((void *)local_230._0_8_);
    }
    local_168 = local_168 + -0x10;
    if (local_168 == (byte *)&emptyString) {
LAB_00266b88:
      plVar24 = local_198;
      if (local_198 != local_190) {
LAB_00266e89:
        do {
          plVar27 = (long *)*plVar24;
          if (plVar27 != (long *)0x0) {
            LOCK();
            plVar29 = plVar27 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)(*plVar27 + 8))();
            }
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != local_190);
      }
    }
    else {
      LOCK();
      iVar25 = *(int *)local_168;
      *(int *)local_168 = *(int *)local_168 + -1;
      UNLOCK();
      if (iVar25 != 0) goto LAB_00266b88;
      operator_delete__(local_168);
      plVar24 = local_198;
      if (local_198 != local_190) goto LAB_00266e89;
    }
    if (local_198 != (long *)0x0) {
      operator_delete(local_198);
    }
    if (local_1b0 != (undefined8 *)0x0) {
      operator_delete(local_1b0);
    }
  }
  lVar10 = *(long *)(pTVar36 + 0x330);
  local_2b8 = uStack_380;
  local_2d8 = CONCAT44(uStack_39c,local_3a0);
  uStack_2d0 = CONCAT44(uStack_394,uStack_398);
  local_2c8 = CONCAT44(fStack_38c,uStack_390);
  uStack_2c0 = CONCAT44(uStack_384,uStack_388);
  uVar34 = (long)puStack_370 - (long)local_378 >> 4;
  local_2b0 = (undefined8 *)0x0;
  puStack_2a8 = (undefined8 *)0x0;
  local_2a0 = (undefined8 *)0x0;
  if ((long)puStack_370 - (long)local_378 == 0) {
    local_2b0 = (undefined8 *)0x0;
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar34;
    if (SUB168(auVar16 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679d7 to 002679db has its CatchHandler @ 00267a5d */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00267180 to 00267187 has its CatchHandler @ 00267a5d */
    local_2b0 = operator_new(SUB168(auVar16 * ZEXT816(0x10),0));
  }
  local_2a0 = local_2b0 + uVar34 * 2;
  puStack_2a8 = local_2b0;
  if (local_378 != puStack_370) {
    puVar23 = local_378;
    do {
      uVar18 = puVar23[1];
      *puStack_2a8 = *puVar23;
      puStack_2a8[1] = uVar18;
      puVar23 = puVar23 + 2;
      puStack_2a8 = puStack_2a8 + 2;
    } while (puVar23 != puStack_370);
  }
  uVar34 = (long)plStack_358 - (long)local_360 >> 3;
  local_298 = (long *)0x0;
  plStack_290 = (long *)0x0;
  local_288 = (long *)0x0;
  if ((long)plStack_358 - (long)local_360 == 0) {
    local_298 = (long *)0x0;
  }
  else {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    if (SUB168(auVar17 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002679dc to 002679e0 has its CatchHandler @ 00267a44 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 0026721f to 00267226 has its CatchHandler @ 00267a44 */
    local_298 = operator_new(SUB168(auVar17 * ZEXT816(8),0));
  }
  local_288 = local_298 + uVar34;
  plStack_290 = local_298;
  for (plVar24 = local_360; plVar24 != plStack_358; plVar24 = plVar24 + 1) {
    lVar30 = *plVar24;
    *plStack_290 = lVar30;
    if (lVar30 != 0) {
      LOCK();
      *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
      UNLOCK();
    }
    plStack_290 = plStack_290 + 1;
  }
  local_280 = local_348;
  uStack_278 = uStack_340;
  local_270 = local_338;
  local_268 = pbStack_330;
  pbVar31 = pbStack_330 + -0x10;
  if (pbVar31 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar31 = *(int *)pbVar31 + 1;
    UNLOCK();
  }
  iVar25 = *(int *)(local_308 + 0x2a4);
  iVar20 = *(int *)(lVar10 + 0x98);
  local_2e0 = *(int *)(lVar10 + 0x9c);
  cVar3 = *(char *)(lVar10 + 0xa0);
  local_2e4 = *(float *)(lVar10 + 0xa4);
  cVar4 = *(char *)(lVar10 + 0xa8);
  local_2e8 = *(float *)(lVar10 + 0xac);
  cVar5 = *(char *)(lVar10 + 0xb0);
  local_2ec = *(float *)(lVar10 + 0xb4);
  cVar6 = *(char *)(lVar10 + 0xb8);
  local_308 = *(TextEditor **)(lVar10 + 0xc0);
  pvStack_300 = *(void **)(lVar10 + 200);
  *(undefined8 *)(lVar10 + 0xc0) = 0;
  *(undefined8 *)(lVar10 + 200) = 0;
  *(undefined8 *)(lVar10 + 0xd0) = 0;
  plStack_310 = *(long **)(lVar10 + 0xe0);
  local_318 = (undefined4)*(undefined8 *)(lVar10 + 0xd8);
  uStack_314 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0xd8) >> 0x20);
  *(undefined8 *)(lVar10 + 0xd8) = 0;
  *(undefined8 *)(lVar10 + 0xe0) = 0;
  *(undefined8 *)(lVar10 + 0xe8) = 0;
  local_2f0 = *(float *)(lVar10 + 0xf0);
  local_2f4 = *(float *)(lVar10 + 0xf4);
  local_2f8 = *(float *)(lVar10 + 0xf8);
  cVar7 = *(char *)(lVar10 + 0xfc);
  cVar8 = *(char *)(lVar10 + 0xfd);
  cVar9 = *(char *)(lVar10 + 0xfe);
  lVar30 = *(long *)(lVar10 + 0x100);
  pbVar28 = *(byte **)(lVar10 + 0x108);
  *(undefined1 **)(lVar10 + 0x108) = &DAT_0061ac58;
  *(undefined4 *)(lVar10 + 0xb8) = local_2b8;
  *(undefined8 *)(lVar10 + 0xa8) = local_2c8;
  *(undefined8 *)(lVar10 + 0xb0) = uStack_2c0;
  *(undefined8 *)(lVar10 + 0x98) = local_2d8;
  *(undefined8 *)(lVar10 + 0xa0) = uStack_2d0;
                    /* try { // try from 00267427 to 0026743f has its CatchHandler @ 00267a9e */
  std::vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>::operator=
            ((vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)
             (lVar10 + 0xc0),
             (vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)&local_2b0);
  std::vector<juce::Font,std::allocator<juce::Font>>::operator=
            ((vector<juce::Font,std::allocator<juce::Font>> *)(lVar10 + 0xd8),
             (vector<juce::Font,std::allocator<juce::Font>> *)&local_298);
  *(long *)(lVar10 + 0x100) = local_270;
  *(undefined8 *)(lVar10 + 0xf0) = local_280;
  *(undefined8 *)(lVar10 + 0xf8) = uStack_278;
  pbVar31 = local_268 + -0x10;
  if (pbVar31 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar31 = *(int *)pbVar31 + 1;
    UNLOCK();
  }
  LOCK();
  lVar2 = *(long *)(lVar10 + 0x108);
  *(long *)(lVar10 + 0x108) = (long)local_268;
  UNLOCK();
  piVar32 = (int *)(lVar2 + -0x10);
  local_2dc = iVar25;
  local_130 = lVar30;
  if (piVar32 == &emptyString) {
LAB_002674b9:
    plVar24 = plStack_310;
    uVar18 = local_2d8;
    plVar27 = local_298;
  }
  else {
    LOCK();
    iVar25 = *piVar32;
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_002674b9;
    operator_delete__(piVar32);
    plVar24 = plStack_310;
    uVar18 = local_2d8;
    plVar27 = local_298;
  }
  bVar37 = true;
  bVar19 = iVar20 == (int)local_2d8;
  plStack_310 = plVar24;
  local_2d8 = uVar18;
  local_298 = plVar27;
  if (bVar19) {
    if ((cVar3 == '\0') || ((char)uStack_2d0 == '\0')) {
      bVar37 = (char)uStack_2d0 != '\0';
      if ((cVar3 != '\0') == bVar37) goto LAB_00267507;
LAB_00267691:
      bVar37 = false;
    }
    else {
      local_2d8._4_4_ = (int)((ulong)uVar18 >> 0x20);
      bVar37 = local_2e0 != local_2d8._4_4_;
      if (bVar37) goto LAB_00267691;
LAB_00267507:
      if ((cVar4 != '\0') && ((char)local_2c8 != '\0')) {
        uStack_2d0._4_4_ = (float)((ulong)uStack_2d0 >> 0x20);
        bVar37 = NAN(uStack_2d0._4_4_);
        bVar19 = local_2e4 == uStack_2d0._4_4_;
        if ((bVar19) && (!NAN(local_2e4) && !bVar37)) goto LAB_00267564;
        goto LAB_00267691;
      }
      bVar37 = (char)local_2c8 != '\0';
      if ((cVar4 != '\0') != bVar37) goto LAB_00267691;
LAB_00267564:
      if ((cVar5 != '\0') && ((char)uStack_2c0 != '\0')) {
        local_2c8._4_4_ = (float)((ulong)local_2c8 >> 0x20);
        bVar37 = NAN(local_2c8._4_4_);
        bVar19 = local_2e8 == local_2c8._4_4_;
        if ((bVar19) && (!NAN(local_2e8) && !bVar37)) goto LAB_002675a9;
        goto LAB_00267691;
      }
      bVar37 = (char)uStack_2c0 != '\0';
      if ((cVar5 != '\0') != bVar37) goto LAB_00267691;
LAB_002675a9:
      if ((cVar6 != '\0') && ((char)local_2b8 != '\0')) {
        uStack_2c0._4_4_ = (float)((ulong)uStack_2c0 >> 0x20);
        bVar37 = NAN(uStack_2c0._4_4_);
        bVar19 = local_2ec == uStack_2c0._4_4_;
        if ((bVar19) && (!NAN(local_2ec) && !bVar37)) goto LAB_002675ee;
        goto LAB_00267691;
      }
      if ((cVar6 != '\0') != ((char)local_2b8 != '\0')) goto LAB_00267691;
LAB_002675ee:
      if ((long)pvStack_300 - (long)local_308 != (long)puStack_2a8 - (long)local_2b0)
      goto LAB_00267691;
      if (local_308 != pvStack_300) {
        bVar37 = false;
        lVar30 = 0;
        do {
          if ((*(long *)((long)local_308 + lVar30) != *(long *)((long)local_2b0 + lVar30)) ||
             (*(long *)((long)local_308 + lVar30 + 8) != *(long *)((long)local_2b0 + lVar30 + 8)))
          goto LAB_00267694;
          lVar2 = lVar30 + 0x10;
          lVar30 = lVar30 + 0x10;
        } while ((void *)((long)local_308 + lVar2) != pvStack_300);
      }
      plVar29 = (long *)CONCAT44(uStack_314,local_318);
      if ((long)plVar24 - (long)plVar29 != (long)plStack_290 - (long)plVar27) goto LAB_00267691;
      for (; plVar29 != plVar24; plVar29 = plVar29 + 1) {
                    /* try { // try from 002678f4 to 002678f8 has its CatchHandler @ 002679eb */
        if ((*plVar29 != *plVar27) &&
           (uVar34 = FontOptions::operator==
                               ((FontOptions *)(*plVar29 + 0x18),(undefined8 *)(*plVar27 + 0x18)),
           (char)uVar34 == '\0')) goto LAB_00267691;
        plVar27 = plVar27 + 1;
      }
      bVar37 = false;
      if ((local_2f0 == (float)local_280) && (!NAN(local_2f0) && !NAN((float)local_280))) {
        if ((local_2f4 == local_280._4_4_) && (!NAN(local_2f4) && !NAN(local_280._4_4_))) {
          if ((((local_2f8 == (float)uStack_278) && (!NAN(local_2f8) && !NAN((float)uStack_278))) &&
              (cVar7 == uStack_278._4_1_)) &&
             (((cVar8 == uStack_278._5_1_ && (cVar9 == uStack_278._6_1_)) &&
              (local_130 == local_270)))) {
            if (local_268 == pbVar28) {
              bVar37 = true;
            }
            else {
              uVar21 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 (pbVar28,local_268);
              bVar37 = uVar21 == 0;
            }
          }
        }
      }
    }
LAB_00267694:
    bVar37 = (bool)(bVar37 ^ 1);
  }
  pbVar28 = pbVar28 + -0x10;
  if (pbVar28 != (byte *)&emptyString) {
    LOCK();
    iVar25 = *(int *)pbVar28;
    *(int *)pbVar28 = *(int *)pbVar28 + -1;
    UNLOCK();
    if (iVar25 == 0) {
      operator_delete__(pbVar28);
    }
  }
  plVar27 = plStack_310;
  plVar24 = (long *)CONCAT44(uStack_314,local_318);
  if (plVar24 != plStack_310) {
    plVar29 = plVar24;
    do {
      plVar11 = (long *)*plVar29;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      plVar29 = plVar29 + 1;
    } while (plVar29 != plVar27);
  }
  if (plVar24 != (long *)0x0) {
    operator_delete(plVar24);
  }
  if (local_308 != (void *)0x0) {
    operator_delete(local_308);
  }
  if (bVar37) {
                    /* try { // try from 00267739 to 0026776a has its CatchHandler @ 00267a15 */
    TextEditorStorage::clearShapedTexts
              (*(long *)(lVar10 + 0x68),*(long *)(lVar10 + 0x70),*(long *)(lVar10 + 0x80));
  }
  iVar25 = *(int *)(lVar10 + 0x110);
  *(int *)(lVar10 + 0x110) = local_2dc;
  if (iVar25 != local_2dc) {
    TextEditorStorage::clearShapedTexts
              (*(long *)(lVar10 + 0x68),*(long *)(lVar10 + 0x70),*(long *)(lVar10 + 0x80));
  }
  pbVar31 = local_268 + -0x10;
  if (pbVar31 == (byte *)&emptyString) {
LAB_0026778d:
    plVar24 = local_298;
    plVar27 = plStack_290;
    if (local_298 != plStack_290) {
LAB_00267859:
      do {
        plVar29 = (long *)*plVar24;
        if (plVar29 != (long *)0x0) {
          LOCK();
          plVar11 = plVar29 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar29 + 8))();
          }
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar27);
    }
  }
  else {
    LOCK();
    iVar25 = *(int *)pbVar31;
    *(int *)pbVar31 = *(int *)pbVar31 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_0026778d;
    operator_delete__(pbVar31);
    plVar24 = local_298;
    plVar27 = plStack_290;
    if (local_298 != plStack_290) goto LAB_00267859;
  }
  if (local_298 != (long *)0x0) {
    operator_delete(local_298);
  }
  if (local_2b0 != (undefined8 *)0x0) {
    operator_delete(local_2b0);
  }
  pbVar31 = pbStack_330 + -0x10;
  if (pbVar31 == (byte *)&emptyString) {
LAB_002677e4:
    plVar24 = local_360;
    plVar27 = plStack_358;
    if (local_360 == plStack_358) goto joined_r0x002678c8;
  }
  else {
    LOCK();
    iVar25 = *(int *)pbVar31;
    *(int *)pbVar31 = *(int *)pbVar31 + -1;
    UNLOCK();
    if (iVar25 != 0) goto LAB_002677e4;
    operator_delete__(pbVar31);
    plVar24 = local_360;
    plVar27 = plStack_358;
    if (local_360 == plStack_358) goto joined_r0x002678c8;
  }
  do {
    plVar29 = (long *)*plVar24;
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar11 = plVar29 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)(*plVar29 + 8))();
      }
    }
    plVar24 = plVar24 + 1;
  } while (plVar24 != plVar27);
joined_r0x002678c8:
  if (local_360 != (long *)0x0) {
    operator_delete(local_360);
  }
  if (local_378 != (undefined8 *)0x0) {
    operator_delete(local_378);
  }
  return;
}


