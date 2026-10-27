// Function : finish_pass_huff
// Namespace: juce:jpeglibNamespace
// Entry    : 0037a320
// Prototype: undefined finish_pass_huff(long param_1)
// Body     : 0037a320 - 0037a346


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass_huff(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass_huff(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x250);
  iVar2 = *(int *)(lVar3 + 0x20);
  iVar4 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x248) + 0x20);
  *piVar1 = *piVar1 + (iVar4 >> 3);
  *(undefined4 *)(lVar3 + 0x20) = 0;
  return;
}


