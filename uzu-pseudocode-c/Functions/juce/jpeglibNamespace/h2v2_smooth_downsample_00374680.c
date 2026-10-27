// Function : h2v2_smooth_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00374680
// Prototype: undefined h2v2_smooth_downsample(long param_1, long param_2, long param_3, long param_4)
// Body     : 00374680 - 00374a13


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v2_smooth_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::h2v2_smooth_downsample(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  size_t __n;
  
  iVar8 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar15 = *(int *)(param_1 + 0x154);
  if (-2 < iVar15) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar20 = (ulong)uVar1;
    iVar16 = iVar8 * 2;
    if (0 < (int)(iVar16 - uVar1)) {
      uVar10 = iVar15 + 2;
      __n = (ulong)(iVar16 + ~uVar1) + 1;
      if ((ulong)uVar10 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar12 = *(long *)(param_3 + -8 + uVar18 * 8);
          memset((void *)(lVar12 + uVar20),(uint)*(byte *)(lVar12 + -1 + uVar20),__n);
          lVar12 = *(long *)(param_3 + uVar18 * 8);
          memset((void *)(lVar12 + uVar20),(uint)*(byte *)(lVar12 + -1 + uVar20),__n);
          lVar12 = *(long *)(param_3 + 8 + uVar18 * 8);
          memset((void *)(lVar12 + uVar20),(uint)*(byte *)(lVar12 + -1 + uVar20),__n);
          lVar12 = *(long *)(param_3 + 0x10 + uVar18 * 8);
          memset((void *)(lVar12 + uVar20),(uint)*(byte *)(lVar12 + -1 + uVar20),__n);
          uVar18 = uVar18 + 4;
        } while ((uVar10 & 0xfffffffc) != uVar18);
      }
      if ((ulong)(uVar10 & 3) != 0) {
        uVar9 = 0;
        do {
          lVar12 = *(long *)(param_3 + uVar18 * 8 + -8 + uVar9 * 8);
          memset((void *)(lVar12 + uVar20),(uint)*(byte *)(lVar12 + -1 + uVar20),__n);
          uVar9 = uVar9 + 1;
        } while ((uVar10 & 3) != uVar9);
      }
      iVar15 = *(int *)(param_1 + 0x154);
    }
  }
  if (0 < iVar15) {
    iVar15 = *(int *)(param_1 + 0x128) * 0x10;
    iVar16 = *(int *)(param_1 + 0x128) * -0x50 + 0x4000;
    iVar8 = iVar8 + -2;
    lVar12 = 0;
    lVar19 = 0;
    do {
      pbVar2 = *(byte **)(param_3 + -8 + lVar19 * 8);
      pbVar3 = *(byte **)(param_3 + lVar19 * 8);
      pbVar4 = *(byte **)(param_3 + (lVar19 * 8 | 8U));
      pbVar5 = *(byte **)(param_3 + 0x10 + lVar19 * 8);
      puVar6 = *(undefined1 **)(param_4 + lVar12 * 8);
      *puVar6 = (char)(iVar15 * ((uint)*pbVar5 * 3 + (uint)*pbVar2 * 3 + (uint)pbVar2[2] +
                                 (uint)pbVar5[2] +
                                ((uint)*pbVar4 + (uint)*pbVar3) * 2 + (uint)pbVar2[1] * 2 +
                                (uint)pbVar5[1] * 2 + (uint)pbVar3[2] * 2 + (uint)pbVar4[2] * 2) +
                       iVar16 * ((uint)pbVar3[1] + (uint)*pbVar4 + (uint)*pbVar3 + (uint)pbVar4[1])
                       + 0x8000 >> 0x10);
      lVar19 = lVar19 + 2;
      pbVar14 = pbVar3 + 2;
      pbVar13 = pbVar4 + 2;
      pbVar21 = pbVar2 + 2;
      pbVar17 = pbVar5 + 2;
      puVar6 = puVar6 + 1;
      if (iVar8 != 0) {
        lVar11 = 0;
        iVar7 = iVar8;
        do {
          *puVar6 = (char)(iVar16 * ((uint)pbVar4[lVar11 + 3] +
                                    (uint)pbVar13[lVar11] +
                                    (uint)pbVar3[lVar11 + 3] + (uint)pbVar14[lVar11]) +
                           iVar15 * ((uint)pbVar5[lVar11 + 1] +
                                     (uint)pbVar2[lVar11 + 4] + (uint)pbVar2[lVar11 + 1] +
                                     ((uint)pbVar4[lVar11 + 4] +
                                     (uint)pbVar4[lVar11 + 1] +
                                     (uint)pbVar3[lVar11 + 4] +
                                     (uint)pbVar3[lVar11 + 1] +
                                     (uint)pbVar5[lVar11 + 3] +
                                     (uint)pbVar17[lVar11] +
                                     (uint)pbVar2[lVar11 + 3] + (uint)pbVar21[lVar11]) * 2 +
                                    (uint)pbVar5[lVar11 + 4]) + 0x8000 >> 0x10);
          puVar6 = puVar6 + 1;
          lVar11 = lVar11 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pbVar17 = pbVar17 + lVar11;
        pbVar21 = pbVar21 + lVar11;
        pbVar13 = pbVar13 + lVar11;
        pbVar14 = pbVar14 + lVar11;
      }
      *puVar6 = (char)(iVar15 * ((uint)pbVar17[1] + (uint)pbVar21[1] + (uint)pbVar21[-1] +
                                 (uint)pbVar17[-1] +
                                ((uint)*pbVar21 + (uint)pbVar13[1] + (uint)pbVar14[1] +
                                 (uint)pbVar21[1] + (uint)*pbVar17 + (uint)pbVar17[1] +
                                 (uint)pbVar14[-1] + (uint)pbVar13[-1]) * 2) +
                       iVar16 * ((uint)*pbVar14 + (uint)pbVar13[1] + (uint)pbVar14[1] +
                                (uint)*pbVar13) + 0x8000 >> 0x10);
      lVar12 = lVar12 + 1;
    } while (lVar19 < *(int *)(param_1 + 0x154));
  }
  return;
}


