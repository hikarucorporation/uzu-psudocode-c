// Function : round_tilde_perform
// Namespace: 
// Entry    : 00560230
// Prototype: long round_tilde_perform(long param_1)
// Body     : 00560230 - 0056050f


/* WARNING: Removing unreachable block (ram,0x0056050e) */

long round_tilde_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar13 = uVar3 - 1;
  if (uVar3 == 0) goto LAB_0056024a;
  pfVar19 = *(float **)(param_1 + 0x10);
  pfVar18 = *(float **)(param_1 + 0x18);
  pfVar12 = *(float **)(param_1 + 0x20);
  if (0.0 < *(float *)(*(long *)(param_1 + 8) + 0x30)) {
    uVar10 = uVar13;
    if ((uVar3 & 1) != 0) {
      fVar20 = *pfVar19;
      fVar2 = *pfVar18;
      if (0.0 < fVar2) {
        fVar20 = roundf(fVar20 / fVar2);
        fVar20 = fVar20 * fVar2;
      }
      pfVar19 = pfVar19 + 1;
      pfVar18 = pfVar18 + 1;
      *pfVar12 = fVar20;
      pfVar12 = pfVar12 + 1;
      uVar10 = uVar3 - 2;
    }
    if (uVar13 != 0) {
      lVar14 = 0;
      do {
        fVar20 = pfVar19[lVar14];
        fVar2 = pfVar18[lVar14];
        if (0.0 < fVar2) {
          fVar20 = roundf(fVar20 / fVar2);
          fVar20 = fVar20 * fVar2;
        }
        pfVar12[lVar14] = fVar20;
        fVar20 = pfVar19[lVar14 + 1];
        fVar2 = pfVar18[lVar14 + 1];
        if (0.0 < fVar2) {
          fVar20 = roundf(fVar20 / fVar2);
          fVar20 = fVar20 * fVar2;
        }
        pfVar12[lVar14 + 1] = fVar20;
        lVar14 = lVar14 + 2;
      } while (uVar10 + 1 != (int)lVar14);
    }
    goto LAB_0056024a;
  }
  if (2 < uVar13) {
    uVar17 = (ulong)uVar13;
    if ((pfVar19 + uVar17 + 1 <= pfVar12 || pfVar12 + uVar17 + 1 <= pfVar19) &&
       (pfVar18 + uVar17 + 1 <= pfVar12 || pfVar12 + uVar17 + 1 <= pfVar18)) {
      uVar11 = uVar17 + 1 & 0xfffffffffffffffc;
      uVar15 = (uVar11 - 4 >> 2) + 1;
      if (uVar11 - 4 == 0) {
        lVar14 = 0;
LAB_005604a7:
        pfVar1 = pfVar19 + lVar14;
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        auVar22 = *(undefined1 (*) [16])(pfVar18 + lVar14);
        fVar20 = auVar22._0_4_;
        fVar2 = auVar22._4_4_;
        fVar4 = auVar22._8_4_;
        fVar5 = auVar22._12_4_;
        auVar22 = rcpps(in_XMM2,auVar22);
        fVar24 = fVar6 * auVar22._0_4_;
        fVar25 = fVar7 * auVar22._4_4_;
        fVar26 = fVar8 * auVar22._8_4_;
        fVar27 = fVar9 * auVar22._12_4_;
        pfVar1 = pfVar12 + lVar14;
        *pfVar1 = (float)(~-(uint)(fVar20 <= 0.0) &
                          (uint)((float)(int)((fVar6 - fVar20 * fVar24) * auVar22._0_4_ + fVar24) *
                                fVar20) | (uint)fVar6 & -(uint)(fVar20 <= 0.0));
        pfVar1[1] = (float)(~-(uint)(fVar2 <= 0.0) &
                            (uint)((float)(int)((fVar7 - fVar2 * fVar25) * auVar22._4_4_ + fVar25) *
                                  fVar2) | (uint)fVar7 & -(uint)(fVar2 <= 0.0));
        pfVar1[2] = (float)(~-(uint)(fVar4 <= 0.0) &
                            (uint)((float)(int)((fVar8 - fVar4 * fVar26) * auVar22._8_4_ + fVar26) *
                                  fVar4) | (uint)fVar8 & -(uint)(fVar4 <= 0.0));
        pfVar1[3] = (float)(~-(uint)(fVar5 <= 0.0) &
                            (uint)((float)(int)((fVar9 - fVar5 * fVar27) * auVar22._12_4_ + fVar27)
                                  * fVar5) | (uint)fVar9 & -(uint)(fVar5 <= 0.0));
      }
      else {
        uVar16 = uVar15 & 0xfffffffffffffffe;
        lVar14 = 0;
        do {
          pfVar1 = pfVar19 + lVar14;
          fVar6 = *pfVar1;
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          auVar22 = *(undefined1 (*) [16])(pfVar18 + lVar14);
          fVar20 = auVar22._0_4_;
          fVar2 = auVar22._4_4_;
          fVar4 = auVar22._8_4_;
          fVar5 = auVar22._12_4_;
          auVar22 = rcpps(in_XMM3,auVar22);
          fVar24 = fVar6 * auVar22._0_4_;
          fVar25 = fVar7 * auVar22._4_4_;
          fVar26 = fVar8 * auVar22._8_4_;
          fVar27 = fVar9 * auVar22._12_4_;
          auVar23._0_4_ = (float)(int)((fVar6 - fVar20 * fVar24) * auVar22._0_4_ + fVar24) * fVar20;
          auVar23._4_4_ = (float)(int)((fVar7 - fVar2 * fVar25) * auVar22._4_4_ + fVar25) * fVar2;
          auVar23._8_4_ = (float)(int)((fVar8 - fVar4 * fVar26) * auVar22._8_4_ + fVar26) * fVar4;
          auVar23._12_4_ = (float)(int)((fVar9 - fVar5 * fVar27) * auVar22._12_4_ + fVar27) * fVar5;
          pfVar1 = pfVar12 + lVar14;
          *pfVar1 = (float)(~-(uint)(fVar20 <= 0.0) & (uint)auVar23._0_4_ |
                           (uint)fVar6 & -(uint)(fVar20 <= 0.0));
          pfVar1[1] = (float)(~-(uint)(fVar2 <= 0.0) & (uint)auVar23._4_4_ |
                             (uint)fVar7 & -(uint)(fVar2 <= 0.0));
          pfVar1[2] = (float)(~-(uint)(fVar4 <= 0.0) & (uint)auVar23._8_4_ |
                             (uint)fVar8 & -(uint)(fVar4 <= 0.0));
          pfVar1[3] = (float)(~-(uint)(fVar5 <= 0.0) & (uint)auVar23._12_4_ |
                             (uint)fVar9 & -(uint)(fVar5 <= 0.0));
          pfVar1 = pfVar19 + lVar14 + 4;
          fVar6 = *pfVar1;
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          auVar22 = *(undefined1 (*) [16])(pfVar18 + lVar14 + 4);
          fVar20 = auVar22._0_4_;
          fVar2 = auVar22._4_4_;
          fVar4 = auVar22._8_4_;
          fVar5 = auVar22._12_4_;
          auVar22 = rcpps(auVar23,auVar22);
          fVar24 = fVar6 * auVar22._0_4_;
          fVar25 = fVar7 * auVar22._4_4_;
          fVar26 = fVar8 * auVar22._8_4_;
          fVar27 = fVar9 * auVar22._12_4_;
          in_XMM3._0_4_ = (float)(int)((fVar6 - fVar20 * fVar24) * auVar22._0_4_ + fVar24) * fVar20;
          in_XMM3._4_4_ = (float)(int)((fVar7 - fVar2 * fVar25) * auVar22._4_4_ + fVar25) * fVar2;
          in_XMM3._8_4_ = (float)(int)((fVar8 - fVar4 * fVar26) * auVar22._8_4_ + fVar26) * fVar4;
          in_XMM3._12_4_ = (float)(int)((fVar9 - fVar5 * fVar27) * auVar22._12_4_ + fVar27) * fVar5;
          auVar22._0_4_ = (uint)fVar6 & -(uint)(fVar20 <= 0.0);
          auVar22._4_4_ = (uint)fVar7 & -(uint)(fVar2 <= 0.0);
          auVar22._8_4_ = (uint)fVar8 & -(uint)(fVar4 <= 0.0);
          auVar22._12_4_ = (uint)fVar9 & -(uint)(fVar5 <= 0.0);
          auVar21._0_4_ = ~-(uint)(fVar20 <= 0.0) & (uint)in_XMM3._0_4_;
          auVar21._4_4_ = ~-(uint)(fVar2 <= 0.0) & (uint)in_XMM3._4_4_;
          auVar21._8_4_ = ~-(uint)(fVar4 <= 0.0) & (uint)in_XMM3._8_4_;
          auVar21._12_4_ = ~-(uint)(fVar5 <= 0.0) & (uint)in_XMM3._12_4_;
          in_XMM2 = auVar21 | auVar22;
          *(undefined1 (*) [16])(pfVar12 + lVar14 + 4) = in_XMM2;
          lVar14 = lVar14 + 8;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
        if ((uVar15 & 1) != 0) goto LAB_005604a7;
      }
      if (uVar17 + 1 == uVar11) goto LAB_0056024a;
      uVar13 = uVar13 - (int)uVar11;
      pfVar19 = pfVar19 + uVar11;
      pfVar18 = pfVar18 + uVar11;
      pfVar12 = pfVar12 + uVar11;
    }
  }
  lVar14 = 0;
  do {
    fVar20 = pfVar19[lVar14];
    fVar2 = pfVar18[lVar14];
    if (0.0 < fVar2) {
      fVar20 = (float)(int)(fVar20 / fVar2) * fVar2;
    }
    pfVar12[lVar14] = fVar20;
    lVar14 = lVar14 + 1;
  } while (uVar13 + 1 != (int)lVar14);
LAB_0056024a:
  return param_1 + 0x30;
}


