// Function : jpegWriteFlush
// Namespace: juce:JPEGHelpers
// Entry    : 0035d470
// Prototype: undefined jpegWriteFlush(long param_1)
// Body     : 0035d470 - 0035d494


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JPEGHelpers::jpegWriteFlush(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::JPEGHelpers::jpegWriteFlush(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *puVar1 = puVar1[6];
  puVar1[1] = 0x200;
  (**(code **)(*(long *)puVar1[5] + 0x28))((long *)puVar1[5],puVar1[6],0x200);
  return;
}


