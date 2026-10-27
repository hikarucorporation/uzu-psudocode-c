// Function : createFittedText
// Namespace: juce
// Entry    : 00328300
// Prototype: undefined createFittedText(float param_1, float param_2, undefined8 param_3_00, juce * this, undefined8 param_5, String * param_6, uint param_7, uint * param_8, float * param_9)
// Body     : 00328300 - 0032abe3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::createFittedText(juce::Font const&, juce::String const&, float, float, juce::Justification,
   int, float, juce::detail::ShapedTextOptions) */

void __thiscall
juce::createFittedText
          (float param_1,float param_2,undefined8 param_3_00,juce *this,undefined8 param_5,
          String *param_6,uint param_7,uint *param_8,float *param_9)

{
  SharedFontInternal *pSVar1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  byte bVar5;
  long *plVar6;
  undefined *puVar7;
  Candidate *pCVar8;
  float *pfVar9;
  bool bVar10;
  int *piVar11;
  size_t sVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *extraout_RDX;
  float *extraout_RDX_00;
  float *extraout_RDX_01;
  float *extraout_RDX_02;
  float *extraout_RDX_03;
  float *extraout_RDX_04;
  float *extraout_RDX_05;
  float *extraout_RDX_06;
  float *extraout_RDX_07;
  float *extraout_RDX_08;
  float *extraout_RDX_09;
  float *extraout_RDX_10;
  float *extraout_RDX_11;
  float *extraout_RDX_12;
  float *extraout_RDX_13;
  float *extraout_RDX_14;
  float *extraout_RDX_15;
  float *extraout_RDX_16;
  float *extraout_RDX_17;
  float *extraout_RDX_18;
  float *extraout_RDX_19;
  float *extraout_RDX_20;
  float *extraout_RDX_21;
  float *extraout_RDX_22;
  float *extraout_RDX_23;
  float *extraout_RDX_24;
  float *extraout_RDX_25;
  float *extraout_RDX_26;
  float *extraout_RDX_27;
  float *extraout_RDX_28;
  float *pfVar15;
  float *extraout_RDX_29;
  float *extraout_RDX_30;
  float *extraout_RDX_31;
  long lVar16;
  float *extraout_RDX_32;
  int iVar17;
  long *plVar18;
  SharedFontInternal *pSVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  Candidate *pCVar30;
  uint *puVar31;
  float *pfVar32;
  SharedFontInternal *pSVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float local_58c;
  juce *local_588;
  uint local_580 [2];
  int local_578;
  float local_574;
  float *local_570;
  undefined1 local_568 [16];
  float *local_558;
  SharedFontInternal *local_550;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_548;
  int local_53c;
  undefined1 local_538 [16];
  float local_51c;
  float *local_518;
  undefined4 *local_510;
  float *local_508;
  float *local_500;
  float *local_4f8;
  ulong local_4f0;
  float local_4e8 [2];
  long local_4e0;
  Candidate *local_4d8;
  void *local_4c0;
  long *local_4a8;
  long *local_4a0;
  long local_478;
  float **local_470;
  float *local_468;
  ShapedText *local_460;
  float *local_458;
  float *local_450;
  int *local_448;
  uint *local_440;
  long *local_430;
  long *local_428;
  long local_400;
  long local_3f8;
  Candidate *pCStack_3f0;
  void *local_3d0;
  long *local_3b8;
  long *local_3b0;
  long local_388;
  undefined8 local_378 [5];
  void *local_350;
  long *local_338;
  long *local_330;
  long local_308;
  SharedFontInternal *local_300 [5];
  void *local_2d8;
  long *local_2c0;
  long *local_2b8;
  long local_290;
  undefined8 local_288 [5];
  void *local_260;
  long *local_248;
  long *local_240;
  long local_218;
  undefined8 local_210 [5];
  void *local_1e8;
  long *local_1d0;
  long *local_1c8;
  long local_1a0;
  undefined8 local_198 [5];
  void *local_170;
  long *local_158;
  long *local_150;
  long local_128;
  undefined8 local_120 [5];
  void *local_f8;
  long *local_e0;
  long *local_d8;
  long local_b0;
  undefined1 local_a8 [40];
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  fVar35 = (float)param_3_00;
  local_538._0_8_ = param_5;
  local_558 = (float *)CONCAT44(local_558._4_4_,param_1);
  local_580[0] = param_7;
  if ((param_7 & 0x18) == 0) {
    local_580[0] = param_7 & 0x47 | 0x20;
  }
  fVar34 = (float)(_DAT_005d91c0 & (uint)fVar35);
  local_568._8_4_ = in_XMM2_Dc;
  local_568._0_8_ = param_3_00;
  local_568._12_4_ = in_XMM2_Dd;
  if (fVar34 == DAT_005d94c8) {
    if ((fVar35 == 0.0) && (!NAN(fVar35))) goto LAB_00328389;
  }
  else if ((fVar34 <= DAT_005d94cc) || (fVar34 <= DAT_005d94d0 * fVar34)) {
LAB_00328389:
    local_568 = ZEXT416((uint)s_333_power__f_00652630._0_4_);
  }
  puVar31 = param_8;
  pfVar27 = param_9;
  local_58c = param_1;
  local_574 = param_2;
  bVar10 = String::containsAnyOf(param_6,&DAT_005e50db);
  if (bVar10) {
    local_4f0 = *(ulong *)param_6;
    piVar11 = (int *)(local_4f0 - 0x10);
    fVar35 = local_558._0_4_;
    if (piVar11 != &emptyString) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
      fVar35 = local_58c;
    }
                    /* try { // try from 003283d8 to 003283e7 has its CatchHandler @ 0032b04b */
    detail::ShapedTextOptions::withWordWrapWidth(fVar35,local_378,(undefined8 *)param_9);
                    /* try { // try from 003283ee to 00328402 has its CatchHandler @ 0032b010 */
    detail::ShapedTextOptions::withHeight(local_574,&local_3f8,local_378);
                    /* try { // try from 00328407 to 0032841b has its CatchHandler @ 0032affe */
    detail::ShapedTextOptions::withJustification(local_4e8,&local_3f8,local_580[0]);
    plVar20 = *(long **)local_538._0_8_;
    if (plVar20 != (long *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 0032842f to 00328446 has its CatchHandler @ 0032afd6 */
    detail::ShapedTextOptions::withFont(&local_470,(undefined8 *)local_4e8,plVar20);
                    /* try { // try from 00328447 to 0032845d has its CatchHandler @ 0032afc4 */
    detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(local_120,&local_470,0);
                    /* try { // try from 0032845e to 00328475 has its CatchHandler @ 0032afb2 */
    detail::ShapedText::ShapedText((ShapedText *)this,&local_4f0,(undefined1 (*) [16])local_120);
    piVar11 = (int *)(local_b0 + -0x10);
    if (piVar11 == &emptyString) {
LAB_00328498:
      plVar18 = local_e0;
      if (local_e0 != local_d8) {
LAB_00328839:
        do {
          plVar22 = (long *)*plVar18;
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar6 = plVar22 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != local_d8);
      }
    }
    else {
      LOCK();
      iVar17 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar17 != 0) goto LAB_00328498;
      operator_delete__(piVar11);
      plVar18 = local_e0;
      if (local_e0 != local_d8) goto LAB_00328839;
    }
    if (local_e0 != (long *)0x0) {
      operator_delete(local_e0);
    }
    if (local_f8 != (void *)0x0) {
      operator_delete(local_f8);
    }
    piVar11 = (int *)(local_400 + -0x10);
    if (piVar11 == &emptyString) {
LAB_003284f2:
      plVar18 = local_430;
      if (local_430 != local_428) {
LAB_00328899:
        do {
          plVar22 = (long *)*plVar18;
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar6 = plVar22 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != local_428);
      }
    }
    else {
      LOCK();
      iVar17 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar17 != 0) goto LAB_003284f2;
      operator_delete__(piVar11);
      plVar18 = local_430;
      if (local_430 != local_428) goto LAB_00328899;
    }
    if (local_430 != (long *)0x0) {
      operator_delete(local_430);
    }
    if (local_448 != (int *)0x0) {
      operator_delete(local_448);
    }
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
    piVar11 = (int *)(local_478 + -0x10);
    if (piVar11 == &emptyString) {
LAB_00328562:
      plVar20 = local_4a8;
      if (local_4a8 != local_4a0) {
LAB_003288f9:
        do {
          plVar18 = (long *)*plVar20;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar22 = plVar18 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
          plVar20 = plVar20 + 1;
        } while (plVar20 != local_4a0);
      }
    }
    else {
      LOCK();
      iVar17 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar17 != 0) goto LAB_00328562;
      operator_delete__(piVar11);
      plVar20 = local_4a8;
      if (local_4a8 != local_4a0) goto LAB_003288f9;
    }
    if (local_4a8 != (long *)0x0) {
      operator_delete(local_4a8);
    }
    if (local_4c0 != (void *)0x0) {
      operator_delete(local_4c0);
    }
    piVar11 = (int *)(local_388 + -0x10);
    if (piVar11 == &emptyString) {
LAB_003285bc:
      plVar20 = local_3b8;
      if (local_3b8 != local_3b0) {
LAB_00328959:
        do {
          plVar18 = (long *)*plVar20;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar22 = plVar18 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
          plVar20 = plVar20 + 1;
        } while (plVar20 != local_3b0);
      }
    }
    else {
      LOCK();
      iVar17 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar17 != 0) goto LAB_003285bc;
      operator_delete__(piVar11);
      plVar20 = local_3b8;
      if (local_3b8 != local_3b0) goto LAB_00328959;
    }
    if (local_3b8 != (long *)0x0) {
      operator_delete(local_3b8);
    }
    if (local_3d0 != (void *)0x0) {
      operator_delete(local_3d0);
    }
    piVar11 = (int *)(local_308 + -0x10);
    if (piVar11 == &emptyString) {
LAB_00328616:
      plVar20 = local_338;
      if (local_338 != local_330) {
LAB_003289b9:
        do {
          plVar18 = (long *)*plVar20;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar22 = plVar18 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
          plVar20 = plVar20 + 1;
        } while (plVar20 != local_330);
      }
    }
    else {
      LOCK();
      iVar17 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar17 != 0) goto LAB_00328616;
      operator_delete__(piVar11);
      plVar20 = local_338;
      if (local_338 != local_330) goto LAB_003289b9;
    }
    if (local_338 != (long *)0x0) {
      operator_delete(local_338);
    }
    if (local_350 != (void *)0x0) {
      operator_delete(local_350);
    }
    pfVar27 = (float *)(local_4f0 - 0x10);
    if (pfVar27 == (float *)&emptyString) {
      return;
    }
    goto LAB_003292ef;
  }
  local_53c = (int)param_8;
  pfVar13 = *(float **)param_6;
  pfVar15 = pfVar13 + -4;
  if (pfVar15 != (float *)&emptyString) {
    LOCK();
    *pfVar15 = (float)((int)*pfVar15 + 1);
    UNLOCK();
  }
  bVar5 = *(byte *)pfVar13;
  local_570 = pfVar13;
  local_558 = param_9;
  if (bVar5 != 0) {
    local_588 = this;
    sVar12 = strlen((char *)pfVar13);
    pfVar27 = (float *)((long)pfVar13 + sVar12);
    pfVar15 = pfVar13;
    if (sVar12 != 0) {
      while( true ) {
        uVar24 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          if ((bVar5 & 0x40) == 0) {
            uVar24 = uVar24 & 0x7f;
          }
          else {
            uVar25 = uVar24 & 0x10 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar25 = 0x3f;
            }
            uVar24 = uVar25 & uVar24;
            if ((*(byte *)((long)pfVar15 + 1) & 0xc0) == 0x80) {
              uVar24 = *(byte *)((long)pfVar15 + 1) & 0x3f | uVar24 << 6;
              if (((((bVar5 & 0x20) != 0) && ((*(byte *)((long)pfVar15 + 2) & 0xffffffc0) == 0x80))
                  && (uVar24 = *(byte *)((long)pfVar15 + 2) & 0x3f | uVar24 << 6,
                     (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0)) &&
                 ((*(byte *)((long)pfVar15 + 3) & 0xffffffc0) == 0x80)) {
                uVar24 = *(byte *)((long)pfVar15 + 3) & 0x3f | uVar24 << 6;
              }
              if (0x10ffff < uVar24) goto LAB_003289e9;
            }
          }
        }
        if (PrimaryBidiTypeData
            [(ulong)(uVar24 & 0xf) +
             (ulong)*(ushort *)
                     (MainBidiTypeIndexes +
                     ((ulong)(uVar24 >> 4 & 0x3f) +
                     (ulong)*(ushort *)(BranchBidiTypeIndexes + (ulong)(uVar24 >> 10) * 2)) * 2)] !=
            '\v') goto LAB_003289e9;
        pfVar32 = (float *)((long)pfVar15 + 1);
        if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
          if ((bVar5 & 0x20) == 0) {
            pfVar32 = (float *)((long)pfVar15 + 2);
          }
          else {
            pfVar32 = (float *)((long)pfVar15 + (4 - (ulong)((bVar5 & 0x10) == 0)));
          }
        }
        if (pfVar32 == pfVar27) break;
        bVar5 = *(byte *)pfVar32;
        pfVar15 = pfVar32;
      }
      pfVar15 = pfVar27;
    }
