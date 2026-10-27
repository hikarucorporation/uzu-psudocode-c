// Function : h2v2_merged_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038bc30
// Prototype: undefined h2v2_merged_upsample(long param_1, long * param_2, uint param_3, undefined8 * param_4)
// Body     : 0038bc30 - 0038be6b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v2_merged_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::h2v2_merged_upsample
          (long param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  
  lVar15 = *(long *)(param_1 + 0x260);
  lVar1 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(lVar15 + 0x20);
  lVar6 = *(long *)(lVar15 + 0x28);
  lVar2 = *(long *)(lVar15 + 0x30);
  lVar15 = *(long *)(lVar15 + 0x38);
  pbVar9 = *(byte **)(*param_2 + (ulong)(param_3 * 2) * 8);
  pbVar14 = *(byte **)(*param_2 + ((ulong)param_3 * 2 + 1 & 0xffffffff) * 8);
  pbVar5 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar11 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar8 = (undefined1 *)*param_4;
  puVar7 = (undefined1 *)param_4[1];
  uVar18 = *(uint *)(param_1 + 0x74);
  if (1 < uVar18) {
    lVar19 = 0;
    lVar10 = 0;
    do {
      lVar17 = *(long *)(lVar2 + (ulong)pbVar11[lVar10] * 8);
      lVar3 = *(long *)(lVar15 + (ulong)pbVar5[lVar10] * 8);
      lVar16 = (long)*(int *)(lVar6 + (ulong)pbVar5[lVar10] * 4);
      lVar13 = (long)*(int *)(lVar12 + (ulong)pbVar11[lVar10] * 4);
      uVar4 = (ulong)pbVar9[lVar10 * 2];
      *puVar8 = *(undefined1 *)(lVar1 + lVar13 + uVar4);
      lVar17 = (long)(int)((ulong)(lVar17 + lVar3) >> 0x10);
      puVar8[1] = *(undefined1 *)(lVar1 + uVar4 + lVar17);
      puVar8[2] = *(undefined1 *)(lVar1 + uVar4 + lVar16);
      uVar4 = (ulong)pbVar9[lVar10 * 2 + 1];
      puVar8[3] = *(undefined1 *)(lVar1 + lVar13 + uVar4);
      puVar8[4] = *(undefined1 *)(lVar1 + uVar4 + lVar17);
      puVar8[5] = *(undefined1 *)(lVar1 + uVar4 + lVar16);
      uVar4 = (ulong)pbVar14[lVar10 * 2];
      *puVar7 = *(undefined1 *)(lVar1 + lVar13 + uVar4);
      puVar7[1] = *(undefined1 *)(lVar1 + uVar4 + lVar17);
      puVar7[2] = *(undefined1 *)(lVar1 + uVar4 + lVar16);
      uVar4 = (ulong)pbVar14[lVar10 * 2 + 1];
      puVar7[3] = *(undefined1 *)(lVar1 + lVar13 + uVar4);
      puVar7[4] = *(undefined1 *)(lVar1 + lVar17 + uVar4);
      puVar7[5] = *(undefined1 *)(lVar1 + lVar16 + uVar4);
      puVar8 = puVar8 + 6;
      puVar7 = puVar7 + 6;
      lVar10 = lVar10 + 1;
      lVar19 = lVar19 + -2;
    } while (uVar18 >> 1 != (uint)lVar10);
    uVar18 = *(uint *)(param_1 + 0x74);
    pbVar11 = pbVar11 + lVar10;
    pbVar5 = pbVar5 + lVar10;
    pbVar14 = pbVar14 + -lVar19;
    pbVar9 = pbVar9 + -lVar19;
  }
  if ((uVar18 & 1) != 0) {
    lVar2 = *(long *)(lVar2 + (ulong)*pbVar11 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar5 * 8);
    lVar6 = (long)*(int *)(lVar6 + (ulong)*pbVar5 * 4);
    lVar12 = (long)*(int *)(lVar12 + (ulong)*pbVar11 * 4);
    uVar4 = (ulong)*pbVar9;
    *puVar8 = *(undefined1 *)(lVar1 + lVar12 + uVar4);
    lVar15 = (long)(int)((ulong)(lVar2 + lVar15) >> 0x10);
    puVar8[1] = *(undefined1 *)(lVar1 + lVar15 + uVar4);
    puVar8[2] = *(undefined1 *)(lVar1 + uVar4 + lVar6);
    uVar4 = (ulong)*pbVar14;
    *puVar7 = *(undefined1 *)(lVar1 + lVar12 + uVar4);
    puVar7[1] = *(undefined1 *)(lVar1 + lVar15 + uVar4);
    puVar7[2] = *(undefined1 *)(lVar1 + lVar6 + uVar4);
  }
  return;
}


