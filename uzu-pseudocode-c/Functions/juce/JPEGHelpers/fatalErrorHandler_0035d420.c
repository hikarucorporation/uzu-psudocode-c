// Function : fatalErrorHandler
// Namespace: juce:JPEGHelpers
// Entry    : 0035d420
// Prototype: undefined fatalErrorHandler(long param_1)
// Body     : 0035d420 - 0035d427


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JPEGHelpers::fatalErrorHandler(juce::jpeglibNamespace::jpeg_common_struct*) */

void __cdecl juce::JPEGHelpers::fatalErrorHandler(long param_1)

{
  **(undefined1 **)(param_1 + 0x18) = 1;
  return;
}