LAB_003289e9:
    puVar31 = (uint *)0x3f;
    pfVar32 = pfVar27;
    do {
      pfVar28 = pfVar32;
      if (pfVar28 <= pfVar15) goto LAB_00328bc6;
      pfVar32 = (float *)((long)pfVar28 + -1);
      bVar5 = *(byte *)((long)pfVar28 + -1);
      pfVar9 = pfVar28;
      if ((bVar5 & 0xc0) == 0x80) {
        bVar5 = *(byte *)((long)pfVar28 + -2);
        pfVar9 = pfVar32;
        pfVar32 = (float *)((long)pfVar28 + -2);
        if ((bVar5 & 0xc0) == 0x80) {
          pfVar32 = (float *)((long)pfVar28 + -3);
          bVar5 = *(byte *)((long)pfVar28 + -3);
          pfVar9 = (float *)((long)pfVar28 + -2);
          if ((bVar5 & 0xc0) == 0x80) {
            bVar5 = *(byte *)(pfVar28 + -1);
            pfVar9 = pfVar32;
            pfVar32 = pfVar28 + -1;
          }
        }
      }
      pfVar28 = pfVar9;
      uVar25 = (uint)bVar5;
      uVar24 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        if ((bVar5 & 0x40) == 0) {
          uVar24 = uVar25 & 0x7f;
        }
        else {
          uVar24 = uVar25 & 0x10 ^ 0x1f;
          if ((bVar5 & 0x20) == 0) {
            uVar24 = 0x3f;
          }
          uVar24 = uVar24 & uVar25;
          if ((*(byte *)((long)pfVar32 + 1) & 0xffffffc0) == 0x80) {
            uVar24 = *(byte *)((long)pfVar32 + 1) & 0x3f | uVar24 << 6;
            if ((((bVar5 & 0x20) != 0) && ((*(byte *)((long)pfVar32 + 2) & 0xc0) == 0x80)) &&
               ((uVar24 = *(byte *)((long)pfVar32 + 2) & 0x3f | uVar24 << 6,
                (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0 &&
                ((*(byte *)((long)pfVar32 + 3) & 0xffffffc0) == 0x80)))) {
              uVar24 = *(byte *)((long)pfVar32 + 3) & 0x3f | uVar24 << 6;
            }
            if (0x10ffff < uVar24) break;
          }
        }
      }
    } while (PrimaryBidiTypeData
             [(ulong)(uVar24 & 0xf) +
              (ulong)*(ushort *)
                      (MainBidiTypeIndexes +
                      ((ulong)(uVar24 >> 4 & 0x3f) +
                      (ulong)*(ushort *)(BranchBidiTypeIndexes + (ulong)(uVar24 >> 10) * 2)) * 2)]
             == '\v');
    if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
      if ((bVar5 & 0x20) == 0) {
        pfVar28 = (float *)((long)pfVar28 + 1);
      }
      else {
        pfVar28 = (float *)((long)pfVar28 + (3 - (ulong)((bVar5 & 0x10) == 0)));
      }
    }
