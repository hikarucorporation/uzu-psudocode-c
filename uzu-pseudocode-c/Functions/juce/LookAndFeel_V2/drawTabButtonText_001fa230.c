// Function : drawTabButtonText
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fa230
// Prototype: undefined drawTabButtonText(LookAndFeel_V2 * this, TabBarButton * param_1, Graphics * param_2, undefined4 param_4_00, char param_4)
// Body     : 001fa230 - 001fab48


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawTabButtonText(juce::TabBarButton&, juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawTabButtonText
          (LookAndFeel_V2 *this,TabBarButton *param_1,Graphics *param_2,undefined4 param_4_00,
          char param_4)

{
  SharedFontInternal *pSVar1;
  long *plVar2;
  pthread_mutex_t *__mutex;
  TabBarButton *pTVar3;
  SharedFontInternal *pSVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  TabBarButton *pTVar11;
  uint uVar12;
  long *plVar13;
  Graphics *this_00;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  SharedFontInternal *pSVar17;
  ulong uVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  SharedFontInternal *local_c0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  Graphics *local_98;
  undefined4 local_90;
  float local_8c;
  SharedFontInternal *local_88;
  undefined8 uStack_80;
  undefined8 local_76;
  undefined4 local_6e;
  undefined2 local_6a;
  undefined1 *local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [16];
  
  local_88 = (SharedFontInternal *)0x0;
  uStack_80 = 0;
  TabBarButton::calcAreas(param_1,(undefined1 (*) [16])local_b8,(undefined1 (*) [16])&local_88);
  pSVar17 = local_88;
  local_54 = (float)(int)uStack_80;
  local_58 = (float)SUB84(uStack_80,4);
  local_4c = local_54;
  local_50 = local_58;
  if ((*(uint *)(*(long *)(param_1 + 0x1f8) + 0x150) & 0xfffffffe) != 2) {
    local_4c = local_58;
    local_50 = local_54;
  }
  (**(code **)(*(long *)this + 0x3b0))(&local_c0,this,param_1);
  pTVar11 = Component::currentlyFocusedComponent;
  if (1 < *(int *)(local_c0 + 8)) {
                    /* try { // try from 001fa2e8 to 001fa2f1 has its CatchHandler @ 001fab91 */
    Font::SharedFontInternal::copy(&local_88,(long)local_c0);
    pSVar4 = local_c0;
    local_c0 = local_88;
    local_88 = pSVar4;
    if (pSVar4 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar1 = pSVar4 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)pSVar4 + 8))();
      }
    }
  }
                    /* try { // try from 001fa326 to 001fa32a has its CatchHandler @ 001fab91 */
  Font::SharedFontInternal::setUnderline(local_c0,pTVar11 == param_1);
  pSVar4 = local_c0;
  __mutex = (pthread_mutex_t *)(local_c0 + 0x80);
  local_98 = param_2;
  local_90 = param_4_00;
  pthread_mutex_lock(__mutex);
  plVar13 = *(long **)(pSVar4 + 0x10);
  *(long *)(pSVar4 + 0x10) = 0;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar13 + 8))();
    }
  }
  local_8c = (float)(int)pSVar17;
  local_48 = ZEXT416((uint)(float)(int)((ulong)pSVar17 >> 0x20));
  pthread_mutex_unlock(__mutex);
  _local_b8 = ZEXT416((uint)DAT_005d9038);
  local_a8 = 0x3f800000;
  uVar6 = *(uint *)(*(long *)(param_1 + 0x1f8) + 0x150);
  if (uVar6 < 2) {
    fStack_b0 = local_8c;
    local_b8 = (undefined1  [8])0x3f800000;
    fStack_ac = 0.0;
    fVar21 = DAT_005d9038;
    fVar22 = (float)local_48._0_4_;
LAB_001fa50c:
    local_a8 = CONCAT44(fVar22,fVar21);
  }
  else {
    if (uVar6 == 2) {
      local_b8._4_4_ = _UNK_005dcf14 * 1.0 + _UNK_005dcf24;
      local_b8._0_4_ = _DAT_005dcf10 * 0.0 + _DAT_005dcf20;
      fStack_b0 = _UNK_005dcf18 * 0.0 + _UNK_005dcf28 + local_8c;
      fStack_ac = _UNK_005dcf1c * 0.0 + _UNK_005dcf2c;
      fVar21 = DAT_005de400 * 1.0;
      fVar22 = (float)local_48._0_4_ + local_58 + DAT_005de400 * 0.0;
      goto LAB_001fa50c;
    }
    if (uVar6 == 3) {
      local_b8._4_4_ = _UNK_005dcef4 * 1.0 + _UNK_005dcf04;
      local_b8._0_4_ = _DAT_005dcef0 * 0.0 + _DAT_005dcf00;
      fStack_b0 = _UNK_005dcef8 * 0.0 + _UNK_005dcf08 + local_8c + local_54;
      fStack_ac = _UNK_005dcefc * 0.0 + _UNK_005dcf0c;
      fVar21 = DAT_005de400 * 1.0 + 0.0;
      fVar22 = (float)local_48._0_4_ + DAT_005de400 * 0.0 + 0.0;
      goto LAB_001fa50c;
    }
  }
                    /* try { // try from 001fa522 to 001fa529 has its CatchHandler @ 001fab87 */
  (**(code **)(**(long **)(param_1 + 0x1c0) + 0x10))(&local_88);
                    /* try { // try from 001fa534 to 001fa539 has its CatchHandler @ 001fab7f */
  cVar5 = (**(code **)(local_88 + 0x30))(&uStack_80);
                    /* try { // try from 001fa541 to 001fa546 has its CatchHandler @ 001fab77 */
  (**(code **)(local_88 + 0x58))(&uStack_80);
  if (cVar5 != '\0') {
    local_6a = 0x35;
    local_6e = 0x31383530;
    local_76 = 0x30315f726c63636a;
                    /* try { // try from 001fa572 to 001fa6f0 has its CatchHandler @ 001fab8f */
    Identifier::Identifier((Identifier *)&local_60,(byte *)&local_76);
    if ((long)*(int *)(param_1 + 0xd4) == 0) {
      bVar19 = false;
      if (local_60 != &DAT_0061ac58) goto LAB_001fa5e9;
LAB_001fa5f6:
      uVar6 = *(uint *)(this + 0xf4);
    }
    else {
      lVar10 = 0;
      do {
        bVar19 = *(undefined1 **)(*(long *)(param_1 + 200) + lVar10) == local_60;
        if (bVar19) break;
        bVar20 = (long)*(int *)(param_1 + 0xd4) * 0x18 + -0x18 != lVar10;
        lVar10 = lVar10 + 0x18;
      } while (bVar20);
      if (local_60 == &DAT_0061ac58) goto LAB_001fa5f6;
LAB_001fa5e9:
      piVar16 = (int *)(local_60 + -0x10);
      LOCK();
      iVar9 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar9 != 0) goto LAB_001fa5f6;
      operator_delete__(piVar16);
      uVar6 = *(uint *)(this + 0xf4);
    }
    if (bVar19) {
LAB_001fa602:
      if (0 < (int)uVar6) {
        lVar10 = *(long *)(this + 0xe8);
        uVar12 = 0;
        uVar14 = uVar6;
        do {
          while( true ) {
            if (*(int *)(lVar10 + (long)(int)uVar12 * 8) == 0x1005815) goto LAB_001fa846;
            uVar15 = (int)(uVar12 + uVar14) / 2;
            if (uVar15 == uVar12) goto LAB_001fa868;
            if (*(int *)(lVar10 + (long)(int)uVar15 * 8) < 0x1005816) break;
            uVar14 = uVar15;
            if ((int)uVar15 <= (int)uVar12) goto LAB_001fa868;
          }
          uVar12 = uVar15;
        } while ((int)uVar15 < (int)uVar14);
      }
      goto LAB_001fa868;
    }
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar14 = uVar6;
      do {
        while( true ) {
          if (*(int *)(*(long *)(this + 0xe8) + (long)(int)uVar12 * 8) == 0x1005815) {
            if (-1 < (int)uVar12) goto LAB_001fa602;
            goto LAB_001fa6ce;
          }
          uVar15 = (int)(uVar12 + uVar14) / 2;
          if (uVar15 == uVar12) goto LAB_001fa6ce;
          if (*(int *)(*(long *)(this + 0xe8) + (long)(int)uVar15 * 8) < 0x1005816) break;
          uVar14 = uVar15;
          if ((int)uVar15 <= (int)uVar12) goto LAB_001fa6ce;
        }
        uVar12 = uVar15;
      } while ((int)uVar15 < (int)uVar14);
    }
  }
