// Function : reversescalarover_perform
// Namespace: 
// Entry    : 00588390
// Prototype: long reversescalarover_perform(long param_1)
// Body     : 00588390 - 00588570


/* WARNING: Removing unreachable block (ram,0x0058856c) */

long reversescalarover_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar12 = (uint)*(ulong *)(param_1 + 0x20);
  if (uVar12 == 0) goto LAB_00588500;
  fVar2 = **(float **)(param_1 + 0x10);
  pfVar5 = *(float **)(param_1 + 8);
  pfVar6 = *(float **)(param_1 + 0x18);
  if ((uVar12 - 1 < 3) ||
     ((pfVar6 < pfVar5 + (ulong)(uVar12 - 1) + 1 && (pfVar5 < pfVar6 + (ulong)(uVar12 - 1) + 1)))) {
    uVar4 = uVar12;
    if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
LAB_005884d7:
      fVar13 = 0.0;
      if (*pfVar5 != 0.0) {
        fVar13 = fVar2 / *pfVar5;
      }
      pfVar5 = pfVar5 + 1;
      *pfVar6 = fVar13;
      pfVar6 = pfVar6 + 1;
      uVar4 = uVar12 - 1;
    }
  }
  else {
    uVar10 = (ulong)(uVar12 - 1) + 1;
    uVar9 = uVar10 & 0xfffffffffffffffc;
    uVar11 = (uVar9 - 4 >> 2) + 1;
    if (uVar9 - 4 == 0) {
      lVar8 = 0;
LAB_00588496:
      auVar3 = *(undefined1 (*) [16])(pfVar5 + lVar8);
      auVar14 = rcpps(in_XMM3,auVar3);
      fVar13 = fVar2 * auVar14._0_4_;
      fVar15 = fVar2 * auVar14._4_4_;
      fVar16 = fVar2 * auVar14._8_4_;
      fVar17 = fVar2 * auVar14._12_4_;
      pfVar1 = pfVar6 + lVar8;
      *pfVar1 = (float)(-(uint)(auVar3._0_4_ != 0.0) &
                       (uint)((fVar2 - auVar3._0_4_ * fVar13) * auVar14._0_4_ + fVar13));
      pfVar1[1] = (float)(-(uint)(auVar3._4_4_ != 0.0) &
                         (uint)((fVar2 - auVar3._4_4_ * fVar15) * auVar14._4_4_ + fVar15));
      pfVar1[2] = (float)(-(uint)(auVar3._8_4_ != 0.0) &
                         (uint)((fVar2 - auVar3._8_4_ * fVar16) * auVar14._8_4_ + fVar16));
      pfVar1[3] = (float)(-(uint)(auVar3._12_4_ != 0.0) &
                         (uint)((fVar2 - auVar3._12_4_ * fVar17) * auVar14._12_4_ + fVar17));
    }
    else {
      uVar7 = uVar11 & 0xfffffffffffffffe;
      lVar8 = 0;
      do {
        auVar3 = *(undefined1 (*) [16])(pfVar5 + lVar8);
        auVar14 = rcpps(in_XMM4,auVar3);
        fVar13 = fVar2 * auVar14._0_4_;
        fVar15 = fVar2 * auVar14._4_4_;
        fVar16 = fVar2 * auVar14._8_4_;
        fVar17 = fVar2 * auVar14._12_4_;
        pfVar1 = pfVar6 + lVar8;
        *pfVar1 = (float)(-(uint)(auVar3._0_4_ != 0.0) &
                         (uint)((fVar2 - auVar3._0_4_ * fVar13) * auVar14._0_4_ + fVar13));
        pfVar1[1] = (float)(-(uint)(auVar3._4_4_ != 0.0) &
                           (uint)((fVar2 - auVar3._4_4_ * fVar15) * auVar14._4_4_ + fVar15));
        pfVar1[2] = (float)(-(uint)(auVar3._8_4_ != 0.0) &
                           (uint)((fVar2 - auVar3._8_4_ * fVar16) * auVar14._8_4_ + fVar16));
        pfVar1[3] = (float)(-(uint)(auVar3._12_4_ != 0.0) &
                           (uint)((fVar2 - auVar3._12_4_ * fVar17) * auVar14._12_4_ + fVar17));
        auVar3 = *(undefined1 (*) [16])(pfVar5 + lVar8 + 4);
        in_XMM4 = rcpps(auVar14,auVar3);
        fVar13 = fVar2 * in_XMM4._0_4_;
        fVar15 = fVar2 * in_XMM4._4_4_;
        fVar16 = fVar2 * in_XMM4._8_4_;
        fVar17 = fVar2 * in_XMM4._12_4_;
        in_XMM3._0_4_ =
             -(uint)(auVar3._0_4_ != 0.0) &
             (uint)((fVar2 - auVar3._0_4_ * fVar13) * in_XMM4._0_4_ + fVar13);
        in_XMM3._4_4_ =
             -(uint)(auVar3._4_4_ != 0.0) &
             (uint)((fVar2 - auVar3._4_4_ * fVar15) * in_XMM4._4_4_ + fVar15);
        in_XMM3._8_4_ =
             -(uint)(auVar3._8_4_ != 0.0) &
             (uint)((fVar2 - auVar3._8_4_ * fVar16) * in_XMM4._8_4_ + fVar16);
        in_XMM3._12_4_ =
             -(uint)(auVar3._12_4_ != 0.0) &
             (uint)((fVar2 - auVar3._12_4_ * fVar17) * in_XMM4._12_4_ + fVar17);
        *(undefined1 (*) [16])(pfVar6 + lVar8 + 4) = in_XMM3;
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
      if ((uVar11 & 1) != 0) goto LAB_00588496;
    }
    if (uVar10 == uVar9) goto LAB_00588500;
    pfVar5 = pfVar5 + uVar9;
    uVar12 = uVar12 - (int)uVar9;
    pfVar6 = pfVar6 + uVar9;
    uVar4 = uVar12;
    if ((uVar12 & 1) != 0) goto LAB_005884d7;
  }
  if (uVar12 != 1) {
    lVar8 = 0;
    do {
      fVar13 = 0.0;
      if (pfVar5[lVar8] == 0.0) {
        pfVar6[lVar8] = 0.0;
        fVar15 = pfVar5[lVar8 + 1];
      }
      else {
        pfVar6[lVar8] = fVar2 / pfVar5[lVar8];
        fVar15 = pfVar5[lVar8 + 1];
      }
      if (fVar15 != 0.0) {
        fVar13 = fVar2 / fVar15;
      }
      pfVar6[lVar8 + 1] = fVar13;
      lVar8 = lVar8 + 2;
    } while (uVar4 != (uint)lVar8);
  }
LAB_00588500:
  return param_1 + 0x28;
}


