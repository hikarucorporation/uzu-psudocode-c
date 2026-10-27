// Function : finish_output_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 003787c0
// Prototype: undefined finish_output_pass(long param_1)
// Body     : 003787c0 - 003787dd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_output_pass(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_output_pass(long param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x220);
  if (*(char *)(param_1 + 0x62) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x270) + 0x10))();
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return;
}


