// Function : new_color_map_1_quant
// Namespace: juce:jpeglibNamespace
// Entry    : 0038e900
// Prototype: undefined new_color_map_1_quant(long * param_1)
// Body     : 0038e900 - 0038e90b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::new_color_map_1_quant(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::new_color_map_1_quant(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x0038e90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


