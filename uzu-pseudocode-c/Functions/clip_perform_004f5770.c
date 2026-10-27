// Function : clip_perform
// Namespace: 
// Entry    : 004f5770
// Prototype: long clip_perform(long param_1)
// Body     : 004f5770 - 004f58ea


long clip_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar13 = (uint)*(ulong *)(param_1 + 0x20);
  if (uVar13 == 0) goto LAB_004f58e2;
  lVar5 = *(long *)(param_1 + 8);
  pfVar12 = *(float **)(param_1 + 0x10);
  pfVar11 = *(float **)(param_1 + 0x18);
  if (uVar13 - 1 < 7) {
LAB_004f5873:
    uVar8 = uVar13;
    if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
LAB_004f587f:
      fVar16 = *(float *)(lVar5 + 0x34);
      if (*(float *)(lVar5 + 0x34) <= *pfVar12) {
        fVar16 = *pfVar12;
      }
      if (*(float *)(lVar5 + 0x38) <= fVar16) {
        fVar16 = *(float *)(lVar5 + 0x38);
      }
      *pfVar11 = fVar16;
      uVar8 = uVar13 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar11 = pfVar11 + 1;
    }
  }
  else {
    if ((pfVar11 < pfVar12 + (ulong)(uVar13 - 1) + 1 && pfVar12 < pfVar11 + (ulong)(uVar13 - 1) + 1)
       || (pfVar11 < (float *)(lVar5 + 0x3cU) &&
           (float *)(lVar5 + 0x34U) < pfVar11 + (ulong)(uVar13 - 1) + 1)) goto LAB_004f5873;
    uVar14 = (ulong)(uVar13 - 1) + 1;
    uVar15 = uVar14 & 0xfffffffffffffff8;
    uVar13 = uVar13 - (int)uVar15;
    pfVar1 = pfVar11 + uVar15;
    pfVar2 = pfVar12 + uVar15;
    uVar3 = *(undefined4 *)(lVar5 + 0x34);
    uVar4 = *(undefined4 *)(lVar5 + 0x38);
    uVar9 = 0;
    do {
      auVar17._4_4_ = uVar3;
      auVar17._0_4_ = uVar3;
      auVar17._8_4_ = uVar3;
      auVar17._12_4_ = uVar3;
      auVar17 = maxps(*(undefined1 (*) [16])((long)pfVar12 + uVar9),auVar17);
      auVar18._4_4_ = uVar3;
      auVar18._0_4_ = uVar3;
      auVar18._8_4_ = uVar3;
      auVar18._12_4_ = uVar3;
      auVar18 = maxps(*(undefined1 (*) [16])((long)pfVar12 + uVar9 + 0x10),auVar18);
      auVar6._4_4_ = uVar4;
      auVar6._0_4_ = uVar4;
      auVar6._8_4_ = uVar4;
      auVar6._12_4_ = uVar4;
      auVar17 = minps(auVar17,auVar6);
      auVar7._4_4_ = uVar4;
      auVar7._0_4_ = uVar4;
      auVar7._8_4_ = uVar4;
      auVar7._12_4_ = uVar4;
      auVar18 = minps(auVar18,auVar7);
      *(undefined1 (*) [16])((long)pfVar11 + uVar9) = auVar17;
      *(undefined1 (*) [16])((long)pfVar11 + uVar9 + 0x10) = auVar18;
      uVar9 = uVar9 + 0x20;
    } while ((uVar14 * 4 & 0xffffffffffffffe0) != uVar9);
    if (uVar14 == uVar15) goto LAB_004f58e2;
    pfVar11 = pfVar1;
    pfVar12 = pfVar2;
    uVar8 = uVar13;
    if ((uVar13 & 1) != 0) goto LAB_004f587f;
  }
  if (uVar13 != 1) {
    lVar10 = 0;
    do {
      fVar16 = *(float *)(lVar5 + 0x34);
      if (*(float *)(lVar5 + 0x34) <= pfVar12[lVar10]) {
        fVar16 = pfVar12[lVar10];
      }
      if (*(float *)(lVar5 + 0x38) <= fVar16) {
        fVar16 = *(float *)(lVar5 + 0x38);
      }
      pfVar11[lVar10] = fVar16;
      fVar16 = *(float *)(lVar5 + 0x34);
      if (*(float *)(lVar5 + 0x34) <= pfVar12[lVar10 + 1]) {
        fVar16 = pfVar12[lVar10 + 1];
      }
      if (*(float *)(lVar5 + 0x38) <= fVar16) {
        fVar16 = *(float *)(lVar5 + 0x38);
      }
      pfVar11[lVar10 + 1] = fVar16;
      lVar10 = lVar10 + 2;
    } while (uVar8 != (uint)lVar10);
  }
LAB_004f58e2:
  return param_1 + 0x28;
}


