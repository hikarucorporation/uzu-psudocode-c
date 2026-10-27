// Function : jpeg_idct_5x10
// Namespace: juce:jpeglibNamespace
// Entry    : 00381e00
// Prototype: undefined jpeg_idct_5x10(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00381e00 - 00382143


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_5x10(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_5x10
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int local_f8 [5];
  undefined4 auStack_e4 [5];
  int aiStack_d0 [5];
  undefined4 auStack_bc [5];
  undefined4 local_a8 [5];
  undefined4 auStack_94 [5];
  undefined4 auStack_80 [5];
  int aiStack_6c [5];
  undefined4 auStack_58 [5];
  undefined4 auStack_44 [5];
  
  lVar2 = *(long *)(param_1 + 0x198);
  lVar22 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    lVar7 = (long)*(int *)(lVar22 + lVar19 * 4) * (long)*(short *)(param_3 + lVar19 * 2) * 0x2000;
    lVar15 = (long)*(int *)(lVar22 + 0x80 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x40 + lVar19 * 2);
    lVar25 = lVar15 * 0x249d + lVar7 + 0x400;
    lVar23 = lVar7 + lVar15 * -0xdfc + 0x400;
    lVar8 = (long)*(int *)(lVar22 + 0x40 + lVar19 * 4) *
            (long)*(short *)(param_3 + 0x20 + lVar19 * 2);
    lVar16 = (long)*(int *)(lVar22 + 0xc0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x60 + lVar19 * 2);
    lVar4 = (lVar16 + lVar8) * 0x1a9a;
    lVar9 = lVar8 * 0x1071 + lVar4;
    lVar4 = lVar16 * -0x45a4 + lVar4;
    lVar8 = lVar9 + lVar25;
    lVar25 = lVar25 - lVar9;
    lVar9 = lVar4 + lVar23;
    lVar23 = lVar23 - lVar4;
    lVar17 = (long)*(int *)(lVar22 + 0x20 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x10 + lVar19 * 2);
    lVar14 = (long)*(int *)(lVar22 + 0x60 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x30 + lVar19 * 2);
    lVar10 = (long)*(int *)(lVar22 + 0xa0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x50 + lVar19 * 2);
    lVar16 = (long)*(int *)(lVar22 + 0xe0 + lVar19 * 4) *
             (long)*(short *)(param_3 + 0x70 + lVar19 * 2);
    lVar4 = lVar16 + lVar14;
    lVar14 = lVar14 - lVar16;
    lVar5 = lVar10 * 0x2000;
    lVar16 = lVar14 * 0x9e3 + lVar5;
    lVar21 = lVar17 * 0x2cb3 + lVar4 * 0x1e6f + lVar16;
    lVar16 = lVar17 * 0x714 + lVar4 * -0x1e6f + lVar16;
    lVar5 = lVar5 + lVar14 * -0x19e3;
    iVar13 = (int)lVar17 - ((int)lVar10 + (int)lVar14);
    lVar10 = (lVar17 * 0x2853 + lVar4 * -0x12cf) - lVar5;
    lVar5 = lVar17 * 0x148c + lVar4 * -0x12cf + lVar5;
    local_f8[lVar19] = (int)((ulong)(lVar21 + lVar8) >> 0xb);
    auStack_44[lVar19] = (int)((ulong)(lVar8 - lVar21) >> 0xb);
    auStack_e4[lVar19] = (int)((ulong)(lVar10 + lVar9) >> 0xb);
    auStack_58[lVar19] = (int)((ulong)(lVar9 - lVar10) >> 0xb);
    iVar3 = (int)(lVar15 * -0x2d42 + lVar7 + 0x400U >> 0xb);
    aiStack_d0[lVar19] = iVar3 + iVar13 * 4;
    aiStack_6c[lVar19] = iVar3 + iVar13 * -4;
    auStack_bc[lVar19] = (int)((ulong)(lVar5 + lVar23) >> 0xb);
    auStack_80[lVar19] = (int)((ulong)(lVar23 - lVar5) >> 0xb);
    local_a8[lVar19] = (int)((ulong)(lVar25 + lVar16) >> 0xb);
    auStack_94[lVar19] = (int)((ulong)(lVar25 - lVar16) >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 5);
  piVar6 = local_f8;
  uVar20 = (ulong)param_5;
  lVar22 = 0;
  do {
    iVar1 = *piVar6;
    iVar3 = piVar6[2] + piVar6[4];
    iVar11 = piVar6[2] - piVar6[4];
    iVar12 = iVar1 * 0x2000 + iVar11 * 0xb50 + 0x8020000;
    iVar13 = iVar12 + iVar3 * 0x194c;
    iVar24 = (piVar6[1] + piVar6[3]) * 0x1a9a;
    iVar18 = piVar6[1] * 0x1071 + iVar24;
    iVar24 = piVar6[3] * -0x45a4 + iVar24;
    lVar19 = *(long *)(param_4 + lVar22 * 8);
    *(undefined1 *)(lVar19 + uVar20) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar18 + iVar13) >> 0x12 & 0x3ff));
    iVar12 = iVar12 + iVar3 * -0x194c;
    *(undefined1 *)(lVar19 + 4 + uVar20) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar13 - iVar18) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 1 + uVar20) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar24 + iVar12) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 3 + uVar20) =
         *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar12 - iVar24) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar19 + 2 + uVar20) =
         *(undefined1 *)
          (lVar2 + -0x180 + (ulong)(iVar11 * -0x2d40 + iVar1 * 0x2000 + 0x8020000U >> 0x12 & 0x3ff))
    ;
    lVar22 = lVar22 + 1;
    piVar6 = piVar6 + 5;
  } while (lVar22 != 10);
  return;
}


