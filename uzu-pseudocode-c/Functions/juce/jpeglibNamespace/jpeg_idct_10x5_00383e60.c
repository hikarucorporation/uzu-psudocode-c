// Function : jpeg_idct_10x5
// Namespace: juce:jpeglibNamespace
// Entry    : 00383e60
// Prototype: undefined jpeg_idct_10x5(long param_1, long param_2, long param_3, long param_4, ulong param_5)
// Body     : 00383e60 - 003841b6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_10x5(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_10x5
          (long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int aiStack_d8 [42];
  
  lVar2 = *(long *)(param_1 + 0x198);
  lVar21 = *(long *)(param_2 + 0x58);
  lVar16 = 0;
  do {
    lVar13 = (long)*(int *)(lVar21 + lVar16 * 4) * (long)*(short *)(param_3 + lVar16 * 2) * 0x2000;
    lVar10 = (long)*(int *)(lVar21 + 0x40 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar16 * 2);
    lVar17 = (long)*(int *)(lVar21 + 0x80 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar16 * 2);
    lVar4 = lVar17 + lVar10;
    lVar10 = lVar10 - lVar17;
    lVar18 = lVar10 * 0xb50 + lVar13 + 0x400;
    lVar17 = lVar18 + lVar4 * 0x194c;
    lVar18 = lVar18 + lVar4 * -0x194c;
    lVar11 = (long)*(int *)(lVar21 + 0x20 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar16 * 2);
    lVar14 = (long)*(int *)(lVar21 + 0x60 + lVar16 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar16 * 2);
    lVar4 = (lVar11 + lVar14) * 0x1a9a;
    lVar11 = lVar11 * 0x1071 + lVar4;
    lVar4 = lVar14 * -0x45a4 + lVar4;
    aiStack_d8[lVar16] = (int)((ulong)(lVar11 + lVar17) >> 0xb);
    aiStack_d8[lVar16 + 0x20] = (int)((ulong)(lVar17 - lVar11) >> 0xb);
    aiStack_d8[lVar16 + 8] = (int)((ulong)(lVar18 + lVar4) >> 0xb);
    aiStack_d8[lVar16 + 0x18] = (int)((ulong)(lVar18 - lVar4) >> 0xb);
    aiStack_d8[lVar16 + 0x10] = (int)(lVar10 * -0x2d40 + lVar13 + 0x400U >> 0xb);
    lVar16 = lVar16 + 1;
  } while ((int)lVar16 != 8);
  uVar5 = param_5 & 0xffffffff;
  lVar21 = 0;
  do {
    iVar15 = aiStack_d8[lVar21 + 1];
    iVar6 = aiStack_d8[lVar21] * 0x2000;
    iVar1 = aiStack_d8[lVar21 + 4];
    iVar22 = iVar6 + iVar1 * 0x249d + 0x8020000;
    iVar19 = iVar1 * -0xdfc + iVar6 + 0x8020000;
    iVar8 = (aiStack_d8[lVar21 + 2] + aiStack_d8[lVar21 + 6]) * 0x1a9a;
    iVar3 = iVar1 * -0x2d42 + iVar6 + 0x8020000;
    iVar6 = aiStack_d8[lVar21 + 2] * 0x1071 + iVar8;
    iVar8 = aiStack_d8[lVar21 + 6] * -0x45a4 + iVar8;
    iVar1 = iVar6 + iVar22;
    iVar12 = aiStack_d8[lVar21 + 5] * 0x2000;
    iVar22 = iVar22 - iVar6;
    iVar23 = aiStack_d8[lVar21 + 7] + aiStack_d8[lVar21 + 3];
    iVar7 = aiStack_d8[lVar21 + 3] - aiStack_d8[lVar21 + 7];
    iVar6 = iVar8 + iVar19;
    iVar19 = iVar19 - iVar8;
    iVar8 = iVar7 * 0x9e3 + iVar12;
    iVar20 = iVar15 * 0x2cb3 + iVar23 * 0x1e6f + iVar8;
    iVar8 = iVar15 * 0x714 + iVar23 * -0x1e6f + iVar8;
    iVar12 = iVar12 + iVar7 * -0x19e3;
    iVar7 = iVar15 - (aiStack_d8[lVar21 + 5] + iVar7);
    iVar9 = iVar15 * 0x148c + iVar23 * -0x12cf + iVar12;
    iVar15 = iVar15 * 0x2853 - (iVar23 * 0x12cf + iVar12);
    lVar16 = *(long *)(param_4 + lVar21);
    *(undefined1 *)(lVar16 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar20 + iVar1) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 9 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar1 - iVar20) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 1 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar15 + iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 8 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar6 - iVar15) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 2 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar7 * 0x2000 + iVar3) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 7 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar3 + iVar7 * -0x2000) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 3 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar9 + iVar19) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 6 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar19 - iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 4 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar8 + iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar16 + 5 + uVar5) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar22 - iVar8) >> 0x12 & 0x3ff));
    lVar21 = lVar21 + 8;
  } while (lVar21 != 0x28);
  return;
}


