// Function : start_input_pass_jdcoefct
// Namespace: juce:jpeglibNamespace
// Entry    : 0037b800
// Prototype: undefined start_input_pass_jdcoefct(long param_1)
// Body     : 0037b800 - 0037b845


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_input_pass_jdcoefct(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::start_input_pass_jdcoefct(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  lVar1 = *(long *)(param_1 + 0x230);
  uVar2 = 1;
  if (*(int *)(param_1 + 0x1a0) < 2) {
    uVar2 = *(undefined4 *)
             ((ulong)(*(int *)(param_1 + 400) == 1) * 0x40 + 0xc + *(long *)(param_1 + 0x1a8));
  }
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


