// Function : png_zfree
// Namespace: juce:pnglibNamespace
// Entry    : 0039cec0
// Prototype: undefined png_zfree(long param_1, void * param_2)
// Body     : 0039cec0 - 0039ced2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_zfree(void*, void*) */

void __cdecl juce::pnglibNamespace::png_zfree(long param_1,void *param_2)

{
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return;
  }
  free(param_2);
  return;
}


