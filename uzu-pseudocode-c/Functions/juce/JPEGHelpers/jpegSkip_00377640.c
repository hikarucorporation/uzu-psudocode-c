// Function : jpegSkip
// Namespace: juce:JPEGHelpers
// Entry    : 00377640
// Prototype: undefined jpegSkip(long param_1, long param_2)
// Body     : 00377640 - 00377658


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JPEGHelpers::jpegSkip(juce::jpeglibNamespace::jpeg_decompress_struct*, long) */

void __cdecl juce::JPEGHelpers::jpegSkip(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *plVar1 = *plVar1 + param_2;
  lVar2 = 0;
  if (param_2 <= plVar1[1]) {
    lVar2 = plVar1[1] - param_2;
  }
  plVar1[1] = lVar2;
  return;
}