LAB_001fa6ce:
  local_6a = 0x33;
  local_6e = 0x31383530;
  local_76 = 0x30315f726c63636a;
  Identifier::Identifier((Identifier *)&local_60,(byte *)&local_76);
  if ((long)*(int *)(param_1 + 0xd4) == 0) {
    bVar19 = false;
    if (local_60 != &DAT_0061ac58) goto LAB_001fa759;
LAB_001fa766:
    uVar6 = *(uint *)(this + 0xf4);
    this_00 = local_98;
  }
  else {
    lVar10 = 0;
    do {
      bVar19 = *(undefined1 **)(*(long *)(param_1 + 200) + lVar10) == local_60;
      if (bVar19) break;
      bVar20 = (long)*(int *)(param_1 + 0xd4) * 0x18 + -0x18 != lVar10;
      lVar10 = lVar10 + 0x18;
    } while (bVar20);
    if (local_60 == &DAT_0061ac58) goto LAB_001fa766;
LAB_001fa759:
    piVar16 = (int *)(local_60 + -0x10);
    LOCK();
    iVar9 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar9 != 0) goto LAB_001fa766;
    operator_delete__(piVar16);
    uVar6 = *(uint *)(this + 0xf4);
    this_00 = local_98;
  }
  local_98 = this_00;
  if (!bVar19) {
    cVar5 = (char)local_90;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar14 = uVar6;
      do {
        while( true ) {
          if (*(int *)(*(long *)(this + 0xe8) + (long)(int)uVar12 * 8) == 0x1005813) {
            if (-1 < (int)uVar12) goto LAB_001fa777;
            goto LAB_001fa884;
          }
          uVar15 = (int)(uVar12 + uVar14) / 2;
          if (uVar15 == uVar12) goto LAB_001fa884;
          if (*(int *)(*(long *)(this + 0xe8) + (long)(int)uVar15 * 8) < 0x1005814) break;
          uVar14 = uVar15;
          if ((int)uVar15 <= (int)uVar12) goto LAB_001fa884;
        }
        uVar12 = uVar15;
      } while ((int)uVar15 < (int)uVar14);
    }
