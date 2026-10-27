// Function : read_restart_marker
// Namespace: juce:jpeglibNamespace
// Entry    : 003918a0
// Prototype: undefined8 read_restart_marker(long * param_1)
// Body     : 003918a0 - 00391923


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::read_restart_marker(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::read_restart_marker(long *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)((long)param_1 + 0x21c);
  if (iVar4 == 0) {
    uVar5 = next_marker(param_1);
    if ((char)uVar5 == '\0') {
      return 0;
    }
    iVar4 = *(int *)((long)param_1 + 0x21c);
  }
  iVar1 = *(int *)(param_1[0x49] + 0x1c);
  if (iVar4 == iVar1 + 0xd0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 100;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
  }
  else {
    cVar3 = (**(code **)(param_1[5] + 0x28))(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  lVar2 = param_1[0x49];
  *(uint *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1U & 7;
  return CONCAT71((int7)((ulong)lVar2 >> 8),1);
}


