// Function : zcalloc
// Namespace: juce:zlibNamespace
// Entry    : 004b9500
// Prototype: undefined zcalloc(undefined8 param_1, int param_2, int param_3)
// Body     : 004b9500 - 004b9509


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::zcalloc(void*, unsigned int, unsigned int) */

void __cdecl juce::zlibNamespace::zcalloc(undefined8 param_1,int param_2,int param_3)

{
  malloc((ulong)(uint)(param_2 * param_3));
  return;
}


