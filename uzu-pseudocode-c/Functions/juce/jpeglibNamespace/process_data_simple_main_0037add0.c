// Function : process_data_simple_main
// Namespace: juce:jpeglibNamespace
// Entry    : 0037add0
// Prototype: undefined process_data_simple_main(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4)
// Body     : 0037add0 - 0037ae44


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::process_data_simple_main(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::process_data_simple_main
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x228);
  uVar3 = *(uint *)(lVar1 + 100);
  if (uVar3 <= *(uint *)(lVar1 + 0x60)) {
    iVar2 = (**(code **)(*(long *)(param_1 + 0x230) + 0x18))(param_1,lVar1 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(lVar1 + 0x60) = 0;
    uVar3 = *(uint *)(lVar1 + 100);
  }
  (**(code **)(*(long *)(param_1 + 0x238) + 8))
            (param_1,lVar1 + 0x10,lVar1 + 0x60,uVar3,param_2,param_3,param_4);
  return;
}


