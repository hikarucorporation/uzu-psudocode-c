// Function : jpeg_idct_7x7
// Namespace: juce:jpeglibNamespace
// Entry    : 00388080
// Prototype: undefined jpeg_idct_7x7(long param_1, long param_2, long param_3, long param_4, ulong param_5)
// Body     : 00388080 - 003883f1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_7x7(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_7x7
          (long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int local_f8 [7];
  undefined4 auStack_dc [7];
  undefined4 auStack_c0 [7];
  undefined4 auStack_a4 [7];
  undefined4 auStack_88 [7];
  undefined4 auStack_6c [7];
  undefined4 auStack_50 [8];
  
  lVar5 = *(long *)(param_1 + 0x198);
  lVar25 = *(long *)(param_2 + 0x58);
  lVar22 = 0;
  do {
    lVar24 = (long)*(int *)(lVar25 + lVar22 * 4) * (long)*(short *)(param_3 + lVar22 * 2) * 0x2000;
    lVar19 = (long)*(int *)(lVar25 + 0x40 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x20 + lVar22 * 2);
    lVar16 = (long)*(int *)(lVar25 + 0x80 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar22 * 2);
    lVar12 = (long)*(int *)(lVar25 + 0xc0 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar22 * 2);
    lVar31 = (lVar16 - lVar12) * 0x1c37;
    lVar28 = (lVar19 - lVar16) * 0xa12;
    lVar23 = lVar16 * -0x3aeb + lVar24 + 0x400 + lVar28 + lVar31;
    lVar6 = (lVar12 + lVar19) * 0x28c6 + lVar24 + 0x400;
    lVar13 = lVar12 * -0x27d + lVar31 + lVar6;
    lVar6 = lVar19 * -0x4f0f + lVar28 + lVar6;
    lVar28 = (long)*(int *)(lVar25 + 0x20 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar22 * 2);
    lVar17 = (long)*(int *)(lVar25 + 0x60 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar22 * 2);
    lVar27 = (long)*(int *)(lVar25 + 0xa0 + lVar22 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar22 * 2);
    lVar32 = (lVar28 + lVar17) * 0x1def;
    lVar31 = (lVar17 + lVar27) * -0x2c1f;
    lVar33 = lVar32 + (lVar28 - lVar17) * 0x573 + lVar31;
    lVar20 = (lVar27 + lVar28) * 0x13a3;
    lVar28 = lVar32 + (lVar28 - lVar17) * -0x573 + lVar20;
    lVar31 = lVar27 * 0x3bde + lVar20 + lVar31;
    local_f8[lVar22] = (int)((ulong)(lVar28 + lVar13) >> 0xb);
    auStack_50[lVar22] = (int)((ulong)(lVar13 - lVar28) >> 0xb);
    auStack_dc[lVar22] = (int)((ulong)(lVar33 + lVar23) >> 0xb);
    auStack_6c[lVar22] = (int)((ulong)(lVar23 - lVar33) >> 0xb);
    auStack_c0[lVar22] = (int)((ulong)(lVar31 + lVar6) >> 0xb);
    auStack_88[lVar22] = (int)((ulong)(lVar6 - lVar31) >> 0xb);
    auStack_a4[lVar22] = (int)(lVar24 + (lVar16 - (lVar12 + lVar19)) * 0x2d41 + 0x400U >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 7);
  piVar29 = local_f8;
  uVar7 = param_5 & 0xffffffff;
  lVar25 = 0;
  do {
    iVar11 = piVar29[1];
    iVar1 = piVar29[2];
    iVar2 = piVar29[4];
    iVar26 = *piVar29 * 0x2000;
    iVar3 = piVar29[6];
    iVar30 = (iVar2 - iVar3) * 0x1c37;
    iVar8 = (iVar1 - iVar2) * 0xa12;
    iVar14 = (iVar3 + iVar1) * 0x28c6 + iVar26 + 0x8020000;
    iVar18 = iVar2 * -0x3aeb + iVar26 + 0x8020000 + iVar8 + iVar30;
    iVar4 = piVar29[3];
    iVar21 = iVar3 * -0x27d + iVar30 + iVar14;
    iVar30 = piVar29[5];
    iVar10 = (iVar4 + iVar11) * 0x1def;
    iVar14 = iVar1 * -0x4f0f + iVar8 + iVar14;
    iVar15 = (iVar11 + iVar30) * 0x13a3;
    iVar9 = iVar10 + (iVar11 - iVar4) * -0x573 + iVar15;
    iVar8 = (iVar4 + iVar30) * -0x2c1f;
    iVar11 = iVar10 + (iVar11 - iVar4) * 0x573 + iVar8;
    iVar8 = iVar30 * 0x3bde + iVar15 + iVar8;
    lVar22 = *(long *)(param_4 + lVar25 * 8);
    *(undefined1 *)(lVar22 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar9 + iVar21) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 6 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar21 - iVar9) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 1 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar11 + iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 5 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar18 - iVar11) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 2 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 4 + uVar7) =
         *(undefined1 *)(lVar5 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar22 + 3 + uVar7) =
         *(undefined1 *)
          (lVar5 + -0x180 +
          (ulong)(iVar26 + (iVar2 - (iVar3 + iVar1)) * 0x2d41 + 0x8020000U >> 0x12 & 0x3ff));
    lVar25 = lVar25 + 1;
    piVar29 = piVar29 + 7;
  } while (lVar25 != 7);
  return;
}


