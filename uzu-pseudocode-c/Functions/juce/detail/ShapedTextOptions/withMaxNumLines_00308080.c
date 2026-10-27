// Function : withMaxNumLines
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00308080
// Prototype: undefined withMaxNumLines(undefined8 * param_1, undefined8 * param_2, undefined8 param_3)
// Body     : 00308080 - 00308189


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedTextOptions::withMaxNumLines(long long) const */

void __cdecl
juce::detail::ShapedTextOptions::withMaxNumLines
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_2 + 5);
  uVar8 = param_2[0xb];
  uVar9 = param_2[0xc];
  lVar3 = param_2[0xe];
  piVar1 = (int *)(lVar3 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[5] = local_70;
  param_1[6] = uStack_68;
  param_1[7] = local_60;
  param_1[8] = local_58;
  param_1[9] = uStack_50;
  param_1[10] = local_48;
  param_1[0xd] = param_3;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xe] = lVar3;
  return;
}