LAB_00328bc6:
    if (pfVar15 == pfVar13) {
      param_9 = local_558;
      this = local_588;
      if (pfVar28 == pfVar27) goto LAB_00328c77;
    }
    if (*(char *)pfVar15 == '\0') {
      pfVar32 = (float *)&DAT_0061ac58;
    }
    else {
      sVar12 = (long)pfVar28 - (long)pfVar15;
      uVar29 = sVar12 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00328c0c to 00328c10 has its CatchHandler @ 0032adb1 */
      puVar14 = operator_new__(uVar29 + 0x17);
      LOCK();
      *puVar14 = 0;
      UNLOCK();
      *(ulong *)(puVar14 + 2) = uVar29;
      pfVar32 = (float *)(puVar14 + 4);
      memcpy(pfVar32,pfVar15,sVar12);
      *(undefined1 *)((long)puVar14 + sVar12 + 0x10) = 0;
    }
    param_9 = local_558;
    this = local_588;
    pfVar13 = pfVar13 + -4;
    local_570 = pfVar32;
    if (pfVar13 != (float *)&emptyString) {
      LOCK();
      fVar35 = *pfVar13;
      *pfVar13 = (float)((int)*pfVar13 + -1);
      UNLOCK();
      if (fVar35 == 0.0) {
        operator_delete__(pfVar13);
      }
    }
  }
