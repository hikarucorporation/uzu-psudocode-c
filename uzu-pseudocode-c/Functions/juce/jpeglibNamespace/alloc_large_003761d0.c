// Function : alloc_large
// Namespace: juce:jpeglibNamespace
// Entry    : 003761d0
// Prototype: undefined8 * alloc_large(long * param_1, uint param_2, ulong param_3)
// Body     : 003761d0 - 003762aa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::alloc_large(juce::jpeglibNamespace::jpeg_common_struct*, int, unsigned
   long) */

undefined8 * __cdecl juce::jpeglibNamespace::alloc_large(long *param_1,uint param_2,ulong param_3)

{
  size_t __size;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
    (**(code **)*param_1)(param_1);
  }
  uVar3 = (ulong)((uint)param_3 & 7);
  lVar5 = 8 - uVar3;
  if (uVar3 == 0) {
    lVar5 = 0;
  }
  if (1 < param_2) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(uint *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  __size = lVar5 + param_3 + 0x18;
  puVar4 = malloc(__size);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
    (**(code **)*param_1)(param_1);
  }
  *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + __size;
  *puVar4 = *(undefined8 *)(lVar1 + 0x78 + (long)(int)param_2 * 8);
  puVar4[1] = lVar5 + param_3;
  puVar4[2] = 0;
  *(undefined8 **)(lVar1 + 0x78 + (long)(int)param_2 * 8) = puVar4;
  return puVar4 + 3;
}


