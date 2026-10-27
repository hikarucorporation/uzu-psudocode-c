// Function : addCurtailedLineOfText
// Namespace: juce:GlyphArrangement
// Entry    : 00306b20
// Prototype: undefined addCurtailedLineOfText(float param_1, float param_2, undefined4 param_3, GlyphArrangement * this, undefined8 * param_5, ulong * param_6, char param_7)
// Body     : 00306b20 - 00307661


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::GlyphArrangement::addCurtailedLineOfText(juce::Font const&, juce::String const&, float,
   float, float, bool) */

void __thiscall
juce::GlyphArrangement::addCurtailedLineOfText
          (float param_1,float param_2,undefined4 param_3,GlyphArrangement *this,undefined8 *param_5
          ,ulong *param_6,char param_7)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  GlyphArrangement *pGVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  ulong local_3a8;
  undefined4 *local_3a0;
  float local_398;
  float local_394;
  undefined8 local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined8 local_37c;
  undefined8 uStack_374;
  undefined8 *local_368;
  undefined8 *puStack_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  long lStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined8 *local_2f0;
  undefined8 *puStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  long lStack_2a8;
  GlyphArrangement *local_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined8 *local_270;
  undefined8 *puStack_268;
  undefined8 *local_260;
  long *local_258;
  long *plStack_250;
  long *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  void *pvStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  long *plStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a8;
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
  undefined8 local_a8 [5];
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  uStack_210 = 0;
  pvStack_1f0 = (void *)0x0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_218 = 9;
  local_1f8 = 0;
  local_398 = param_1;
  local_394 = param_2;
  detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&pvStack_1f0);
  uStack_1c0 = _DAT_005dd140;
  local_1b8 = _UNK_005dd148;
  uStack_1b0 = 0x7fffffffffffffff;
  local_1a8 = &DAT_0061ac58;
                    /* try { // try from 00306be6 to 00306bff has its CatchHandler @ 0030770e */
  detail::ShapedTextOptions::withMaxNumLines(local_198,&local_218,1);
                    /* try { // try from 00306c00 to 00306c1a has its CatchHandler @ 003076f4 */
  detail::ShapedTextOptions::withWordWrapWidth(param_3,local_120,local_198);
  plVar13 = (long *)*param_5;
  if (plVar13 != (long *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00306c29 to 00306c40 has its CatchHandler @ 003076cc */
  detail::ShapedTextOptions::withFont(local_a8,local_120,plVar13);
                    /* try { // try from 00306c41 to 00306c52 has its CatchHandler @ 003076ba */
  detail::ShapedTextOptions::withBaselineAtZero((ShapedTextOptions *)&local_390,local_a8);
                    /* try { // try from 00306c53 to 00306c6b has its CatchHandler @ 003076ab */
  detail::ShapedTextOptions::withTrailingWhitespacesShouldFit((undefined8 *)&local_318,&local_390,0)
  ;
  piVar16 = (int *)(lStack_320 + -0x10);
  local_2a0 = this;
  if (piVar16 == &emptyString) {
LAB_00306c9d:
    plVar15 = local_350;
    plVar12 = uStack_348;
    if (local_350 != uStack_348) {
LAB_003073b9:
      do {
        plVar4 = (long *)*plVar15;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar12);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00306c9d;
    operator_delete__(piVar16);
    plVar15 = local_350;
    plVar12 = uStack_348;
    if (local_350 != uStack_348) goto LAB_003073b9;
  }
  if (local_350 != (long *)0x0) {
    operator_delete(local_350);
  }
  if (local_368 != (undefined8 *)0x0) {
    operator_delete(local_368);
  }
  piVar16 = (int *)(local_38 + -0x10);
  if (piVar16 == &emptyString) {
LAB_00306cee:
    plVar15 = local_68;
    if (local_68 != local_60) {
LAB_00307419:
      do {
        plVar12 = (long *)*plVar15;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar4 = plVar12 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != local_60);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00306cee;
    operator_delete__(piVar16);
    plVar15 = local_68;
    if (local_68 != local_60) goto LAB_00307419;
  }
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
  }
  piVar16 = (int *)(local_b0 + -0x10);
  if (piVar16 == &emptyString) {
LAB_00306d5e:
    plVar13 = local_e0;
    if (local_e0 != local_d8) {
LAB_00307479:
      do {
        plVar15 = (long *)*plVar13;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar12 = plVar15 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)(*plVar15 + 8))();
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != local_d8);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00306d5e;
    operator_delete__(piVar16);
    plVar13 = local_e0;
    if (local_e0 != local_d8) goto LAB_00307479;
  }
  if (local_e0 != (long *)0x0) {
    operator_delete(local_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete(local_f8);
  }
  piVar16 = (int *)(local_128 + -0x10);
  if (piVar16 == &emptyString) {
LAB_00306db8:
    plVar13 = local_158;
    if (local_158 != local_150) {
LAB_003074d9:
      do {
        plVar15 = (long *)*plVar13;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar12 = plVar15 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)(*plVar15 + 8))();
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != local_150);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00306db8;
    operator_delete__(piVar16);
    plVar13 = local_158;
    if (local_158 != local_150) goto LAB_003074d9;
  }
  if (local_158 != (long *)0x0) {
    operator_delete(local_158);
  }
  if (local_170 != (void *)0x0) {
    operator_delete(local_170);
  }
  piVar16 = (int *)(local_1a8 + -0x10);
  if (piVar16 == &emptyString) {
LAB_00306e12:
    plVar13 = local_1d8;
    plVar15 = plStack_1d0;
    if (local_1d8 != plStack_1d0) {
LAB_00307539:
      do {
        plVar12 = (long *)*plVar13;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar4 = plVar12 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar15);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_00306e12;
    operator_delete__(piVar16);
    plVar13 = local_1d8;
    plVar15 = plStack_1d0;
    if (local_1d8 != plStack_1d0) goto LAB_00307539;
  }
  if (local_1d8 != (long *)0x0) {
    operator_delete(local_1d8);
  }
  if (pvStack_1f0 != (void *)0x0) {
    operator_delete(pvStack_1f0);
  }
  if (param_7 != '\0') {
                    /* try { // try from 00306e53 to 00306e5c has its CatchHandler @ 0030767c */
    puVar10 = operator_new__(0x1b);
    LOCK();
    *puVar10 = 0;
    UNLOCK();
    *(undefined8 *)(puVar10 + 2) = 4;
    local_3a0 = puVar10 + 4;
    puVar10[4] = 0xa680e2;
                    /* try { // try from 00306e7c to 00306e92 has its CatchHandler @ 00307662 */
    detail::ShapedTextOptions::withEllipsis(&local_390,(undefined8 *)&local_318,(long *)&local_3a0);
    puVar14 = local_2f0;
    local_318 = (undefined4)local_390;
    uStack_314 = local_390._4_4_;
    uStack_308 = uStack_380;
    uStack_304 = (undefined4)local_37c;
    uStack_300 = (undefined4)((ulong)local_37c >> 0x20);
    uStack_2fc = (undefined4)uStack_374;
    uStack_2f8 = (undefined4)((ulong)uStack_374 >> 0x20);
    local_2f0 = local_368;
    puStack_2e8 = puStack_360;
    local_2e0 = local_358;
    local_368 = (undefined8 *)0x0;
    puStack_360 = (undefined8 *)0x0;
    local_358 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      operator_delete(puVar14);
    }
    plVar13 = (long *)CONCAT44(uStack_2d4,local_2d8);
    plVar15 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
    local_2d8 = (undefined4)local_350;
    uStack_2d4 = local_350._4_4_;
    uStack_2d0 = (undefined4)uStack_348;
    uStack_2cc = uStack_348._4_4_;
    local_2c8 = local_340;
    local_350 = (long *)0x0;
    uStack_348 = (long *)0x0;
    local_340 = 0;
    if (plVar13 != plVar15) {
      plVar12 = plVar13;
      do {
        plVar4 = (long *)*plVar12;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar15);
    }
    if (plVar13 != (long *)0x0) {
      operator_delete(plVar13);
    }
    lVar11 = lStack_2a8;
    lStack_2a8 = lStack_320;
    local_2c0 = local_338;
    uStack_2b8 = uStack_330;
    local_2b0 = local_328;
    lStack_320 = lVar11;
    piVar16 = (int *)(lVar11 + -0x10);
    if (piVar16 == &emptyString) {
LAB_00306fb7:
      plVar13 = local_350;
      plVar15 = uStack_348;
      if (local_350 != uStack_348) {
LAB_003075f9:
        do {
          plVar12 = (long *)*plVar13;
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar4 = plVar12 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar15);
      }
    }
    else {
      LOCK();
      iVar3 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_00306fb7;
      operator_delete__(piVar16);
      plVar13 = local_350;
      plVar15 = uStack_348;
      if (local_350 != uStack_348) goto LAB_003075f9;
    }
    if (local_350 != (long *)0x0) {
      operator_delete(local_350);
    }
    if (local_368 != (undefined8 *)0x0) {
      operator_delete(local_368);
    }
    piVar16 = local_3a0 + -4;
    if (piVar16 != &emptyString) {
      LOCK();
      iVar3 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar16);
      }
    }
  }
  puVar9 = puStack_2e8;
  puVar14 = local_2f0;
  local_3a8 = *param_6;
  piVar16 = (int *)(local_3a8 - 0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    *piVar16 = *piVar16 + 1;
    UNLOCK();
  }
  local_278 = uStack_2f8;
  local_298._4_4_ = uStack_314;
  local_298._0_4_ = local_318;
  local_288 = CONCAT44(uStack_304,uStack_308);
  uStack_280 = CONCAT44(uStack_2fc,uStack_300);
  uVar17 = (long)puStack_2e8 - (long)local_2f0 >> 4;
  local_270 = (undefined8 *)0x0;
  puStack_268 = (undefined8 *)0x0;
  local_260 = (undefined8 *)0x0;
  if ((long)puStack_2e8 - (long)local_2f0 == 0) {
    local_270 = (undefined8 *)0x0;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00307658 to 0030765c has its CatchHandler @ 0030772d */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00307098 to 0030709f has its CatchHandler @ 0030772d */
    local_270 = operator_new(SUB168(auVar5 * ZEXT816(0x10),0));
  }
  local_260 = local_270 + uVar17 * 2;
  puStack_268 = local_270;
  if (puVar14 != puVar9) {
    do {
      uVar7 = puVar14[1];
      *puStack_268 = *puVar14;
      puStack_268[1] = uVar7;
      puVar14 = puVar14 + 2;
      puStack_268 = puStack_268 + 2;
    } while (puVar14 != puVar9);
  }
  plVar13 = (long *)CONCAT44(uStack_2d4,local_2d8);
  plVar15 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
  lVar11 = (long)plVar15 - (long)plVar13;
  uVar17 = lVar11 >> 3;
  local_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  local_248 = (long *)0x0;
  if (lVar11 == 0) {
    local_258 = (long *)0x0;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0030765d to 00307661 has its CatchHandler @ 0030771b */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00307136 to 0030713d has its CatchHandler @ 0030771b */
    local_258 = operator_new(SUB168(auVar6 * ZEXT816(8),0));
  }
  local_248 = local_258 + uVar17;
  plStack_250 = local_258;
  for (; plVar13 != plVar15; plVar13 = plVar13 + 1) {
    lVar11 = *plVar13;
    *plStack_250 = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plStack_250 = plStack_250 + 1;
  }
  local_240 = local_2c0;
  uStack_238 = uStack_2b8;
  local_230 = local_2b0;
  local_228 = lStack_2a8;
  piVar16 = (int *)(lStack_2a8 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    *piVar16 = *piVar16 + 1;
    UNLOCK();
  }
                    /* try { // try from 003071d4 to 003071ea has its CatchHandler @ 00307696 */
  detail::ShapedText::ShapedText((ShapedText *)&local_390,&local_3a8,&local_298);
  piVar16 = (int *)(local_228 + -0x10);
  if (piVar16 == &emptyString) {
LAB_0030720d:
    plVar13 = local_258;
    plVar15 = plStack_250;
    pGVar8 = local_2a0;
    if (local_258 != plStack_250) {
LAB_00307599:
      do {
        plVar12 = (long *)*plVar13;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar4 = plVar12 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
        plVar13 = plVar13 + 1;
        pGVar8 = local_2a0;
      } while (plVar13 != plVar15);
    }
  }
  else {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_0030720d;
    operator_delete__(piVar16);
    plVar13 = local_258;
    plVar15 = plStack_250;
    pGVar8 = local_2a0;
    if (local_258 != plStack_250) goto LAB_00307599;
  }
  local_2a0 = pGVar8;
  if (local_258 != (long *)0x0) {
    operator_delete(local_258);
  }
  if (local_270 != (undefined8 *)0x0) {
    operator_delete(local_270);
  }
  piVar16 = (int *)(local_3a8 - 0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar16);
    }
  }
                    /* try { // try from 0030726d to 00307285 has its CatchHandler @ 00307684 */
  addGlyphsFromShapedText(local_398,local_394,(long *)pGVar8,&local_390);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)CONCAT44(uStack_384,uStack_388);
  if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_003072ef:
    piVar16 = (int *)(lStack_2a8 + -0x10);
    if (piVar16 == &emptyString) goto LAB_00307312;
  }
  else if (*(long *)(this_00 + 8) == 0x100000001) {
    *(undefined8 *)(this_00 + 8) = 0;
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
    piVar16 = (int *)(lStack_2a8 + -0x10);
    if (piVar16 == &emptyString) goto LAB_00307312;
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = this_00 + 8;
      iVar3 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar3 + -1;
    }
    if (iVar3 != 1) goto LAB_003072ef;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    piVar16 = (int *)(lStack_2a8 + -0x10);
    if (piVar16 == &emptyString) goto LAB_00307312;
  }
  LOCK();
  iVar3 = *piVar16;
  *piVar16 = *piVar16 + -1;
  UNLOCK();
  if (iVar3 == 0) {
    operator_delete__(piVar16);
  }
LAB_00307312:
  plVar13 = (long *)CONCAT44(uStack_2d4,local_2d8);
  plVar15 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
  if (plVar13 != plVar15) {
    do {
      plVar12 = (long *)*plVar13;
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
    plVar13 = (long *)CONCAT44(uStack_2d4,local_2d8);
  }
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  if (local_2f0 != (undefined8 *)0x0) {
    operator_delete(local_2f0);
  }
  return;
}


