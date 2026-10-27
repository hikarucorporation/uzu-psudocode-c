// Function : quantize3_ord_dither
// Namespace: juce:jpeglibNamespace
// Entry    : 0038ee30
// Prototype: undefined quantize3_ord_dither(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038ee30 - 0038efc8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::quantize3_ord_dither(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::quantize3_ord_dither(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  
  if (0 < (int)param_4) {
    lVar2 = *(long *)(param_1 + 0x270);
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      uVar13 = *(uint *)(lVar2 + 0x4c);
      uVar15 = param_4 & 7;
      if (6 < param_4 - 1) {
        uVar17 = (param_4 - 8 >> 3) + 1;
        uVar11 = uVar17 & 7;
        if (0x37 < param_4 - 8) {
          uVar17 = uVar17 & 0xfffffff8;
          uVar13 = uVar13 & 0xf;
          do {
            uVar17 = uVar17 - 8;
          } while (uVar17 != 0);
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar13 = uVar13 + 8 & 0xf;
        }
      }
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar13 = uVar13 + 1 & 0xf;
      }
      *(uint *)(lVar2 + 0x4c) = uVar13;
    }
    else {
      plVar3 = *(long **)(lVar2 + 0x30);
      lVar4 = *plVar3;
      lVar5 = plVar3[1];
      lVar6 = plVar3[2];
      uVar13 = *(uint *)(lVar2 + 0x4c);
      uVar16 = 0;
      do {
        pbVar14 = *(byte **)(param_2 + uVar16 * 8);
        lVar7 = *(long *)(param_3 + uVar16 * 8);
        lVar8 = *(long *)(lVar2 + 0x50);
        lVar9 = *(long *)(lVar2 + 0x58);
        lVar10 = *(long *)(lVar2 + 0x60);
        lVar18 = 0;
        uVar15 = 0;
        do {
          uVar19 = (ulong)uVar15;
          lVar12 = (long)(int)uVar13 * 0x40;
          *(char *)(lVar7 + lVar18) =
               *(char *)(lVar5 + (long)*(int *)(lVar9 + lVar12 + uVar19 * 4) + (ulong)pbVar14[1]) +
               *(char *)(lVar4 + (long)*(int *)(lVar8 + lVar12 + uVar19 * 4) + (ulong)*pbVar14) +
               *(char *)(lVar6 + (long)*(int *)(lVar12 + lVar10 + uVar19 * 4) + (ulong)pbVar14[2]);
          uVar15 = uVar15 + 1 & 0xf;
          lVar18 = lVar18 + 1;
          pbVar14 = pbVar14 + 3;
        } while (iVar1 != (int)lVar18);
        uVar13 = uVar13 + 1 & 0xf;
        *(uint *)(lVar2 + 0x4c) = uVar13;
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_4);
    }
  }
  return;
}


