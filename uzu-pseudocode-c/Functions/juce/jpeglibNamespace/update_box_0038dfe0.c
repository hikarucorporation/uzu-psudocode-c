// Function : update_box
// Namespace: juce:jpeglibNamespace
// Entry    : 0038dfe0
// Prototype: undefined update_box(long param_1, uint * param_2)
// Body     : 0038dfe0 - 0038e618


/* WARNING: Removing unreachable block (ram,0x0038e617) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::update_box(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::box*) */

void __cdecl juce::jpeglibNamespace::update_box(long param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  short *psVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong local_90;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  uVar8 = *param_2;
  uVar7 = param_2[1];
  local_90 = (ulong)uVar7;
  uVar18 = param_2[2];
  lVar19 = (long)(int)uVar18;
  uVar5 = param_2[3];
  uVar21 = param_2[4];
  lVar22 = (long)(int)uVar21;
  uVar17 = param_2[5];
  if ((((int)uVar8 < (int)uVar7) && ((int)uVar18 <= (int)uVar5)) && ((int)uVar21 <= (int)uVar17)) {
    lVar9 = (long)(int)uVar8;
    uVar16 = uVar7;
    if ((int)uVar7 < (int)uVar8) {
      uVar16 = uVar8;
    }
    do {
      lVar12 = *(long *)(lVar3 + lVar9 * 8) + lVar19 * 0x40 + lVar22 * 2;
      lVar14 = lVar19;
      do {
        lVar11 = 0;
        do {
          if (*(short *)(lVar12 + lVar11 * 2) != 0) {
            uVar8 = (uint)lVar9;
            *param_2 = uVar8;
            goto joined_r0x0038e0ae;
          }
          lVar11 = lVar11 + 1;
        } while ((uVar17 - uVar21) + 1 != (int)lVar11);
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 0x40;
      } while (uVar5 + 1 != (int)lVar14);
      lVar9 = lVar9 + 1;
    } while (uVar16 + 1 != (int)lVar9);
  }
joined_r0x0038e0ae:
  if ((((int)uVar8 < (int)uVar7) && ((int)uVar18 <= (int)uVar5)) && ((int)uVar21 <= (int)uVar17)) {
    uVar23 = (long)(int)uVar7;
    do {
      lVar9 = *(long *)(lVar3 + uVar23 * 8) + lVar19 * 0x40 + lVar22 * 2;
      lVar12 = lVar19;
      do {
        lVar14 = 0;
        do {
          if (*(short *)(lVar9 + lVar14 * 2) != 0) {
            param_2[1] = (uint)uVar23;
            local_90 = uVar23;
            goto LAB_0038e142;
          }
          lVar14 = lVar14 + 1;
        } while ((uVar17 - uVar21) + 1 != (int)lVar14);
        lVar12 = lVar12 + 1;
        lVar9 = lVar9 + 0x40;
      } while (uVar5 + 1 != (int)lVar12);
      bVar4 = (long)(int)uVar8 < (long)uVar23;
      uVar23 = uVar23 - 1;
    } while (bVar4);
LAB_0038e142:
    uVar7 = (uint)local_90;
  }
  local_90._0_4_ = uVar7;
  if ((((int)uVar18 < (int)uVar5) && ((int)uVar8 <= (int)(uint)local_90)) &&
     ((int)uVar21 <= (int)uVar17)) {
    uVar7 = uVar5;
    if ((int)uVar5 < (int)uVar18) {
      uVar7 = uVar18;
    }
    do {
      lVar9 = (long)(int)uVar8;
      do {
        lVar12 = 0;
        do {
          if (*(short *)(lVar19 * 0x40 + *(long *)(lVar3 + lVar9 * 8) + lVar22 * 2 + lVar12 * 2) !=
              0) {
            uVar18 = (uint)lVar19;
            param_2[2] = uVar18;
            goto LAB_0038e1ce;
          }
          lVar12 = lVar12 + 1;
        } while ((uVar17 - uVar21) + 1 != (int)lVar12);
        lVar9 = lVar9 + 1;
      } while ((uint)local_90 + 1 != (int)lVar9);
      lVar19 = lVar19 + 1;
    } while (uVar7 + 1 != (int)lVar19);
  }
LAB_0038e1ce:
  if ((((int)uVar18 < (int)uVar5) && ((int)uVar8 <= (int)(uint)local_90)) &&
     ((int)uVar21 <= (int)uVar17)) {
    lVar19 = (long)(int)uVar5;
    do {
      lVar9 = (long)(int)uVar8;
      do {
        lVar12 = 0;
        do {
          if (*(short *)(lVar19 * 0x40 + *(long *)(lVar3 + lVar9 * 8) + lVar22 * 2 + lVar12 * 2) !=
              0) {
            uVar5 = (uint)lVar19;
            param_2[3] = uVar5;
            goto LAB_0038e256;
          }
          lVar12 = lVar12 + 1;
        } while ((uVar17 - uVar21) + 1 != (int)lVar12);
        lVar9 = lVar9 + 1;
      } while ((uint)local_90 + 1 != (int)lVar9);
      bVar4 = (int)uVar18 < lVar19;
      lVar19 = lVar19 + -1;
    } while (bVar4);
  }
LAB_0038e256:
  if ((((int)uVar21 < (int)uVar17) && ((int)uVar8 <= (int)(uint)local_90)) &&
     ((int)uVar18 <= (int)uVar5)) {
    uVar7 = uVar17;
    if ((int)uVar17 < (int)uVar21) {
      uVar7 = uVar21;
    }
    do {
      lVar19 = (long)(int)uVar8;
      do {
        psVar13 = (short *)(*(long *)(lVar3 + lVar19 * 8) + (long)(int)uVar18 * 0x40 + lVar22 * 2);
        iVar6 = (uVar5 - uVar18) + 1;
        do {
          if (*psVar13 != 0) {
            uVar21 = (uint)lVar22;
            param_2[4] = uVar21;
            goto LAB_0038e2d7;
          }
          psVar13 = psVar13 + 0x20;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar19 = lVar19 + 1;
      } while ((uint)local_90 + 1 != (int)lVar19);
      lVar22 = lVar22 + 1;
    } while (uVar7 + 1 != (int)lVar22);
  }
LAB_0038e2d7:
  if ((((int)uVar21 < (int)uVar17) && ((int)uVar8 <= (int)(uint)local_90)) &&
     ((int)uVar18 <= (int)uVar5)) {
    lVar19 = (long)(int)uVar17;
    do {
      lVar22 = (long)(int)uVar8;
      do {
        psVar13 = (short *)(*(long *)(lVar3 + lVar22 * 8) + (long)(int)uVar18 * 0x40 + lVar19 * 2);
        iVar6 = (uVar5 - uVar18) + 1;
        do {
          if (*psVar13 != 0) {
            uVar17 = (uint)lVar19;
            param_2[5] = uVar17;
            goto LAB_0038e372;
          }
          psVar13 = psVar13 + 0x20;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar22 = lVar22 + 1;
      } while ((uint)local_90 + 1 != (int)lVar22);
      bVar4 = (int)uVar21 < lVar19;
      lVar19 = lVar19 + -1;
    } while (bVar4);
  }
LAB_0038e372:
  lVar19 = (long)(int)(((uint)local_90 - uVar8) * 0x10);
  lVar22 = (long)(int)((uVar5 - uVar18) * 0xc);
  uVar7 = uVar17 - uVar21;
  *(long *)(param_2 + 6) =
       (long)(int)(uVar7 * 8) * (long)(int)(uVar7 * 8) + lVar22 * lVar22 + lVar19 * lVar19;
  if (((int)(uint)local_90 < (int)uVar8) || ((int)uVar5 < (int)uVar18)) {
    lVar19 = 0;
  }
  else {
    lVar22 = (long)(int)uVar8;
    uVar23 = (ulong)uVar7 + 1 & 0xfffffffffffffffc;
    uVar24 = (uVar23 - 4 >> 2) + 1;
    lVar19 = 0;
    do {
      if ((int)uVar21 <= (int)uVar17) {
        lVar12 = *(long *)(lVar3 + lVar22 * 8);
        lVar9 = (long)(int)uVar18 * 0x40 + lVar12 + ((long)(int)uVar21 + 6) * 2;
        lVar14 = (long)(int)uVar18;
        do {
          lVar11 = lVar14 * 0x40 + lVar12 + (long)(int)uVar21 * 2;
          if (uVar7 < 3) {
            uVar8 = uVar21;
LAB_0038e5e6:
            lVar10 = 0;
            do {
              lVar19 = (lVar19 + 1) - (ulong)(*(short *)(lVar11 + lVar10 * 2) == 0);
              lVar10 = lVar10 + 1;
            } while ((uVar17 + 1) - uVar8 != (int)lVar10);
          }
          else {
            lVar10 = 0;
            if (uVar23 - 4 == 0) {
              lVar27 = 0;
              lVar30 = 0;
              lVar15 = 0;
LAB_0038e583:
              uVar1 = *(undefined4 *)(lVar11 + lVar15 * 2);
              uVar2 = *(undefined4 *)(lVar11 + 4 + lVar15 * 2);
              auVar34._4_4_ = uVar1;
              auVar34._0_4_ = uVar1;
              auVar34._8_4_ = uVar1;
              auVar34._12_4_ = uVar1;
              auVar32 = pshufhw(auVar34,auVar34,0x55);
              auVar35._0_2_ = -(ushort)(auVar32._0_2_ == 0);
              auVar35._2_2_ = -(ushort)(auVar32._2_2_ == 0);
              auVar35._4_2_ = -(ushort)(auVar32._4_2_ == 0);
              auVar35._6_2_ = -(ushort)(auVar32._6_2_ == 0);
              auVar35._8_2_ = -(ushort)(auVar32._8_2_ == 0);
              auVar35._10_2_ = -(ushort)(auVar32._10_2_ == 0);
              auVar35._12_2_ = -(ushort)(auVar32._12_2_ == 0);
              auVar35._14_2_ = -(ushort)(auVar32._14_2_ == 0);
              lVar19 = lVar19 + SUB168(~auVar35 & _DAT_0065ada0,0);
              lVar10 = lVar10 + SUB168(~auVar35 & _DAT_0065ada0,8);
              auVar36._4_4_ = uVar2;
              auVar36._0_4_ = uVar2;
              auVar36._8_4_ = uVar2;
              auVar36._12_4_ = uVar2;
              auVar32 = pshufhw(auVar36,auVar36,0x55);
              auVar37._0_2_ = -(ushort)(auVar32._0_2_ == 0);
              auVar37._2_2_ = -(ushort)(auVar32._2_2_ == 0);
              auVar37._4_2_ = -(ushort)(auVar32._4_2_ == 0);
              auVar37._6_2_ = -(ushort)(auVar32._6_2_ == 0);
              auVar37._8_2_ = -(ushort)(auVar32._8_2_ == 0);
              auVar37._10_2_ = -(ushort)(auVar32._10_2_ == 0);
              auVar37._12_2_ = -(ushort)(auVar32._12_2_ == 0);
              auVar37._14_2_ = -(ushort)(auVar32._14_2_ == 0);
              lVar27 = lVar27 + SUB168(~auVar37 & _DAT_0065ada0,0);
              lVar30 = lVar30 + SUB168(~auVar37 & _DAT_0065ada0,8);
            }
            else {
              lVar27 = 0;
              lVar30 = 0;
              lVar15 = 0;
              uVar20 = uVar24 & 0xfffffffffffffffe;
              do {
                uVar1 = *(undefined4 *)(lVar9 + -0xc + lVar15 * 2);
                uVar8 = *(uint *)(lVar9 + -8 + lVar15 * 2);
                auVar31._4_4_ = uVar1;
                auVar31._0_4_ = uVar1;
                auVar31._8_4_ = uVar1;
                auVar31._12_4_ = uVar1;
                auVar32 = pshufhw(auVar31,auVar31,0x55);
                auVar33._0_2_ = -(ushort)(auVar32._0_2_ == 0);
                auVar33._2_2_ = -(ushort)(auVar32._2_2_ == 0);
                auVar33._4_2_ = -(ushort)(auVar32._4_2_ == 0);
                auVar33._6_2_ = -(ushort)(auVar32._6_2_ == 0);
                auVar33._8_2_ = -(ushort)(auVar32._8_2_ == 0);
                auVar33._10_2_ = -(ushort)(auVar32._10_2_ == 0);
                auVar33._12_2_ = -(ushort)(auVar32._12_2_ == 0);
                auVar33._14_2_ = -(ushort)(auVar32._14_2_ == 0);
                auVar32._4_4_ = uVar8;
                auVar32._0_4_ = uVar8;
                auVar32._8_4_ = uVar8;
                auVar32._12_4_ = uVar8;
                auVar32 = pshufhw(ZEXT416(uVar8),auVar32,0x55);
                auVar38._0_2_ = -(ushort)(auVar32._0_2_ == 0);
                auVar38._2_2_ = -(ushort)(auVar32._2_2_ == 0);
                auVar38._4_2_ = -(ushort)(auVar32._4_2_ == 0);
                auVar38._6_2_ = -(ushort)(auVar32._6_2_ == 0);
                auVar38._8_2_ = -(ushort)(auVar32._8_2_ == 0);
                auVar38._10_2_ = -(ushort)(auVar32._10_2_ == 0);
                auVar38._12_2_ = -(ushort)(auVar32._12_2_ == 0);
                auVar38._14_2_ = -(ushort)(auVar32._14_2_ == 0);
                uVar1 = *(undefined4 *)(lVar9 + -4 + lVar15 * 2);
                uVar2 = *(undefined4 *)(lVar9 + lVar15 * 2);
                auVar25._4_4_ = uVar1;
                auVar25._0_4_ = uVar1;
                auVar25._8_4_ = uVar1;
                auVar25._12_4_ = uVar1;
                auVar32 = pshufhw(auVar25,auVar25,0x55);
                auVar26._0_2_ = -(ushort)(auVar32._0_2_ == 0);
                auVar26._2_2_ = -(ushort)(auVar32._2_2_ == 0);
                auVar26._4_2_ = -(ushort)(auVar32._4_2_ == 0);
                auVar26._6_2_ = -(ushort)(auVar32._6_2_ == 0);
                auVar26._8_2_ = -(ushort)(auVar32._8_2_ == 0);
                auVar26._10_2_ = -(ushort)(auVar32._10_2_ == 0);
                auVar26._12_2_ = -(ushort)(auVar32._12_2_ == 0);
                auVar26._14_2_ = -(ushort)(auVar32._14_2_ == 0);
                lVar19 = SUB168(~auVar26 & _DAT_0065ada0,0) +
                         SUB168(~auVar33 & _DAT_0065ada0,0) + lVar19;
                lVar10 = SUB168(~auVar26 & _DAT_0065ada0,8) +
                         SUB168(~auVar33 & _DAT_0065ada0,8) + lVar10;
                auVar28._4_4_ = uVar2;
                auVar28._0_4_ = uVar2;
                auVar28._8_4_ = uVar2;
                auVar28._12_4_ = uVar2;
                auVar32 = pshufhw(auVar28,auVar28,0x55);
                auVar29._0_2_ = -(ushort)(auVar32._0_2_ == 0);
                auVar29._2_2_ = -(ushort)(auVar32._2_2_ == 0);
                auVar29._4_2_ = -(ushort)(auVar32._4_2_ == 0);
                auVar29._6_2_ = -(ushort)(auVar32._6_2_ == 0);
                auVar29._8_2_ = -(ushort)(auVar32._8_2_ == 0);
                auVar29._10_2_ = -(ushort)(auVar32._10_2_ == 0);
                auVar29._12_2_ = -(ushort)(auVar32._12_2_ == 0);
                auVar29._14_2_ = -(ushort)(auVar32._14_2_ == 0);
                lVar27 = SUB168(~auVar29 & _DAT_0065ada0,0) +
                         SUB168(~auVar38 & _DAT_0065ada0,0) + lVar27;
                lVar30 = SUB168(~auVar29 & _DAT_0065ada0,8) +
                         SUB168(~auVar38 & _DAT_0065ada0,8) + lVar30;
                lVar15 = lVar15 + 8;
                uVar20 = uVar20 - 2;
              } while (uVar20 != 0);
              if ((uVar24 & 1) != 0) goto LAB_0038e583;
            }
            lVar19 = lVar10 + lVar30 + lVar19 + lVar27;
            if ((ulong)uVar7 + 1 != uVar23) {
              lVar11 = lVar11 + uVar23 * 2;
              uVar8 = (int)uVar23 + uVar21;
              goto LAB_0038e5e6;
            }
          }
          lVar14 = lVar14 + 1;
          lVar9 = lVar9 + 0x40;
        } while (uVar5 + 1 != (int)lVar14);
      }
      lVar22 = lVar22 + 1;
    } while ((uint)local_90 + 1 != (int)lVar22);
  }
  *(long *)(param_2 + 8) = lVar19;
  return;
}


