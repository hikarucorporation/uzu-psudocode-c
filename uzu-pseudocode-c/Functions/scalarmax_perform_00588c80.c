// Function : scalarmax_perform
// Namespace: 
// Entry    : 00588c80
// Prototype: long scalarmax_perform(long param_1)
// Body     : 00588c80 - 00588e2d


/* WARNING: Removing unreachable block (ram,0x00588e2c) */

long scalarmax_perform(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar16 = (uint)*(ulong *)(param_1 + 0x20);
  if (uVar16 == 0) goto LAB_00588dff;
  fVar1 = **(float **)(param_1 + 0x10);
  pfVar6 = *(float **)(param_1 + 8);
  pfVar7 = *(float **)(param_1 + 0x18);
  if ((uVar16 - 1 < 7) ||
     ((pfVar7 < pfVar6 + (ulong)(uVar16 - 1) + 1 && (pfVar6 < pfVar7 + (ulong)(uVar16 - 1) + 1)))) {
    uVar12 = uVar16 - 1;
    uVar8 = uVar16 & 3;
    if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
LAB_00588ce2:
      uVar10 = 0;
      do {
        fVar17 = *pfVar6;
        if (*pfVar6 <= fVar1) {
          fVar17 = fVar1;
        }
        pfVar6 = pfVar6 + 1;
        *pfVar7 = fVar17;
        pfVar7 = pfVar7 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar16 = uVar16 - uVar10;
    }
  }
  else {
    uVar14 = (ulong)(uVar16 - 1) + 1;
    uVar13 = uVar14 & 0xfffffffffffffff8;
    uVar15 = (uVar13 - 8 >> 3) + 1;
    if (uVar13 - 8 == 0) {
      lVar11 = 0;
LAB_00588de2:
      auVar4._4_4_ = fVar1;
      auVar4._0_4_ = fVar1;
      auVar4._8_4_ = fVar1;
      auVar4._12_4_ = fVar1;
      auVar18 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11),auVar4);
      auVar5._4_4_ = fVar1;
      auVar5._0_4_ = fVar1;
      auVar5._8_4_ = fVar1;
      auVar5._12_4_ = fVar1;
      auVar19 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11 + 4),auVar5);
      *(undefined1 (*) [16])(pfVar7 + lVar11) = auVar18;
      *(undefined1 (*) [16])(pfVar7 + lVar11 + 4) = auVar19;
    }
    else {
      uVar9 = uVar15 & 0xfffffffffffffffe;
      lVar11 = 0;
      do {
        auVar18._4_4_ = fVar1;
        auVar18._0_4_ = fVar1;
        auVar18._8_4_ = fVar1;
        auVar18._12_4_ = fVar1;
        auVar18 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11),auVar18);
        auVar19._4_4_ = fVar1;
        auVar19._0_4_ = fVar1;
        auVar19._8_4_ = fVar1;
        auVar19._12_4_ = fVar1;
        auVar19 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11 + 4),auVar19);
        *(undefined1 (*) [16])(pfVar7 + lVar11) = auVar18;
        *(undefined1 (*) [16])(pfVar7 + lVar11 + 4) = auVar19;
        auVar2._4_4_ = fVar1;
        auVar2._0_4_ = fVar1;
        auVar2._8_4_ = fVar1;
        auVar2._12_4_ = fVar1;
        auVar18 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11 + 8),auVar2);
        auVar3._4_4_ = fVar1;
        auVar3._0_4_ = fVar1;
        auVar3._8_4_ = fVar1;
        auVar3._12_4_ = fVar1;
        auVar19 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar11 + 0xc),auVar3);
        *(undefined1 (*) [16])(pfVar7 + lVar11 + 8) = auVar18;
        *(undefined1 (*) [16])(pfVar7 + lVar11 + 0xc) = auVar19;
        lVar11 = lVar11 + 0x10;
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
      if ((uVar15 & 1) != 0) goto LAB_00588de2;
    }
    if (uVar14 == uVar13) goto LAB_00588dff;
    pfVar6 = pfVar6 + uVar13;
    uVar16 = uVar16 - (int)uVar13;
    pfVar7 = pfVar7 + uVar13;
    uVar12 = uVar16 - 1;
    uVar8 = uVar16 & 3;
    if (uVar8 != 0) goto LAB_00588ce2;
  }
  if (2 < uVar12) {
    lVar11 = 0;
    do {
      fVar17 = pfVar6[lVar11];
      if (pfVar6[lVar11] <= fVar1) {
        fVar17 = fVar1;
      }
      pfVar7[lVar11] = fVar17;
      fVar17 = pfVar6[lVar11 + 1];
      if (pfVar6[lVar11 + 1] <= fVar1) {
        fVar17 = fVar1;
      }
      pfVar7[lVar11 + 1] = fVar17;
      fVar17 = pfVar6[lVar11 + 2];
      if (pfVar6[lVar11 + 2] <= fVar1) {
        fVar17 = fVar1;
      }
      pfVar7[lVar11 + 2] = fVar17;
      fVar17 = pfVar6[lVar11 + 3];
      if (pfVar6[lVar11 + 3] <= fVar1) {
        fVar17 = fVar1;
      }
      pfVar7[lVar11 + 3] = fVar17;
      lVar11 = lVar11 + 4;
    } while (uVar16 != (uint)lVar11);
  }
LAB_00588dff:
  return param_1 + 0x28;
}