LAB_001fa884:
    uVar6 = *(uint *)(*(long *)(param_1 + 0x1f8) + 0x14c);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1f8) + 0x140);
    plVar13 = (long *)(lVar10 + (long)(int)(uVar6 - 1) * 8 + 8);
    puVar8 = &_ZN4juce7ColoursL16transparentBlackE_5;
    uVar12 = uVar6;
    do {
      if ((int)uVar12 < 1) goto LAB_001fa8f5;
      uVar12 = uVar12 - 1;
      plVar13 = plVar13 + -1;
    } while ((TabBarButton *)**(long **)(lVar10 + (ulong)uVar12 * 8) != param_1);
    if ((uVar12 < uVar6) && (*plVar13 != 0)) {
      puVar8 = (uint *)(*plVar13 + 0x10);
    }
LAB_001fa8f5:
    uVar6 = *puVar8;
    fVar23 = (float)(uVar6 >> 0x10 & 0xff) / DAT_005de3b0;
    fVar21 = (float)(uVar6 >> 8 & 0xff) / DAT_005de3b0;
    fVar22 = (float)(uVar6 & 0xff) / DAT_005de3b0;
    fVar21 = fVar22 * fVar22 * _DAT_005de3bc +
             fVar23 * fVar23 * _DAT_005de3b8 + fVar21 * fVar21 * _DAT_005de3b4;
    if (fVar21 < 0.0) {
      fVar21 = sqrtf(fVar21);
    }
    else {
      fVar21 = SQRT(fVar21);
    }
    puVar8 = &_ZN4juce7ColoursL5whiteE_474;
    if (DAT_005d9044 <= fVar21) {
      puVar8 = &_ZN4juce7ColoursL5blackE_344;
    }
    uVar14 = *puVar8 | 0xff000000;
    goto LAB_001fa985;
  }
