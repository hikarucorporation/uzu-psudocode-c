// Function : png_zstream_error
// Namespace: juce:pnglibNamespace
// Entry    : 0039c450
// Prototype: undefined png_zstream_error(long param_1, int param_2)
// Body     : 0039c450 - 0039c487


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_zstream_error(juce::pnglibNamespace::png_struct_def*, int) */

void __cdecl juce::pnglibNamespace::png_zstream_error(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  if (param_2 + 7U < 10) {
    *(undefined **)(param_1 + 0x90) = (&PTR_s_unexpected_zlib_return_00712720)[(int)(param_2 + 7U)];
    return;
  }
  *(char **)(param_1 + 0x90) = "unexpected zlib return code";
  return;
}


