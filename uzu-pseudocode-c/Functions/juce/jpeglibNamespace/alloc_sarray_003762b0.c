// Function : alloc_sarray
// Namespace: juce:jpeglibNamespace
// Entry    : 003762b0
// Prototype: long alloc_sarray(long * param_1, undefined8 param_2, uint param_3, uint param_4)
// Body     : 003762b0 - 003764d1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::alloc_sarray(juce::jpeglibNamespace::jpeg_common_struct*, int, unsigned
   int, unsigned int) */

long __cdecl
juce::jpeglibNamespace::alloc_sarray(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  size_t __size;
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar10 = (uint)param_2;
  lVar3 = param_1[1];
  uVar8 = 0x3b9ac9e8 / (ulong)param_3;
  if (0x3b9ac9e8 < param_3) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x48;
    (*(code *)*puVar5)(param_1,param_2,0x3b9ac9e8 % (ulong)param_3);
  }
  if (param_4 <= (uint)uVar8) {
    uVar8 = (ulong)param_4;
  }
  *(int *)(lVar3 + 0xa0) = (int)uVar8;
  lVar3 = alloc_small(param_1,uVar10,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar13 = (ulong)param_3;
    uVar11 = 0;
    do {
      uVar7 = (ulong)(param_4 - uVar11);
      if ((uint)uVar8 < param_4 - uVar11) {
        uVar7 = uVar8;
      }
      uVar8 = uVar7 * uVar13;
      lVar9 = param_1[1];
      if (0x3b9ac9e8 < uVar8) {
        *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
        (**(code **)*param_1)(param_1);
      }
      uVar4 = (ulong)((uint)uVar8 & 7);
      lVar12 = 8 - uVar4;
      if (uVar4 == 0) {
        lVar12 = 0;
      }
      if (1 < uVar10) {
        lVar1 = *param_1;
        *(undefined4 *)(lVar1 + 0x28) = 0xf;
        *(uint *)(lVar1 + 0x2c) = uVar10;
        (**(code **)*param_1)();
      }
      __size = lVar12 + uVar8 + 0x18;
      puVar5 = malloc(__size);
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
        (**(code **)*param_1)();
      }
      *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + __size;
      *puVar5 = *(undefined8 *)(lVar9 + 0x78 + (long)(int)uVar10 * 8);
      puVar5[1] = lVar12 + uVar8;
      puVar5[2] = 0;
      *(undefined8 **)(lVar9 + 0x78 + (long)(int)uVar10 * 8) = puVar5;
      uVar2 = (uint)uVar7;
      if (uVar2 != 0) {
        puVar5 = puVar5 + 3;
        uVar6 = uVar2 & 3;
        uVar8 = uVar7;
        if ((uVar7 & 3) != 0) {
          uVar8 = (ulong)(uVar2 & 0xfffffffc);
          do {
            uVar4 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
            *(undefined8 **)(lVar3 + uVar4 * 8) = puVar5;
            puVar5 = (undefined8 *)((long)puVar5 + uVar13);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (2 < uVar2 - 1) {
          do {
            *(undefined8 **)(lVar3 + (ulong)uVar11 * 8) = puVar5;
            *(ulong *)(lVar3 + (ulong)(uVar11 + 1) * 8) = (long)puVar5 + uVar13;
            uVar2 = uVar11 + 3;
            lVar9 = (long)puVar5 + uVar13 + uVar13;
            *(long *)(lVar3 + (ulong)(uVar11 + 2) * 8) = lVar9;
            uVar11 = uVar11 + 4;
            lVar9 = lVar9 + uVar13;
            *(long *)(lVar3 + (ulong)uVar2 * 8) = lVar9;
            puVar5 = (undefined8 *)(lVar9 + uVar13);
            uVar2 = (int)uVar8 - 4;
            uVar8 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
      }
      uVar8 = uVar7;
    } while (uVar11 < param_4);
  }
  return lVar3;
}


