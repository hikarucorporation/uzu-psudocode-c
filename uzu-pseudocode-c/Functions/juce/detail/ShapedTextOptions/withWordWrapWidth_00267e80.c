// Function : withWordWrapWidth
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00267e80
// Prototype: undefined withWordWrapWidth(undefined4 param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 00267e80 - 00267fbc


/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::ShapedTextOptions::withWordWrapWidth(float) const */

void __cdecl
juce::detail::ShapedTextOptions::withWordWrapWidth
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
  undefined8 uStack_90;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar3 = param_3[3];
  uStack_87 = (undefined7)((ulong)param_3[2] >> 8);
  uStack_80 = (undefined1)uVar3;
  uStack_7f = (undefined4)((ulong)uVar3 >> 8);
  uStack_7b = (undefined2)((ulong)uVar3 >> 0x28);
  uStack_79 = (undefined1)((ulong)uVar3 >> 0x38);
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_70,param_3 + 5);
  uVar3 = param_3[0xd];
  uVar7 = param_3[0xb];
  uVar8 = param_3[0xc];
  lVar4 = param_3[0xe];
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_90 = CONCAT44(param_1,(int)uVar6);
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined1 *)(param_2 + 2) = 1;
  *(ulong *)((long)param_2 + 0x11) = CONCAT17(uStack_80,uStack_87);
  *(undefined4 *)((long)param_2 + 0x19) = uStack_7f;
  *(undefined2 *)((long)param_2 + 0x1d) = uStack_7b;
  *(undefined1 *)((long)param_2 + 0x1f) = uStack_79;
  *param_2 = uVar5;
  param_2[1] = uStack_90;
  param_2[5] = local_70;
  param_2[6] = uStack_68;
  param_2[7] = local_60;
  param_2[8] = local_58;
  param_2[9] = uStack_50;
  param_2[10] = local_48;
  param_2[0xd] = uVar3;
  param_2[0xb] = uVar7;
  param_2[0xc] = uVar8;
  param_2[0xe] = lVar4;
  return;
}


