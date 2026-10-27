// Function : jpeg_fdct_13x13
// Namespace: juce:jpeglibNamespace
// Entry    : 00369ae0
// Prototype: undefined jpeg_fdct_13x13(int * param_1, long param_2, ulong param_3)
// Body     : 00369ae0 - 0036a098


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_13x13(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_13x13(int *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int *local_100;
  int local_d8 [8];
  int aiStack_b8 [8];
  int aiStack_98 [8];
  int aiStack_78 [8];
  int aiStack_58 [10];
  
  uVar9 = param_3 & 0xffffffff;
  lVar13 = 0;
  local_100 = param_1;
  do {
    lVar20 = *(long *)(param_2 + lVar13 * 8);
    uVar26 = (ulong)*(byte *)(lVar20 + 0xc + uVar9);
    lVar12 = uVar26 + *(byte *)(lVar20 + uVar9);
    uVar30 = (ulong)*(byte *)(lVar20 + 1 + uVar9);
    uVar28 = (ulong)*(byte *)(lVar20 + 0xb + uVar9);
    lVar17 = uVar28 + uVar30;
    uVar14 = (ulong)*(byte *)(lVar20 + 2 + uVar9);
    uVar19 = (ulong)*(byte *)(lVar20 + 10 + uVar9);
    lVar18 = uVar19 + uVar14;
    uVar15 = (ulong)*(byte *)(lVar20 + 3 + uVar9);
    uVar24 = (ulong)*(byte *)(lVar20 + 9 + uVar9);
    lVar21 = uVar24 + uVar15;
    uVar22 = (ulong)*(byte *)(lVar20 + 4 + uVar9);
    lVar27 = *(byte *)(lVar20 + uVar9) - uVar26;
    uVar26 = (ulong)*(byte *)(lVar20 + 8 + uVar9);
    lVar31 = uVar30 - uVar28;
    lVar32 = uVar26 + uVar22;
    lVar10 = uVar14 - uVar19;
    uVar19 = (ulong)*(byte *)(lVar20 + 5 + uVar9);
    lVar16 = uVar15 - uVar24;
    uVar14 = (ulong)*(byte *)(lVar20 + 7 + uVar9);
    lVar23 = uVar22 - uVar26;
    lVar25 = uVar14 + uVar19;
    bVar1 = *(byte *)(lVar20 + 6 + uVar9);
    uVar15 = (ulong)bVar1;
    lVar29 = uVar19 - uVar14;
    *local_100 = (int)lVar17 + (int)lVar12 + (int)lVar18 + (int)lVar21 + (int)lVar32 + (uint)bVar1 +
                 (int)lVar25 + -0x680;
    lVar12 = lVar12 + uVar15 * -2;
    lVar17 = lVar17 + uVar15 * -2;
    lVar18 = lVar18 + uVar15 * -2;
    lVar21 = lVar21 + uVar15 * -2;
    lVar32 = lVar32 + uVar15 * -2;
    lVar25 = lVar25 + uVar15 * -2;
    local_100[2] = (int)((ulong)(lVar25 * -0x2812 +
                                lVar32 * -0x19b5 +
                                lVar21 * -0x574 +
                                lVar18 * 0x100c + lVar17 * 0x21e0 + lVar12 * 0x2bf1) >> 0xd);
    lVar20 = (lVar17 - lVar25) * -0xa20 + (lVar21 - lVar32) * -0xdf2 + (lVar12 - lVar18) * 0x24f9;
    lVar12 = (lVar25 + lVar17) * 0xf95 + (lVar32 + lVar21) * -0x1dfe + (lVar18 + lVar12) * 0x319;
    local_100[4] = (int)((ulong)(lVar20 + lVar12) >> 0xd);
    local_100[6] = (int)((ulong)(lVar20 - lVar12) >> 0xd);
    lVar32 = (lVar31 + lVar27) * 0x2a50;
    lVar21 = (lVar10 + lVar27) * 0x253e;
    lVar18 = (lVar29 + lVar23) * 0xad5 + (lVar16 + lVar27) * 0x1e02;
    lVar12 = (lVar31 + lVar10) * -0xad5 + (lVar23 - lVar29) * 0x1e02;
    lVar25 = (lVar16 + lVar31) * -0x253e;
    lVar17 = (lVar16 + lVar10) * -0x1508;
    local_100[1] = (int)((ulong)(lVar27 * -0x40a5 + lVar32 + lVar21 + lVar23 * 0xa33 + lVar18) >>
                        0xd);
    local_100[3] = (int)((ulong)(lVar31 * 0x1acb + lVar32 + lVar25 + lVar23 * -0x4aef + lVar12) >>
                        0xd);
    local_100[5] = (int)((ulong)(lVar10 * -0x324f + lVar21 + lVar17 + lVar29 * 0x4853 + lVar12) >>
                        0xd);
    local_100[7] = (int)((ulong)(lVar16 * 0x4694 + lVar17 + lVar25 + lVar29 * -0x37c1 + lVar18) >>
                        0xd);
    piVar11 = local_d8;
    if ((int)lVar13 != 7) {
      if ((int)lVar13 == 0xc) {
        lVar13 = 0;
        do {
          iVar2 = aiStack_58[lVar13];
          iVar3 = param_1[lVar13];
          lVar29 = (long)(iVar3 + iVar2);
          iVar4 = aiStack_78[lVar13];
          lVar27 = (long)(iVar4 + param_1[lVar13 + 8]);
          iVar5 = param_1[lVar13 + 0x10];
          iVar6 = aiStack_98[lVar13];
          lVar20 = (long)(iVar6 + iVar5);
          iVar7 = local_d8[lVar13];
          iVar8 = aiStack_b8[lVar13];
          lVar10 = (long)(iVar8 + param_1[lVar13 + 0x18]);
          lVar17 = (long)(iVar7 + param_1[lVar13 + 0x20]);
          lVar32 = (long)(param_1[lVar13 + 0x38] + param_1[lVar13 + 0x28]);
          lVar12 = (long)param_1[lVar13 + 0x30];
          param_1[lVar13] =
               (int)((ulong)((lVar27 + lVar29 + lVar20 + lVar10 + lVar17 + lVar32 + lVar12) * 0x183d
                            ) >> 0xe);
          lVar29 = lVar29 + lVar12 * -2;
          lVar27 = lVar27 + lVar12 * -2;
          lVar20 = lVar20 + lVar12 * -2;
          lVar10 = lVar10 + lVar12 * -2;
          lVar17 = lVar17 + lVar12 * -2;
          lVar32 = lVar32 + lVar12 * -2;
          param_1[lVar13 + 0x10] =
               (int)((ulong)(lVar32 * -0x1e5a +
                            lVar17 * -0x1379 +
                            lVar10 * -0x422 + lVar20 * 0xc28 + lVar27 * 0x19a8 + lVar29 * 0x2148) >>
                    0xe);
          lVar12 = (lVar27 - lVar32) * -0x7ab +
                   (lVar10 - lVar17) * -0xa90 + (lVar29 - lVar20) * 0x1c01;
          lVar25 = (long)(iVar3 - iVar2);
          lVar21 = (long)(param_1[lVar13 + 8] - iVar4);
          lVar31 = (long)(iVar5 - iVar6);
          lVar16 = (long)(param_1[lVar13 + 0x18] - iVar8);
          lVar18 = (long)(param_1[lVar13 + 0x20] - iVar7);
          lVar23 = (long)(param_1[lVar13 + 0x28] - param_1[lVar13 + 0x38]);
          lVar17 = (lVar32 + lVar27) * 0xbcd +
                   (lVar17 + lVar10) * -0x16b8 + (lVar20 + lVar29) * 0x259;
          param_1[lVar13 + 0x20] = (int)((ulong)(lVar12 + lVar17) >> 0xe);
          param_1[lVar13 + 0x30] = (int)((ulong)(lVar12 - lVar17) >> 0xe);
          lVar20 = (lVar21 + lVar25) * 0x200c;
          lVar32 = (lVar25 + lVar31) * 0x1c35;
          lVar27 = (lVar23 + lVar18) * 0x834 + (lVar16 + lVar25) * 0x16bb;
          lVar12 = (lVar21 + lVar31) * -0x834 + (lVar18 - lVar23) * 0x16bb;
          lVar10 = (lVar16 + lVar21) * -0x1c35;
          lVar17 = (lVar16 + lVar31) * -0xfee;
          param_1[lVar13 + 8] =
               (int)((ulong)(lVar25 * -0x30f6 + lVar20 + lVar32 + lVar18 * 0x7ba + lVar27) >> 0xe);
          param_1[lVar13 + 0x18] =
               (int)((ulong)(lVar21 * 0x144b + lVar20 + lVar10 + lVar18 * -0x38c1 + lVar12) >> 0xe);
          param_1[lVar13 + 0x28] =
               (int)((ulong)(lVar31 * -0x261a + lVar32 + lVar17 + lVar23 * 0x36c7 + lVar12) >> 0xe);
          param_1[lVar13 + 0x38] =
               (int)((ulong)(lVar16 * 0x3575 + lVar17 + lVar10 + lVar23 * -0x2a3b + lVar27) >> 0xe);
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 != 8);
        return;
      }
      piVar11 = local_100 + 8;
    }
    lVar13 = lVar13 + 1;
    local_100 = piVar11;
  } while( true );
}


