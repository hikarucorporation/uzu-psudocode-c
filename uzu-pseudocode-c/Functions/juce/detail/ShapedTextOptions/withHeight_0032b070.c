// Function : withHeight
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 0032b070
// Prototype: undefined withHeight(undefined4 param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 0032b070 - 0032b18b


/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::ShapedTextOptions::withHeight(float) const */

void __cdecl
juce::detail::ShapedTextOptions::withHeight
          (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_3 + 5);
  uVar3 = param_3[0xd];
  uVar9 = param_3[0xb];
  uVar10 = param_3[0xc];
  lVar4 = param_3[0xe];
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_80 = CONCAT44(param_1,(int)uVar8);
  local_78 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  *(undefined4 *)(param_2 + 4) = local_78;
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uStack_80;
  param_2[5] = local_70;
  param_2[6] = uStack_68;
  param_2[7] = local_60;
  param_2[8] = local_58;
  param_2[9] = uStack_50;
  param_2[10] = local_48;
  param_2[0xd] = uVar3;
  param_2[0xb] = uVar9;
  param_2[0xc] = uVar10;
  param_2[0xe] = lVar4;
  return;
}


