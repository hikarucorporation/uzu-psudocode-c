// Function : jpeg_idct_float
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a2f0
// Prototype: undefined jpeg_idct_float(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 0038a2f0 - 0038a784


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_float(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_float
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short sVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  uint uVar14;
  ushort uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_118 [66];
  
  fVar8 = DAT_005de594;
  fVar7 = DAT_005de590;
  fVar6 = DAT_005de58c;
  fVar5 = DAT_005de588;
  auVar4 = _DAT_005ddaf0;
  auVar3 = _DAT_005ddae0;
  lVar2 = *(long *)(param_1 + 0x198);
  lVar11 = *(long *)(param_2 + 0x58);
  uVar14 = 9;
  lVar9 = 0;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar9);
    uVar12 = *(ushort *)(param_3 + 0x20 + lVar9);
    uVar15 = *(ushort *)(param_3 + 0x30 + lVar9);
    if (sVar1 == 0 && uVar12 == 0) {
      if (uVar15 != 0) {
LAB_0038a376:
        uVar12 = 0;
        goto LAB_0038a378;
      }
      if ((((*(short *)(param_3 + 0x40 + lVar9) != 0) || (*(short *)(param_3 + 0x50 + lVar9) != 0))
          || (*(short *)(param_3 + 0x60 + lVar9) != 0)) || (*(short *)(param_3 + 0x70 + lVar9) != 0)
         ) {
        uVar15 = 0;
        goto LAB_0038a376;
      }
      fVar22 = (float)(int)*(short *)(param_3 + lVar9) * *(float *)(lVar11 + lVar9 * 2);
      *(float *)((long)afStack_118 + lVar9 * 2) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x20) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x40) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x60) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x80) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0xa0) = fVar22;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0xc0) = fVar22;
      lVar13 = 0x38;
    }
    else {
LAB_0038a378:
      fVar20 = *(float *)(lVar11 + lVar9 * 2) * (float)(int)*(short *)(param_3 + lVar9);
      fVar21 = *(float *)(lVar11 + 0x40 + lVar9 * 2) *
               (float)(int)((long)((ulong)uVar12 << 0x30) >> 0x30);
      fVar22 = *(float *)(lVar11 + 0x80 + lVar9 * 2) *
               (float)(int)*(short *)(param_3 + 0x40 + lVar9);
      fVar23 = *(float *)(lVar11 + 0xc0 + lVar9 * 2) *
               (float)(int)((long)((ulong)*(ushort *)(param_3 + 0x60 + lVar9) << 0x30) >> 0x30);
      fVar19 = fVar20 - fVar22;
      fVar22 = fVar22 + fVar20;
      fVar24 = fVar23 + fVar21;
      fVar20 = (fVar21 - fVar23) * DAT_005de588 - fVar24;
      fVar26 = fVar22 + fVar24;
      fVar22 = fVar22 - fVar24;
      fVar29 = fVar19 + fVar20;
      fVar19 = fVar19 - fVar20;
      fVar24 = *(float *)(lVar11 + 0xa0 + lVar9 * 2) *
               (float)(int)*(short *)(param_3 + 0x50 + lVar9);
      fVar20 = *(float *)(lVar11 + 0x60 + lVar9 * 2) *
               (float)(int)((long)((ulong)uVar15 << 0x30) >> 0x30);
      fVar25 = *(float *)(lVar11 + 0x20 + lVar9 * 2) * (float)(int)sVar1;
      fVar23 = *(float *)(lVar11 + 0xe0 + lVar9 * 2) *
               (float)(int)((long)((ulong)*(ushort *)(param_3 + 0x70 + lVar9) << 0x30) >> 0x30);
      fVar21 = fVar20 + fVar24;
      fVar24 = fVar24 - fVar20;
      fVar27 = fVar25 + fVar23;
      fVar25 = fVar25 - fVar23;
      fVar20 = fVar21 + fVar27;
      fVar23 = (fVar24 + fVar25) * DAT_005de58c;
      fVar24 = (fVar24 * DAT_005de594 + fVar23) - fVar20;
      fVar27 = (fVar27 - fVar21) * DAT_005de588 - fVar24;
      fVar21 = (fVar25 * DAT_005de590 + fVar23) - fVar27;
      *(float *)((long)afStack_118 + lVar9 * 2) = fVar26 + fVar20;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0xe0) = fVar26 - fVar20;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x20) = fVar29 + fVar24;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0xc0) = fVar29 - fVar24;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x40) = fVar19 + fVar27;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0xa0) = fVar19 - fVar27;
      *(float *)((long)afStack_118 + lVar9 * 2 + 0x60) = fVar22 + fVar21;
      fVar22 = fVar22 - fVar21;
      lVar13 = 0x20;
    }
    *(float *)((long)afStack_118 + lVar9 * 2 + lVar13 * 4) = fVar22;
    uVar14 = uVar14 - 1;
    lVar9 = lVar9 + 2;
    if (uVar14 < 2) {
      uVar10 = (ulong)param_5;
      lVar11 = 0;
      do {
        lVar9 = *(long *)(param_4 + lVar11);
        fVar25 = afStack_118[lVar11] + _DAT_005de598 + afStack_118[lVar11 + 4];
        fVar22 = (afStack_118[lVar11] + _DAT_005de598) - afStack_118[lVar11 + 4];
        fVar29 = afStack_118[lVar11 + 2] + afStack_118[lVar11 + 6];
        fVar27 = (afStack_118[lVar11 + 2] - afStack_118[lVar11 + 6]) * fVar5 - fVar29;
        fVar28 = afStack_118[lVar11 + 5] + afStack_118[lVar11 + 3];
        fVar26 = afStack_118[lVar11 + 5] - afStack_118[lVar11 + 3];
        fVar23 = afStack_118[lVar11 + 1] + afStack_118[lVar11 + 7];
        fVar24 = afStack_118[lVar11 + 1] - afStack_118[lVar11 + 7];
        fVar20 = fVar28 + fVar23;
        fVar19 = fVar25 + fVar29;
        fVar21 = fVar22 + fVar27;
        fVar25 = fVar25 - fVar29;
        fVar22 = fVar22 - fVar27;
        fVar27 = (fVar26 + fVar24) * fVar6;
        fVar26 = (fVar26 * fVar8 + fVar27) - fVar20;
        fVar23 = (fVar23 - fVar28) * fVar5 - fVar26;
        auVar16._0_4_ = (int)(fVar19 + fVar20);
        auVar16._4_4_ = (int)(fVar19 - fVar20);
        auVar16._8_4_ = (int)(fVar21 + fVar26);
        auVar16._12_4_ = (int)(fVar21 - fVar26);
        fVar20 = (fVar24 * fVar7 + fVar27) - fVar23;
        auVar16 = auVar16 & auVar3;
        *(undefined1 *)(lVar9 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar16._0_4_);
        *(undefined1 *)(lVar9 + 7 + uVar10) =
             *(undefined1 *)(lVar2 + -0x180 + (auVar16._0_8_ >> 0x20));
        *(undefined1 *)(lVar9 + 1 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar16._8_4_)
        ;
        auVar17._0_4_ = (int)(fVar22 + fVar23);
        auVar17._4_4_ = (int)(fVar22 - fVar23);
        auVar17._8_4_ = (int)(fVar25 + fVar20);
        auVar17._12_4_ = (int)(fVar25 - fVar20);
        auVar17 = pshuflw(auVar17,auVar17,0xe8);
        auVar17 = pshufhw(auVar17,auVar17,0xe8);
        auVar18._0_4_ = auVar17._0_4_;
        auVar18._8_4_ = auVar17._8_4_;
        auVar18._12_4_ = auVar17._12_4_;
        auVar18._4_4_ = auVar18._8_4_;
        auVar18 = auVar18 & auVar4;
        *(undefined1 *)(lVar9 + 6 + uVar10) =
             *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar16._12_4_);
        *(undefined1 *)(lVar9 + 2 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar18._0_2_)
        ;
        *(undefined1 *)(lVar9 + 5 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar18._2_2_)
        ;
        *(undefined1 *)(lVar9 + 3 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar18._4_2_)
        ;
        *(undefined1 *)(lVar9 + 4 + uVar10) = *(undefined1 *)(lVar2 + -0x180 + (ulong)auVar18._6_2_)
        ;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x40);
      return;
    }
  } while( true );
}


