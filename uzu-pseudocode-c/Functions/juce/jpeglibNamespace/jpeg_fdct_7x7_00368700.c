// Function : jpeg_fdct_7x7
// Namespace: juce:jpeglibNamespace
// Entry    : 00368700
// Prototype: undefined jpeg_fdct_7x7(undefined8 * param_1, long param_2, ulong param_3)
// Body     : 00368700 - 00368a11


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_7x7(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_7x7(undefined8 *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = param_3 & 0xffffffff;
  lVar10 = 0;
  do {
    lVar9 = *(long *)(param_2 + lVar10);
    uVar22 = (ulong)*(byte *)(lVar9 + 6 + uVar8);
    lVar11 = uVar22 + *(byte *)(lVar9 + uVar8);
    uVar19 = (ulong)*(byte *)(lVar9 + 1 + uVar8);
    uVar23 = (ulong)*(byte *)(lVar9 + 5 + uVar8);
    lVar14 = uVar23 + uVar19;
    uVar17 = (ulong)*(byte *)(lVar9 + 2 + uVar8);
    uVar21 = (ulong)*(byte *)(lVar9 + 4 + uVar8);
    lVar15 = uVar21 + uVar17;
    bVar1 = *(byte *)(lVar9 + 3 + uVar8);
    lVar16 = *(byte *)(lVar9 + uVar8) - uVar22;
    lVar20 = uVar19 - uVar23;
    lVar18 = uVar17 - uVar21;
    *(uint *)((long)param_1 + lVar10 * 4) =
         ((int)lVar14 + (uint)bVar1 + (int)(lVar11 + lVar15)) * 4 + -0xe00;
    lVar12 = (lVar11 + lVar15 + (ulong)bVar1 * -4) * 0xb50;
    lVar9 = (lVar14 - lVar15) * 0xa12;
    *(int *)((long)param_1 + lVar10 * 4 + 8) =
         (int)((ulong)(lVar9 + (lVar11 - lVar15) * 0x1d76 + lVar12) >> 0xb);
    lVar13 = (lVar11 - lVar14) * 0x1c37;
    *(int *)((long)param_1 + lVar10 * 4 + 0x10) =
         (int)((lVar14 + (ulong)bVar1 * -2) * -0x16a1 + lVar9 + lVar13 >> 0xb);
    *(int *)((long)param_1 + lVar10 * 4 + 0x18) =
         (int)((ulong)(lVar13 + (lVar11 - lVar15) * -0x1d76 + lVar12) >> 0xb);
    lVar14 = (lVar20 + lVar16) * 0x1def;
    lVar15 = (lVar20 + lVar18) * -0x2c1f;
    lVar11 = (lVar18 + lVar16) * 0x13a3;
    *(int *)((long)param_1 + lVar10 * 4 + 4) =
         (int)((ulong)(lVar14 + (lVar16 - lVar20) * -0x573 + lVar11) >> 0xb);
    *(int *)((long)param_1 + lVar10 * 4 + 0xc) =
         (int)((ulong)(lVar14 + (lVar16 - lVar20) * 0x573 + lVar15) >> 0xb);
    *(int *)((long)param_1 + lVar10 * 4 + 0x14) =
         (int)((ulong)(lVar18 * 0x3bde + lVar11 + lVar15) >> 0xb);
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x38);
  lVar10 = 0;
  do {
    iVar2 = *(int *)((long)param_1 + lVar10 * 4 + 0xc0);
    iVar3 = *(int *)((long)param_1 + lVar10 * 4);
    iVar4 = *(int *)((long)param_1 + lVar10 * 4 + 0x20);
    lVar18 = (long)(iVar2 + iVar3);
    iVar5 = *(int *)((long)param_1 + lVar10 * 4 + 0xa0);
    lVar14 = (long)(iVar5 + iVar4);
    iVar6 = *(int *)((long)param_1 + lVar10 * 4 + 0x40);
    iVar7 = *(int *)((long)param_1 + lVar10 * 4 + 0x80);
    lVar20 = (long)(iVar7 + iVar6);
    lVar11 = (long)*(int *)((long)param_1 + lVar10 * 4 + 0x60);
    lVar9 = (long)(iVar3 - iVar2);
    lVar16 = (long)(iVar4 - iVar5);
    lVar13 = (long)(iVar6 - iVar7);
    *(int *)((long)param_1 + lVar10 * 4) =
         (int)((ulong)((lVar11 + lVar14 + lVar20 + lVar18) * 0x29cc) >> 0xf);
    lVar24 = (lVar20 + lVar18 + lVar11 * -4) * 0xec7;
    lVar12 = (lVar14 - lVar20) * 0xd27;
    *(int *)((long)param_1 + lVar10 * 4 + 0x40) =
         (int)((ulong)(lVar12 + (lVar18 - lVar20) * 0x267a + lVar24) >> 0xf);
    lVar15 = (lVar18 - lVar14) * 0x24da;
    *(int *)((long)param_1 + lVar10 * 4 + 0x80) =
         (int)((ulong)((lVar14 + lVar11 * -2) * -0x1d8e + lVar12 + lVar15) >> 0xf);
    *(int *)((long)param_1 + lVar10 * 4 + 0xc0) =
         (int)((ulong)(lVar15 + (lVar18 - lVar20) * -0x267a + lVar24) >> 0xf);
    lVar14 = (lVar16 + lVar9) * 0x2719;
    lVar15 = (lVar16 + lVar13) * -0x39a0;
    lVar11 = (lVar13 + lVar9) * 0x19a5;
    *(int *)((long)param_1 + lVar10 * 4 + 0x20) =
         (int)((ulong)(lVar14 + (lVar9 - lVar16) * -0x71e + lVar11) >> 0xf);
    *(int *)((long)param_1 + lVar10 * 4 + 0x60) =
         (int)((ulong)(lVar14 + (lVar9 - lVar16) * 0x71e + lVar15) >> 0xf);
    *(int *)((long)param_1 + lVar10 * 4 + 0xa0) =
         (int)((ulong)(lVar13 * 0x4e31 + lVar11 + lVar15) >> 0xf);
    lVar10 = lVar10 + 1;
  } while ((int)lVar10 != 7);
  return;
}


