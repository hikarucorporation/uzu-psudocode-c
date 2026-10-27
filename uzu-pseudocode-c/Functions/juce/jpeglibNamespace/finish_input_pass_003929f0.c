// Function : finish_input_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 003929f0
// Prototype: undefined finish_input_pass(long param_1)
// Body     : 003929f0 - 00392a10


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_input_pass(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_input_pass(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x250) + 0x10))();
  **(undefined8 **)(param_1 + 0x240) = consume_markers;
  return;
}


