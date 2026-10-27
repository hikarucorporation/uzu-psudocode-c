// Function : zcfree
// Namespace: juce:zlibNamespace
// Entry    : 004b9510
// Prototype: undefined zcfree(undefined8 param_1, void * param_2)
// Body     : 004b9510 - 004b9517


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::zcfree(void*, void*) */

void __cdecl juce::zlibNamespace::zcfree(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}


