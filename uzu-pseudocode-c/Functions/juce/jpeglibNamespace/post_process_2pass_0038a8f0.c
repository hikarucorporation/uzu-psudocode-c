// Function : post_process_2pass
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a8f0
// Prototype: undefined post_process_2pass(long param_1)
// Body     : 0038a8f0 - 0038a9a0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::post_process_2pass(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl juce::jpeglibNamespace::post_process_2pass(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long in_R8;
  uint *in_R9;
  uint uVar5;
  int in_stack_00000008;
  
  lVar1 = *(long *)(param_1 + 0x238);
  uVar3 = *(uint *)(lVar1 + 0x28);
  if (uVar3 == 0) {
    lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x24),
                       *(undefined4 *)(lVar1 + 0x20),0);
    *(long *)(lVar1 + 0x18) = lVar2;
    uVar3 = *(uint *)(lVar1 + 0x28);
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  uVar4 = *(int *)(lVar1 + 0x20) - uVar3;
  uVar5 = in_stack_00000008 - *in_R9;
  if (uVar4 <= uVar5) {
    uVar5 = uVar4;
  }
  uVar4 = *(int *)(param_1 + 0x78) - *(int *)(lVar1 + 0x24);
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,lVar2 + (ulong)uVar3 * 8,in_R8 + (ulong)*in_R9 * 8,uVar4);
  *in_R9 = *in_R9 + uVar4;
  uVar4 = uVar4 + *(int *)(lVar1 + 0x28);
  *(uint *)(lVar1 + 0x28) = uVar4;
  if (*(uint *)(lVar1 + 0x20) <= uVar4) {
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + *(uint *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x28) = 0;
  }
  return;
}


