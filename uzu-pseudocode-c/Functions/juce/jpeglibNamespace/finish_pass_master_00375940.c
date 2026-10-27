// Function : finish_pass_master
// Namespace: juce:jpeglibNamespace
// Entry    : 00375940
// Prototype: undefined finish_pass_master(long param_1)
// Body     : 00375940 - 003759a9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass_master(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass_master(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1e0);
  (**(code **)(*(long *)(param_1 + 0x220) + 0x10))();
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x122) != '\0') {
      *(undefined4 *)(lVar2 + 0x20) = 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x20) = 2;
      goto LAB_0037599d;
    }
    if ((iVar1 != 0) || (*(undefined4 *)(lVar2 + 0x20) = 2, *(char *)(param_1 + 0x122) != '\0'))
    goto LAB_0037599d;
  }
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
LAB_0037599d:
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
  return;
}


