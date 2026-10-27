// Function : getActiveArea
// Namespace: juce:TabBarButton
// Entry    : 0021e670
// Prototype: undefined1[16] getActiveArea(TabBarButton * this)
// Body     : 0021e670 - 0021e75f


/* juce::TabBarButton::getActiveArea() const */

undefined1  [16] __thiscall juce::TabBarButton::getActiveArea(TabBarButton *this)

{
  int iVar1;
  uint uVar2;
  TabBarButton *pTVar3;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  uVar6 = *(uint *)(this + 0x40);
  uVar7 = *(uint *)(this + 0x44);
  pTVar3 = this;
  do {
    if ((*(long *)(pTVar3 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pTVar3 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_0021e6e0;
    pTVar3 = *(TabBarButton **)(pTVar3 + 0x30);
  } while (pTVar3 != (TabBarButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0021e6b9 to 0021e6c2 has its CatchHandler @ 0021e773 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0021e6c6 to 0021e6cd has its CatchHandler @ 0021e760 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0021e6e0:
  uVar2 = (**(code **)(*(long *)(pLVar4 + 0x78) + 0x10))(pLVar4 + 0x78);
  iVar1 = *(int *)(*(long *)(this + 0x1f8) + 0x150);
  if (iVar1 == 2) {
    uVar9 = uVar2;
    if ((int)uVar6 < (int)uVar2) {
      uVar9 = uVar6;
    }
    uVar5 = (ulong)uVar9;
    uVar9 = uVar6 - uVar9;
LAB_0021e714:
    uVar6 = uVar2;
    if ((int)uVar7 < (int)uVar2) {
      uVar6 = uVar7;
    }
    uVar7 = uVar7 - uVar6;
  }
  else {
    uVar5 = 0;
    uVar9 = uVar6 - uVar2;
    if ((int)uVar6 < (int)uVar2) {
      uVar9 = 0;
    }
    if (iVar1 == 3) goto LAB_0021e714;
    uVar6 = uVar2;
    if ((int)uVar9 < (int)uVar2) {
      uVar6 = uVar9;
    }
    uVar5 = (ulong)uVar6;
    uVar9 = uVar9 - uVar6;
    uVar6 = 0;
    if (iVar1 != 1) {
      uVar6 = uVar2;
      if ((int)uVar7 < (int)uVar2) {
        uVar6 = uVar7;
      }
      uVar7 = uVar7 - uVar6;
      uVar8 = (ulong)uVar7;
      if (iVar1 == 0) goto LAB_0021e724;
    }
  }
  uVar8 = (ulong)(uVar7 - uVar2);
  if ((int)uVar7 < (int)uVar2) {
    uVar8 = 0;
  }
LAB_0021e724:
  auVar10._0_8_ = uVar5 | (ulong)uVar6 << 0x20;
  auVar10._8_8_ = (ulong)uVar9 | uVar8 << 0x20;
  return auVar10;
}


