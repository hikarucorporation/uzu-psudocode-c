// Function : updateLayout
// Namespace: juce:AlertWindow
// Entry    : 002886b0
// Prototype: undefined updateLayout(undefined8 param_1, undefined8 param_2, Component * param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 002886b0 - 00289ff8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::AlertWindow::updateLayout(bool) */

void __cdecl
juce::AlertWindow::updateLayout
          (undefined8 param_1,undefined8 param_2,Component *param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,uint *param_7,ulong param_8)

{
  byte *pbVar1;
  Component *pCVar2;
  long *plVar3;
  String *pSVar4;
  undefined8 *puVar5;
  Component CVar6;
  char cVar7;
  byte *pbVar8;
  SharedFontInternal *pSVar9;
  long *plVar10;
  long *plVar11;
  float *pfVar12;
  uint uVar13;
  LookAndFeel_V4 *pLVar14;
  Component *pCVar15;
  ulong uVar16;
  char *pcVar17;
  Timer *pTVar18;
  Desktop *pDVar19;
  long *plVar20;
  int iVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  int iVar26;
  LookAndFeel_V4 *pLVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  long *plVar39;
  ulong uVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  undefined8 *puVar44;
  bool bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  float fVar52;
  undefined1 auVar53 [16];
  Component *local_128;
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  SharedFontInternal *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  long *local_a0;
  ulong local_98;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  undefined1 local_58 [16];
  undefined4 local_44;
  float local_40;
  float local_3c;
  ulong local_38;
  
  pCVar15 = param_3;
  do {
    lVar32 = *(long *)(pCVar15 + 0x68);
    if ((lVar32 != 0) &&
       (pLVar14 = *(LookAndFeel_V4 **)(lVar32 + 0x10), pLVar14 != (LookAndFeel_V4 *)0x0))
    goto LAB_00288720;
    pCVar15 = *(Component **)(pCVar15 + 0x30);
  } while (pCVar15 != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002886f9 to 00288702 has its CatchHandler @ 0028a024 */
    pDVar19 = operator_new(0x1d0);
                    /* try { // try from 00288706 to 0028870d has its CatchHandler @ 0028a011 */
    Desktop::Desktop(pDVar19);
    Desktop::instance = pDVar19;
  }
  pLVar14 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00288720:
  pLVar27 = pLVar14 + 0x38;
  (**(code **)(*(long *)(pLVar14 + 0x38) + 0x40))(&local_d0,pLVar27);
  local_98 = param_2;
                    /* try { // try from 0028873d to 0028874c has its CatchHandler @ 0028a08e */
  GlyphArrangement::getStringBounds
            (&local_d0,*(byte **)(param_3 + 0xf8),extraout_RDX,lVar32,param_7,param_8);
  fVar47 = (float)local_98;
  pbVar8 = *(byte **)(param_3 + 8);
  pbVar1 = pbVar8 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
                    /* try { // try from 0028876b to 00288774 has its CatchHandler @ 0028a063 */
  GlyphArrangement::getStringBounds(&local_d0,pbVar8,extraout_RDX_00,lVar32,param_7,param_8);
  uVar22 = extraout_RDX_01;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pbVar1);
      uVar22 = extraout_RDX_02;
    }
  }
  fVar48 = *(float *)(local_d0 + 100);
  if (fVar48 <= 0.0) {
    fVar48 = *(float *)(local_d0 + 0x68);
                    /* try { // try from 002887bc to 002887c5 has its CatchHandler @ 0028a051 */
    uVar22 = Font::SharedFontInternal::getAscentDescent
                       (local_d0,(long *)&local_d0,uVar22,lVar32,param_7,param_8);
    fVar48 = fVar48 * ((float)((ulong)uVar22 >> 0x20) + (float)uVar22);
  }
  if (fVar47 <= (float)local_98) {
    fVar47 = (float)local_98;
  }
  fVar47 = fVar47 * fVar48;
  if (fVar47 < 0.0) {
    fVar47 = sqrtf(fVar47);
  }
  else {
    fVar47 = SQRT(fVar47);
  }
  local_98 = CONCAT44(local_98._4_4_,fVar47);
  if (*(long *)(param_3 + 0x30) == 0) {
                    /* try { // try from 00288822 to 00288826 has its CatchHandler @ 0028a044 */
    auVar53 = Component::getParentMonitorArea(param_3);
    iVar42 = auVar53._8_4_;
  }
  else {
    iVar42 = *(int *)(*(long *)(param_3 + 0x30) + 0x40);
  }
  iVar38 = (int)(float)local_98 * 2 + 300;
  if ((int)((float)iVar42 * (float)s_333_power__f_00652630._0_4_) < iVar38) {
    iVar38 = (int)((float)iVar42 * (float)s_333_power__f_00652630._0_4_);
  }
  local_80 = &DAT_0061ac58;
  local_78 = 0x100000000;
  local_70 = 1;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  local_f8 = *(Component **)(param_3 + 8);
  pCVar15 = local_f8 + -0x10;
  if (pCVar15 != (Component *)&emptyString) {
    LOCK();
    *(int *)pCVar15 = *(int *)pCVar15 + 1;
    UNLOCK();
  }
                    /* try { // try from 002888b5 to 002888bf has its CatchHandler @ 0028a05e */
  (**(code **)(*(long *)pLVar27 + 0x38))(local_c8,pLVar27);
                    /* try { // try from 002888c0 to 00288938 has its CatchHandler @ 0028a0ac */
  juce::String::operator+=((String *)&local_80,(String *)&local_f8);
  pSVar4 = (String *)(param_3 + 0xf8);
  uVar25 = 0;
  pCVar15 = local_f8;
  do {
    CVar6 = *pCVar15;
    if ((char)CVar6 < '\0') {
      do {
        pCVar2 = pCVar15 + 1;
        pCVar15 = pCVar15 + 1;
      } while (((byte)*pCVar2 & 0xc0) == 0x80);
    }
    else {
      pCVar15 = pCVar15 + 1;
      if (CVar6 == (Component)0x0) goto LAB_00288922;
    }
    uVar25 = uVar25 + 1;
  } while( true );
