// Function : jpegWriteTerminate
// Namespace: juce:JPEGHelpers
// Entry    : 0035d4a0
// Prototype: undefined jpegWriteTerminate(long param_1)
// Body     : 0035d4a0 - 0035d4bd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JPEGHelpers::jpegWriteTerminate(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::JPEGHelpers::jpegWriteTerminate(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0035d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x28) + 0x28))
            (*(long **)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),0x200 - *(long *)(lVar1 + 8));
  return;
}


