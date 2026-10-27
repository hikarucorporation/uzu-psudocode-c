// Function : alloc_small
// Namespace: juce:jpeglibNamespace
// Entry    : 00376050
// Prototype: long alloc_small(long * param_1, uint param_2, ulong param_3)
// Body     : 00376050 - 003761cf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::alloc_small(juce::jpeglibNamespace::jpeg_common_struct*, int, unsigned
   long) */

long __cdecl juce::jpeglibNamespace::alloc_small(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  size_t __size;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar1 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000038;
    (**(code **)*param_1)(param_1);
  }
  uVar11 = (ulong)((uint)param_3 & 7);
  lVar10 = 8 - uVar11;
  if (uVar11 == 0) {
    lVar10 = 0;
  }
  if (1 < param_2) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(uint *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  uVar11 = lVar10 + param_3;
  lVar10 = (long)(int)param_2;
  puVar5 = *(undefined8 **)(lVar1 + 0x68 + lVar10 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar4 = puVar5;
      uVar6 = puVar4[2];
      if (uVar11 <= uVar6) goto LAB_003761a7;
      puVar5 = (undefined8 *)*puVar4;
      puVar8 = puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar7 = extra_pool_slop;
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = first_pool_slop;
  }
  uVar6 = 0x3b9ac9e8 - uVar11;
  if (*(ulong *)(puVar7 + lVar10 * 8) <= 0x3b9ac9e8 - uVar11) {
    uVar6 = *(ulong *)(puVar7 + lVar10 * 8);
  }
  while( true ) {
    __size = uVar6 + uVar11 + 0x18;
    puVar4 = malloc(__size);
    if (puVar4 != (undefined8 *)0x0) break;
    uVar9 = uVar6 >> 1;
    bVar3 = uVar6 < 100;
    uVar6 = uVar9;
    if (bVar3) {
      *(undefined8 *)(*param_1 + 0x28) = 0x200000038;
      (**(code **)*param_1)(param_1);
    }
  }
  *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + __size;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = uVar6 + uVar11;
  puVar5 = (undefined8 *)(lVar1 + lVar10 * 8 + 0x68);
  if (puVar8 != (undefined8 *)0x0) {
    puVar5 = puVar8;
  }
  *puVar5 = puVar4;
  uVar6 = puVar4[2];
LAB_003761a7:
  lVar1 = puVar4[1];
  puVar4[1] = lVar1 + uVar11;
  puVar4[2] = uVar6 - uVar11;
  return (long)puVar4 + lVar1 + 0x18;
}