LAB_002889e2:
  (anonymous_namespace)::appendRange
            ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)&uStack_68,
             uVar25,(long *)&local_d0,(uint *)0x0);
  pCVar15 = local_f8 + -0x10;
  if (pCVar15 != (Component *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pCVar15;
    *(int *)pCVar15 = *(int *)pCVar15 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pCVar15);
    }
  }
  goto LAB_00288a25;
LAB_00288eb0:
  uVar22 = 0;
  (anonymous_namespace)::appendRange
            ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)&uStack_e0,
             uVar41,(long *)(lVar32 + 0x288),(uint *)0x0);
  piVar35 = (int *)(local_c8._0_8_ + -0x10);
  if (piVar35 != &emptyString) {
    LOCK();
    iVar42 = *piVar35;
    *piVar35 = *piVar35 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(piVar35);
    }
  }
  local_c8 = ZEXT816(0);
  local_b8 = 0;
  local_b0 = 9;
                    /* try { // try from 00288f03 to 00288f15 has its CatchHandler @ 0028a111 */
  TextLayout::createLayoutWithBalancedLineLengths
            ((float)local_58._0_4_,(TextLayout *)local_c8,(ulong *)&local_f8);
  pSVar9 = *(SharedFontInternal **)(lVar32 + 0x288);
  fVar47 = *(float *)(pSVar9 + 100);
  fVar48 = local_b8._4_4_;
  if (fVar47 <= DAT_005d9058) {
    local_3c = local_b8._4_4_;
    local_40 = *(float *)(pSVar9 + 0x68);
                    /* try { // try from 00288f50 to 00288f57 has its CatchHandler @ 0028a0fd */
    uVar22 = Font::SharedFontInternal::getAscentDescent
                       (pSVar9,(long *)(lVar32 + 0x288),extraout_RDX_03,uVar22,param_7,param_8);
    fVar47 = local_40 * ((float)((ulong)uVar22 >> 0x20) + (float)uVar22);
    fVar48 = local_3c;
  }
  uVar41 = (int)(fVar48 + fVar47);
  if ((int)uVar13 <= (int)(fVar48 + fVar47)) {
    uVar41 = uVar13;
  }
  param_7 = (uint *)(ulong)uVar41;
                    /* try { // try from 00288f9f to 00288fa3 has its CatchHandler @ 0028a111 */
  Component::setBounds
            ((Component *)(lVar32 + 8),*(int *)(lVar32 + 0x40),*(int *)(lVar32 + 0x44),uVar13,uVar41
            );
  uVar40 = (ulong)(uint)local_c8._12_4_;
  if (0 < (int)local_c8._12_4_) {
    uVar29 = uVar40;
    while( true ) {
      uVar23 = uVar29 - 1 & 0xffffffff;
      plVar10 = *(long **)(local_c8._0_8_ + uVar23 * 8);
      memmove((void *)(local_c8._0_8_ + uVar23 * 8),(void *)(local_c8._0_8_ + uVar23 * 8 + 8),
              (long)((int)uVar40 - (int)uVar29) << 3);
      local_c8._12_4_ = (int)uVar40 + -1;
      if (plVar10 != (long *)0x0) {
        uVar41 = *(uint *)((long)plVar10 + 0xc);
        uVar16 = (ulong)uVar41;
        if (0 < (int)uVar41) {
          iVar42 = -uVar41;
          uVar40 = uVar16;
          while( true ) {
            uVar23 = (ulong)((int)uVar40 - 1);
            lVar28 = *plVar10;
            plVar20 = *(long **)(lVar28 + uVar23 * 8);
            memmove((void *)(lVar28 + uVar23 * 8),(void *)(lVar28 + uVar23 * 8 + 8),
                    (long)((int)uVar16 + iVar42) << 3);
            *(int *)((long)plVar10 + 0xc) = *(int *)((long)plVar10 + 0xc) + -1;
            if (plVar20 != (long *)0x0) {
              *(undefined4 *)((long)plVar20 + 0x1c) = 0;
              free((void *)plVar20[2]);
              plVar11 = (long *)*plVar20;
              if (plVar11 != (long *)0x0) {
                LOCK();
                plVar3 = plVar11 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              operator_delete(plVar20);
            }
            if (uVar40 < 2) break;
            uVar16 = (ulong)*(uint *)((long)plVar10 + 0xc);
            iVar42 = iVar42 + 1;
            uVar40 = uVar40 - 1;
          }
        }
        *(undefined4 *)((long)plVar10 + 0xc) = 0;
        free((void *)*plVar10);
        operator_delete(plVar10);
        uVar16 = local_98;
      }
      if ((long)uVar29 < 2) break;
      uVar40 = (ulong)(uint)local_c8._12_4_;
      uVar29 = uVar29 - 1;
    }
  }
  free((void *)local_c8._0_8_);
  if (0 < local_d4) {
    lVar28 = 8;
    lVar30 = 0;
    do {
      plVar10 = *(long **)(CONCAT44(uStack_dc,uStack_e0) + lVar28);
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar20 = plVar10 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      lVar30 = lVar30 + 1;
      lVar28 = lVar28 + 0x18;
    } while (lVar30 < local_d4);
  }
  local_d4 = 0;
  free((void *)CONCAT44(uStack_dc,uStack_e0));
  pCVar15 = local_f8 + -0x10;
  if (pCVar15 != (Component *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pCVar15;
    *(int *)pCVar15 = *(int *)pCVar15 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pCVar15);
    }
  }
  uVar25 = uVar25 + *(int *)(lVar32 + 0x4c) + 10;
  plVar39 = plVar39 + 1;
  if (plVar39 == local_a0) goto LAB_00289184;
  goto LAB_00288dee;
code_r0x00289d76:
  lVar32 = lVar32 + 8;
  if ((long)*(int *)(param_3 + 0x3ec) * 8 == lVar32) goto LAB_00289af0;
  goto LAB_00289d70;
