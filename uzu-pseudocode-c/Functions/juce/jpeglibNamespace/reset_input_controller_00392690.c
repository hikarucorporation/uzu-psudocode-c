// Function : reset_input_controller
// Namespace: juce:jpeglibNamespace
// Entry    : 00392690
// Prototype: undefined reset_input_controller(long * param_1)
// Body     : 00392690 - 003926d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::reset_input_controller(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::reset_input_controller(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x48];
  *puVar1 = consume_markers;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)param_1[0x49])(param_1);
  param_1[0x16] = 0;
  return;
}


