// Function : getParentArea
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027e040
// Prototype: undefined1[16] getParentArea(MenuWindow * this, ulong param_1, long param_2)
// Body     : 0027e040 - 0027e444


/* juce::PopupMenu::HelperClasses::MenuWindow::getParentArea(juce::Point<int>, juce::Component*) */

undefined1  [16] __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::getParentArea
          (MenuWindow *this,ulong param_1,long param_2)

{
  float *pfVar1;
  ComponentHelpers *pCVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  Desktop *pDVar7;
  uint uVar6;
  LookAndFeel_V4 *pLVar8;
  ComponentHelpers *this_00;
  int iVar9;
  uint uVar10;
  double dVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ComponentHelpers *pCVar22;
  int iVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  MenuWindow *local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  ComponentHelpers *local_40;
  undefined1 *local_38;
  
  if (param_2 != 0) {
    do {
      local_70._0_8_ = param_1;
      local_80._8_8_ = local_70;
      local_80._0_8_ = param_2;
      param_1 = detail::ComponentHelpers::
                convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
                {lambda()#1}::operator()((_lambda___1_ *)local_80);
      pfVar1 = *(float **)(param_2 + 0x50);
      if (pfVar1 != (float *)0x0) {
        fVar24 = (float)(int)(param_1 >> 0x20);
        param_1 = CONCAT44((int)((float)(int)param_1 * pfVar1[3] + fVar24 * pfVar1[4] + pfVar1[5]),
                           (int)(*pfVar1 * (float)(int)param_1 + pfVar1[1] * fVar24 + pfVar1[2]));
      }
      param_2 = *(long *)(param_2 + 0x30);
    } while (param_2 != 0);
  }
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0027e105 to 0027e10c has its CatchHandler @ 0027e460 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  iVar23 = (int)((float)(int)param_1 * *(float *)(this + 0x1c8));
  iVar21 = (int)((float)(int)(param_1 >> 0x20) * *(float *)(this + 0x1c8));
  lVar13 = **(long **)(Desktop::instance + 0xe0);
  lVar14 = (long)*(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc) * 0x70;
  iVar5 = 0x7fffffff;
  lVar20 = 0;
  do {
    uVar15 = *(ulong *)(lVar13 + 0xc);
    iVar16 = (int)*(undefined8 *)(lVar13 + 4);
    iVar9 = (int)((ulong)*(undefined8 *)(lVar13 + 4) >> 0x20);
    iVar18 = (int)(uVar15 >> 0x20);
    if ((((iVar16 - iVar23 == 0 || iVar16 < iVar23) && (iVar9 <= iVar21)) &&
        (iVar23 < iVar16 + (int)uVar15)) && (iVar21 < iVar18 + iVar9)) {
      lVar20 = lVar13;
      goto LAB_0027e1ef;
    }
    dVar11 = hypot((double)((iVar16 - iVar23) +
                           ((int)(((uint)(uVar15 >> 0x1f) & 1) + (int)uVar15) >> 1)),
                   (double)((iVar9 - iVar21) + iVar18 / 2));
    if ((int)dVar11 <= iVar5) {
      iVar5 = (int)dVar11;
      lVar20 = lVar13;
    }
    lVar13 = lVar13 + 0x70;
    lVar14 = lVar14 + -0x70;
  } while (lVar14 != 0);
  uVar15 = (ulong)*(uint *)(lVar20 + 0xc);
LAB_0027e1ef:
  uVar10 = *(int *)(lVar20 + 0x28) + *(int *)(lVar20 + 4);
  uVar12 = *(int *)(lVar20 + 0x24) + *(int *)(lVar20 + 8);
  uVar6 = *(uint *)(lVar20 + 0x14);
  if ((int)uVar10 <= (int)uVar6) {
    uVar10 = uVar6;
  }
  uVar19 = *(uint *)(lVar20 + 0x18);
  if ((int)uVar12 <= (int)uVar19) {
    uVar12 = uVar19;
  }
  iVar21 = uVar6 + *(int *)(lVar20 + 0x1c);
  iVar5 = ((int)uVar15 + *(int *)(lVar20 + 4)) - *(int *)(lVar20 + 0x30);
  if (iVar21 <= iVar5) {
    iVar5 = iVar21;
  }
  if ((int)(iVar5 - uVar10) < 0) {
LAB_0027e253:
    local_50 = 0;
    local_48 = 0;
    local_58 = 0;
  }
  else {
    iVar23 = uVar19 + *(int *)(lVar20 + 0x20);
    iVar21 = (*(int *)(lVar20 + 8) + *(int *)(lVar20 + 0x10)) - *(int *)(lVar20 + 0x2c);
    if (iVar23 <= iVar21) {
      iVar21 = iVar23;
    }
    if ((int)(iVar21 - uVar12) < 0) goto LAB_0027e253;
    local_58 = CONCAT44(iVar21 - uVar12,iVar5 - uVar10);
    local_48 = (ulong)uVar12 << 0x20;
    local_50 = (ulong)uVar10;
  }
  auVar3._8_8_ = local_58;
  auVar3._0_8_ = local_48 | local_50;
  auVar26._8_8_ = local_58;
  auVar26._0_8_ = local_48 | local_50;
  if (*(long *)(this + 0x110) == 0) {
    return auVar26;
  }
  pCVar2 = *(ComponentHelpers **)(*(long *)(this + 0x110) + 0x10);
  if (pCVar2 == (ComponentHelpers *)0x0) {
    return auVar3;
  }
  local_60 = this + 0xf8;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(ulong *)(pCVar2 + 0x40);
  auVar25 = auVar25 << 0x40;
  pCVar22 = pCVar2;
  do {
    local_80 = auVar25;
    local_40 = pCVar22;
    local_38 = local_80;
    auVar25 = detail::ComponentHelpers::
              convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
              ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
    local_70 = auVar25;
    if (*(float **)(pCVar22 + 0x50) != (float *)0x0) {
      auVar25 = Rectangle<int>::transformedBy
                          ((Rectangle<int> *)local_70,*(float **)(pCVar22 + 0x50));
    }
    uVar4 = local_48;
    uVar15 = local_50;
    pCVar22 = *(ComponentHelpers **)(pCVar22 + 0x30);
  } while (pCVar22 != (ComponentHelpers *)0x0);
  do {
    if ((*(long *)(this + 0x68) != 0) &&
       (pLVar8 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
       pLVar8 != (LookAndFeel_V4 *)0x0)) goto LAB_0027e370;
    this = *(MenuWindow **)(this + 0x30);
  } while (this != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027e349 to 0027e352 has its CatchHandler @ 0027e458 */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0027e356 to 0027e35d has its CatchHandler @ 0027e445 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  pLVar8 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027e370:
  iVar5 = (**(code **)(*(long *)(pLVar8 + 0x40) + 0xc0))(pLVar8 + 0x40,local_60);
  uVar17 = 0;
  iVar21 = auVar25._8_4_ + iVar5 * -2;
  if (iVar21 < 0) {
    iVar21 = 0;
  }
  uVar12 = auVar25._0_4_ + iVar5;
  uVar19 = auVar25._4_4_ + iVar5;
  uVar10 = (uint)uVar15;
  uVar6 = uVar12;
  if ((int)uVar12 < (int)uVar10) {
    uVar6 = uVar10;
  }
  iVar23 = (int)(uVar4 >> 0x20);
  uVar15 = (ulong)uVar19;
  if ((int)uVar19 < iVar23) {
    uVar15 = uVar4 >> 0x20;
  }
  iVar18 = uVar10 + (int)local_58;
  if ((int)(iVar21 + uVar12) <= iVar18) {
    iVar18 = iVar21 + uVar12;
  }
  if (-1 < (int)(iVar18 - uVar6)) {
    iVar5 = auVar25._12_4_ + iVar5 * -2;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar23 = (int)((ulong)local_58 >> 0x20) + iVar23;
    if ((int)(iVar5 + uVar19) <= iVar23) {
      iVar23 = iVar5 + uVar19;
    }
    iVar23 = iVar23 - (int)uVar15;
    if (-1 < iVar23) {
      dVar11 = (double)CONCAT44(iVar23,iVar18 - uVar6);
      uVar15 = uVar15 << 0x20;
      uVar17 = (ulong)uVar6;
      goto LAB_0027e3f7;
    }
  }
  uVar15 = 0;
  dVar11 = 0.0;
LAB_0027e3f7:
  pCVar22 = pCVar2;
  do {
    this_00 = pCVar22;
    pCVar22 = *(ComponentHelpers **)(this_00 + 0x30);
  } while (*(ComponentHelpers **)(this_00 + 0x30) != (ComponentHelpers *)0x0);
  auVar26 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
                      (this_00,(double)(uVar15 | uVar17),dVar11);
  if (this_00 != pCVar2) {
    auVar26 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
                        (this_00,pCVar2,auVar26._0_8_,auVar26._8_8_);
  }
  return auVar26;
}