LAB_00288922:
  (anonymous_namespace)::appendRange
            ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)&uStack_68,
             uVar25,(long *)local_c8,(uint *)0x0);
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar39 = (long *)(local_c8._0_8_ + 8);
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*(long *)local_c8._0_8_ + 8))();
    }
  }
  pCVar15 = local_f8 + -0x10;
  if (pCVar15 == (Component *)&emptyString) {
LAB_0028896f:
    cVar7 = **(char **)pSVar4;
  }
  else {
    LOCK();
    iVar42 = *(int *)pCVar15;
    *(int *)pCVar15 = *(int *)pCVar15 + -1;
    UNLOCK();
    if (iVar42 != 0) goto LAB_0028896f;
    operator_delete__(pCVar15);
    cVar7 = **(char **)pSVar4;
  }
  if (cVar7 != '\0') {
                    /* try { // try from 0028897c to 0028898f has its CatchHandler @ 0028a059 */
    operator+((juce *)&local_f8,&DAT_00658930,pSVar4);
                    /* try { // try from 00288990 to 002889f0 has its CatchHandler @ 0028a096 */
    juce::String::operator+=((String *)&local_80,(String *)&local_f8);
    uVar25 = 0;
    pCVar15 = local_f8;
    do {
      CVar6 = *pCVar15;
      if ((char)CVar6 < '\0') {
        do {
          pCVar2 = pCVar15 + 1;
          pCVar15 = pCVar15 + 1;
        } while (((byte)*pCVar2 & 0xc0) == 0x80);
      }
      else {
        pCVar15 = pCVar15 + 1;
        if (CVar6 == (Component)0x0) goto LAB_002889e2;
      }
      uVar25 = uVar25 + 1;
    } while( true );
  }
