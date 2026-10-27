// Function : ensureItemComponentIsVisible
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027b070
// Prototype: undefined ensureItemComponentIsVisible(MenuWindow * this, long param_1, ulong param_2)
// Body     : 0027b070 - 0027b33c


/* juce::PopupMenu::HelperClasses::MenuWindow::ensureItemComponentIsVisible(juce::PopupMenu::HelperClasses::ItemComponent
   const&, std::optional<int>) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::ensureItemComponentIsVisible
          (MenuWindow *this,long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  if (*(long *)(this + 0x110) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x110) + 0x10);
  }
  auVar22 = getParentArea(this,*(ulong *)(this + 0x168),lVar7);
  fVar20 = *(float *)(this + 0x1c8);
  fVar21 = (float)auVar22._0_4_ / fVar20;
  fVar18 = (float)auVar22._4_4_ / fVar20;
  iVar17 = -0x80000000;
  iVar2 = -0x80000000;
  if (DAT_00653430 < fVar21) {
    fVar19 = floorf(fVar21);
    iVar2 = (int)fVar19;
  }
  if (DAT_00653430 < fVar18) {
    fVar19 = floorf(fVar18);
    iVar17 = (int)fVar19;
  }
  fVar21 = fVar21 + (float)auVar22._8_4_ / fVar20;
  iVar15 = 0x7fffffff;
  iVar3 = 0x7fffffff;
  if (fVar21 < DAT_00653434) {
    fVar21 = ceilf(fVar21);
    iVar3 = (int)fVar21;
  }
  fVar18 = fVar18 + (float)auVar22._12_4_ / fVar20;
  if (fVar18 < DAT_00653434) {
    fVar20 = ceilf(fVar18);
    iVar15 = (int)fVar20;
  }
  uVar8 = *(undefined8 *)(this + 0x168);
  uVar14 = *(ulong *)(this + 0x170);
  uVar1 = *(uint *)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x44);
  uVar11 = *(uint *)(this + 0x180);
  iVar6 = (int)(uVar14 >> 0x20);
  if ((param_2 & 0xff00000000) == 0) {
    uVar10 = (ulong)uVar1;
    if ((-1 < (int)uVar1) && (uVar10 = (ulong)uVar1, (int)(iVar5 + uVar1) <= iVar6)) {
      return;
    }
  }
  else {
    uVar10 = param_2;
  }
  uVar12 = 0x18;
  if ((int)uVar1 < 0x18) {
    uVar12 = uVar1;
  }
  iVar4 = (uVar11 - uVar1) - iVar5;
  if (0x17 < iVar4) {
    iVar4 = 0x18;
  }
  uVar9 = (uint)uVar10;
  iVar13 = (int)((ulong)uVar8 >> 0x20) + uVar9;
  if (((iVar13 - iVar17 < (int)uVar12) || ((param_2 & 0xff00000000) == 0)) ||
     (uVar16 = iVar15 - iVar17, (int)(((iVar17 - iVar13) - iVar5) + uVar16) < iVar4)) {
    uVar11 = iVar6 - (iVar4 + iVar5);
    if ((int)uVar9 <= (int)uVar11) {
      uVar11 = uVar9;
    }
    if ((int)uVar9 < (int)uVar12) {
      uVar11 = uVar12;
    }
    iVar17 = uVar1 - uVar11;
  }
  else {
    uVar12 = iVar3 - iVar2;
    iVar3 = iVar13 - uVar1;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
    iVar15 = uVar16 - uVar11;
    if ((int)uVar16 < (int)uVar11) {
      uVar11 = uVar16;
    }
    iVar5 = uVar12 - (int)uVar14;
    if ((int)uVar12 < (int)uVar14) {
      uVar14 = (ulong)uVar12;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    iVar4 = (int)uVar8;
    iVar6 = iVar5 + iVar2;
    if (iVar4 <= iVar5 + iVar2) {
      iVar6 = iVar4;
    }
    if (iVar4 < iVar2) {
      iVar6 = iVar2;
    }
    iVar2 = iVar15 + iVar17;
    if (iVar3 <= iVar15 + iVar17) {
      iVar2 = iVar3;
    }
    if (iVar3 < iVar17) {
      iVar2 = iVar17;
    }
    iVar17 = (uVar1 - iVar13) + iVar2;
    uVar14 = uVar14 & 0xffffffff | (ulong)uVar11 << 0x20;
    uVar8 = CONCAT44(iVar2,iVar6);
  }
  *(undefined8 *)(this + 0x168) = uVar8;
  *(ulong *)(this + 0x170) = uVar14;
  *(int *)(this + 0x184) = iVar17;
  updateYPositions(this);
  return;
}