LAB_00328c77:
  local_4f8 = local_570;
  pfVar15 = local_570 + -4;
  if (pfVar15 != (float *)&emptyString) {
    LOCK();
    *pfVar15 = (float)((int)*pfVar15 + 1);
    UNLOCK();
  }
  plVar20 = *(long **)local_538._0_8_;
  if (plVar20 != (long *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00328ca4 to 00328cb6 has its CatchHandler @ 0032af4d */
  detail::ShapedTextOptions::withFont(local_300,(undefined8 *)param_9,plVar20);
                    /* try { // try from 00328cbd to 00328cd1 has its CatchHandler @ 0032af36 */
  detail::ShapedTextOptions::withWordWrapWidth(local_58c,local_378,local_300);
                    /* try { // try from 00328cd8 to 00328cec has its CatchHandler @ 0032af01 */
  detail::ShapedTextOptions::withHeight(local_574,&local_3f8,local_378);
                    /* try { // try from 00328ced to 00328d06 has its CatchHandler @ 0032aeef */
  detail::ShapedTextOptions::withMaxNumLines((undefined8 *)local_4e8,&local_3f8,1);
                    /* try { // try from 00328d0b to 00328d1f has its CatchHandler @ 0032aedd */
  detail::ShapedTextOptions::withJustification
            ((undefined4 *)&local_470,(undefined8 *)local_4e8,local_580[0]);
                    /* try { // try from 00328d20 to 00328d36 has its CatchHandler @ 0032aecb */
  detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(local_198,&local_470,0);
                    /* try { // try from 00328d37 to 00328d53 has its CatchHandler @ 0032aeb9 */
  detail::ShapedText::ShapedText
            ((ShapedText *)&local_550,(ulong *)&local_4f8,(undefined1 (*) [16])local_198);
  piVar11 = (int *)(local_128 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328d76:
    pfVar15 = extraout_RDX;
    plVar18 = local_158;
    if (local_158 != local_150) {
LAB_003290a9:
      do {
        plVar22 = (long *)*plVar18;
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar6 = plVar22 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar22 + 8))();
            pfVar15 = extraout_RDX_14;
          }
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != local_150);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328d76;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_13;
    plVar18 = local_158;
    if (local_158 != local_150) goto LAB_003290a9;
  }
  if (local_158 != (long *)0x0) {
    operator_delete(local_158);
    pfVar15 = extraout_RDX_00;
  }
  if (local_170 != (void *)0x0) {
    operator_delete(local_170);
    pfVar15 = extraout_RDX_01;
  }
  piVar11 = (int *)(local_400 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328dd0:
    plVar18 = local_428;
    plVar22 = local_430;
    if (local_430 != local_428) {
LAB_00329109:
      do {
        plVar6 = (long *)*plVar22;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))();
            pfVar15 = extraout_RDX_16;
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar18);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328dd0;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_15;
    plVar18 = local_428;
    plVar22 = local_430;
    if (local_430 != local_428) goto LAB_00329109;
  }
  if (local_430 != (long *)0x0) {
    operator_delete(local_430);
    pfVar15 = extraout_RDX_02;
  }
  if (local_448 != (int *)0x0) {
    operator_delete(local_448);
    pfVar15 = extraout_RDX_03;
  }
  piVar11 = (int *)(local_478 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328e2a:
    plVar18 = local_4a0;
    plVar22 = local_4a8;
    if (local_4a8 != local_4a0) {
LAB_00329169:
      do {
        plVar6 = (long *)*plVar22;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))();
            pfVar15 = extraout_RDX_18;
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar18);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328e2a;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_17;
    plVar18 = local_4a0;
    plVar22 = local_4a8;
    if (local_4a8 != local_4a0) goto LAB_00329169;
  }
  if (local_4a8 != (long *)0x0) {
    operator_delete(local_4a8);
    pfVar15 = extraout_RDX_04;
  }
  if (local_4c0 != (void *)0x0) {
    operator_delete(local_4c0);
    pfVar15 = extraout_RDX_05;
  }
  piVar11 = (int *)(local_388 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328e84:
    plVar18 = local_3b0;
    plVar22 = local_3b8;
    if (local_3b8 != local_3b0) {
LAB_003291c9:
      do {
        plVar6 = (long *)*plVar22;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))();
            pfVar15 = extraout_RDX_20;
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar18);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328e84;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_19;
    plVar18 = local_3b0;
    plVar22 = local_3b8;
    if (local_3b8 != local_3b0) goto LAB_003291c9;
  }
  if (local_3b8 != (long *)0x0) {
    operator_delete(local_3b8);
    pfVar15 = extraout_RDX_06;
  }
  if (local_3d0 != (void *)0x0) {
    operator_delete(local_3d0);
    pfVar15 = extraout_RDX_07;
  }
  piVar11 = (int *)(local_308 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328ede:
    plVar18 = local_330;
    plVar22 = local_338;
    if (local_338 != local_330) {
LAB_00329229:
      do {
        plVar6 = (long *)*plVar22;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))();
            pfVar15 = extraout_RDX_22;
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar18);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328ede;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_21;
    plVar18 = local_330;
    plVar22 = local_338;
    if (local_338 != local_330) goto LAB_00329229;
  }
  if (local_338 != (long *)0x0) {
    operator_delete(local_338);
    pfVar15 = extraout_RDX_08;
  }
  if (local_350 != (void *)0x0) {
    operator_delete(local_350);
    pfVar15 = extraout_RDX_09;
  }
  piVar11 = (int *)(local_290 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00328f38:
    plVar18 = local_2b8;
    plVar22 = local_2c0;
    if (local_2c0 != local_2b8) {
LAB_00329289:
      do {
        plVar6 = (long *)*plVar22;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))();
            pfVar15 = extraout_RDX_24;
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar18);
    }
  }
  else {
    LOCK();
    iVar17 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar17 != 0) goto LAB_00328f38;
    operator_delete__(piVar11);
    pfVar15 = extraout_RDX_23;
    plVar18 = local_2b8;
    plVar22 = local_2c0;
    if (local_2c0 != local_2b8) goto LAB_00329289;
  }
  if (local_2c0 != (long *)0x0) {
    operator_delete(local_2c0);
    pfVar15 = extraout_RDX_10;
  }
  if (local_2d8 != (void *)0x0) {
    operator_delete(local_2d8);
    pfVar15 = extraout_RDX_11;
  }
  pfVar13 = local_558;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar18 = plVar20 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)(*plVar20 + 8))(plVar20);
      pfVar15 = extraout_RDX_12;
    }
  }
  pfVar32 = local_4f8 + -4;
  if (pfVar32 == (float *)&emptyString) {
LAB_00328fad:
    pfVar32 = *(float **)(local_550 + 0x2b0);
    if (*(float **)(local_550 + 0x2b8) != pfVar32) {
LAB_00328fc6:
      fVar35 = *pfVar32;
      if (fVar35 <= local_58c) goto LAB_003292d5;
      if (local_58c <= (float)local_568._0_4_ * fVar35) {
        if (local_548 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar29 = *(ulong *)(local_548 + 8);
          if (uVar29 == 0x100000001) {
            *(undefined8 *)(local_548 + 8) = 0;
            (**(code **)(*(long *)local_548 + 0x10))(local_548);
            (**(code **)(*(long *)local_548 + 0x18))(local_548);
            pfVar15 = extraout_RDX_26;
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var4 = local_548 + 8;
              uVar29 = (ulong)*(uint *)p_Var4;
              *(uint *)p_Var4 = *(uint *)p_Var4 - 1;
              UNLOCK();
            }
            else {
              *(int *)(local_548 + 8) = (int)uVar29 + -1;
            }
            if ((int)uVar29 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_548)
              ;
              pfVar15 = extraout_RDX_32;
            }
          }
        }
        iVar17 = local_53c;
        pSVar19 = *(SharedFontInternal **)local_538._0_8_;
        local_568._0_4_ = (float)local_568._0_4_ * *(float *)(pSVar19 + 0x70);
        if (1 < local_53c) {
          iVar21 = 0;
          pfVar13 = local_570;
          do {
            if (*(char *)pfVar13 < '\0') {
              do {
                fVar35 = *pfVar13;
                pfVar13 = (float *)((long)pfVar13 + 1);
                pfVar32 = pfVar13;
              } while (((uint)fVar35 & 0xc000) == 0x8000);
            }
            else {
              pfVar32 = (float *)((long)pfVar13 + 1);
              if (*(char *)pfVar13 == '\0') goto LAB_00329872;
            }
            iVar21 = iVar21 + 1;
            pfVar13 = pfVar32;
          } while( true );
        }
        local_508 = local_570;
        pfVar27 = local_570 + -4;
        if (pfVar27 != (float *)&emptyString) {
          LOCK();
          *pfVar27 = (float)((int)*pfVar27 + 1);
          UNLOCK();
          pSVar19 = *(SharedFontInternal **)local_538._0_8_;
        }
        LOCK();
        *(int *)(pSVar19 + 8) = *(int *)(pSVar19 + 8) + 1;
        UNLOCK();
        if (*(int *)(pSVar19 + 8) < 2) {
          pSVar33 = pSVar19;
        }
        else {
                    /* try { // try from 003297ff to 0032980b has its CatchHandler @ 0032abf6 */
          Font::SharedFontInternal::copy(&local_550,(long)pSVar19);
          pSVar33 = local_550;
          LOCK();
          pSVar1 = pSVar19 + 8;
          *(int *)pSVar1 = *(int *)pSVar1 + -1;
          UNLOCK();
          local_550 = pSVar19;
          if (*(int *)pSVar1 == 0) {
            (**(code **)(*(long *)pSVar19 + 8))(pSVar19);
          }
        }
                    /* try { // try from 0032a11d to 0032a129 has its CatchHandler @ 0032acd6 */
        Font::SharedFontInternal::setHorizontalScale(local_568._0_4_,pSVar33);
        pthread_mutex_lock((pthread_mutex_t *)(pSVar33 + 0x80));
        plVar20 = *(long **)(pSVar33 + 0x10);
        *(undefined8 *)(pSVar33 + 0x10) = 0;
        if (plVar20 != (long *)0x0) {
          LOCK();
          plVar18 = plVar20 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        pthread_mutex_unlock((pthread_mutex_t *)(pSVar33 + 0x80));
                    /* try { // try from 0032a15f to 0032a171 has its CatchHandler @ 0032acd1 */
        detail::ShapedTextOptions::withFont(local_300,(undefined8 *)pfVar13,(long *)pSVar33);
                    /* try { // try from 0032a178 to 0032a18c has its CatchHandler @ 0032accc */
        detail::ShapedTextOptions::withWordWrapWidth(local_58c,local_378,local_300);
                    /* try { // try from 0032a193 to 0032a1a7 has its CatchHandler @ 0032acc7 */
        detail::ShapedTextOptions::withHeight(local_574,&local_3f8,local_378);
                    /* try { // try from 0032a1ac to 0032a1c0 has its CatchHandler @ 0032acc2 */
        detail::ShapedTextOptions::withJustification(local_4e8,&local_3f8,local_580[0]);
                    /* try { // try from 0032a1c1 to 0032a1da has its CatchHandler @ 0032ac59 */
        detail::ShapedTextOptions::withMaxNumLines(&local_470,(undefined8 *)local_4e8,1);
                    /* try { // try from 0032a1db to 0032a1e4 has its CatchHandler @ 0032ac47 */
        puVar14 = operator_new__(0x1b);
        LOCK();
        *puVar14 = 0;
        UNLOCK();
        *(undefined8 *)(puVar14 + 2) = 4;
        local_510 = puVar14 + 4;
        puVar14[4] = 0xa680e2;
                    /* try { // try from 0032a207 to 0032a223 has its CatchHandler @ 0032ac18 */
        detail::ShapedTextOptions::withEllipsis(local_288,&local_470,(long *)&local_510);
                    /* try { // try from 0032a224 to 0032a23b has its CatchHandler @ 0032ac06 */
        detail::ShapedText::ShapedText
                  ((ShapedText *)this,(ulong *)&local_508,(undefined1 (*) [16])local_288);
        piVar11 = (int *)(local_218 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_248;
        if (local_248 != local_240) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_240);
        }
        if (local_248 != (long *)0x0) {
          operator_delete(local_248);
        }
        if (local_260 != (void *)0x0) {
          operator_delete(local_260);
        }
        piVar11 = local_510 + -4;
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        piVar11 = (int *)(local_400 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_430;
        if (local_430 != local_428) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_428);
        }
        if (local_430 != (long *)0x0) {
          operator_delete(local_430);
        }
        if (local_448 != (int *)0x0) {
          operator_delete(local_448);
        }
        piVar11 = (int *)(local_478 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_4a8;
        if (local_4a8 != local_4a0) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_4a0);
        }
        if (local_4a8 != (long *)0x0) {
          operator_delete(local_4a8);
        }
        if (local_4c0 != (void *)0x0) {
          operator_delete(local_4c0);
        }
        piVar11 = (int *)(local_388 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_3b8;
        if (local_3b8 != local_3b0) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_3b0);
        }
        if (local_3b8 != (long *)0x0) {
          operator_delete(local_3b8);
        }
        if (local_3d0 != (void *)0x0) {
          operator_delete(local_3d0);
        }
        piVar11 = (int *)(local_308 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_338;
        if (local_338 != local_330) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_330);
        }
        if (local_338 != (long *)0x0) {
          operator_delete(local_338);
        }
        if (local_350 != (void *)0x0) {
          operator_delete(local_350);
        }
        piVar11 = (int *)(local_290 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_2c0;
        if (local_2c0 != local_2b8) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_2b8);
        }
        if (local_2c0 != (long *)0x0) {
          operator_delete(local_2c0);
        }
        if (local_2d8 != (void *)0x0) {
          operator_delete(local_2d8);
        }
        LOCK();
        pSVar19 = pSVar33 + 8;
        *(int *)pSVar19 = *(int *)pSVar19 + -1;
        UNLOCK();
        if (*(int *)pSVar19 == 0) {
          (**(code **)(*(long *)pSVar33 + 8))(pSVar33);
        }
        pfVar27 = local_508 + -4;
        if (pfVar27 != (float *)&emptyString) {
          LOCK();
          fVar35 = *pfVar27;
          *pfVar27 = (float)((int)*pfVar27 + -1);
          UNLOCK();
          if (fVar35 == 0.0) {
            operator_delete__(pfVar27);
          }
        }
      }
      else {
        fVar35 = fVar35 + DAT_00652618;
        local_500 = local_570;
        pfVar27 = local_570 + -4;
        if (pfVar27 != (float *)&emptyString) {
          LOCK();
          *pfVar27 = (float)((int)*pfVar27 + 1);
          UNLOCK();
        }
        pSVar19 = *(SharedFontInternal **)local_538._0_8_;
        local_568._0_4_ = (local_58c / fVar35) * *(float *)(pSVar19 + 0x70);
        LOCK();
        *(int *)(pSVar19 + 8) = *(int *)(pSVar19 + 8) + 1;
        UNLOCK();
        if (*(int *)(pSVar19 + 8) < 2) {
          pSVar33 = pSVar19;
        }
        else {
                    /* try { // try from 00329041 to 00329050 has its CatchHandler @ 0032ace0 */
          Font::SharedFontInternal::copy(local_300,(long)pSVar19);
          pSVar33 = local_300[0];
          LOCK();
          pSVar1 = pSVar19 + 8;
          *(int *)pSVar1 = *(int *)pSVar1 + -1;
          UNLOCK();
          local_300[0] = pSVar19;
          if (*(int *)pSVar1 == 0) {
            (**(code **)(*(long *)pSVar19 + 8))(pSVar19);
          }
        }
                    /* try { // try from 0032935a to 00329367 has its CatchHandler @ 0032ad8f */
        Font::SharedFontInternal::setHorizontalScale(local_568._0_4_,pSVar33);
        pthread_mutex_lock((pthread_mutex_t *)(pSVar33 + 0x80));
        plVar20 = *(long **)(pSVar33 + 0x10);
        *(undefined8 *)(pSVar33 + 0x10) = 0;
        if (plVar20 != (long *)0x0) {
          LOCK();
          plVar18 = plVar20 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        pthread_mutex_unlock((pthread_mutex_t *)(pSVar33 + 0x80));
                    /* try { // try from 0032939d to 003293af has its CatchHandler @ 0032ad8a */
        detail::ShapedTextOptions::withFont(local_378,(undefined8 *)pfVar13,(long *)pSVar33);
                    /* try { // try from 003293b6 to 003293ca has its CatchHandler @ 0032ad85 */
        detail::ShapedTextOptions::withWordWrapWidth(local_58c,&local_3f8,local_378);
                    /* try { // try from 003293d1 to 003293e5 has its CatchHandler @ 0032ad1e */
        detail::ShapedTextOptions::withHeight(local_574,(undefined8 *)local_4e8,&local_3f8);
                    /* try { // try from 003293ea to 003293fe has its CatchHandler @ 0032ad0c */
        detail::ShapedTextOptions::withJustification
                  ((undefined4 *)&local_470,(undefined8 *)local_4e8,local_580[0]);
                    /* try { // try from 003293ff to 00329415 has its CatchHandler @ 0032acfa */
        detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(local_210,&local_470,0);
                    /* try { // try from 00329416 to 0032942d has its CatchHandler @ 0032ace8 */
        detail::ShapedText::ShapedText
                  ((ShapedText *)this,(ulong *)&local_500,(undefined1 (*) [16])local_210);
        piVar11 = (int *)(local_1a0 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_1d0;
        if (local_1d0 != local_1c8) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_1c8);
        }
        if (local_1d0 != (long *)0x0) {
          operator_delete(local_1d0);
        }
        if (local_1e8 != (void *)0x0) {
          operator_delete(local_1e8);
        }
        piVar11 = (int *)(local_400 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_430;
        if (local_430 != local_428) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_428);
        }
        if (local_430 != (long *)0x0) {
          operator_delete(local_430);
        }
        if (local_448 != (int *)0x0) {
          operator_delete(local_448);
        }
        piVar11 = (int *)(local_478 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_4a8;
        if (local_4a8 != local_4a0) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_4a0);
        }
        if (local_4a8 != (long *)0x0) {
          operator_delete(local_4a8);
        }
        if (local_4c0 != (void *)0x0) {
          operator_delete(local_4c0);
        }
        piVar11 = (int *)(local_388 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_3b8;
        if (local_3b8 != local_3b0) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_3b0);
        }
        if (local_3b8 != (long *)0x0) {
          operator_delete(local_3b8);
        }
        if (local_3d0 != (void *)0x0) {
          operator_delete(local_3d0);
        }
        piVar11 = (int *)(local_308 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar17 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar17 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar20 = local_338;
        if (local_338 != local_330) {
          do {
            plVar18 = (long *)*plVar20;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar22 = plVar18 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != local_330);
        }
        if (local_338 != (long *)0x0) {
          operator_delete(local_338);
        }
        if (local_350 != (void *)0x0) {
          operator_delete(local_350);
        }
        LOCK();
        pSVar19 = pSVar33 + 8;
        *(int *)pSVar19 = *(int *)pSVar19 + -1;
        UNLOCK();
        if (*(int *)pSVar19 == 0) {
          (**(code **)(*(long *)pSVar33 + 8))(pSVar33);
        }
        pfVar27 = local_500 + -4;
        if (pfVar27 != (float *)&emptyString) {
          LOCK();
          fVar35 = *pfVar27;
          *pfVar27 = (float)((int)*pfVar27 + -1);
          UNLOCK();
          if (fVar35 == 0.0) {
            operator_delete__(pfVar27);
          }
        }
        if (local_548 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar29 = *(ulong *)(local_548 + 8);
          if (uVar29 == 0x100000001) {
            *(undefined8 *)(local_548 + 8) = 0;
            (**(code **)(*(long *)local_548 + 0x10))(local_548);
            (**(code **)(*(long *)local_548 + 0x18))(local_548);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var4 = local_548 + 8;
              uVar29 = (ulong)*(uint *)p_Var4;
              *(uint *)p_Var4 = *(uint *)p_Var4 - 1;
              UNLOCK();
            }
            else {
              *(int *)(local_548 + 8) = (int)uVar29 + -1;
            }
            if ((int)uVar29 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_548)
              ;
            }
          }
        }
      }
      goto LAB_003292e1;
    }
  }
  else {
    LOCK();
    fVar35 = *pfVar32;
    *pfVar32 = (float)((int)*pfVar32 + -1);
    UNLOCK();
    if (fVar35 != 0.0) goto LAB_00328fad;
    operator_delete__(pfVar32);
    pfVar32 = *(float **)(local_550 + 0x2b0);
    pfVar15 = extraout_RDX_25;
    if (*(float **)(local_550 + 0x2b8) != pfVar32) goto LAB_00328fc6;
  }