LAB_00288a25:
                    /* try { // try from 00288a25 to 00288b1f has its CatchHandler @ 0028a0f9 */
  uVar16 = Component::findColour(param_3,0x1001810,'\0');
  if ((long)local_5c != 0) {
    lVar32 = CONCAT44(uStack_64,uStack_68);
    iVar42 = *(int *)(lVar32 + -0x14 + (long)local_5c * 0x18);
    if (iVar42 < 1) {
      iVar42 = 0;
    }
    else {
      (anonymous_namespace)::splitAttributeRanges
                ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)
                 &uStack_68,0);
      (anonymous_namespace)::splitAttributeRanges
                ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)
                 &uStack_68,iVar42);
      lVar32 = CONCAT44(uStack_64,uStack_68);
    }
    if (local_5c != 0) {
      lVar28 = 0;
      do {
        if (0 < *(int *)(lVar32 + 4 + lVar28)) {
          if (iVar42 <= *(int *)(lVar32 + lVar28)) break;
          *(int *)(lVar32 + 0x10 + lVar28) = (int)uVar16;
        }
        lVar28 = lVar28 + 0x18;
      } while ((long)local_5c * 0x18 != lVar28);
    }
  }
  (anonymous_namespace)::mergeAdjacentRanges
            ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)&uStack_68);
  if (*(int *)(param_3 + 0x338) == 0) {
    local_78 = CONCAT44(0xc,(undefined4)local_78);
    iVar42 = 0;
    TextLayout::createLayoutWithBalancedLineLengths
              ((float)iVar38,(TextLayout *)(param_3 + 0x100),(ulong *)&local_80);
  }
  else {
    local_78 = CONCAT44(9,(undefined4)local_78);
    iVar42 = 0x50;
    TextLayout::createLayoutWithBalancedLineLengths
              ((float)iVar38,(TextLayout *)(param_3 + 0x100),(ulong *)&local_80);
  }
  iVar38 = 0x136;
  if (0x136 < (int)*(float *)(param_3 + 0x110) + iVar42) {
    iVar38 = (int)*(float *)(param_3 + 0x110) + iVar42;
  }
  if (*(long *)(param_3 + 0x30) == 0) {
                    /* try { // try from 00288b4a to 00288b4e has its CatchHandler @ 0028a03c */
    auVar53 = Component::getParentMonitorArea(param_3);
    iVar42 = auVar53._8_4_;
  }
  else {
    iVar42 = *(int *)(*(long *)(param_3 + 0x30) + 0x40);
  }
  uVar25 = iVar38 + 0x28U;
  if ((int)((float)iVar42 * (float)s_333_power__f_00652630._0_4_) < (int)(iVar38 + 0x28U)) {
    uVar25 = (int)((float)iVar42 * (float)s_333_power__f_00652630._0_4_);
  }
  local_38 = (ulong)((int)*(float *)(param_3 + 0x114) + 0x28U);
  iVar42 = *(int *)(param_3 + 0x39c);
  if ((long)iVar42 == 0) {
    uVar41 = 0x28;
  }
  else {
    uVar41 = 0x28;
    lVar32 = 0;
    do {
      uVar41 = uVar41 + *(int *)(*(long *)((long)*(long **)(param_3 + 0x390) + lVar32) + 0x40) +
               0x10;
      lVar32 = lVar32 + 8;
    } while ((long)iVar42 * 8 != lVar32);
  }
  if ((int)uVar41 < (int)uVar25) {
    uVar41 = uVar25;
  }
  uVar25 = (*(int *)(param_3 + 0x3bc) + *(int *)(param_3 + 0x3ac) + *(int *)(param_3 + 0x3cc)) *
           0x32 + (int)*(float *)(param_3 + 0x114) + 0x28U;
  if ((iVar42 != 0) && (lVar32 = **(long **)(param_3 + 0x390), lVar32 != 0)) {
    uVar25 = uVar25 + *(int *)(lVar32 + 0x44) + 0x14;
  }
  iVar42 = *(int *)(param_3 + 0x3dc);
  local_44 = param_4;
  if ((long)iVar42 != 0) {
    lVar32 = *(long *)(param_3 + 0x3d0);
    lVar28 = 0;
    do {
      lVar30 = *(long *)(lVar32 + lVar28);
      uVar13 = (*(int *)(lVar30 + 0x40) * 100) / 0x50;
      if ((int)uVar13 <= (int)uVar41) {
        uVar13 = uVar41;
      }
      uVar41 = uVar13;
      iVar38 = *(int *)(lVar30 + 0x44);
      pcVar17 = *(char **)(lVar30 + 8);
      if (pcVar17 + -0x10 == (char *)&emptyString) {
        bVar45 = *pcVar17 == '\0';
      }
      else {
        LOCK();
        *(int *)(pcVar17 + -0x10) = *(int *)(pcVar17 + -0x10) + 1;
        UNLOCK();
        bVar45 = *pcVar17 == '\0';
        LOCK();
        piVar35 = (int *)(pcVar17 + -0x10);
        iVar36 = *piVar35;
        *piVar35 = *piVar35 + -1;
        UNLOCK();
        if (iVar36 == 0) {
          operator_delete__(pcVar17 + -0x10);
        }
      }
      iVar38 = uVar25 + iVar38;
      uVar25 = iVar38 + 0x1c;
      if (bVar45) {
        uVar25 = iVar38 + 10;
      }
      lVar28 = lVar28 + 8;
    } while ((long)iVar42 * 8 != lVar28);
  }
  plVar39 = *(long **)(param_3 + 0x3e0);
  iVar42 = *(int *)(param_3 + 0x3ec);
  lVar32 = (long)iVar42;
  if (lVar32 == 0) {
    lVar28 = *(long *)(param_3 + 0x30);
    if (lVar28 == 0) goto LAB_00288d34;
LAB_00288d18:
    iVar38 = *(int *)(lVar28 + 0x40);
  }
  else {
    lVar28 = 0;
    do {
      uVar13 = *(uint *)(*(long *)((long)plVar39 + lVar28) + 0x348);
      if ((int)uVar41 < (int)uVar13) {
        uVar41 = uVar13;
      }
      lVar28 = lVar28 + 8;
    } while (lVar32 * 8 != lVar28);
    lVar28 = *(long *)(param_3 + 0x30);
    if (lVar28 != 0) goto LAB_00288d18;
LAB_00288d34:
                    /* try { // try from 00288d34 to 00288d3b has its CatchHandler @ 0028a034 */
    auVar53 = Component::getParentMonitorArea(param_3);
    iVar38 = auVar53._8_4_;
    plVar39 = *(long **)(param_3 + 0x3e0);
    iVar42 = *(int *)(param_3 + 0x3ec);
    lVar32 = (long)iVar42;
  }
  if ((int)((float)iVar38 * (float)s_333_power__f_00652630._0_4_) < (int)uVar41) {
    uVar41 = (int)((float)iVar38 * (float)s_333_power__f_00652630._0_4_);
  }
  uVar16 = (ulong)uVar41;
  if (iVar42 != 0) {
    local_a0 = plVar39 + lVar32;
    uVar13 = (uint)((float)(int)uVar41 * DAT_005de3cc);
    local_58 = ZEXT416((uint)((float)(int)((float)(int)uVar41 * DAT_005de3cc) + _DAT_005de444));
    local_98 = uVar16;
LAB_00288dee:
    lVar32 = *plVar39 + -8;
    if (*plVar39 == 0) {
      lVar32 = 0;
    }
    local_f8 = (Component *)&DAT_0061ac58;
    local_e8 = 1.4013e-45;
    local_e4 = 0.0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_d4 = 0;
    uStack_f0 = (undefined1 *)0x900000000;
                    /* try { // try from 00288e42 to 00288e49 has its CatchHandler @ 0028a107 */
    TextEditor::ParagraphsModel::getText((undefined8 *)local_c8,*(long *)(lVar32 + 0x330) + 0x60);
                    /* try { // try from 00288e4a to 00288ebe has its CatchHandler @ 0028a120 */
    juce::String::operator+=((String *)&local_f8,(String *)local_c8);
    uVar41 = 0;
    pcVar17 = (char *)local_c8._0_8_;
    do {
      cVar7 = *pcVar17;
      if (cVar7 < '\0') {
        do {
          pbVar1 = (byte *)(pcVar17 + 1);
          pcVar17 = pcVar17 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
      }
      else {
        pcVar17 = pcVar17 + 1;
        if (cVar7 == '\0') goto LAB_00288eb0;
      }
      uVar41 = uVar41 + 1;
    } while( true );
  }
LAB_00289184:
  if (*(long *)(param_3 + 0x30) == 0) {
                    /* try { // try from 00289197 to 0028919e has its CatchHandler @ 0028a02c */
    auVar53 = Component::getParentMonitorArea(param_3);
    iVar42 = auVar53._12_4_;
  }
  else {
    iVar42 = *(int *)(*(long *)(param_3 + 0x30) + 0x44);
  }
  uVar41 = iVar42 - 0x32U;
  if ((int)uVar25 < (int)(iVar42 - 0x32U)) {
    uVar41 = uVar25;
  }
  uVar40 = (ulong)uVar41;
  if ((char)local_44 != '\0') {
    iVar42 = (int)uVar16;
    uVar16 = uVar16 & 0xffffffff;
    if (iVar42 < (int)*(uint *)(param_3 + 0x40)) {
      uVar16 = (ulong)*(uint *)(param_3 + 0x40);
    }
    if ((int)uVar41 < (int)*(uint *)(param_3 + 0x44)) {
      uVar40 = (ulong)*(uint *)(param_3 + 0x44);
    }
  }
  local_58._0_8_ = uVar40;
  if ((*(ushort *)(param_3 + 0xe8) & 2) != 0) {
                    /* try { // try from 0028925a to 00289264 has its CatchHandler @ 0028a04c */
    Component::setBounds
              (param_3,((int)*(undefined8 *)(param_3 + 0x40) - (int)uVar16) / 2 +
                       (int)*(undefined8 *)(param_3 + 0x38),
               ((int)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) - (int)uVar40) / 2 +
               (int)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20),(int)uVar16,(int)uVar40);
    goto LAB_00289999;
  }
  local_98 = uVar16;
  if ((*(long *)(param_3 + 0x420) == 0) ||
     (local_128 = *(Component **)(*(long *)(param_3 + 0x420) + 0x10), local_128 == (Component *)0x0)
     ) {
    if (detail::TopLevelWindowManager::singletonHolder == (Timer *)0x0) {
                    /* try { // try from 0028926a to 00289273 has its CatchHandler @ 0028a009 */
      pTVar18 = operator_new(0x48);
      *(undefined8 *)(pTVar18 + 0x30) = 0;
      *(undefined8 *)(pTVar18 + 0x38) = 0;
      *(undefined8 *)(pTVar18 + 0x20) = 0;
      *(undefined8 *)(pTVar18 + 0x28) = 0;
      *(undefined8 *)(pTVar18 + 0x10) = 0;
      *(undefined8 *)(pTVar18 + 0x18) = 0;
      *(undefined8 *)pTVar18 = 0;
      *(undefined8 *)(pTVar18 + 8) = 0;
      *(undefined8 *)(pTVar18 + 0x40) = 0;
      Timer::Timer(pTVar18);
      DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(pTVar18 + 0x28));
      *(undefined ***)pTVar18 = &PTR__TopLevelWindowManager_00710e68;
      *(undefined ***)(pTVar18 + 0x28) = &PTR__TopLevelWindowManager_00710e90;
      *(undefined8 *)(pTVar18 + 0x30) = 0;
      *(undefined8 *)(pTVar18 + 0x38) = 0;
      *(undefined8 *)(pTVar18 + 0x40) = 0;
      LOCK();
      UNLOCK();
      iVar42 = *(int *)(pTVar18 + 0x3c);
      detail::TopLevelWindowManager::singletonHolder = pTVar18;
    }
    else {
      iVar42 = *(int *)(detail::TopLevelWindowManager::singletonHolder + 0x3c);
    }
    if (0 < (long)iVar42) {
      local_100 = -1;
      local_128 = (Component *)0x0;
      uVar16 = (long)iVar42;
      do {
        if (detail::TopLevelWindowManager::singletonHolder == (Timer *)0x0) {
                    /* try { // try from 00289342 to 0028934b has its CatchHandler @ 0028a0f1 */
          pTVar18 = operator_new(0x48);
          *(undefined8 *)(pTVar18 + 0x30) = 0;
          *(undefined8 *)(pTVar18 + 0x38) = 0;
          *(undefined8 *)(pTVar18 + 0x20) = 0;
          *(undefined8 *)(pTVar18 + 0x28) = 0;
          *(undefined8 *)(pTVar18 + 0x10) = 0;
          *(undefined8 *)(pTVar18 + 0x18) = 0;
          *(undefined8 *)pTVar18 = 0;
          *(undefined8 *)(pTVar18 + 8) = 0;
          *(undefined8 *)(pTVar18 + 0x40) = 0;
          Timer::Timer(pTVar18);
          DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(pTVar18 + 0x28));
          *(undefined ***)pTVar18 = &PTR__TopLevelWindowManager_00710e68;
          *(undefined ***)(pTVar18 + 0x28) = &PTR__TopLevelWindowManager_00710e90;
          *(undefined8 *)(pTVar18 + 0x30) = 0;
          *(undefined8 *)(pTVar18 + 0x38) = 0;
          *(undefined8 *)(pTVar18 + 0x40) = 0;
          LOCK();
          UNLOCK();
          detail::TopLevelWindowManager::singletonHolder = pTVar18;
        }
        uVar40 = uVar16 - 1;
        if (uVar40 < *(uint *)(detail::TopLevelWindowManager::singletonHolder + 0x3c)) {
          pCVar15 = *(Component **)
                     (*(long *)(detail::TopLevelWindowManager::singletonHolder + 0x30) + uVar40 * 8)
          ;
          CVar6 = pCVar15[0xef];
        }
        else {
          pCVar15 = (Component *)0x0;
          CVar6 = CRam00000000000000ef;
        }
        if (CVar6 != (Component)0x0) {
          iVar42 = 0;
          for (lVar32 = *(long *)(pCVar15 + 0x30); lVar32 != 0; lVar32 = *(long *)(lVar32 + 0x30)) {
            lVar28 = __dynamic_cast(lVar32,&Component::typeinfo,&TopLevelWindow::typeinfo,0);
            iVar42 = (iVar42 + 1) - (uint)(lVar28 == 0);
          }
          if (local_100 < iVar42) {
            local_128 = pCVar15;
            local_100 = iVar42;
          }
        }
        bVar45 = 1 < (long)uVar16;
        uVar16 = uVar40;
      } while (bVar45);
      uVar16 = local_98;
      if (local_128 != (Component *)0x0) goto LAB_00289444;
    }
  }
  else {
LAB_00289444:
    uVar16 = local_98;
    if ((0 < (int)*(undefined8 *)(local_128 + 0x40)) &&
       (0 < (int)((ulong)*(undefined8 *)(local_128 + 0x40) >> 0x20))) {
                    /* try { // try from 00289460 to 00289484 has its CatchHandler @ 0028a0ef */
      fVar47 = (float)(**(code **)(*(long *)param_3 + 0x88))(param_3);
      if (Desktop::instance == (Desktop *)0x0) {
        pDVar19 = operator_new(0x1d0);
                    /* try { // try from 00289488 to 0028948f has its CatchHandler @ 00289ff9 */
        Desktop::Desktop(pDVar19);
        Desktop::instance = pDVar19;
      }
      fVar48 = *(float *)(Desktop::instance + 0x130);
      uVar40 = CONCAT44(*(int *)(local_128 + 0x44) / 2,*(int *)(local_128 + 0x40) / 2);
      pCVar15 = local_128;
      do {
        local_c8._0_8_ = uVar40;
        uStack_f0 = local_c8;
        local_f8 = pCVar15;
                    /* try { // try from 002894f1 to 002894f8 has its CatchHandler @ 0028a0fb */
        uVar40 = detail::ComponentHelpers::
                 convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
                 {lambda()#1}::operator()((_lambda___1_ *)&local_f8);
        pfVar12 = *(float **)(pCVar15 + 0x50);
        if (pfVar12 != (float *)0x0) {
          fVar50 = (float)(int)(uVar40 >> 0x20);
          uVar40 = CONCAT44((int)((float)(int)uVar40 * pfVar12[3] + fVar50 * pfVar12[4] + pfVar12[5]
                                 ),(int)(*pfVar12 * (float)(int)uVar40 + pfVar12[1] * fVar50 +
                                        pfVar12[2]));
        }
        pCVar15 = *(Component **)(pCVar15 + 0x30);
      } while (pCVar15 != (Component *)0x0);
      fVar47 = fVar47 / fVar48;
      uVar40 = CONCAT44((int)((float)(int)(uVar40 >> 0x20) / fVar47),
                        (int)((float)(int)uVar40 / fVar47));
      plVar39 = *(long **)(param_3 + 0x30);
      if (plVar39 == (long *)0x0) {
        auVar53 = Component::getParentMonitorArea(local_128);
        fVar50 = (float)auVar53._0_4_ / fVar47;
        fVar48 = (float)auVar53._4_4_ / fVar47;
        iVar38 = -0x80000000;
        iVar42 = -0x80000000;
        if (DAT_00653430 < fVar50) {
          fVar46 = floorf(fVar50);
          iVar42 = (int)fVar46;
        }
        fVar46 = (float)auVar53._12_4_;
        if (DAT_00653430 < fVar48) {
          local_a0 = (long *)CONCAT44(local_a0._4_4_,(float)auVar53._12_4_);
          fVar46 = floorf(fVar48);
          iVar38 = (int)fVar46;
          fVar46 = local_a0._0_4_;
        }
        fVar50 = fVar50 + (float)auVar53._8_4_ / fVar47;
        iVar21 = 0x7fffffff;
        iVar36 = 0x7fffffff;
        fVar52 = fVar46 / fVar47;
        if (fVar50 < DAT_00653434) {
          local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar46 / fVar47);
          fVar47 = ceilf(fVar50);
          iVar36 = (int)fVar47;
          fVar52 = local_a0._0_4_;
        }
        if (fVar48 + fVar52 < DAT_00653434) {
          fVar47 = ceilf(fVar48 + fVar52);
          iVar21 = (int)fVar47;
        }
        lVar32 = CONCAT44(iVar21 - iVar38,iVar36 - iVar42);
        uVar16 = local_98;
      }
      else {
        plVar10 = plVar39;
        do {
          plVar20 = plVar10;
          plVar10 = (long *)plVar20[6];
        } while ((long *)plVar20[6] != (long *)0x0);
        uVar40 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>(plVar20,uVar40);
        if (plVar20 != plVar39) {
          uVar40 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                             ((long)plVar20,plVar39,uVar40);
        }
        lVar32 = plVar39[8];
        iVar42 = 0;
        iVar38 = 0;
      }
      iVar43 = (int)uVar16;
      iVar37 = (int)uVar40 - ((int)(((uint)(uVar16 >> 0x1f) & 1) + iVar43) >> 1);
      iVar31 = local_58._0_4_;
      iVar34 = (int)(uVar40 >> 0x20) -
               ((int)(((uint)((ulong)local_58._0_8_ >> 0x1f) & 1) + iVar31) >> 1);
      iVar21 = (int)((ulong)lVar32 >> 0x20);
      iVar36 = 0x18;
      if (0x18 < iVar21) {
        iVar36 = iVar21;
      }
      iVar36 = iVar36 + -0x18;
      iVar21 = (int)lVar32 + -0x18;
      if ((int)lVar32 < 0x19) {
        iVar21 = 0;
      }
      iVar26 = iVar36 - iVar31;
      if (iVar31 <= iVar36) {
        iVar36 = iVar31;
      }
      iVar31 = iVar21 - iVar43;
      if (iVar43 <= iVar21) {
        iVar21 = iVar43;
      }
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      iVar31 = iVar31 + 0xc + iVar42;
      if (iVar26 < 0) {
        iVar26 = 0;
      }
      if (iVar37 <= iVar31) {
        iVar31 = iVar37;
      }
      if (iVar37 < iVar42 + 0xc) {
        iVar31 = iVar42 + 0xc;
      }
      iVar42 = iVar26 + iVar38 + 0xc;
      if (iVar34 <= iVar42) {
        iVar42 = iVar34;
      }
      if (iVar34 < iVar38 + 0xc) {
        iVar42 = iVar38 + 0xc;
      }
                    /* try { // try from 00289991 to 002899ea has its CatchHandler @ 0028a0ef */
      Component::setBounds(param_3,iVar31,iVar42,iVar21,iVar36);
      goto LAB_00289999;
    }
  }
                    /* try { // try from 00289559 to 002897b8 has its CatchHandler @ 0028a0ef */
  local_c8 = detail::ComponentHelpers::getParentOrMainMonitorBounds(*(long *)(param_3 + 0x30));
  pfVar12 = *(float **)(param_3 + 0x50);
  if (pfVar12 == (float *)0x0) {
    local_e4 = 0.0;
    fVar47 = 0.0;
    fVar48 = 0.0;
    fVar50 = 0.0;
    fVar46 = DAT_005d9038;
    local_e8 = DAT_005d9038;
  }
  else {
    fVar47 = pfVar12[1];
    fVar48 = pfVar12[2];
    fVar50 = pfVar12[3];
    local_e4 = pfVar12[5];
    fVar46 = *pfVar12;
    local_e8 = pfVar12[4];
  }
  fVar52 = fVar46 * local_e8 - fVar50 * fVar47;
  dVar51 = (double)fVar52;
  dVar49 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar51 >> 0x20),
                            _DAT_005d91b0 & SUB84(dVar51,0));
  if (dVar49 == DAT_005d94e0) {
    if ((fVar52 == 0.0) && (!NAN(fVar52))) goto LAB_00289734;
LAB_00289685:
    dVar51 = _DAT_005d9000 / dVar51;
    dVar49 = (double)local_e8;
    fVar50 = (float)((double)(float)((uint)fVar50 ^ _DAT_006524b0) * dVar51);
    fVar47 = (float)((double)(float)((uint)fVar47 ^ _DAT_006524b0) * dVar51);
    local_e8 = (float)((double)fVar46 * dVar51);
    local_f8 = (Component *)CONCAT44(fVar47,(float)(dVar49 * dVar51));
    fVar47 = fVar47 * local_e4;
    local_e4 = (float)((uint)fVar48 ^ _DAT_006524b0) * fVar50 - local_e4 * local_e8;
    uStack_f0 = (undefined1 *)
                CONCAT44(fVar50,(float)((uint)fVar48 ^ _DAT_006524b0) * (float)(dVar49 * dVar51) -
                                fVar47);
  }
  else {
    if ((DAT_005db368 < dVar49) && (DAT_005db370 * dVar49 < dVar49)) goto LAB_00289685;
LAB_00289734:
    local_f8 = (Component *)CONCAT44(fVar47,fVar46);
    uStack_f0 = (undefined1 *)CONCAT44(fVar50,fVar48);
  }
  auVar53 = Rectangle<int>::transformedBy((Rectangle<int> *)local_c8,(float *)&local_f8);
  Component::setBounds
            (param_3,(auVar53._0_4_ - ((int)(((uint)(uVar16 >> 0x1f) & 1) + (int)uVar16) >> 1)) +
                     auVar53._8_4_ / 2,
             auVar53._12_4_ / 2 +
             (auVar53._4_4_ -
             ((int)(((uint)((ulong)local_58._0_8_ >> 0x1f) & 1) + local_58._0_4_) >> 1)),(int)uVar16
             ,local_58._0_4_);
