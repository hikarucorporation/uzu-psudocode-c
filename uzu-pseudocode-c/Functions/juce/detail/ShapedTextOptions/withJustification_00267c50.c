// Function : withJustification
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00267c50
// Prototype: undefined withJustification(undefined4 * param_1, undefined8 * param_2, undefined4 param_3)
// Body     : 00267c50 - 00267d54


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedTextOptions::withJustification(juce::Justification) const */

void __cdecl
juce::detail::ShapedTextOptions::withJustification
          (undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uStack_94 = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_90 = (undefined4)param_2[1];
  uStack_8c = (undefined4)((ulong)param_2[1] >> 0x20);
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_2 + 5);
  uVar3 = param_2[0xd];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  lVar4 = param_2[0xe];
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[8] = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *param_1 = param_3;
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_90,uStack_94);
  param_1[3] = uStack_8c;
  *(undefined8 *)(param_1 + 10) = local_70;
  *(undefined8 *)(param_1 + 0xc) = uStack_68;
  *(undefined8 *)(param_1 + 0xe) = local_60;
  *(undefined8 *)(param_1 + 0x10) = local_58;
  *(undefined8 *)(param_1 + 0x12) = uStack_50;
  *(undefined8 *)(param_1 + 0x14) = local_48;
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(long *)(param_1 + 0x1c) = lVar4;
  return;
}