LAB_003292d5:
  *(SharedFontInternal **)this = local_550;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = local_548;
  goto LAB_003292e1;
LAB_00329872:
  local_578 = 1;
  if (iVar21 < 0xd) {
    bVar10 = String::containsAnyOf((String *)&local_570,&DAT_005e50d8);
    pfVar15 = extraout_RDX_27;
    if (!bVar10) {
      iVar17 = 1;
    }
  }
  if (iVar21 < iVar17) {
    iVar17 = iVar21;
  }
  LOCK();
  *(int *)(pSVar19 + 8) = *(int *)(pSVar19 + 8) + 1;
  UNLOCK();
  fVar35 = *(float *)(pSVar19 + 100);
  local_550 = pSVar19;
  if (fVar35 <= 0.0) {
    local_588 = (juce *)CONCAT44(local_588._4_4_,*(undefined4 *)(pSVar19 + 0x68));
                    /* try { // try from 003298c9 to 003298d2 has its CatchHandler @ 0032abee */
    uVar36 = Font::SharedFontInternal::getAscentDescent
                       (pSVar19,(long *)&local_550,pfVar15,pfVar13,puVar31,(ulong)pfVar27);
    fVar35 = local_588._0_4_ * ((float)((ulong)uVar36 >> 0x20) + (float)uVar36);
    pfVar15 = extraout_RDX_28;
  }
  if (local_578 < iVar17) {
    local_53c = iVar17;
    do {
      pfVar32 = local_558;
      local_578 = local_578 + 1;
      local_538._0_4_ =
           ((local_574 + local_558[0x18]) / (float)local_578 - local_558[0x18]) / local_558[0x17];
      fVar35 = *(float *)(local_550 + 100);
      if (fVar35 <= DAT_005d9058) {
        local_588 = (juce *)CONCAT44(local_588._4_4_,*(undefined4 *)(local_550 + 0x68));
                    /* try { // try from 00329958 to 00329961 has its CatchHandler @ 0032ada9 */
        uVar36 = Font::SharedFontInternal::getAscentDescent
                           (local_550,(long *)&local_550,pfVar15,pfVar13,puVar31,(ulong)pfVar27);
        fVar35 = local_588._0_4_ * ((float)((ulong)uVar36 >> 0x20) + (float)uVar36);
      }
      if ((float)local_538._0_4_ < fVar35) {
        fVar35 = (float)local_538._0_4_;
        if ((float)local_538._0_4_ <= DAT_00651f38) {
          fVar35 = DAT_00651f38;
        }
                    /* try { // try from 0032998c to 00329995 has its CatchHandler @ 0032ada1 */
        Font::setHeight(fVar35,(Font *)&local_550);
      }
      pSVar19 = local_550;
      local_518 = local_570;
      pfVar15 = local_570 + -4;
      if (pfVar15 != (float *)&emptyString) {
        LOCK();
        *pfVar15 = (float)((int)*pfVar15 + 1);
        UNLOCK();
      }
      if (local_550 != (SharedFontInternal *)0x0) {
        LOCK();
        *(int *)(local_550 + 8) = *(int *)(local_550 + 8) + 1;
        UNLOCK();
      }
                    /* try { // try from 003299d2 to 003299df has its CatchHandler @ 0032ae63 */
      detail::ShapedTextOptions::withFont(local_300,(undefined8 *)pfVar32,(long *)local_550);
                    /* try { // try from 003299e6 to 003299f8 has its CatchHandler @ 0032ae4c */
      detail::ShapedTextOptions::withWordWrapWidth(local_58c,local_378,local_300);
                    /* try { // try from 003299ff to 00329a11 has its CatchHandler @ 0032ae16 */
      detail::ShapedTextOptions::withHeight(local_574,&local_3f8,local_378);
                    /* try { // try from 00329a17 to 00329a29 has its CatchHandler @ 0032ae04 */
      detail::ShapedTextOptions::withMaxNumLines((undefined8 *)local_4e8,&local_3f8,(long)local_578)
      ;
                    /* try { // try from 00329a2e to 00329a40 has its CatchHandler @ 0032adf2 */
      detail::ShapedTextOptions::withJustification
                ((undefined4 *)&local_470,(undefined8 *)local_4e8,local_580[0]);
                    /* try { // try from 00329a41 to 00329a4d has its CatchHandler @ 0032ade0 */
      detail::ShapedTextOptions::withTrailingWhitespacesShouldFit
                ((undefined8 *)local_a8,&local_470,0);
                    /* try { // try from 00329a4e to 00329a60 has its CatchHandler @ 0032adce */
      detail::ShapedText::ShapedText
                ((ShapedText *)this,(ulong *)&local_518,(undefined1 (*) [16])local_a8);
      piVar11 = (int *)(local_38 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329a8a:
        plVar20 = local_68;
        plVar18 = local_60;
        if (local_68 != local_60) {
LAB_00329dd9:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329a8a;
        operator_delete__(piVar11);
        plVar20 = local_68;
        plVar18 = local_60;
        if (local_68 != local_60) goto LAB_00329dd9;
      }
      if (local_68 != (long *)0x0) {
        operator_delete(local_68);
      }
      if (local_80 != (void *)0x0) {
        operator_delete(local_80);
      }
      piVar11 = (int *)(local_400 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329aeb:
        plVar20 = local_430;
        plVar18 = local_428;
        if (local_430 != local_428) {
LAB_00329e39:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329aeb;
        operator_delete__(piVar11);
        plVar20 = local_430;
        plVar18 = local_428;
        if (local_430 != local_428) goto LAB_00329e39;
      }
      if (local_430 != (long *)0x0) {
        operator_delete(local_430);
      }
      if (local_448 != (int *)0x0) {
        operator_delete(local_448);
      }
      piVar11 = (int *)(local_478 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329b4c:
        plVar20 = local_4a8;
        plVar18 = local_4a0;
        if (local_4a8 != local_4a0) {
LAB_00329e99:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329b4c;
        operator_delete__(piVar11);
        plVar20 = local_4a8;
        plVar18 = local_4a0;
        if (local_4a8 != local_4a0) goto LAB_00329e99;
      }
      if (local_4a8 != (long *)0x0) {
        operator_delete(local_4a8);
      }
      if (local_4c0 != (void *)0x0) {
        operator_delete(local_4c0);
      }
      piVar11 = (int *)(local_388 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329bad:
        plVar20 = local_3b8;
        plVar18 = local_3b0;
        if (local_3b8 != local_3b0) {
LAB_00329ef9:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329bad;
        operator_delete__(piVar11);
        plVar20 = local_3b8;
        plVar18 = local_3b0;
        if (local_3b8 != local_3b0) goto LAB_00329ef9;
      }
      if (local_3b8 != (long *)0x0) {
        operator_delete(local_3b8);
      }
      if (local_3d0 != (void *)0x0) {
        operator_delete(local_3d0);
      }
      piVar11 = (int *)(local_308 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329c0e:
        plVar20 = local_338;
        plVar18 = local_330;
        if (local_338 != local_330) {
LAB_00329f59:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329c0e;
        operator_delete__(piVar11);
        plVar20 = local_338;
        plVar18 = local_330;
        if (local_338 != local_330) goto LAB_00329f59;
      }
      if (local_338 != (long *)0x0) {
        operator_delete(local_338);
      }
      if (local_350 != (void *)0x0) {
        operator_delete(local_350);
      }
      piVar11 = (int *)(local_290 + -0x10);
      if (piVar11 == &emptyString) {
LAB_00329c6f:
        plVar20 = local_2c0;
        plVar18 = local_2b8;
        if (local_2c0 != local_2b8) {
LAB_00329fb9:
          do {
            plVar22 = (long *)*plVar20;
            if (plVar22 != (long *)0x0) {
              LOCK();
              plVar6 = plVar22 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar18);
        }
      }
      else {
        LOCK();
        iVar17 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar17 != 0) goto LAB_00329c6f;
        operator_delete__(piVar11);
        plVar20 = local_2c0;
        plVar18 = local_2b8;
        if (local_2c0 != local_2b8) goto LAB_00329fb9;
      }
      if (local_2c0 != (long *)0x0) {
        operator_delete(local_2c0);
      }
      if (local_2d8 != (void *)0x0) {
        operator_delete(local_2d8);
      }
      if (pSVar19 != (SharedFontInternal *)0x0) {
        LOCK();
        pSVar33 = pSVar19 + 8;
        *(int *)pSVar33 = *(int *)pSVar33 + -1;
        UNLOCK();
        if (*(int *)pSVar33 == 0) {
          (**(code **)(*(long *)pSVar19 + 8))(pSVar19);
        }
      }
      pfVar15 = local_518 + -4;
      if (pfVar15 != (float *)&emptyString) {
        LOCK();
        fVar35 = *pfVar15;
        *pfVar15 = (float)((int)*pfVar15 + -1);
        UNLOCK();
        if (fVar35 == 0.0) {
          operator_delete__(pfVar15);
        }
      }
      pfVar32 = *(float **)(*(long *)this + 0x2b0);
      uVar23 = *(long *)(*(long *)this + 0x2b8) - (long)pfVar32;
      pfVar15 = pfVar32;
      uVar29 = uVar23;
      if (0xf < (long)uVar23) {
        lVar26 = (uVar23 >> 4) + 1;
        uVar29 = ((long)uVar23 >> 2) * 4;
        pfVar13 = pfVar32 + 2;
        do {
          pfVar15 = pfVar13;
          if (local_58c < pfVar15[-2]) {
            pfVar15 = pfVar15 + -2;
            goto LAB_00329ff6;
          }
          if (local_58c < pfVar15[-1]) {
            pfVar15 = pfVar15 + -1;
            goto LAB_00329ff6;
          }
          if (local_58c < *pfVar15) goto LAB_00329ff6;
          if (local_58c < pfVar15[1]) {
            pfVar15 = pfVar15 + 1;
            goto LAB_00329ff6;
          }
          lVar26 = lVar26 + -1;
          uVar29 = uVar29 - 0x10;
          pfVar13 = pfVar15 + 4;
        } while (1 < lVar26);
        pfVar15 = pfVar15 + 2;
      }
      lVar26 = (long)uVar29 >> 2;
      if (lVar26 == 1) {
LAB_00329da1:
        if (*pfVar15 <= local_58c) goto LAB_0032abb4;
      }
      else if (lVar26 == 2) {
LAB_00329d94:
        if (*pfVar15 <= local_58c) {
          pfVar15 = pfVar15 + 1;
          goto LAB_00329da1;
        }
      }
      else {
        if (lVar26 != 3) goto LAB_0032abb4;
        if (*pfVar15 <= local_58c) {
          pfVar15 = pfVar15 + 1;
          goto LAB_00329d94;
        }
      }
LAB_00329ff6:
      if (pfVar15 == (float *)((uVar23 & 0xfffffffffffffffc) + (long)pfVar32)) goto LAB_0032abb4;
      if (uVar23 == 0) {
        local_51c = 0.0;
        pfVar13 = (float *)0x0;
      }
      else {
        pfVar13 = (float *)(((long)uVar23 >> 2) * 4);
        local_51c = 0.0;
        pfVar15 = (float *)0x0;
        do {
          local_51c = local_51c + *(float *)((long)pfVar32 + (long)pfVar15);
          pfVar15 = pfVar15 + 1;
        } while (pfVar13 != pfVar15);
      }
      fVar35 = *(float *)(local_550 + 100);
      if (fVar35 <= DAT_005d9058) {
        local_588 = (juce *)CONCAT44(local_588._4_4_,*(undefined4 *)(local_550 + 0x68));
                    /* try { // try from 0032a057 to 0032a060 has its CatchHandler @ 0032ad99 */
        uVar36 = Font::SharedFontInternal::getAscentDescent
                           (local_550,(long *)&local_550,pfVar15,pfVar13,puVar31,(ulong)pfVar27);
        fVar35 = local_588._0_4_ * ((float)((ulong)uVar36 >> 0x20) + (float)uVar36);
        pfVar15 = extraout_RDX_29;
      }
      iVar17 = local_578;
      puVar7 = PTR___libc_single_threaded_00715c50;
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar29 = *(ulong *)(p_Var4 + 8);
        pfVar13 = (float *)0x100000001;
        if (uVar29 == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          local_588 = (juce *)CONCAT44(local_588._4_4_,fVar35);
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          pfVar15 = extraout_RDX_30;
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var3 = p_Var4 + 8;
            uVar29 = (ulong)*(uint *)p_Var3;
            *(uint *)p_Var3 = *(uint *)p_Var3 - 1;
            UNLOCK();
            pfVar13 = (float *)puVar7;
          }
          else {
            uVar24 = (int)uVar29 - 1;
            *(uint *)(p_Var4 + 8) = uVar24;
            pfVar13 = (float *)(ulong)uVar24;
          }
          if ((int)uVar29 != 1) goto LAB_0032a0e4;
          local_588 = (juce *)CONCAT44(local_588._4_4_,fVar35);
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          pfVar15 = extraout_RDX_31;
        }
        fVar35 = local_588._0_4_;
      }
LAB_0032a0e4:
      if ((float)local_538._0_4_ < DAT_00651f38) {
        fVar35 = fVar35 * (float)iVar17 * _DAT_005de56c + local_51c;
        goto LAB_0032a65a;
      }
    } while (local_578 < local_53c);
    fVar35 = fVar35 * (float)iVar17 * _DAT_005de56c + local_51c;
  }
  else {
    fVar35 = fVar35 * _DAT_005de56c;
  }
LAB_0032a65a:
  local_470 = &local_570;
  local_468 = local_558;
  local_458 = &local_58c;
  local_450 = &local_574;
  local_448 = &local_578;
  local_440 = local_580;
  fVar35 = ((float)local_578 * local_58c) / fVar35;
  fVar34 = DAT_005d9038;
  if (fVar35 <= DAT_005d9038) {
    fVar34 = fVar35;
  }
  uVar24 = -(uint)(fVar35 < (float)local_568._0_4_) & local_568._0_4_ |
           ~-(uint)(fVar35 < (float)local_568._0_4_) & (uint)fVar34;
                    /* try { // try from 0032a6e3 to 0032a6f7 has its CatchHandler @ 0032ac01 */
  local_538 = ZEXT416(uVar24);
  local_460 = (ShapedText *)&local_550;
  createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
  ::$_70::operator()(uVar24,(__70 *)this,&local_470);
  pfVar27 = *(float **)(*(long *)this + 0x2b0);
  uVar23 = *(long *)(*(long *)this + 0x2b8) - (long)pfVar27;
  pfVar15 = pfVar27;
  uVar29 = uVar23;
  if (0xf < (long)uVar23) {
    lVar26 = (uVar23 >> 4) + 1;
    uVar29 = ((long)uVar23 >> 2) << 2;
    pfVar13 = pfVar27 + 2;
    do {
      pfVar15 = pfVar13;
      if (local_58c < pfVar15[-2]) {
        pfVar15 = pfVar15 + -2;
        goto LAB_0032a7ab;
      }
      if (local_58c < pfVar15[-1]) {
        pfVar15 = pfVar15 + -1;
        goto LAB_0032a7ab;
      }
      if (local_58c < *pfVar15) goto LAB_0032a7ab;
      if (local_58c < pfVar15[1]) {
        pfVar15 = pfVar15 + 1;
        goto LAB_0032a7ab;
      }
      lVar26 = lVar26 + -1;
      uVar29 = uVar29 - 0x10;
      pfVar13 = pfVar15 + 4;
    } while (1 < lVar26);
    pfVar15 = pfVar15 + 2;
  }
  lVar26 = (long)uVar29 >> 2;
  if (lVar26 == 1) {
LAB_0032a791:
    if (local_58c < *pfVar15) goto LAB_0032a7ab;
  }
  else {
    if (lVar26 == 2) {
LAB_0032a788:
      if (*pfVar15 <= local_58c) {
        pfVar15 = pfVar15 + 1;
        goto LAB_0032a791;
      }
    }
    else {
      if (lVar26 != 3) goto LAB_0032abb4;
      if (*pfVar15 <= local_58c) {
        pfVar15 = pfVar15 + 1;
        goto LAB_0032a788;
      }
    }
LAB_0032a7ab:
    if (pfVar15 != (float *)((long)pfVar27 + (uVar23 & 0xfffffffffffffffc))) {
      fVar35 = (float)(local_538._0_4_ & _DAT_005d91c0);
      if ((fVar35 == DAT_005d94c8) ||
         (fVar34 = (float)(_DAT_005d91c0 & local_568._0_4_), fVar34 == DAT_005d94c8)) {
        if (((float)local_538._0_4_ != (float)local_568._0_4_) ||
           (NAN((float)local_538._0_4_) || NAN((float)local_568._0_4_))) {
LAB_0032a82b:
          local_588 = this;
          detail::ShapedText::~ShapedText(*(ShapedText **)(this + 8));
          local_4e8[0] = (float)local_568._0_4_;
                    /* try { // try from 0032a84f to 0032a85b has its CatchHandler @ 0032abe9 */
          createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
          ::$_70::operator()(local_568._0_4_,(__70 *)&local_4e0,&local_470);
          puVar7 = PTR___libc_single_threaded_00715c50;
          iVar17 = 0;
          do {
            fVar35 = ((float)local_538._0_4_ - (float)local_568._0_4_) * DAT_005d9044 +
                     (float)local_568._0_4_;
                    /* try { // try from 0032a8c3 to 0032a8d3 has its CatchHandler @ 0032adb9 */
            local_558 = (float *)CONCAT44(local_558._4_4_,fVar35);
            createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
            ::$_70::operator()(fVar35,(__70 *)&local_3f8,&local_470);
            pCVar8 = pCStack_3f0;
            lVar26 = local_3f8;
            pCVar30 = local_4d8;
            pfVar27 = *(float **)(local_3f8 + 0x2b0);
            uVar23 = *(long *)(local_3f8 + 0x2b8) - (long)pfVar27;
            pfVar15 = pfVar27;
            uVar29 = uVar23;
            if (0xf < (long)uVar23) {
              lVar16 = (uVar23 >> 4) + 1;
              uVar29 = ((long)uVar23 >> 2) << 2;
              pfVar13 = pfVar27 + 2;
              do {
                pfVar15 = pfVar13;
                if (local_58c < pfVar15[-2]) {
                  pfVar15 = pfVar15 + -2;
                  goto LAB_0032a98c;
                }
                if (local_58c < pfVar15[-1]) {
                  pfVar15 = pfVar15 + -1;
                  goto LAB_0032a98c;
                }
                if (local_58c < *pfVar15) goto LAB_0032a98c;
                if (local_58c < pfVar15[1]) {
                  pfVar15 = pfVar15 + 1;
                  goto LAB_0032a98c;
                }
                lVar16 = lVar16 + -1;
                uVar29 = uVar29 - 0x10;
                pfVar13 = pfVar15 + 4;
              } while (1 < lVar16);
              pfVar15 = pfVar15 + 2;
            }
            lVar16 = (long)uVar29 >> 2;
            if (lVar16 == 1) {
LAB_0032a975:
              if (local_58c < *pfVar15) goto LAB_0032a98c;
LAB_0032a9ae:
              fVar35 = local_558._0_4_;
              if (local_558._0_4_ <= (float)local_568._0_4_) {
                fVar35 = (float)local_568._0_4_;
              }
              if (local_4e8[0] < local_558._0_4_) {
                local_4e8[0] = local_558._0_4_;
                local_3f8 = 0;
                pCStack_3f0 = (Candidate *)0x0;
                local_4e0 = lVar26;
                local_4d8 = pCVar8;
                if (pCVar30 != (Candidate *)0x0) {
                  uVar29 = *(ulong *)(pCVar30 + 8);
                  if (uVar29 == 0x100000001) {
                    *(undefined8 *)(pCVar30 + 8) = 0;
                    local_568._0_4_ = fVar35;
                    (**(code **)(*(long *)pCVar30 + 0x10))(pCVar30);
                    (**(code **)(*(long *)pCVar30 + 0x18))(pCVar30);
                  }
                  else {
                    if (*puVar7 == '\0') {
                      LOCK();
                      p_Var4 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(pCVar30 + 8);
                      uVar29 = (ulong)*(uint *)p_Var4;
                      *(uint *)p_Var4 = *(uint *)p_Var4 - 1;
                      UNLOCK();
                    }
                    else {
                      *(int *)(pCVar30 + 8) = (int)uVar29 + -1;
                    }
                    if ((int)uVar29 != 1) goto LAB_0032aa59;
                    local_568._0_4_ = fVar35;
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pCVar30);
                  }
                  local_568 = ZEXT416((uint)local_568._0_4_);
                  goto LAB_0032aa61;
                }
              }
LAB_0032aa59:
              local_568 = ZEXT416((uint)fVar35);
            }
            else {
              if (lVar16 == 2) {
LAB_0032a96c:
                if (*pfVar15 <= local_58c) {
                  pfVar15 = pfVar15 + 1;
                  goto LAB_0032a975;
                }
              }
              else {
                if (lVar16 != 3) goto LAB_0032a9ae;
                if (*pfVar15 <= local_58c) {
                  pfVar15 = pfVar15 + 1;
                  goto LAB_0032a96c;
                }
              }
LAB_0032a98c:
              if (pfVar15 == (float *)((long)pfVar27 + (uVar23 & 0xfffffffffffffffc)))
              goto LAB_0032a9ae;
              fVar35 = local_558._0_4_;
              if ((float)local_538._0_4_ <= local_558._0_4_) {
                fVar35 = (float)local_538._0_4_;
              }
              local_538 = ZEXT416((uint)fVar35);
            }
LAB_0032aa61:
            pCVar30 = pCStack_3f0;
            if (pCStack_3f0 != (Candidate *)0x0) {
              if (*(long *)(pCStack_3f0 + 8) == 0x100000001) {
                *(undefined8 *)(pCStack_3f0 + 8) = 0;
                (**(code **)(*(long *)pCStack_3f0 + 0x10))(pCStack_3f0);
                (**(code **)(*(long *)pCVar30 + 0x18))(pCVar30);
              }
              else {
                if (*puVar7 == '\0') {
                  LOCK();
                  p_Var4 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(pCStack_3f0 + 8);
                  iVar21 = *(int *)p_Var4;
                  *(int *)p_Var4 = *(int *)p_Var4 + -1;
                  UNLOCK();
                }
                else {
                  iVar21 = (int)*(long *)(pCStack_3f0 + 8);
                  *(int *)(pCStack_3f0 + 8) = iVar21 + -1;
                }
                if (iVar21 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)pCStack_3f0);
                }
              }
            }
            lVar26 = local_4e0;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 3);
          local_568._0_4_ = local_4e8[0];
          uVar29 = createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
                   ::$_49::operator()((ulong)(uint)local_4e8[0],(ulong)(uint)local_58c,
                                      *(__49 **)(local_4e0 + 0x2b0),*(long *)(local_4e0 + 0x2b8));
          fVar35 = (float)uVar29;
          if ((float)local_568._0_4_ < fVar35) {
                    /* try { // try from 0032ab00 to 0032ab1a has its CatchHandler @ 0032abe4 */
            local_568._0_4_ = fVar35;
            createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
            ::$_70::operator()(fVar35,(__70 *)&local_3f8,&local_470);
            uVar36 = areAllRequiredWidthsSmallerThanMax
                               (local_58c,*(juce **)(local_3f8 + 0x2b0),*(long *)(local_3f8 + 0x2b8)
                               );
            if ((char)uVar36 != '\0') {
              local_4e8[0] = (float)local_568._0_4_;
              detail::ShapedText::operator=((ShapedText *)&local_4e0,&local_3f8);
            }
            detail::ShapedText::~ShapedText((ShapedText *)pCStack_3f0);
            lVar26 = local_4e0;
          }
          *(long *)local_588 = lVar26;
          *(Candidate **)(local_588 + 8) = local_4d8;
          if (local_4d8 == (Candidate *)0x0) {
            pCVar30 = (Candidate *)0x0;
          }
          else {
            pCVar30 = local_4d8;
            if (*puVar7 == '\0') {
              LOCK();
              *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
              UNLOCK();
            }
            else {
              *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
            }
          }
          createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
          ::Candidate::~Candidate(pCVar30);
        }
      }
      else {
        fVar37 = (float)((uint)((float)local_538._0_4_ - (float)local_568._0_4_) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar37) {
          if (fVar34 <= fVar35) {
            fVar34 = fVar35;
          }
          if (fVar34 * DAT_005d94d0 < fVar37) goto LAB_0032a82b;
        }
      }
    }
  }
LAB_0032abb4:
  if (local_550 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar19 = local_550 + 8;
    *(int *)pSVar19 = *(int *)pSVar19 + -1;
    UNLOCK();
    if (*(int *)pSVar19 == 0) {
      (**(code **)(*(long *)local_550 + 8))();
    }
  }
LAB_003292e1:
  pfVar27 = local_570 + -4;
  if (pfVar27 == (float *)&emptyString) {
    return;
  }
LAB_003292ef:
  LOCK();
  fVar35 = *pfVar27;
  *pfVar27 = (float)((int)*pfVar27 + -1);
  UNLOCK();
  if (fVar35 == 0.0) {
    operator_delete__(pfVar27);
  }
  return;
}