LAB_00289999:
  *(undefined8 *)(param_3 + 0x380) = 0xa0000000a;
  *(int *)(param_3 + 0x388) = (int)uVar16 + -0x14;
  *(int *)(param_3 + 0x38c) = local_58._0_4_ + -10;
  Component::setBounds
            (param_3 + 0x120,10,10,(int)*(undefined8 *)(param_3 + 0x388),
             (int)((ulong)*(undefined8 *)(param_3 + 0x388) >> 0x20));
  lVar32 = (long)*(int *)(param_3 + 0x39c);
  if (lVar32 != 0) {
    lVar28 = *(long *)(param_3 + 0x390);
    iVar42 = -0x10;
    lVar30 = 0;
    do {
      iVar42 = iVar42 + *(int *)(*(long *)(lVar28 + lVar30) + 0x40) + 0x10;
      lVar30 = lVar30 + 8;
    } while (lVar32 * 8 != lVar30);
    iVar42 = ((int)uVar16 - iVar42) / 2;
    lVar30 = 0;
    while( true ) {
      pCVar15 = *(Component **)(lVar28 + lVar30);
                    /* try { // try from 00289a84 to 00289a9b has its CatchHandler @ 0028a10c */
      Component::setBounds
                (pCVar15,iVar42,
                 SUB84((double)((float)*(int *)(param_3 + 0x44) * DAT_005de420) + DAT_005d9098,0) -
                 *(int *)(pCVar15 + 0x44),*(int *)(pCVar15 + 0x40),*(int *)(pCVar15 + 0x44));
      iVar38 = *(int *)(pCVar15 + 0x40);
      Component::toFront(pCVar15,'\0');
      if (lVar32 * 8 + -8 == lVar30) break;
      iVar42 = iVar42 + iVar38 + 0x10;
      lVar30 = lVar30 + 8;
    }
  }
  if ((long)*(int *)(param_3 + 0x3fc) != 0) {
    puVar44 = *(undefined8 **)(param_3 + 0x3f0);
    puVar5 = puVar44 + *(int *)(param_3 + 0x3fc);
    uVar16 = local_38;
    do {
      iVar42 = (int)uVar16;
      pCVar15 = (Component *)*puVar44;
      if (pCVar15 == (Component *)0x0) {
        lVar32 = 0;
      }
      else {
        lVar32 = __dynamic_cast(pCVar15,&Component::typeinfo,&ComboBox::typeinfo,0);
      }
      if ((long)*(int *)(param_3 + 0x3bc) != 0) {
        lVar30 = (long)*(int *)(param_3 + 0x3bc) << 3;
        lVar33 = 0;
        lVar28 = 0;
        do {
          if (*(long *)(*(long *)(param_3 + 0x3b0) + lVar33 * 8) == lVar32) {
            if (-1 < (int)(uint)lVar33) {
              if ((uint)lVar33 < *(uint *)(param_3 + 0x41c)) {
                puVar24 = (undefined8 *)((lVar28 >> 0x20) * 8 + *(long *)(param_3 + 0x410));
              }
              else {
                puVar24 = &StringArray::operator[](int)::empty;
                if (StringArray::operator[](int)::empty == '\0') {
                  iVar38 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
                  puVar24 = &StringArray::operator[](int)::empty;
                  if (iVar38 != 0) {
                    StringArray::operator[](int)::empty = &DAT_0061ac58;
                    __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                                 &__dso_handle);
                    __cxa_guard_release(&StringArray::operator[](int)::empty);
                    puVar24 = &StringArray::operator[](int)::empty;
                  }
                }
              }
              iVar38 = iVar42 + 0x12;
              if (*(char *)*puVar24 == '\0') {
                iVar38 = iVar42;
              }
              iVar42 = iVar38;
            }
            break;
          }
          lVar28 = lVar28 + 0x100000000;
          lVar33 = lVar33 + 1;
          lVar30 = lVar30 + -8;
        } while (lVar30 != 0);
      }
      if (pCVar15 == (Component *)0x0) {
        lVar32 = 0;
        iVar38 = *(int *)(param_3 + 0x3ac);
      }
      else {
        lVar32 = __dynamic_cast(pCVar15,&Component::typeinfo,&TextEditor::typeinfo,8);
        iVar38 = *(int *)(param_3 + 0x3ac);
      }
      if ((long)iVar38 != 0) {
        lVar30 = (long)iVar38 << 3;
        lVar33 = 0;
        lVar28 = 0;
        do {
          if (*(long *)(*(long *)(param_3 + 0x3a0) + lVar33 * 8) == lVar32) {
            if (-1 < (int)(uint)lVar33) {
              if ((uint)lVar33 < *(uint *)(param_3 + 0x40c)) {
                puVar24 = (undefined8 *)((lVar28 >> 0x20) * 8 + *(long *)(param_3 + 0x400));
              }
              else {
                puVar24 = &StringArray::operator[](int)::empty;
                if (StringArray::operator[](int)::empty == '\0') {
                  iVar38 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
                  puVar24 = &StringArray::operator[](int)::empty;
                  if (iVar38 != 0) {
                    StringArray::operator[](int)::empty = &DAT_0061ac58;
                    __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                                 &__dso_handle);
                    __cxa_guard_release(&StringArray::operator[](int)::empty);
                    puVar24 = &StringArray::operator[](int)::empty;
                  }
                }
              }
              iVar38 = iVar42 + 0x12;
              if (*(char *)*puVar24 == '\0') {
                iVar38 = iVar42;
              }
              iVar42 = iVar38;
            }
            break;
          }
          lVar28 = lVar28 + 0x100000000;
          lVar33 = lVar33 + 1;
          lVar30 = lVar30 + -8;
        } while (lVar30 != 0);
      }
      if ((long)*(int *)(param_3 + 0x3dc) != 0) {
        lVar32 = 0;
        do {
          if (*(Component **)(*(long *)(param_3 + 0x3d0) + lVar32) == pCVar15) {
            pcVar17 = *(char **)(pCVar15 + 8);
            if (pcVar17 + -0x10 == (char *)&emptyString) {
              bVar45 = *pcVar17 == '\0';
            }
            else {
              LOCK();
              *(int *)(pcVar17 + -0x10) = *(int *)(pcVar17 + -0x10) + 1;
              UNLOCK();
              bVar45 = *pcVar17 == '\0';
              LOCK();
              piVar35 = (int *)(pcVar17 + -0x10);
              iVar38 = *piVar35;
              *piVar35 = *piVar35 + -1;
              UNLOCK();
              if (iVar38 == 0) {
                operator_delete__(pcVar17 + -0x10);
              }
            }
            iVar38 = iVar42 + 0x12;
            if (bVar45) {
              iVar38 = iVar42;
            }
            iVar42 = iVar38;
            Component::setBounds
                      (pCVar15,SUB84((double)((float)*(int *)(param_3 + 0x40) * DAT_005d9068) +
                                     DAT_005d9098,0),iVar42,*(int *)(pCVar15 + 0x40),
                       *(int *)(pCVar15 + 0x44));
            goto LAB_00289e4c;
          }
          lVar32 = lVar32 + 8;
        } while ((long)*(int *)(param_3 + 0x3dc) * 8 != lVar32);
      }
      if ((long)*(int *)(param_3 + 0x3ec) != 0) {
        lVar32 = 0;
LAB_00289d70:
        if (*(Component **)(*(long *)(param_3 + 0x3e0) + lVar32) != pCVar15) goto code_r0x00289d76;
        Component::setBounds
                  (pCVar15,(*(int *)(param_3 + 0x40) - *(int *)(pCVar15 + 0x40)) / 2,iVar42,
                   *(int *)(pCVar15 + 0x40),*(int *)(pCVar15 + 0x44));
LAB_00289e4c:
        iVar38 = *(int *)(pCVar15 + 0x44);
        goto LAB_00289b4b;
      }
