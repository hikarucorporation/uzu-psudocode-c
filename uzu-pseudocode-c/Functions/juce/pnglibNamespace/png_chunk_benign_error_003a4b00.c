// Function : png_chunk_benign_error
// Namespace: juce:pnglibNamespace
// Entry    : 003a4b00
// Prototype: undefined png_chunk_benign_error(pnglibNamespace * param_1, long param_2)
// Body     : 003a4b00 - 003a4b11


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_chunk_benign_error(juce::pnglibNamespace::png_struct_def const*, char
   const*) */

void __cdecl juce::pnglibNamespace::png_chunk_benign_error(pnglibNamespace *param_1,long param_2)

{
  if (((byte)param_1[0x52] & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  png_chunk_warning((long)param_1,param_2);
  return;
}


