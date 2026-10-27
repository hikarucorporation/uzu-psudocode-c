// Function : jpeg_fdct_11x11
// Namespace: juce:jpeglibNamespace
// Entry    : 00369140
// Prototype: undefined jpeg_fdct_11x11(int * param_1, long param_2, ulong param_3)
// Body     : 00369140 - 00369646


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_11x11(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_11x11(int *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int *local_c8;
  int local_98 [8];
  int aiStack_78 [8];
  int local_58 [10];
  
  uVar7 = param_3 & 0xffffffff;
  lVar9 = 0;
  local_c8 = param_1;
  do {
    lVar11 = *(long *)(param_2 + lVar9 * 8);
    uVar24 = (ulong)*(byte *)(lVar11 + 10 + uVar7);
    lVar29 = uVar24 + *(byte *)(lVar11 + uVar7);
    uVar26 = (ulong)*(byte *)(lVar11 + 1 + uVar7);
    uVar17 = (ulong)*(byte *)(lVar11 + 9 + uVar7);
    lVar14 = uVar17 + uVar26;
    uVar18 = (ulong)*(byte *)(lVar11 + 2 + uVar7);
    uVar21 = (ulong)*(byte *)(lVar11 + 8 + uVar7);
    lVar28 = uVar21 + uVar18;
    uVar12 = (ulong)*(byte *)(lVar11 + 3 + uVar7);
    uVar23 = (ulong)*(byte *)(lVar11 + 7 + uVar7);
    lVar16 = uVar23 + uVar12;
    uVar10 = (ulong)*(byte *)(lVar11 + 4 + uVar7);
    lVar25 = *(byte *)(lVar11 + uVar7) - uVar24;
    uVar24 = (ulong)*(byte *)(lVar11 + 6 + uVar7);
    lVar27 = uVar26 - uVar17;
    lVar20 = uVar24 + uVar10;
    bVar1 = *(byte *)(lVar11 + 5 + uVar7);
    uVar17 = (ulong)bVar1;
    lVar19 = uVar18 - uVar21;
    lVar13 = uVar12 - uVar23;
    lVar11 = uVar10 - uVar24;
    *local_c8 = ((int)lVar14 + (int)lVar29 + (int)lVar28 + (int)lVar16 + (uint)bVar1 + (int)lVar20)
                * 2 + -0xb00;
    lVar29 = lVar29 + uVar17 * -2;
    lVar14 = lVar14 + uVar17 * -2;
    lVar28 = lVar28 + uVar17 * -2;
    lVar16 = lVar16 + uVar17 * -2;
    lVar20 = lVar20 + uVar17 * -2;
    lVar22 = (lVar28 + lVar20) * 0x671 + (lVar29 + lVar16) * 0x2b6c;
    lVar15 = (lVar14 - lVar16) * 0x1da3;
    local_c8[2] = (int)((ulong)(lVar20 * -0x2c83 + lVar16 * -0x2096 + lVar15 + lVar22) >> 0xc);
    lVar16 = (lVar29 - lVar14) * 0x2612;
    local_c8[4] = (int)((ulong)(lVar20 * 0x12cd + lVar28 * -0x2b6c + lVar14 * 0x1ff + lVar16 +
                               lVar15) >> 0xc);
    local_c8[6] = (int)((ulong)(lVar28 * -0x193d + lVar29 * -0x33db + lVar16 + lVar22) >> 0xc);
    lVar29 = (lVar25 + lVar27) * 0x292a;
    lVar15 = (lVar19 + lVar25) * 0x2234;
    lVar16 = (lVar13 + lVar25) * 0x1877;
    lVar14 = (lVar19 + lVar27) * -0x1877;
    lVar20 = (lVar13 + lVar27) * -0x2ccb;
    lVar28 = (lVar13 + lVar19) * 0xcc0;
    local_c8[1] = (int)((ulong)(lVar25 * -0x370a + lVar29 + lVar15 + lVar16 + lVar11 * 0xcc0) >> 0xc
                       );
    local_c8[3] = (int)((ulong)(lVar27 * 0x28d8 + lVar29 + lVar14 + lVar20 + lVar11 * -0x2234) >>
                       0xc);
    local_c8[5] = (int)((ulong)(lVar19 * -0x3fa6 + lVar14 + lVar15 + lVar28 + lVar11 * 0x2ccb) >>
                       0xc);
    local_c8[7] = (int)((ulong)(lVar13 * 0x29c7 + lVar28 + lVar20 + lVar16 + lVar11 * -0x292a) >>
                       0xc);
    piVar8 = local_98;
    if ((int)lVar9 != 7) {
      if ((int)lVar9 == 10) {
        lVar9 = 0;
        do {
          iVar2 = local_58[lVar9];
          iVar3 = param_1[lVar9];
          lVar22 = (long)(iVar2 + iVar3);
          iVar4 = local_98[lVar9];
          iVar5 = aiStack_78[lVar9];
          lVar14 = (long)(iVar5 + param_1[lVar9 + 8]);
          iVar6 = param_1[lVar9 + 0x10];
          lVar27 = (long)(iVar4 + iVar6);
          lVar28 = (long)(param_1[lVar9 + 0x38] + param_1[lVar9 + 0x18]);
          lVar16 = (long)(param_1[lVar9 + 0x30] + param_1[lVar9 + 0x20]);
          lVar29 = (long)param_1[lVar9 + 0x28];
          param_1[lVar9] =
               (int)((ulong)((lVar14 + lVar22 + lVar27 + lVar28 + lVar16 + lVar29) * 0x21da) >> 0xf)
          ;
          lVar22 = lVar22 + lVar29 * -2;
          lVar14 = lVar14 + lVar29 * -2;
          lVar27 = lVar27 + lVar29 * -2;
          lVar28 = lVar28 + lVar29 * -2;
          lVar16 = lVar16 + lVar29 * -2;
          lVar29 = (lVar27 + lVar16) * 0x6d0 + (lVar28 + lVar22) * 0x2def;
          lVar20 = (lVar14 - lVar28) * 0x1f5a;
          param_1[lVar9 + 0x10] =
               (int)((ulong)(lVar16 * -0x2f16 + lVar28 * -0x2279 + lVar20 + lVar29) >> 0xf);
          lVar28 = (lVar22 - lVar14) * 0x2846;
          lVar11 = (long)(iVar3 - iVar2);
          lVar13 = (long)(param_1[lVar9 + 8] - iVar5);
          lVar25 = (long)(iVar6 - iVar4);
          lVar19 = (long)(param_1[lVar9 + 0x18] - param_1[lVar9 + 0x38]);
          lVar15 = (long)(param_1[lVar9 + 0x20] - param_1[lVar9 + 0x30]);
          param_1[lVar9 + 0x20] =
               (int)((ulong)(lVar16 * 0x13e3 + lVar27 * -0x2def + lVar14 * 0x21c + lVar28 + lVar20)
                    >> 0xf);
          param_1[lVar9 + 0x30] =
               (int)((ulong)(lVar27 * -0x1ab3 + lVar22 * -0x36db + lVar28 + lVar29) >> 0xf);
          lVar29 = (lVar13 + lVar11) * 0x2b8c;
          lVar20 = (lVar11 + lVar25) * 0x242e;
          lVar16 = (lVar19 + lVar11) * 0x19e2;
          lVar28 = (lVar13 + lVar25) * -0x19e2;
          lVar22 = (lVar19 + lVar13) * -0x2f63;
          lVar14 = (lVar19 + lVar25) * 0xd7d;
          param_1[lVar9 + 8] =
               (int)((ulong)(lVar11 * -0x3a39 + lVar29 + lVar20 + lVar16 + lVar15 * 0xd7d) >> 0xf);
          param_1[lVar9 + 0x18] =
               (int)((ulong)(lVar13 * 0x2b35 + lVar29 + lVar28 + lVar22 + lVar15 * -0x242e) >> 0xf);
          param_1[lVar9 + 0x28] =
               (int)((ulong)(lVar25 * -0x4355 + lVar28 + lVar20 + lVar14 + lVar15 * 0x2f63) >> 0xf);
          param_1[lVar9 + 0x38] =
               (int)((ulong)(lVar19 * 0x2c32 + lVar14 + lVar22 + lVar16 + lVar15 * -0x2b8c) >> 0xf);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 != 8);
        return;
      }
      piVar8 = local_c8 + 8;
    }
    lVar9 = lVar9 + 1;
    local_c8 = piVar8;
  } while( true );
}


