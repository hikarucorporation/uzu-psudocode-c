// Function : jpeg_idct_10x10
// Namespace: juce:jpeglibNamespace
// Entry    : 00387810
// Prototype: undefined jpeg_idct_10x10(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00387810 - 00387c88


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_10x10(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_10x10
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  int aiStack_178 [82];
  
  lVar2 = *(long *)(param_1 + 0x198);
  lVar26 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    lVar8 = (long)*(int *)(lVar26 + lVar19 * 4) * (long)*(short *)(param_3 + lVar19 * 2) * 0x2000;
    lVar20 = (long)*(int *)(lVar26 + 0x80 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar19 * 2);
    lVar29 = lVar20 * 0x249d + lVar8 + 0x400;
    lVar25 = lVar8 + lVar20 * -0xdfc + 0x400;
    lVar9 = (long)*(int *)(lVar26 + 0x40 + lVar19 * 4) *
            (long)*(short *)(param_3 + 0x20 + lVar19 * 2);
    lVar21 = (long)*(int *)(lVar26 + 0xc0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar19 * 2);
    lVar5 = (lVar21 + lVar9) * 0x1a9a;
    lVar10 = lVar9 * 0x1071 + lVar5;
    lVar5 = lVar21 * -0x45a4 + lVar5;
    lVar9 = lVar10 + lVar29;
    lVar29 = lVar29 - lVar10;
    lVar10 = lVar5 + lVar25;
    lVar25 = lVar25 - lVar5;
    lVar17 = (long)*(int *)(lVar26 + 0x20 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar19 * 2);
    lVar6 = (long)*(int *)(lVar26 + 0x60 + lVar19 * 4) *
            (long)*(short *)(param_3 + 0x30 + lVar19 * 2);
    lVar22 = (long)*(int *)(lVar26 + 0xa0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar19 * 2);
    lVar21 = (long)*(int *)(lVar26 + 0xe0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar19 * 2);
    lVar5 = lVar21 + lVar6;
    lVar6 = lVar6 - lVar21;
    lVar11 = lVar22 * 0x2000;
    lVar21 = lVar6 * 0x9e3 + lVar11;
    lVar15 = lVar17 * 0x2cb3 + lVar5 * 0x1e6f + lVar21;
    lVar21 = lVar17 * 0x714 + lVar5 * -0x1e6f + lVar21;
    lVar11 = lVar11 + lVar6 * -0x19e3;
    iVar3 = (int)lVar17 - ((int)lVar22 + (int)lVar6);
    lVar6 = (lVar17 * 0x2853 + lVar5 * -0x12cf) - lVar11;
    lVar11 = lVar17 * 0x148c + lVar5 * -0x12cf + lVar11;
    aiStack_178[lVar19] = (int)((ulong)(lVar15 + lVar9) >> 0xb);
    aiStack_178[lVar19 + 0x48] = (int)((ulong)(lVar9 - lVar15) >> 0xb);
    aiStack_178[lVar19 + 8] = (int)((ulong)(lVar6 + lVar10) >> 0xb);
    aiStack_178[lVar19 + 0x40] = (int)((ulong)(lVar10 - lVar6) >> 0xb);
    iVar1 = (int)(lVar20 * -0x2d42 + lVar8 + 0x400U >> 0xb);
    aiStack_178[lVar19 + 0x10] = iVar1 + iVar3 * 4;
    aiStack_178[lVar19 + 0x38] = iVar1 + iVar3 * -4;
    aiStack_178[lVar19 + 0x18] = (int)((ulong)(lVar25 + lVar11) >> 0xb);
    aiStack_178[lVar19 + 0x30] = (int)((ulong)(lVar25 - lVar11) >> 0xb);
    aiStack_178[lVar19 + 0x20] = (int)((ulong)(lVar21 + lVar29) >> 0xb);
    aiStack_178[lVar19 + 0x28] = (int)((ulong)(lVar29 - lVar21) >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 8);
  uVar7 = (ulong)param_5;
  lVar26 = 0;
  do {
    iVar18 = aiStack_178[lVar26 + 1];
    iVar3 = aiStack_178[lVar26] * 0x2000;
    iVar1 = aiStack_178[lVar26 + 4];
    iVar27 = iVar3 + iVar1 * 0x249d + 0x8020000;
    iVar23 = iVar1 * -0xdfc + iVar3 + 0x8020000;
    iVar13 = (aiStack_178[lVar26 + 2] + aiStack_178[lVar26 + 6]) * 0x1a9a;
    iVar4 = iVar1 * -0x2d42 + iVar3 + 0x8020000;
    iVar3 = aiStack_178[lVar26 + 2] * 0x1071 + iVar13;
    iVar13 = aiStack_178[lVar26 + 6] * -0x45a4 + iVar13;
    iVar1 = iVar3 + iVar27;
    iVar16 = aiStack_178[lVar26 + 5] * 0x2000;
    iVar27 = iVar27 - iVar3;
    iVar28 = aiStack_178[lVar26 + 7] + aiStack_178[lVar26 + 3];
    iVar12 = aiStack_178[lVar26 + 3] - aiStack_178[lVar26 + 7];
    iVar3 = iVar13 + iVar23;
    iVar23 = iVar23 - iVar13;
    iVar13 = iVar12 * 0x9e3 + iVar16;
    iVar24 = iVar18 * 0x2cb3 + iVar28 * 0x1e6f + iVar13;
    iVar13 = iVar18 * 0x714 + iVar28 * -0x1e6f + iVar13;
    iVar16 = iVar16 + iVar12 * -0x19e3;
    iVar12 = iVar18 - (aiStack_178[lVar26 + 5] + iVar12);
    iVar14 = iVar18 * 0x148c + iVar28 * -0x12cf + iVar16;
    iVar18 = iVar18 * 0x2853 - (iVar28 * 0x12cf + iVar16);
    lVar19 = *(long *)(param_4 + lVar26);
    *(undefined1 *)(lVar19 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar24 + iVar1) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 9 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar1 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 1 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar18 + iVar3) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 8 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar3 - iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 2 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar12 * 0x2000 + iVar4) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 7 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar4 + iVar12 * -0x2000) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar19 + 3 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar14 + iVar23) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 6 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar23 - iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 4 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar13 + iVar27) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 5 + uVar7) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar27 - iVar13) >> 0x12 & 0x3ff));
    lVar26 = lVar26 + 8;
  } while (lVar26 != 0x50);
  return;
}


