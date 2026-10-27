// Function : jpeg_idct_14x7
// Namespace: juce:jpeglibNamespace
// Entry    : 003845d0
// Prototype: undefined jpeg_idct_14x7(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003845d0 - 00384ad8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_14x7(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_14x7
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  int aiStack_118 [58];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar34 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    lVar21 = (long)*(int *)(lVar34 + lVar19 * 4) * (long)*(short *)(param_3 + lVar19 * 2) * 0x2000;
    lVar18 = (long)*(int *)(lVar34 + 0x40 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar19 * 2);
    lVar10 = (long)*(int *)(lVar34 + 0x80 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar19 * 2);
    lVar36 = (long)*(int *)(lVar34 + 0xc0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar19 * 2);
    lVar24 = (lVar10 - lVar36) * 0x1c37;
    lVar33 = (lVar18 - lVar10) * 0xa12;
    lVar32 = lVar21 + lVar10 * -0x3aeb + 0x400 + lVar33 + lVar24;
    lVar28 = (lVar36 + lVar18) * 0x28c6 + lVar21 + 0x400;
    lVar16 = lVar36 * -0x27d + lVar24 + lVar28;
    lVar28 = lVar18 * -0x4f0f + lVar33 + lVar28;
    lVar24 = (long)*(int *)(lVar34 + 0x20 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar19 * 2);
    lVar11 = (long)*(int *)(lVar34 + 0x60 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar19 * 2);
    lVar22 = (long)*(int *)(lVar34 + 0xa0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar19 * 2);
    lVar29 = (lVar11 + lVar24) * 0x1def;
    lVar33 = (lVar11 + lVar22) * -0x2c1f;
    lVar30 = lVar29 + (lVar24 - lVar11) * 0x573 + lVar33;
    lVar12 = (lVar22 + lVar24) * 0x13a3;
    lVar24 = lVar29 + (lVar24 - lVar11) * -0x573 + lVar12;
    lVar33 = lVar22 * 0x3bde + lVar12 + lVar33;
    aiStack_118[lVar19] = (int)((ulong)(lVar16 + lVar24) >> 0xb);
    aiStack_118[lVar19 + 0x30] = (int)((ulong)(lVar16 - lVar24) >> 0xb);
    aiStack_118[lVar19 + 8] = (int)((ulong)(lVar30 + lVar32) >> 0xb);
    aiStack_118[lVar19 + 0x28] = (int)((ulong)(lVar32 - lVar30) >> 0xb);
    aiStack_118[lVar19 + 0x10] = (int)((ulong)(lVar33 + lVar28) >> 0xb);
    aiStack_118[lVar19 + 0x20] = (int)((ulong)(lVar28 - lVar33) >> 0xb);
    aiStack_118[lVar19 + 0x18] =
         (int)((lVar10 - (lVar36 + lVar18)) * 0x2d41 + lVar21 + 0x400U >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 8);
  uVar25 = (ulong)param_5;
  lVar34 = 0;
  do {
    iVar1 = aiStack_118[lVar34 + 2];
    iVar5 = aiStack_118[lVar34] * 0x2000;
    iVar2 = aiStack_118[lVar34 + 4];
    iVar14 = iVar5 + iVar2 * 0x28c6 + 0x8020000;
    iVar26 = iVar5 + iVar2 * 0xa12 + 0x8020000;
    iVar23 = iVar5 + iVar2 * -0x1c37 + 0x8020000;
    iVar3 = aiStack_118[lVar34 + 6];
    iVar6 = iVar5 + iVar2 * -0x2d42 + 0x8020000;
    iVar7 = (iVar3 + iVar1) * 0x2362;
    iVar20 = iVar1 * 0x8bd + iVar7;
    iVar5 = iVar3 * -0x2c1f + iVar1 * 0x13a3;
    iVar7 = iVar3 * -0x3704 + iVar7;
    iVar1 = iVar20 + iVar14;
    iVar2 = iVar5 + iVar23;
    iVar23 = iVar23 - iVar5;
    iVar14 = iVar14 - iVar20;
    iVar5 = aiStack_118[lVar34 + 1];
    iVar20 = aiStack_118[lVar34 + 3];
    iVar9 = aiStack_118[lVar34 + 5];
    iVar3 = iVar7 + iVar26;
    iVar13 = (iVar20 + iVar5) * 0x2ab7;
    iVar26 = iVar26 - iVar7;
    iVar8 = (iVar9 + iVar5) * 0x2652;
    iVar7 = aiStack_118[lVar34 + 7];
    iVar15 = ((iVar5 - iVar20) - iVar9) + iVar7;
    iVar17 = iVar5 * -0x2410 + iVar13 + iVar8 + iVar7 * 0x2000;
    iVar35 = (iVar5 - iVar20) * 0xef2 + iVar7 * -0x2000;
    iVar31 = (iVar9 + iVar20) * -0x511 + iVar7 * -0x2000;
    iVar27 = iVar20 * -0xd92 + iVar13 + iVar31;
    iVar31 = iVar9 * -0x4bf7 + iVar8 + iVar31;
    iVar8 = (iVar9 - iVar20) * 0x2cf8;
    iVar13 = (iVar9 + iVar5) * 0x1814;
    iVar9 = iVar9 * -0x361a + iVar7 * 0x2000 + iVar8 + iVar13;
    iVar5 = iVar5 * -0x21f5 + iVar13 + iVar35;
    iVar35 = iVar20 * 0x1599 + iVar8 + iVar35;
    lVar19 = *(long *)(param_4 + lVar34);
    *(undefined1 *)(lVar19 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar1 + iVar17) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 0xd + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar1 - iVar17) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 1 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar27 + iVar3) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 0xc + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar3 - iVar27) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 2 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar31 + iVar2) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 0xb + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar2 - iVar31) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 3 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar15 * 0x2000 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 10 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar6 + iVar15 * -0x2000) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar19 + 4 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar23) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 9 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar23 - iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 5 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar35 + iVar26) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 8 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar26 - iVar35) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 6 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 + iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 7 + uVar25) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar14 - iVar5) >> 0x12 & 0x3ff));
    lVar34 = lVar34 + 8;
  } while (lVar34 != 0x38);
  return;
}


