// Function : alloc_barray
// Namespace: juce:jpeglibNamespace
// Entry    : 003764e0
// Prototype: long alloc_barray(long * param_1, undefined8 param_2, ulong param_3, uint param_4)
// Body     : 003764e0 - 00376711


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::alloc_barray(juce::jpeglibNamespace::jpeg_common_struct*, int, unsigned
   int, unsigned int) */

long __cdecl
juce::jpeglibNamespace::alloc_barray(long *param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar8 = (uint)param_2;
  lVar4 = param_1[1];
  uVar12 = param_3 & 0xffffffff;
  uVar13 = uVar12 * 0x80;
  uVar10 = (uint)param_3;
  if (uVar13 < 0x3b9ac9e9) {
    uVar11 = 0x3b9ac9e8 / (uVar13 & 0xffffffff);
    param_3 = 0x3b9ac9e8 % (uVar13 & 0xffffffff);
  }
  else {
    uVar11 = 0;
  }
  if (0x773593 < uVar10) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x48;
    (*(code *)*puVar5)(param_1,param_2,param_3);
  }
  if (param_4 <= uVar11) {
    uVar11 = (ulong)param_4;
  }
  *(int *)(lVar4 + 0xa0) = (int)uVar11;
  lVar4 = alloc_small(param_1,uVar8,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar10 = 0;
    do {
      uVar6 = (ulong)(param_4 - uVar10);
      if ((uint)uVar11 < param_4 - uVar10) {
        uVar6 = uVar11;
      }
      uVar11 = uVar13 * uVar6;
      lVar1 = param_1[1];
      if (0x3b9ac9e8 < uVar11) {
        *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
        (**(code **)*param_1)();
      }
      if (1 < uVar8) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 0xf;
        *(uint *)(lVar2 + 0x2c) = uVar8;
        (**(code **)*param_1)();
      }
      puVar5 = malloc(uVar11 | 0x18);
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
        (**(code **)*param_1)();
      }
      *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + (uVar11 | 0x18);
      *puVar5 = *(undefined8 *)(lVar1 + 0x78 + (long)(int)uVar8 * 8);
      puVar5[1] = uVar11;
      puVar5[2] = 0;
      *(undefined8 **)(lVar1 + 0x78 + (long)(int)uVar8 * 8) = puVar5;
      uVar3 = (uint)uVar6;
      if (uVar3 != 0) {
        puVar5 = puVar5 + 3;
        uVar7 = uVar3 & 3;
        uVar11 = uVar6;
        if ((uVar6 & 3) != 0) {
          uVar11 = (ulong)(uVar3 & 0xfffffffc);
          do {
            uVar9 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            *(undefined8 **)(lVar4 + uVar9 * 8) = puVar5;
            puVar5 = puVar5 + uVar12 * 0x10;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (2 < uVar3 - 1) {
          do {
            *(undefined8 **)(lVar4 + (ulong)uVar10 * 8) = puVar5;
            puVar5 = puVar5 + uVar12 * 0x10;
            *(undefined8 **)(lVar4 + (ulong)(uVar10 + 1) * 8) = puVar5;
            uVar3 = uVar10 + 3;
            puVar5 = puVar5 + uVar12 * 0x10;
            *(undefined8 **)(lVar4 + (ulong)(uVar10 + 2) * 8) = puVar5;
            uVar10 = uVar10 + 4;
            *(undefined8 **)(lVar4 + (ulong)uVar3 * 8) = puVar5 + uVar12 * 0x10;
            puVar5 = puVar5 + uVar12 * 0x10 + uVar12 * 0x10;
            uVar3 = (int)uVar11 - 4;
            uVar11 = (ulong)uVar3;
          } while (uVar3 != 0);
        }
      }
      uVar11 = uVar6;
    } while (uVar10 < param_4);
  }
  return lVar4;
}


