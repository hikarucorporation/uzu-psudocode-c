// Function : over_perf8
// Namespace: 
// Entry    : 00587da0
// Prototype: long over_perf8(long param_1)
// Body     : 00587da0 - 00587ebb


long over_perf8(long param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  iVar17 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar17 != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 8);
    lVar11 = *(long *)(param_1 + 0x10);
    lVar16 = 0;
    do {
      fVar20 = *(float *)(lVar11 + lVar16 * 4);
      fVar19 = 0.0;
      auVar18 = ZEXT816(0);
      if (fVar20 != 0.0) {
        auVar18 = ZEXT416((uint)(*(float *)(lVar10 + lVar16 * 4) / fVar20));
      }
      pfVar1 = (float *)(lVar10 + 4 + lVar16 * 4);
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      fVar20 = *(float *)(lVar10 + 0x14 + lVar16 * 4);
      fVar3 = *(float *)(lVar10 + 0x18 + lVar16 * 4);
      fVar4 = *(float *)(lVar10 + 0x1c + lVar16 * 4);
      auVar8 = *(undefined1 (*) [16])(lVar11 + 4 + lVar16 * 4);
      fVar5 = *(float *)(lVar11 + 0x14 + lVar16 * 4);
      fVar6 = *(float *)(lVar11 + 0x18 + lVar16 * 4);
      fVar7 = *(float *)(lVar11 + 0x1c + lVar16 * 4);
      *(int *)(lVar9 + lVar16 * 4) = auVar18._0_4_;
      auVar18 = rcpps(auVar18,auVar8);
      fVar21 = fVar12 * auVar18._0_4_;
      fVar22 = fVar13 * auVar18._4_4_;
      fVar23 = fVar14 * auVar18._8_4_;
      fVar24 = fVar15 * auVar18._12_4_;
      puVar2 = (uint *)(lVar9 + 4 + lVar16 * 4);
      *puVar2 = -(uint)(auVar8._0_4_ != 0.0) &
                (uint)((fVar12 - auVar8._0_4_ * fVar21) * auVar18._0_4_ + fVar21);
      puVar2[1] = -(uint)(auVar8._4_4_ != 0.0) &
                  (uint)((fVar13 - auVar8._4_4_ * fVar22) * auVar18._4_4_ + fVar22);
      puVar2[2] = -(uint)(auVar8._8_4_ != 0.0) &
                  (uint)((fVar14 - auVar8._8_4_ * fVar23) * auVar18._8_4_ + fVar23);
      puVar2[3] = -(uint)(auVar8._12_4_ != 0.0) &
                  (uint)((fVar15 - auVar8._12_4_ * fVar24) * auVar18._12_4_ + fVar24);
      if (fVar5 != 0.0) {
        fVar19 = fVar20 / fVar5;
      }
      *(float *)(lVar9 + 0x14 + lVar16 * 4) = fVar19;
      fVar20 = 0.0;
      if (fVar6 == 0.0) {
        *(undefined4 *)(lVar9 + 0x18 + lVar16 * 4) = 0;
      }
      else {
        *(float *)(lVar9 + 0x18 + lVar16 * 4) = fVar3 / fVar6;
      }
      if (fVar7 != 0.0) {
        fVar20 = fVar4 / fVar7;
      }
      *(float *)(lVar9 + 0x1c + lVar16 * 4) = fVar20;
      lVar16 = lVar16 + 8;
    } while (iVar17 != (int)lVar16);
  }
  return param_1 + 0x28;
}


