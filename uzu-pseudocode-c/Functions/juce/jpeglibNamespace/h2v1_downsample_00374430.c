// Function : h2v1_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00374430
// Prototype: undefined h2v1_downsample(long param_1, long param_2, long param_3, long param_4)
// Body     : 00374430 - 00374675


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v1_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::h2v1_downsample(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  size_t __n;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  uVar6 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar6) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar4 = (ulong)uVar1;
    if (0 < (int)(uVar8 * 2 - uVar1)) {
      __n = (ulong)(uVar8 * 2 + ~uVar1) + 1;
      if ((ulong)uVar6 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar7 = *(long *)(param_3 + uVar9 * 8);
          memset((void *)(lVar7 + uVar4),(uint)*(byte *)(lVar7 + -1 + uVar4),__n);
          lVar7 = *(long *)(param_3 + 8 + uVar9 * 8);
          memset((void *)(lVar7 + uVar4),(uint)*(byte *)(lVar7 + -1 + uVar4),__n);
          lVar7 = *(long *)(param_3 + 0x10 + uVar9 * 8);
          memset((void *)(lVar7 + uVar4),(uint)*(byte *)(lVar7 + -1 + uVar4),__n);
          lVar7 = *(long *)(param_3 + 0x18 + uVar9 * 8);
          memset((void *)(lVar7 + uVar4),(uint)*(byte *)(lVar7 + -1 + uVar4),__n);
          uVar9 = uVar9 + 4;
        } while ((uVar6 & 0xfffffffc) != uVar9);
      }
      if ((ulong)(uVar6 & 3) != 0) {
        uVar2 = 0;
        do {
          lVar7 = *(long *)(param_3 + uVar9 * 8 + uVar2 * 8);
          memset((void *)(lVar7 + uVar4),(uint)*(byte *)(lVar7 + -1 + uVar4),__n);
          uVar2 = uVar2 + 1;
        } while ((uVar6 & 3) != uVar2);
      }
      uVar6 = *(uint *)(param_1 + 0x154);
    }
  }
  if ((0 < (int)uVar6) && (uVar8 != 0)) {
    uVar6 = (uVar8 - 2 >> 1) + 1;
    lVar7 = 0;
    do {
      puVar5 = *(undefined1 **)(param_4 + lVar7 * 8);
      pbVar3 = *(byte **)(param_3 + lVar7 * 8);
      if (uVar8 != 1) {
        if (1 < uVar8 - 2) {
          uVar1 = uVar6 & 0xfffffffe;
          do {
            *puVar5 = (char)((uint)pbVar3[1] + (uint)*pbVar3 >> 1);
            puVar5[1] = (char)((uint)pbVar3[2] + (uint)pbVar3[3] + 1 >> 1);
            puVar5[2] = (char)((uint)pbVar3[5] + (uint)pbVar3[4] >> 1);
            puVar5[3] = (char)((uint)pbVar3[6] + (uint)pbVar3[7] + 1 >> 1);
            puVar5 = puVar5 + 4;
            pbVar3 = pbVar3 + 8;
            uVar1 = uVar1 - 2;
          } while (uVar1 != 0);
        }
        if ((uVar6 & 1) != 0) {
          *puVar5 = (char)((uint)pbVar3[1] + (uint)*pbVar3 >> 1);
          puVar5[1] = (char)((uint)pbVar3[2] + (uint)pbVar3[3] + 1 >> 1);
          puVar5 = puVar5 + 2;
          pbVar3 = pbVar3 + 4;
        }
      }
      if ((uVar8 & 1) != 0) {
        *puVar5 = (char)((uint)pbVar3[1] + (uint)*pbVar3 >> 1);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x154));
  }
  return;
}