LAB_00289af0:
      iVar38 = 0x16;
                    /* try { // try from 00289b3b to 00289e47 has its CatchHandler @ 0028a105 */
      Component::setBounds
                (pCVar15,SUB84((double)((float)*(int *)(param_3 + 0x40) * DAT_005d9068) +
                               DAT_005d9098,0),iVar42,
                 SUB84((double)((float)*(int *)(param_3 + 0x40) * DAT_005de3cc) + DAT_005d9098,0),
                 0x16);
LAB_00289b4b:
      uVar16 = (ulong)(iVar42 + iVar38 + 10);
      puVar44 = puVar44 + 1;
    } while (puVar44 != puVar5);
  }
  param_3[0xea] = param_3[0xea];
  *(ushort *)(param_3 + 0xe8) =
       (ushort)*(undefined3 *)(param_3 + 0xe8) & 0xffdf |
       (ushort)(*(int *)(param_3 + 100) == 0) << 5;
  if (0 < local_5c) {
    lVar32 = 8;
    lVar28 = 0;
    do {
      plVar39 = *(long **)(CONCAT44(uStack_64,uStack_68) + lVar32);
      if (plVar39 != (long *)0x0) {
        LOCK();
        plVar10 = plVar39 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)(*plVar39 + 8))();
        }
      }
      lVar28 = lVar28 + 1;
      lVar32 = lVar32 + 0x18;
    } while (lVar28 < local_5c);
  }
  local_5c = 0;
  free((void *)CONCAT44(uStack_64,uStack_68));
  piVar35 = (int *)(local_80 + -0x10);
  if (piVar35 != &emptyString) {
    LOCK();
    iVar42 = *piVar35;
    *piVar35 = *piVar35 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(piVar35);
    }
  }
  if (local_d0 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar9 = local_d0 + 8;
    *(int *)pSVar9 = *(int *)pSVar9 + -1;
    UNLOCK();
    if (*(int *)pSVar9 == 0) {
      (**(code **)(*(long *)local_d0 + 8))();
    }
  }
  return;
}


