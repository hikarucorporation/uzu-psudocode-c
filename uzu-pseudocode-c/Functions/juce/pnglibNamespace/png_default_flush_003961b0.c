// Function : png_default_flush
// Namespace: juce:pnglibNamespace
// Entry    : 003961b0
// Prototype: undefined png_default_flush(long param_1)
// Body     : 003961b0 - 003961be


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_default_flush(juce::pnglibNamespace::png_struct_def*) */

void __cdecl juce::pnglibNamespace::png_default_flush(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  fflush(*(FILE **)(param_1 + 0x28));
  return;
}


