// Function : jpeg_finish_decompress
// Namespace: juce:jpeglibNamespace
// Entry    : 00378570
// Prototype: undefined jpeg_finish_decompress(long * param_1)
// Body     : 00378570 - 00378648


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_finish_decompress(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::jpeg_finish_decompress(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((long)param_1 + 0x24);
  if ((iVar3 - 0xcdU < 2) && ((char)param_1[0xb] == '\0')) {
    if (*(uint *)(param_1 + 0x13) < *(uint *)(param_1 + 0xf)) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x45;
      (*(code *)*puVar2)(param_1);
    }
    (**(code **)(param_1[0x44] + 8))(param_1);
    *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
  }
  else if (iVar3 != 0xd2) {
    if (iVar3 == 0xcf) {
      *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
    }
    else {
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + 0x28) = 0x15;
      *(int *)(lVar1 + 0x2c) = iVar3;
      (**(code **)*param_1)(param_1);
    }
  }
  while (*(char *)(param_1[0x48] + 0x21) == '\0') {
    iVar3 = (**(code **)param_1[0x48])(param_1);
    if (iVar3 == 0) {
      return;
    }
  }
  (**(code **)(param_1[5] + 0x30))(param_1);
  if (param_1[1] == 0) {
    return;
  }
  (**(code **)(param_1[1] + 0x48))(param_1,1);
  if ((char)param_1[4] == '\0') {
    *(undefined4 *)((long)param_1 + 0x24) = 100;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  param_1[0x2f] = 0;
  return;
}