LAB_001fa777:
  if (0 < (int)uVar6) {
    lVar10 = *(long *)(this + 0xe8);
    uVar12 = 0;
    uVar14 = uVar6;
    do {
      while( true ) {
        if (*(int *)(lVar10 + (long)(int)uVar12 * 8) == 0x1005813) goto LAB_001fa846;
        uVar15 = (int)(uVar12 + uVar14) / 2;
        if (uVar15 == uVar12) goto LAB_001fa868;
        if (*(int *)(lVar10 + (long)(int)uVar15 * 8) < 0x1005814) break;
        uVar14 = uVar15;
        if ((int)uVar15 <= (int)uVar12) goto LAB_001fa868;
      }
      uVar12 = uVar15;
    } while ((int)uVar15 < (int)uVar14);
  }
LAB_001fa868:
  cVar5 = (char)local_90;
  this_00 = local_98;
  uVar14 = _ZN4juce7ColoursL5blackE_14;
LAB_001fa985:
  pTVar11 = param_1;
  do {
    pTVar3 = pTVar11 + 0xe8;
    if ((*(uint3 *)pTVar3 & 0x8000) != 0) break;
    pTVar11 = *(TabBarButton **)(pTVar11 + 0x30);
  } while (pTVar11 != (TabBarButton *)0x0);
  fVar21 = DAT_005d9038;
  if (param_4 == '\0') {
    fVar21 = DAT_005de3cc;
  }
  fVar22 = DAT_005d9038;
  if (cVar5 == '\0') {
    fVar22 = fVar21;
  }
  if ((*(uint3 *)pTVar3 & 0x8000) != 0) {
    fVar22 = DAT_005d9088;
  }
  iVar7 = SUB84((double)((float)(uVar14 >> 0x18) * fVar22) + DAT_005d9098,0);
  iVar9 = 0xff;
  if (iVar7 < 0xff) {
    iVar9 = iVar7;
  }
                    /* try { // try from 001faa23 to 001faa73 has its CatchHandler @ 001fab93 */
  Graphics::setColour(this_00,uVar14 & 0xffffff | iVar9 << 0x18);
  if (this_00[0x10] != (Graphics)0x0) {
    this_00[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(this_00 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(this_00 + 8) + 0xf8))(*(long **)(this_00 + 8),&local_c0);
  if (this_00[0x10] != (Graphics)0x0) {
    this_00[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(this_00 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(this_00 + 8) + 0x20))(*(long **)(this_00 + 8),local_b8);
                    /* try { // try from 001faa7b to 001faa87 has its CatchHandler @ 001fab75 */
  juce::String::trim((long *)&local_88,(long *)(param_1 + 0x158));
  uVar6 = (int)local_4c / 0xc;
  uVar18 = 1;
  if (0 < (int)uVar6) {
    uVar18 = (ulong)uVar6;
  }
                    /* try { // try from 001faabd to 001faadc has its CatchHandler @ 001fab49 */
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)this_00,(long *)&local_88,0,CONCAT44((int)local_4c,(int)local_50),
             (uint *)0x24,uVar18);
  pSVar17 = local_88 + -0x10;
  if (pSVar17 != (SharedFontInternal *)&emptyString) {
    LOCK();
    iVar9 = *(int *)pSVar17;
    *(int *)pSVar17 = *(int *)pSVar17 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(pSVar17);
    }
  }
  if (local_c0 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar17 = local_c0 + 8;
    *(int *)pSVar17 = *(int *)pSVar17 + -1;
    UNLOCK();
    if (*(int *)pSVar17 == 0) {
      (**(code **)(*(long *)local_c0 + 8))();
    }
  }
  return;
LAB_001fa846:
  cVar5 = (char)local_90;
  if (-1 < (int)uVar12) {
    uVar14 = 0;
    this_00 = local_98;
    if (uVar12 < uVar6) {
      uVar14 = *(uint *)(lVar10 + 4 + (ulong)uVar12 * 8);
    }
    goto LAB_001fa985;
  }
  goto LAB_001fa868;
}


