// Function : withBaselineAtZero
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00308490
// Prototype: undefined withBaselineAtZero(ShapedTextOptions * this, undefined8 * param_1)
// Body     : 00308490 - 0030858e


/* juce::detail::ShapedTextOptions::withBaselineAtZero(bool) const */

void __thiscall
juce::detail::ShapedTextOptions::withBaselineAtZero(ShapedTextOptions *this,undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_38;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_1 + 5);
  uVar3 = param_1[0xd];
  uVar9 = param_1[0xb];
  uVar10 = param_1[0xc];
  lVar4 = param_1[0xe];
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_38._5_3_ = (undefined3)((ulong)uVar10 >> 0x28);
  uStack_38._0_5_ = CONCAT14(1,(int)uVar10);
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)this = uVar5;
  *(undefined8 *)(this + 8) = uVar6;
  *(undefined8 *)(this + 0x28) = local_70;
  *(undefined8 *)(this + 0x30) = uStack_68;
  *(undefined8 *)(this + 0x38) = local_60;
  *(undefined8 *)(this + 0x40) = local_58;
  *(undefined8 *)(this + 0x48) = uStack_50;
  *(undefined8 *)(this + 0x50) = local_48;
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar9;
  *(undefined8 *)(this + 0x60) = uStack_38;
  *(long *)(this + 0x70) = lVar4;
  return;
}


