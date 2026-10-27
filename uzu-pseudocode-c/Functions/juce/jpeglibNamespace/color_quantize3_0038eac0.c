// Function : color_quantize3
// Namespace: juce:jpeglibNamespace
// Entry    : 0038eac0
// Prototype: undefined color_quantize3(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038eac0 - 0038ebd8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::color_quantize3(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::color_quantize3(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  
  if ((0 < (int)param_4) && (uVar4 = *(uint *)(param_1 + 0x74), uVar4 != 0)) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x270) + 0x30);
    lVar6 = *plVar5;
    lVar7 = plVar5[1];
    lVar8 = plVar5[2];
    uVar13 = 0;
    do {
      pbVar11 = *(byte **)(param_2 + uVar13 * 8);
      pcVar12 = *(char **)(param_3 + uVar13 * 8);
      uVar9 = uVar4;
      if ((uVar4 & 1) != 0) {
        bVar3 = *pbVar11;
        pbVar1 = pbVar11 + 1;
        pbVar2 = pbVar11 + 2;
        pbVar11 = pbVar11 + 3;
        *pcVar12 = *(char *)(lVar7 + (ulong)*pbVar1) + *(char *)(lVar6 + (ulong)bVar3) +
                   *(char *)(lVar8 + (ulong)*pbVar2);
        pcVar12 = pcVar12 + 1;
        uVar9 = uVar4 - 1;
      }
      if (uVar4 != 1) {
        lVar10 = 0;
        do {
          pcVar12[lVar10] =
               *(char *)(lVar7 + (ulong)pbVar11[1]) + *(char *)(lVar6 + (ulong)*pbVar11) +
               *(char *)(lVar8 + (ulong)pbVar11[2]);
          pcVar12[lVar10 + 1] =
               *(char *)(lVar7 + (ulong)pbVar11[4]) + *(char *)(lVar6 + (ulong)pbVar11[3]) +
               *(char *)(lVar8 + (ulong)pbVar11[5]);
          lVar10 = lVar10 + 2;
          pbVar11 = pbVar11 + 6;
        } while (uVar9 != (uint)lVar10);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_4);
  }
  return;
}


