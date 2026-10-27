// Function : jpeg_fdct_6x12
// Namespace: juce:jpeglibNamespace
// Entry    : 00370010
// Prototype: undefined jpeg_fdct_6x12(int * param_1, long param_2, uint param_3)
// Body     : 00370010 - 0037036c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_6x12(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_6x12(int *param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int local_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int local_58 [10];
  
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar20 = (ulong)param_3;
  lVar18 = 0;
  piVar21 = param_1;
  do {
    lVar8 = *(long *)(param_2 + lVar18 * 8);
    bVar1 = *(byte *)(lVar8 + 5 + uVar20);
    iVar9 = (uint)*(byte *)(lVar8 + uVar20) + (uint)bVar1;
    bVar2 = *(byte *)(lVar8 + 1 + uVar20);
    bVar3 = *(byte *)(lVar8 + 4 + uVar20);
    iVar25 = (uint)bVar2 + (uint)bVar3;
    bVar4 = *(byte *)(lVar8 + 2 + uVar20);
    bVar5 = *(byte *)(lVar8 + 3 + uVar20);
    iVar13 = (uint)bVar4 + (uint)bVar5;
    iVar6 = iVar9 + iVar13;
    lVar8 = (ulong)*(byte *)(lVar8 + uVar20) - (ulong)bVar1;
    iVar23 = (uint)bVar2 - (uint)bVar3;
    lVar11 = (ulong)bVar4 - (ulong)bVar5;
    *piVar21 = (iVar6 + iVar25) * 4 + -0xc00;
    piVar21[2] = (iVar9 - iVar13) * 0x2731 >> 0xb;
    piVar21[4] = (iVar6 + iVar25 * -2) * 0x16a1 >> 0xb;
    iVar6 = (int)lVar8;
    iVar9 = (int)((ulong)((lVar11 + lVar8) * 0xbb6) >> 0xb);
    piVar21[1] = iVar9 + (iVar23 + iVar6) * 4;
    iVar13 = (int)lVar11;
    piVar21[3] = ((iVar6 - iVar23) - iVar13) * 4;
    piVar21[5] = iVar9 + (iVar13 - iVar23) * 4;
    piVar7 = local_b8;
    if ((int)lVar18 != 7) {
      if ((int)lVar18 == 0xb) {
        lVar18 = 0;
        do {
          iVar6 = local_58[lVar18];
          iVar9 = param_1[lVar18];
          lVar12 = (long)(iVar6 + iVar9);
          iVar13 = local_b8[lVar18];
          iVar23 = aiStack_98[lVar18];
          lVar10 = (long)(iVar23 + param_1[lVar18 + 0x10]);
          lVar14 = (long)(iVar13 + param_1[lVar18 + 0x18]);
          lVar11 = (long)(param_1[lVar18 + 0x30] + param_1[lVar18 + 0x28]);
          lVar8 = lVar11 + lVar12;
          lVar12 = lVar12 - lVar11;
          lVar11 = lVar10 + lVar14;
          lVar10 = lVar10 - lVar14;
          iVar25 = aiStack_78[lVar18];
          lVar14 = (long)(iVar25 + param_1[lVar18 + 8]);
          lVar16 = (long)(param_1[lVar18 + 0x20] + param_1[lVar18 + 0x38]);
          lVar15 = lVar14 - lVar16;
          param_1[lVar18] = (int)((ulong)((lVar14 + lVar11 + lVar16 + lVar8) * 0x1c72) >> 0xf);
          lVar16 = (long)(iVar9 - iVar6);
          lVar24 = (long)(param_1[lVar18 + 8] - iVar25);
          lVar17 = (long)(param_1[lVar18 + 0x10] - iVar23);
          lVar19 = (long)(param_1[lVar18 + 0x18] - iVar13);
          lVar14 = (long)(param_1[lVar18 + 0x20] - param_1[lVar18 + 0x38]);
          lVar22 = (long)(param_1[lVar18 + 0x28] - param_1[lVar18 + 0x30]);
          param_1[lVar18 + 0x30] = (int)((ulong)((lVar12 - (lVar15 + lVar10)) * 0x1c72) >> 0xf);
          param_1[lVar18 + 0x20] = (int)((ulong)((lVar8 - lVar11) * 0x22d6) >> 0xf);
          param_1[lVar18 + 0x10] =
               (int)((ulong)(lVar10 * 0xa69 + lVar12 * 0x26db + lVar15 * 0x1c72) >> 0xf);
          lVar8 = (lVar14 + lVar24) * 0xf65;
          lVar12 = lVar24 * 0x15c5 + lVar8;
          lVar8 = lVar14 * -0x348f + lVar8;
          lVar11 = (lVar17 + lVar16) * 0x1fea;
          lVar14 = (lVar19 + lVar16) * 0x187d;
          lVar10 = (lVar19 + lVar17) * -0x540;
          param_1[lVar18 + 8] =
               (int)((ulong)(lVar16 * -0x1085 + lVar11 + lVar14 + lVar12 + lVar22 * 0x540) >> 0xf);
          param_1[lVar18 + 0x18] =
               (int)((ulong)((lVar22 + lVar17) * -0xf65 + (lVar16 - lVar19) * 0x252a + lVar8) >> 0xf
                    );
          param_1[lVar18 + 0x28] =
               (int)((ulong)(((lVar17 * -0x428c + lVar11 + lVar10) - lVar8) + lVar22 * 0x187d) >>
                    0xf);
          param_1[lVar18 + 0x38] =
               (int)((ulong)(((lVar19 * 0x14a5 + lVar10 + lVar14) - lVar12) + lVar22 * -0x1fea) >>
                    0xf);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 != 6);
        return;
      }
      piVar7 = piVar21 + 8;
    }
    lVar18 = lVar18 + 1;
    piVar21 = piVar7;
  } while( true );
}


