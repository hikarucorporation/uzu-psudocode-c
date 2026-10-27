// Function : errorCallback
// Namespace: juce:PNGHelpers
// Entry    : 00396060
// Prototype: undefined errorCallback(long param_1)
// Body     : 00396060 - 0039606e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PNGHelpers::errorCallback(juce::pnglibNamespace::png_struct_def*, char const*) */

void __cdecl juce::PNGHelpers::errorCallback(long param_1)

{
                    /* WARNING: Subroutine does not return */
  longjmp(*(__jmp_buf_tag **)(param_1 + 0x10),1);
}


