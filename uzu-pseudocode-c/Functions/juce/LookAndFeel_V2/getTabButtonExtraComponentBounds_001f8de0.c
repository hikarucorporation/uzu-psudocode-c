// Function : getTabButtonExtraComponentBounds
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f8de0
// Prototype: undefined1[16] getTabButtonExtraComponentBounds(undefined8 param_1_00, long param_2, int * param_3, long param_4)
// Body     : 001f8de0 - 001f8ed8


/* juce::LookAndFeel_V2::getTabButtonExtraComponentBounds(juce::TabBarButton const&,
   juce::Rectangle<int>&, juce::Component&) */

undefined1  [16] __thiscall
juce::LookAndFeel_V2::getTabButtonExtraComponentBounds
          (undefined8 param_1_00,long param_2,int *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = *(uint *)(*(long *)(param_2 + 0x1f8) + 0x150);
  if (*(int *)(param_2 + 0x210) == 0) {
    if (uVar1 < 2) {
      uVar4 = *(undefined8 *)param_3;
      iVar3 = param_3[2];
      iVar2 = *(int *)(param_4 + 0x40);
      if (iVar3 < *(int *)(param_4 + 0x40)) {
        iVar2 = iVar3;
      }
      *param_3 = iVar2 + *param_3;
      param_3[2] = iVar3 - iVar2;
      auVar8._12_4_ = param_3[3];
      auVar8._8_4_ = iVar2;
      auVar8._0_8_ = uVar4;
      return auVar8;
    }
    if (uVar1 != 2) {
      if (uVar1 != 3) goto LAB_001f8ea8;
      goto LAB_001f8e22;
    }
  }
  else {
    if (uVar1 < 2) {
      iVar3 = param_3[2];
      iVar2 = *(int *)(param_4 + 0x40);
      if (iVar3 < *(int *)(param_4 + 0x40)) {
        iVar2 = iVar3;
      }
      auVar6._0_4_ = (*param_3 + iVar3) - iVar2;
      param_3[2] = iVar3 - iVar2;
      auVar6._4_4_ = param_3[1];
      auVar6._12_4_ = param_3[3];
      auVar6._8_4_ = iVar2;
      return auVar6;
    }
    if (uVar1 == 2) {
LAB_001f8e22:
      iVar3 = param_3[3];
      iVar2 = *(int *)(param_4 + 0x44);
      if (iVar3 < *(int *)(param_4 + 0x44)) {
        iVar2 = iVar3;
      }
      param_3[1] = iVar2 + param_3[1];
      param_3[3] = iVar3 - iVar2;
      auVar5._12_4_ = iVar2;
      auVar5._8_4_ = param_3[2];
      auVar5._0_8_ = *(undefined8 *)param_3;
      return auVar5;
    }
    if (uVar1 != 3) {
LAB_001f8ea8:
      return ZEXT816(0);
    }
  }
  iVar3 = param_3[3];
  iVar2 = *(int *)(param_4 + 0x44);
  if (iVar3 < *(int *)(param_4 + 0x44)) {
    iVar2 = iVar3;
  }
  param_3[3] = iVar3 - iVar2;
  auVar7._4_4_ = (param_3[1] + iVar3) - iVar2;
  auVar7._0_4_ = *param_3;
  auVar7._12_4_ = iVar2;
  auVar7._8_4_ = param_3[2];
  return auVar7;
}


