// Function : h2v2_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00374a20
// Prototype: undefined h2v2_downsample(long param_1, long param_2, long param_3, long param_4)
// Body     : 00374a20 - 00374c4f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v2_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::h2v2_downsample(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  size_t __n;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar12 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar4) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar10 = (ulong)uVar1;
    if (0 < (int)(uVar12 * 2 - uVar1)) {
      __n = (ulong)(uVar12 * 2 + ~uVar1) + 1;
      if ((ulong)uVar4 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          lVar7 = *(long *)(param_3 + uVar13 * 8);
          memset((void *)(lVar7 + uVar10),(uint)*(byte *)(lVar7 + -1 + uVar10),__n);
          lVar7 = *(long *)(param_3 + 8 + uVar13 * 8);
          memset((void *)(lVar7 + uVar10),(uint)*(byte *)(lVar7 + -1 + uVar10),__n);
          lVar7 = *(long *)(param_3 + 0x10 + uVar13 * 8);
          memset((void *)(lVar7 + uVar10),(uint)*(byte *)(lVar7 + -1 + uVar10),__n);
          lVar7 = *(long *)(param_3 + 0x18 + uVar13 * 8);
          memset((void *)(lVar7 + uVar10),(uint)*(byte *)(lVar7 + -1 + uVar10),__n);
          uVar13 = uVar13 + 4;
        } while ((uVar4 & 0xfffffffc) != uVar13);
      }
      if ((ulong)(uVar4 & 3) != 0) {
        uVar2 = 0;
        do {
          lVar7 = *(long *)(param_3 + uVar13 * 8 + uVar2 * 8);
          memset((void *)(lVar7 + uVar10),(uint)*(byte *)(lVar7 + -1 + uVar10),__n);
          uVar2 = uVar2 + 1;
        } while ((uVar4 & 3) != uVar2);
      }
      uVar4 = *(uint *)(param_1 + 0x154);
    }
  }
  if ((0 < (int)uVar4) && (uVar12 != 0)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      puVar9 = *(undefined1 **)(param_4 + lVar7 * 8);
      pbVar5 = *(byte **)(param_3 + lVar8 * 8);
      pbVar11 = *(byte **)(param_3 + (lVar8 * 8 | 8U));
      if (uVar12 != 1) {
        lVar3 = 0;
        lVar6 = 0;
        do {
          puVar9[lVar6] =
               (char)((uint)pbVar11[lVar6 * 2 + 1] +
                      (uint)pbVar11[lVar6 * 2] +
                      (uint)pbVar5[lVar6 * 2 + 1] + (uint)pbVar5[lVar6 * 2] + 1 >> 2);
          puVar9[lVar6 + 1] =
               (char)((uint)pbVar11[lVar6 * 2 + 2] +
                      (uint)pbVar5[lVar6 * 2 + 3] + (uint)pbVar5[lVar6 * 2 + 2] +
                      (uint)pbVar11[lVar6 * 2 + 3] + 2 >> 2);
          lVar6 = lVar6 + 2;
          lVar3 = lVar3 + -4;
        } while ((uVar12 & 0xfffffffe) != (uint)lVar6);
        puVar9 = puVar9 + lVar6;
        pbVar11 = pbVar11 + -lVar3;
        pbVar5 = pbVar5 + -lVar3;
      }
      if ((uVar12 & 1) != 0) {
        *puVar9 = (char)((uint)*pbVar11 + (uint)pbVar5[1] + (uint)*pbVar5 + (uint)pbVar11[1] + 1 >>
                        2);
      }
      lVar8 = lVar8 + 2;
      lVar7 = lVar7 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x154));
  }
  return;
}


