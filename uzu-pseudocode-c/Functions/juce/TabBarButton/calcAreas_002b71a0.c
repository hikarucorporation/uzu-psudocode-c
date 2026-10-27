// Function : calcAreas
// Namespace: juce:TabBarButton
// Entry    : 002b71a0
// Prototype: undefined calcAreas(TabBarButton * this, undefined1[16] * param_1, undefined1[16] * param_2)
// Body     : 002b71a0 - 002b7397


/* juce::TabBarButton::calcAreas(juce::Rectangle<int>&, juce::Rectangle<int>&) const */

void __thiscall
juce::TabBarButton::calcAreas
          (TabBarButton *this,undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int iVar1;
  TabBarButton *pTVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LookAndFeel_V4 *pLVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  
  pTVar2 = this;
  do {
    if ((*(long *)(pTVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pTVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_002b7210;
    pTVar2 = *(TabBarButton **)(pTVar2 + 0x30);
  } while (pTVar2 != (TabBarButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002b71e9 to 002b71f2 has its CatchHandler @ 002b73ab */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002b71f6 to 002b71fd has its CatchHandler @ 002b7398 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002b7210:
  auVar9 = getActiveArea(this);
  *param_2 = auVar9;
  pLVar7 = pLVar3 + 0x78;
  iVar1 = (**(code **)(*(long *)(pLVar3 + 0x78) + 0x18))(pLVar7);
  if (0 < iVar1) {
    iVar4 = *(int *)(*param_2 + 8);
    if ((*(uint *)(*(long *)(this + 0x1f8) + 0x150) & 0xfffffffe) == 2) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar5 = *(int *)(*param_2 + 0xc) + iVar1 * -2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pauVar8 = (undefined1 (*) [16])(*param_2 + 4);
    }
    else {
      iVar4 = iVar4 + iVar1 * -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar5 = 0;
      if (-1 < *(int *)(*param_2 + 0xc)) {
        iVar5 = *(int *)(*param_2 + 0xc);
      }
      pauVar8 = param_2;
    }
    *(int *)*pauVar8 = *(int *)*pauVar8 + iVar1;
    *(int *)(*param_2 + 8) = iVar4;
    *(int *)(*param_2 + 0xc) = iVar5;
  }
  if (*(long *)(this + 0x208) != 0) {
    auVar9 = (**(code **)(*(long *)pLVar7 + 0x28))(pLVar7,this,param_2);
    *param_1 = auVar9;
    if ((*(uint *)(*(long *)(this + 0x1f8) + 0x150) & 0xfffffffe) == 2) {
      iVar5 = auVar9._4_4_;
      iVar1 = *(int *)(*param_2 + 4);
      iVar4 = *(int *)(*param_2 + 0xc);
      if (iVar4 / 2 + iVar1 < auVar9._12_4_ / 2 + iVar5) {
        iVar6 = iVar4 + iVar1;
        if (iVar5 < iVar4 + iVar1) {
          iVar6 = iVar5;
        }
        if (iVar6 < iVar1) {
          iVar1 = iVar6;
        }
        *(int *)(*param_2 + 4) = iVar1;
        *(int *)(*param_2 + 0xc) = iVar6 - iVar1;
      }
      else {
        iVar5 = auVar9._12_4_ + iVar5;
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        iVar4 = (iVar1 - iVar5) + iVar4;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        *(int *)(*param_2 + 0xc) = iVar4;
        *(int *)(*param_2 + 4) = iVar5;
      }
    }
    else {
      iVar5 = auVar9._0_4_;
      iVar1 = *(int *)*param_2;
      iVar4 = *(int *)(*param_2 + 8);
      if (iVar4 / 2 + iVar1 <
          ((int)(((uint)(auVar9._8_8_ >> 0x1f) & 1) + auVar9._8_4_) >> 1) + iVar5) {
        iVar6 = iVar4 + iVar1;
        if (iVar5 < iVar4 + iVar1) {
          iVar6 = iVar5;
        }
        if (iVar6 < iVar1) {
          iVar1 = iVar6;
        }
        *(int *)*param_2 = iVar1;
        *(int *)(*param_2 + 8) = iVar6 - iVar1;
      }
      else {
        iVar5 = auVar9._8_4_ + iVar5;
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        iVar4 = (iVar1 - iVar5) + iVar4;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        *(int *)(*param_2 + 8) = iVar4;
        *(int *)*param_2 = iVar5;
      }
    }
  }
  return;
}


