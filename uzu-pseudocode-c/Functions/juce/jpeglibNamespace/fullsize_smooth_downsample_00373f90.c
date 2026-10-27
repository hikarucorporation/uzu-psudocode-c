// Function : fullsize_smooth_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00373f90
// Prototype: undefined fullsize_smooth_downsample(long param_1, long param_2, long param_3, long param_4)
// Body     : 00373f90 - 00374284


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::fullsize_smooth_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::fullsize_smooth_downsample
          (long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  size_t __n;
  ulong uVar19;
  
  iVar10 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar16 = *(int *)(param_1 + 0x154);
  if (-2 < iVar16) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar13 = (ulong)uVar2;
    if (0 < (int)(iVar10 - uVar2)) {
      uVar18 = iVar16 + 2;
      __n = (ulong)(~uVar2 + iVar10) + 1;
      if ((ulong)uVar18 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar15 = *(long *)(param_3 + -8 + uVar19 * 8);
          memset((void *)(lVar15 + uVar13),(uint)*(byte *)(lVar15 + -1 + uVar13),__n);
          lVar15 = *(long *)(param_3 + uVar19 * 8);
          memset((void *)(lVar15 + uVar13),(uint)*(byte *)(lVar15 + -1 + uVar13),__n);
          lVar15 = *(long *)(param_3 + 8 + uVar19 * 8);
          memset((void *)(lVar15 + uVar13),(uint)*(byte *)(lVar15 + -1 + uVar13),__n);
          lVar15 = *(long *)(param_3 + 0x10 + uVar19 * 8);
          memset((void *)(lVar15 + uVar13),(uint)*(byte *)(lVar15 + -1 + uVar13),__n);
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffc) != uVar19);
      }
      if ((ulong)(uVar18 & 3) != 0) {
        uVar14 = 0;
        do {
          lVar15 = *(long *)(param_3 + uVar19 * 8 + -8 + uVar14 * 8);
          memset((void *)(lVar15 + uVar13),(uint)*(byte *)(lVar15 + -1 + uVar13),__n);
          uVar14 = uVar14 + 1;
        } while ((uVar18 & 3) != uVar14);
      }
      iVar16 = *(int *)(param_1 + 0x154);
    }
  }
  if (0 < iVar16) {
    iVar17 = *(int *)(param_1 + 0x128) * -0x200 + 0x10000;
    iVar16 = *(int *)(param_1 + 0x128) * 0x40;
    if (iVar10 == 2) {
      lVar15 = 0;
      do {
        puVar3 = *(undefined1 **)(param_4 + lVar15 * 8);
        pbVar4 = *(byte **)(param_3 + -8 + lVar15 * 8);
        pbVar5 = *(byte **)(param_3 + lVar15 * 8);
        pbVar6 = *(byte **)(param_3 + 8 + lVar15 * 8);
        lVar15 = lVar15 + 1;
        bVar1 = *pbVar5;
        iVar12 = (uint)*pbVar6 + (uint)*pbVar4 + (uint)bVar1;
        iVar10 = (uint)pbVar5[1] + (uint)pbVar6[1] + (uint)pbVar4[1];
        *puVar3 = (char)(((iVar12 * 2 - (uint)bVar1) + iVar10) * iVar16 + (uint)bVar1 * iVar17 +
                         0x8000 >> 0x10);
        puVar3[1] = (char)((uint)pbVar5[1] * iVar17 +
                           ((iVar12 + iVar10 * 2) - (uint)pbVar5[1]) * iVar16 + 0x8000 >> 0x10);
      } while (lVar15 < *(int *)(param_1 + 0x154));
    }
    else {
      lVar15 = 0;
      do {
        puVar3 = *(undefined1 **)(param_4 + lVar15 * 8);
        pbVar4 = *(byte **)(param_3 + -8 + lVar15 * 8);
        pbVar5 = *(byte **)(param_3 + lVar15 * 8);
        pbVar6 = *(byte **)(param_3 + 8 + lVar15 * 8);
        lVar15 = lVar15 + 1;
        bVar1 = *pbVar5;
        iVar12 = (uint)*pbVar6 + (uint)*pbVar4 + (uint)bVar1;
        iVar8 = (uint)pbVar5[1] + (uint)pbVar6[1] + (uint)pbVar4[1];
        *puVar3 = (char)(iVar16 * ((iVar12 * 2 - (uint)bVar1) + iVar8) + (uint)bVar1 * iVar17 +
                         0x8000 >> 0x10);
        lVar7 = 0;
        do {
          iVar9 = iVar8;
          lVar11 = lVar7;
          iVar8 = (uint)pbVar5[lVar11 + 2] + (uint)pbVar6[lVar11 + 2] + (uint)pbVar4[lVar11 + 2];
          puVar3[lVar11 + 1] =
               (char)((uint)pbVar5[lVar11 + 1] * iVar17 +
                      iVar16 * (((iVar12 + iVar9) - (uint)pbVar5[lVar11 + 1]) + iVar8) + 0x8000 >>
                     0x10);
          lVar7 = lVar11 + 1;
          iVar12 = iVar9;
        } while (iVar10 + -2 != (int)(lVar11 + 1));
        puVar3[lVar11 + 2] =
             (char)((uint)pbVar5[lVar11 + 2] * iVar17 +
                    iVar16 * ((iVar9 + iVar8 * 2) - (uint)pbVar5[lVar11 + 2]) + 0x8000 >> 0x10);
      } while (lVar15 < *(int *)(param_1 + 0x154));
    }
  }
  return;
}


