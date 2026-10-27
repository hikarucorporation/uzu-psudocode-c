// Function : skip_variable
// Namespace: juce:jpeglibNamespace
// Entry    : 00391930
// Prototype: ulong skip_variable(long * param_1)
// Body     : 00391930 - 00391a06


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::skip_variable(juce::jpeglibNamespace::jpeg_decompress_struct*) */

ulong __cdecl juce::jpeglibNamespace::skip_variable(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2[1] == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') {
LAB_003919f4:
      uVar7 = 0;
      goto LAB_003919f6;
    }
    pbVar5 = (byte *)*puVar2;
    uVar7 = (ulong)*pbVar5;
    lVar6 = puVar2[1] + -1;
    if (lVar6 == 0) goto LAB_0039197e;
LAB_00391958:
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = (byte *)*puVar2;
    uVar7 = (ulong)*pbVar5;
    lVar6 = puVar2[1] + -1;
    if (lVar6 != 0) goto LAB_00391958;
LAB_0039197e:
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') goto LAB_003919f4;
    pbVar5 = (byte *)*puVar2;
    lVar6 = puVar2[1];
  }
  uVar8 = (ulong)*pbVar5 | uVar7 << 8;
  lVar1 = uVar8 - 2;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = 0x5d;
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(*param_1 + 0x30) = (int)lVar1;
  (**(code **)(*param_1 + 8))(param_1,1);
  *puVar2 = pbVar5 + 1;
  puVar2[1] = lVar6 + -1;
  uVar7 = CONCAT71((int7)((ulong)(lVar6 + -1) >> 8),1);
  if (2 < uVar8) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar1);
  }
LAB_003919f6:
  return uVar7 & 0xffffffff;
}


