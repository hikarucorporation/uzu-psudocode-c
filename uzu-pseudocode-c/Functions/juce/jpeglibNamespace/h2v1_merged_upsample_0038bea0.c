// Function : h2v1_merged_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038bea0
// Prototype: undefined h2v1_merged_upsample(long param_1, long * param_2, ulong param_3, undefined8 * param_4)
// Body     : 0038bea0 - 0038c017


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v1_merged_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::h2v1_merged_upsample
          (long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  
  lVar3 = *(long *)(param_1 + 0x260);
  lVar4 = *(long *)(param_1 + 0x198);
  lVar5 = *(long *)(lVar3 + 0x20);
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(lVar3 + 0x30);
  lVar3 = *(long *)(lVar3 + 0x38);
  uVar10 = param_3 & 0xffffffff;
  pbVar16 = *(byte **)(*param_2 + uVar10 * 8);
  pbVar18 = *(byte **)(param_2[1] + uVar10 * 8);
  pbVar15 = *(byte **)(param_2[2] + uVar10 * 8);
  puVar19 = (undefined1 *)*param_4;
  uVar9 = *(uint *)(param_1 + 0x74);
  if (1 < uVar9) {
    lVar12 = 0;
    lVar17 = 0;
    do {
      lVar13 = *(long *)(lVar7 + (ulong)pbVar15[lVar12] * 8);
      lVar8 = *(long *)(lVar3 + (ulong)pbVar18[lVar12] * 8);
      lVar11 = (long)*(int *)(lVar6 + (ulong)pbVar18[lVar12] * 4);
      lVar14 = (long)*(int *)(lVar5 + (ulong)pbVar15[lVar12] * 4);
      uVar10 = (ulong)*pbVar16;
      *puVar19 = *(undefined1 *)(lVar4 + lVar14 + uVar10);
      lVar13 = (long)(int)((ulong)(lVar13 + lVar8) >> 0x10);
      puVar19[1] = *(undefined1 *)(lVar4 + uVar10 + lVar13);
      puVar19[2] = *(undefined1 *)(lVar4 + uVar10 + lVar11);
      uVar10 = (ulong)pbVar16[1];
      puVar19[3] = *(undefined1 *)(lVar4 + lVar14 + uVar10);
      puVar19[4] = *(undefined1 *)(lVar4 + lVar13 + uVar10);
      puVar19[5] = *(undefined1 *)(lVar4 + lVar11 + uVar10);
      pbVar16 = pbVar16 + 2;
      puVar19 = puVar19 + 6;
      lVar17 = lVar17 + -1;
      lVar12 = lVar12 + 1;
    } while (-(uVar9 >> 1) != (int)lVar17);
    uVar9 = *(uint *)(param_1 + 0x74);
    pbVar15 = pbVar15 + -lVar17;
    pbVar18 = pbVar18 + -lVar17;
  }
  if ((uVar9 & 1) != 0) {
    uVar10 = (ulong)*pbVar16;
    bVar1 = *pbVar18;
    bVar2 = *pbVar15;
    *puVar19 = *(undefined1 *)(lVar4 + (long)*(int *)(lVar5 + (ulong)bVar2 * 4) + uVar10);
    puVar19[1] = *(undefined1 *)
                  (lVar4 + (long)(int)((ulong)(*(long *)(lVar7 + (ulong)bVar2 * 8) +
                                              *(long *)(lVar3 + (ulong)bVar1 * 8)) >> 0x10) + uVar10
                  );
    puVar19[2] = *(undefined1 *)(lVar4 + (long)*(int *)(lVar6 + (ulong)bVar1 * 4) + uVar10);
  }
  return;
}


