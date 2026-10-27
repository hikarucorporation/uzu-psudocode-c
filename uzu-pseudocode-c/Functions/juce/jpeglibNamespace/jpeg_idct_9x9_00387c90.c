// Function : jpeg_idct_9x9
// Namespace: juce:jpeglibNamespace
// Entry    : 00387c90
// Prototype: undefined jpeg_idct_9x9(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00387c90 - 0038807c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_9x9(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_9x9
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int aiStack_158 [74];
  
  lVar4 = *(long *)(param_1 + 0x198);
  lVar26 = *(long *)(param_2 + 0x58);
  lVar21 = 0;
  do {
    lVar17 = (long)*(int *)(lVar26 + lVar21 * 4) * (long)*(short *)(param_3 + lVar21 * 2) * 0x2000;
    lVar30 = (long)*(int *)(lVar26 + 0x40 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar21 * 2);
    lVar6 = (long)*(int *)(lVar26 + 0x80 + lVar21 * 4) *
            (long)*(short *)(param_3 + 0x40 + lVar21 * 2);
    lVar12 = (long)*(int *)(lVar26 + 0xc0 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar21 * 2);
    lVar32 = lVar17 + lVar12 * 0x16a1 + 0x400;
    lVar18 = lVar17 + lVar12 * -0x2d42 + 0x400;
    lVar31 = (lVar30 - lVar6) * 0x16a1 + lVar18;
    lVar13 = (lVar6 + lVar30) * 0x2a87 + lVar6 * -0x7dc + lVar32;
    lVar28 = lVar32 + (lVar6 + lVar30) * -0x2a87 + lVar30 * 0x22ab;
    lVar33 = lVar32 + lVar30 * -0x22ab + lVar6 * 0x7dc;
    lVar19 = (long)*(int *)(lVar26 + 0x20 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar21 * 2);
    lVar32 = (long)*(int *)(lVar26 + 0x60 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar21 * 2);
    lVar24 = (long)*(int *)(lVar26 + 0xa0 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar21 * 2);
    lVar17 = (long)*(int *)(lVar26 + 0xe0 + lVar21 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar21 * 2);
    lVar15 = lVar32 * -0x2731;
    lVar25 = (lVar24 + lVar19) * 0x1d17;
    lVar12 = lVar15 + (lVar24 - lVar17) * -0x2c91 + lVar25;
    lVar16 = (lVar17 + lVar19) * 0xf7a;
    lVar32 = lVar25 + lVar32 * 0x2731 + lVar16;
    lVar16 = (lVar24 - lVar17) * 0x2c91 + lVar15 + lVar16;
    lVar19 = lVar19 - (lVar17 + lVar24);
    aiStack_158[lVar21] = (int)((ulong)(lVar32 + lVar13) >> 0xb);
    aiStack_158[lVar21 + 0x40] = (int)((ulong)(lVar13 - lVar32) >> 0xb);
    aiStack_158[lVar21 + 8] = (int)((ulong)(lVar19 * 0x2731 + lVar31) >> 0xb);
    aiStack_158[lVar21 + 0x38] = (int)((ulong)(lVar31 + lVar19 * -0x2731) >> 0xb);
    aiStack_158[lVar21 + 0x10] = (int)((ulong)(lVar12 + lVar28) >> 0xb);
    aiStack_158[lVar21 + 0x30] = (int)((ulong)(lVar28 - lVar12) >> 0xb);
    aiStack_158[lVar21 + 0x18] = (int)((ulong)(lVar16 + lVar33) >> 0xb);
    aiStack_158[lVar21 + 0x28] = (int)((ulong)(lVar33 - lVar16) >> 0xb);
    aiStack_158[lVar21 + 0x20] = (int)((ulong)((lVar30 - lVar6) * -0x2d42 + lVar18) >> 0xb);
    lVar21 = lVar21 + 1;
  } while ((int)lVar21 != 8);
  uVar7 = (ulong)param_5;
  lVar26 = 0;
  do {
    iVar29 = aiStack_158[lVar26 + 1];
    iVar1 = aiStack_158[lVar26 + 2];
    iVar2 = aiStack_158[lVar26 + 4];
    iVar10 = aiStack_158[lVar26 + 6] * 0x16a1 + aiStack_158[lVar26] * 0x2000 + 0x8020000;
    iVar14 = aiStack_158[lVar26 + 6] * -0x2d42 + aiStack_158[lVar26] * 0x2000 + 0x8020000;
    iVar27 = (iVar1 - iVar2) * 0x16a1 + iVar14;
    iVar11 = aiStack_158[lVar26 + 5];
    iVar5 = (iVar2 + iVar1) * 0x2a87 + iVar2 * -0x7dc + iVar10;
    iVar3 = aiStack_158[lVar26 + 7];
    iVar8 = aiStack_158[lVar26 + 3] * -0x2731;
    iVar20 = iVar10 + (iVar2 + iVar1) * -0x2a87 + iVar1 * 0x22ab;
    iVar22 = (iVar29 + iVar11) * 0x1d17;
    iVar23 = iVar8 + (iVar11 - iVar3) * -0x2c91 + iVar22;
    iVar9 = (iVar29 + iVar3) * 0xf7a;
    iVar22 = iVar22 + aiStack_158[lVar26 + 3] * 0x2731 + iVar9;
    iVar9 = (iVar11 - iVar3) * 0x2c91 + iVar8 + iVar9;
    iVar29 = iVar29 - (iVar11 + iVar3);
    iVar11 = iVar10 + iVar1 * -0x22ab + iVar2 * 0x7dc;
    lVar21 = *(long *)(param_4 + lVar26);
    *(undefined1 *)(lVar21 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar22 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 8 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar5 - iVar22) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 1 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar27 + iVar29 * 0x2731) >> 0x12 & 0x3ff))
    ;
    *(undefined1 *)(lVar21 + 7 + uVar7) =
         *(undefined1 *)
          (lVar4 + -0x180 + (ulong)((uint)(iVar27 + iVar29 * -0x2731) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 2 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar23 + iVar20) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 6 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar20 - iVar23) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 3 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar9 + iVar11) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 5 + uVar7) =
         *(undefined1 *)(lVar4 + -0x180 + (ulong)((uint)(iVar11 - iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar21 + 4 + uVar7) =
         *(undefined1 *)
          (lVar4 + -0x180 + (ulong)((uint)((iVar1 - iVar2) * -0x2d42 + iVar14) >> 0x12 & 0x3ff));
    lVar26 = lVar26 + 8;
  } while (lVar26 != 0x48);
  return;
}


