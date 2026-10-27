// Function : use_merged_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 003787e0
// Prototype: undefined8 use_merged_upsample(long param_1)
// Body     : 003787e0 - 0037887e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::use_merged_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::use_merged_upsample(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((((((*(char *)(param_1 + 0x170) == '\0') && ((*(uint *)(param_1 + 0x3c) | 4) == 7)) &&
         (*(int *)(param_1 + 0x38) == 3)) &&
        ((*(int *)(param_1 + 0x40) == 2 && (*(int *)(param_1 + 0x7c) == 3)))) &&
       ((*(int *)(param_1 + 0x16c) == 0 &&
        ((lVar2 = *(long *)(param_1 + 0x120), *(int *)(lVar2 + 8) == 2 &&
         (*(int *)(lVar2 + 0x68) == 1)))))) && (*(int *)(lVar2 + 200) == 1)) &&
     ((((*(int *)(lVar2 + 0xc) < 3 && (*(int *)(lVar2 + 0x6c) == 1)) &&
       (*(int *)(lVar2 + 0xcc) == 1)) &&
      (((iVar1 = *(int *)(lVar2 + 0x24), iVar1 == *(int *)(param_1 + 0x188) &&
        (*(int *)(lVar2 + 0x84) == iVar1)) &&
       ((*(int *)(lVar2 + 0xe4) == iVar1 &&
        ((iVar1 = *(int *)(lVar2 + 0x28), iVar1 == *(int *)(param_1 + 0x18c) &&
         (*(int *)(lVar2 + 0x88) == iVar1)))))))))) {
    return CONCAT71((int7)((ulong)lVar2 >> 8),*(int *)(lVar2 + 0xe8) == iVar1);
  }
  return 0;
}


