// Function : getOutlineAsPath
// Namespace: juce:DrawableText
// Entry    : 002b00f0
// Prototype: Path * getOutlineAsPath(Path * param_1, long param_2, undefined8 param_3, undefined * param_4, Elf64_Ehdr * param_5, ulong param_6)
// Body     : 002b00f0 - 002b0d55


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableText::getOutlineAsPath() const */

Path * __cdecl
juce::DrawableText::getOutlineAsPath
          (Path *param_1,long param_2,undefined8 param_3,undefined *param_4,Elf64_Ehdr *param_5,
          ulong param_6)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined4 uVar4;
  SharedFontInternal *this;
  long *plVar5;
  double dVar6;
  undefined *puVar7;
  void *__ptr;
  int *piVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar9;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  PositionedGlyph *this_00;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_40c;
  PositionedGlyph *local_3f0;
  undefined8 local_3e8;
  ulong local_3e0;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  ShapedText local_3b8 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_3b0;
  float local_3a8;
  float local_398;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368;
  void *local_360;
  long *local_348;
  long *local_340;
  long local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  void *pvStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  long *local_2c8;
  long *plStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 *local_298;
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
  ShapedTextOptions local_a8 [40];
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  local_398 = hypotf((float)*(undefined8 *)(param_2 + 0x160) -
                     (float)*(undefined8 *)(param_2 + 0x168),
                     (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(param_2 + 0x168) >> 0x20));
  local_3a8 = hypotf((float)*(undefined8 *)(param_2 + 0x160) -
                     (float)*(undefined8 *)(param_2 + 0x170),
                     (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(param_2 + 0x170) >> 0x20));
  fVar14 = DAT_00653434;
  if (local_398 + 0.0 < DAT_00653434) {
    fVar14 = ceilf(local_398 + 0.0);
    fVar14 = (float)(int)fVar14;
  }
  fStack_3cc = 0.0;
  fStack_3d0 = 0.0;
  local_3d8._4_4_ = 0.0;
  local_3d8._0_4_ = DAT_00653434;
  if (local_3a8 + 0.0 < DAT_00653434) {
    fVar15 = ceilf(local_3a8 + 0.0);
    local_3d8._0_4_ = (BADTYPE)(int)fVar15;
    local_3d8._4_4_ = (BADTYPE)(int)extraout_XMM0_Db;
    fStack_3d0 = (float)(int)extraout_XMM0_Dc;
    fStack_3cc = (float)(int)extraout_XMM0_Dd;
  }
  local_3e8 = 200;
  local_3f0 = malloc(0x1900);
  plVar11 = (long *)(param_2 + 0x188);
  if (*(char *)(param_2 + 0x198) == '\0') {
    param_4 = (undefined *)(ulong)*(uint *)(param_2 + 0x1a0);
                    /* try { // try from 002b0762 to 002b078e has its CatchHandler @ 002b0e3c */
    param_5 = &Elf64_Ehdr_00100000;
    GlyphArrangement::addFittedText
              (0.0,0.0,fVar14,(float)local_3d8._0_4_,0,DAT_005d9960,(GlyphArrangement *)&local_3f0,
               plVar11,(String *)(param_2 + 400),*(uint *)(param_2 + 0x1a0),0x100000);
    uVar9 = extraout_RDX_03;
  }
  else {
                    /* try { // try from 002b01e4 to 002b01f0 has its CatchHandler @ 002b0e3c */
    uVar9 = Font::SharedFontInternal::getAscentDescent
                      ((SharedFontInternal *)*plVar11,plVar11,extraout_RDX,param_4,(uint *)param_5,
                       param_6);
    fStack_3d0 = (float)extraout_XMM0_Dc_00;
    local_3d8 = (undefined1  [8])uVar9;
    fStack_3cc = (float)extraout_XMM0_Dd_00;
    this = (SharedFontInternal *)*plVar11;
    local_40c = *(float *)(this + 100);
    if (local_40c <= 0.0) {
      local_40c = *(float *)(this + 0x68);
                    /* try { // try from 002b0212 to 002b0219 has its CatchHandler @ 002b0d56 */
      uVar9 = Font::SharedFontInternal::getAscentDescent
                        (this,plVar11,extraout_RDX_00,param_4,(uint *)param_5,param_6);
      local_40c = local_40c * ((float)((ulong)uVar9 >> 0x20) + (float)uVar9);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x1a0);
    local_3e0 = *(ulong *)(param_2 + 400);
    piVar8 = (int *)(local_3e0 - 0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    uStack_300 = 0;
    pvStack_2e0 = (void *)0x0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = (long *)0x0;
    plStack_2c0 = (long *)0x0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_298 = (undefined1 *)0x0;
    local_308 = 9;
    local_2e8 = 0;
                    /* try { // try from 002b02be to 002b02c2 has its CatchHandler @ 002b0e29 */
    detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&pvStack_2e0)
    ;
    uStack_2b0 = _DAT_005dd140;
    local_2a8 = _UNK_005dd148;
    uStack_2a0 = 0x7fffffffffffffff;
    local_298 = &DAT_0061ac58;
                    /* try { // try from 002b02f3 to 002b030c has its CatchHandler @ 002b0e24 */
    detail::ShapedTextOptions::withWordWrapWidth(fVar14,local_288,&local_308);
                    /* try { // try from 002b030d to 002b0323 has its CatchHandler @ 002b0e1f */
    detail::ShapedTextOptions::withJustification((undefined4 *)local_210,local_288,uVar4);
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 002b0332 to 002b0349 has its CatchHandler @ 002b0dce */
    detail::ShapedTextOptions::withFont(local_198,local_210,plVar11);
                    /* try { // try from 002b034a to 002b0361 has its CatchHandler @ 002b0da6 */
    detail::ShapedTextOptions::withAdditiveLineSpacing(0,local_120,local_198);
                    /* try { // try from 002b0362 to 002b0376 has its CatchHandler @ 002b0d94 */
    detail::ShapedTextOptions::withBaselineAtZero(local_a8,local_120);
                    /* try { // try from 002b0377 to 002b038d has its CatchHandler @ 002b0d82 */
    detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(&local_388,(undefined8 *)local_a8,0)
    ;
                    /* try { // try from 002b038e to 002b03a4 has its CatchHandler @ 002b0d70 */
    detail::ShapedText::ShapedText(local_3b8,&local_3e0,(undefined1 (*) [16])&local_388);
    piVar8 = (int *)(local_318 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b03c7:
      plVar10 = local_348;
      if (local_348 != local_340) {
LAB_002b0b29:
        do {
          plVar5 = (long *)*plVar10;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_340);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b03c7;
      operator_delete__(piVar8);
      plVar10 = local_348;
      if (local_348 != local_340) goto LAB_002b0b29;
    }
    if (local_348 != (long *)0x0) {
      operator_delete(local_348);
    }
    if (local_360 != (void *)0x0) {
      operator_delete(local_360);
    }
    piVar8 = (int *)(local_38 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b0421:
      plVar10 = local_68;
      if (local_68 != local_60) {
LAB_002b0b89:
        do {
          plVar5 = (long *)*plVar10;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_60);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b0421;
      operator_delete__(piVar8);
      plVar10 = local_68;
      if (local_68 != local_60) goto LAB_002b0b89;
    }
    if (local_68 != (long *)0x0) {
      operator_delete(local_68);
    }
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
    piVar8 = (int *)(local_b0 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b047b:
      plVar10 = local_e0;
      if (local_e0 != local_d8) {
LAB_002b0be9:
        do {
          plVar5 = (long *)*plVar10;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_d8);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b047b;
      operator_delete__(piVar8);
      plVar10 = local_e0;
      if (local_e0 != local_d8) goto LAB_002b0be9;
    }
    if (local_e0 != (long *)0x0) {
      operator_delete(local_e0);
    }
    if (local_f8 != (void *)0x0) {
      operator_delete(local_f8);
    }
    piVar8 = (int *)(local_128 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b04d5:
      plVar10 = local_158;
      if (local_158 != local_150) {
LAB_002b0c49:
        do {
          plVar5 = (long *)*plVar10;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_150);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b04d5;
      operator_delete__(piVar8);
      plVar10 = local_158;
      if (local_158 != local_150) goto LAB_002b0c49;
    }
    if (local_158 != (long *)0x0) {
      operator_delete(local_158);
    }
    if (local_170 != (void *)0x0) {
      operator_delete(local_170);
    }
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
    piVar8 = (int *)(local_1a0 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b0545:
      plVar11 = local_1d0;
      if (local_1d0 != local_1c8) {
LAB_002b0ca9:
        do {
          plVar10 = (long *)*plVar11;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar5 = plVar10 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != local_1c8);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b0545;
      operator_delete__(piVar8);
      plVar11 = local_1d0;
      if (local_1d0 != local_1c8) goto LAB_002b0ca9;
    }
    if (local_1d0 != (long *)0x0) {
      operator_delete(local_1d0);
    }
    if (local_1e8 != (void *)0x0) {
      operator_delete(local_1e8);
    }
    piVar8 = (int *)(local_218 + -0x10);
    if (piVar8 == &emptyString) {
LAB_002b059f:
      plVar11 = local_248;
      if (local_248 != local_240) {
LAB_002b0d09:
        do {
          plVar10 = (long *)*plVar11;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar5 = plVar10 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != local_240);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002b059f;
      operator_delete__(piVar8);
      plVar11 = local_248;
      if (local_248 != local_240) goto LAB_002b0d09;
    }
    if (local_248 != (long *)0x0) {
      operator_delete(local_248);
    }
    fVar14 = (float)local_3d8._4_4_;
    fVar15 = (float)local_3d8._4_4_;
    fVar28 = (float)local_3d8._4_4_;
    fVar17 = (float)local_3d8._4_4_;
    if (local_260 != (void *)0x0) {
      local_3c8 = (float)local_3d8._4_4_;
      fStack_3c4 = (float)local_3d8._4_4_;
      fStack_3c0 = (float)local_3d8._4_4_;
      fStack_3bc = (float)local_3d8._4_4_;
      operator_delete(local_260);
      fVar14 = local_3c8;
      fVar15 = fStack_3c4;
      fVar28 = fStack_3c0;
      fVar17 = fStack_3bc;
    }
    fVar20 = DAT_005d9038;
    fVar14 = fVar14 + (float)local_3d8._0_4_;
    piVar8 = (int *)(local_298 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_3c8 = fVar14;
        fStack_3c4 = fVar15;
        fStack_3c0 = fVar28;
        fStack_3bc = fVar17;
        operator_delete__(piVar8);
        fVar14 = local_3c8;
      }
    }
    plVar10 = plStack_2c0;
    for (plVar11 = local_2c8; plVar11 != plVar10; plVar11 = plVar11 + 1) {
      plVar5 = (long *)*plVar11;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    fVar14 = (fVar20 / fVar14) * (float)local_3d8._0_4_;
    if (local_2c8 != (long *)0x0) {
      operator_delete(local_2c8);
    }
    if (pvStack_2e0 != (void *)0x0) {
      operator_delete(pvStack_2e0);
    }
    fVar14 = fVar14 * local_40c + DAT_005d9058;
    piVar8 = (int *)(local_3e0 - 0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar8);
      }
    }
                    /* try { // try from 002b06ff to 002b0716 has its CatchHandler @ 002b0d5e */
    addGlyphsFromShapedText(0.0,fVar14,(long *)&local_3f0,(long *)local_3b8);
    puVar7 = PTR___libc_single_threaded_00715c50;
    uVar9 = extraout_RDX_01;
    if (local_3b0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      param_4 = (undefined *)0x100000001;
      if (*(long *)(local_3b0 + 8) == 0x100000001) {
        *(undefined8 *)(local_3b0 + 8) = 0;
        (**(code **)(*(long *)local_3b0 + 0x10))(local_3b0);
        (**(code **)(*(long *)local_3b0 + 0x18))(local_3b0);
        uVar9 = extraout_RDX_02;
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = local_3b0 + 8;
          iVar3 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
          param_4 = puVar7;
        }
        else {
          iVar3 = (int)*(long *)(local_3b0 + 8);
          param_4 = (undefined *)(ulong)(iVar3 - 1U);
          *(uint *)(local_3b0 + 8) = iVar3 - 1U;
        }
        if (iVar3 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_3b0);
          uVar9 = extraout_RDX_05;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x20] = (Path)0x1;
  if ((long)local_3e8._4_4_ != 0) {
    lVar13 = (long)local_3e8._4_4_ << 5;
    this_00 = local_3f0;
    do {
      local_378 = 0;
      uStack_370 = 0;
      local_388 = (void *)0x0;
      uStack_380 = 0;
      local_368 = 1;
                    /* try { // try from 002b07fb to 002b0805 has its CatchHandler @ 002b0e41 */
      PositionedGlyph::createPath
                (this_00,(Path *)&local_388,uVar9,(ulong)param_4,(uint *)param_5,param_6);
      __ptr = local_388;
      Path::addPath(param_1,(long)local_388,uStack_380._4_4_);
      free(__ptr);
      this_00 = this_00 + 0x20;
      lVar13 = lVar13 + -0x20;
      uVar9 = extraout_RDX_04;
    } while (lVar13 != 0);
  }
  fVar28 = (float)*(undefined8 *)(param_2 + 0x160);
  fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20);
  fVar14 = local_398 * local_3a8;
  dVar6 = (double)fVar14;
  uVar18 = _DAT_005d91b0 & SUB84(dVar6,0);
  uVar19 = _UNK_005d91b4 & (uint)((ulong)dVar6 >> 0x20);
  if ((double)CONCAT44(uVar19,uVar18) == DAT_005d94e0) {
    if ((fVar14 == 0.0) && (!NAN(fVar14))) goto LAB_002b0931;
  }
  else if (((double)CONCAT44(uVar19,uVar18) <= DAT_005db368) ||
          ((double)CONCAT44(uVar19,uVar18) <= DAT_005db370 * (double)CONCAT44(uVar19,uVar18))) {
LAB_002b0931:
    fVar26 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    fVar20 = 0.0;
    fVar14 = local_3a8;
    fVar17 = local_398;
    goto LAB_002b0934;
  }
  dVar6 = _DAT_005d9000 / dVar6;
  fVar20 = (float)((double)_UNK_005dd214 * dVar6);
  fVar26 = (float)((double)_DAT_005dd220 * dVar6);
  fVar22 = _DAT_005dd230 * (float)((double)local_3a8 * dVar6) + fVar26 * _DAT_005dd230;
  fVar23 = _UNK_005dd234 * fVar20 + (float)((double)local_398 * dVar6) * _UNK_005dd234;
  fVar14 = (float)((double)local_398 * dVar6);
  fVar17 = (float)((double)local_3a8 * dVar6);
LAB_002b0934:
  fVar27 = (float)*(undefined8 *)(param_2 + 0x168) - fVar28;
  fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x168) >> 0x20) - fVar15;
  fVar24 = (float)*(undefined8 *)(param_2 + 0x170) - fVar28;
  fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0x170) >> 0x20) - fVar15;
  fVar21 = fVar27 * fVar17 + fVar24 * fVar20;
  fVar16 = fVar27 * fVar26 + fVar24 * fVar14;
  fVar28 = fVar27 * fVar22 + fVar24 * fVar23 + fVar28;
  fVar24 = fVar17 * fVar29 + fVar20 * fVar25;
  fVar26 = fVar26 * fVar29 + fVar14 * fVar25;
  fVar15 = fVar29 * fVar22 + fVar23 * fVar25 + fVar15;
  fVar14 = *(float *)(param_2 + 0x100);
  fVar17 = *(float *)(param_2 + 0x104);
  fVar20 = *(float *)(param_2 + 0x10c);
  fVar22 = *(float *)(param_2 + 0x110);
  local_388._4_4_ = fVar14 * fVar16 + fVar17 * fVar26;
  local_388._0_4_ = fVar14 * fVar21 + fVar17 * fVar24;
  uStack_380._4_4_ = (int)(fVar21 * fVar20 + fVar24 * fVar22);
  uStack_380._0_4_ = fVar14 * fVar28 + fVar17 * fVar15 + *(float *)(param_2 + 0x108);
  local_378 = CONCAT44(fVar28 * fVar20 + fVar15 * fVar22 + *(float *)(param_2 + 0x114),
                       fVar16 * fVar20 + fVar26 * fVar22);
  Path::applyTransform(param_1,(float *)&local_388);
  if (0 < local_3e8._4_4_) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      plVar11 = *(long **)(local_3f0 + lVar13);
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar12 < local_3e8._4_4_);
  }
  free(local_3f0);
  return param_1;
}


