// Function : withTrailingWhitespacesShouldFit
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00267b50
// Prototype: undefined withTrailingWhitespacesShouldFit(undefined8 * param_1, undefined8 * param_2, undefined1 param_3)
// Body     : 00267b50 - 00267c47


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(bool) const */

void __cdecl
juce::detail::ShapedTextOptions::withTrailingWhitespacesShouldFit
          (undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

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
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_2 + 5);
  uVar3 = param_2[0xd];
  uVar9 = param_2[0xb];
  uVar10 = param_2[0xc];
  lVar4 = param_2[0xe];
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_38._7_1_ = (undefined1)((ulong)uVar10 >> 0x38);
  uStack_38._0_7_ = CONCAT16(param_3,(int6)uVar10);
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[5] = local_70;
  param_1[6] = uStack_68;
  param_1[7] = local_60;
  param_1[8] = local_58;
  param_1[9] = uStack_50;
  param_1[10] = local_48;
  param_1[0xd] = uVar3;
  param_1[0xb] = uVar9;
  param_1[0xc] = uStack_38;
  param_1[0xe] = lVar4;
  return;
}


