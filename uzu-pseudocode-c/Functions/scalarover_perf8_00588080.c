// Function : scalarover_perf8
// Namespace: 
// Entry    : 00588080
// Prototype: long scalarover_perf8(long param_1)
// Body     : 00588080 - 00588382


long scalarover_perf8(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float *pfVar36;
  ulong uVar37;
  float *pfVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  float fVar44;
  
  uVar40 = (uint)*(undefined8 *)(param_1 + 0x20);
  fVar44 = **(float **)(param_1 + 0x10);
  if (fVar44 != 0.0) {
    fVar44 = DAT_005d9038 / fVar44;
  }
  if (uVar40 != 0) {
    pfVar3 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x18);
    uVar41 = uVar40 - 8 >> 3;
    if ((uVar41 < 3) ||
       ((uVar37 = (ulong)(uVar40 - 8 & 0xfffffff8), pfVar4 < pfVar3 + uVar37 + 8 &&
        (pfVar3 < pfVar4 + uVar37 + 8)))) {
      pfVar36 = pfVar3;
      pfVar38 = pfVar4;
    }
    else {
      uVar42 = (ulong)uVar41 + 1;
      uVar41 = (uint)uVar42 & 0xfffffffc;
      uVar43 = (ulong)uVar41;
      pfVar36 = pfVar3 + uVar43 * 8;
      pfVar38 = pfVar4 + uVar43 * 8;
      uVar40 = uVar40 + uVar41 * -8;
      uVar37 = 0;
      do {
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x50);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x70);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x10);
        fVar17 = *pfVar1;
        fVar18 = pfVar1[1];
        fVar19 = pfVar1[2];
        fVar20 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x20);
        fVar21 = *pfVar1;
        fVar22 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar24 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x30);
        fVar25 = *pfVar1;
        fVar26 = pfVar1[1];
        fVar27 = pfVar1[2];
        fVar28 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x40);
        fVar29 = *pfVar1;
        fVar30 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar32 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar37 + 0x60);
        fVar33 = pfVar1[1];
        fVar34 = pfVar1[2];
        fVar35 = pfVar1[3];
        pfVar2 = (float *)((long)pfVar4 + uVar37 + 0x60);
        *pfVar2 = *pfVar1 * fVar44;
        pfVar2[1] = fVar33 * fVar44;
        pfVar2[2] = fVar34 * fVar44;
        pfVar2[3] = fVar35 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x70);
        *pfVar1 = fVar9 * fVar44;
        pfVar1[1] = fVar10 * fVar44;
        pfVar1[2] = fVar11 * fVar44;
        pfVar1[3] = fVar12 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x40);
        *pfVar1 = fVar29 * fVar44;
        pfVar1[1] = fVar30 * fVar44;
        pfVar1[2] = fVar31 * fVar44;
        pfVar1[3] = fVar32 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x50);
        *pfVar1 = fVar5 * fVar44;
        pfVar1[1] = fVar6 * fVar44;
        pfVar1[2] = fVar7 * fVar44;
        pfVar1[3] = fVar8 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x20);
        *pfVar1 = fVar21 * fVar44;
        pfVar1[1] = fVar22 * fVar44;
        pfVar1[2] = fVar23 * fVar44;
        pfVar1[3] = fVar24 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x30);
        *pfVar1 = fVar25 * fVar44;
        pfVar1[1] = fVar26 * fVar44;
        pfVar1[2] = fVar27 * fVar44;
        pfVar1[3] = fVar28 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37);
        *pfVar1 = fVar13 * fVar44;
        pfVar1[1] = fVar14 * fVar44;
        pfVar1[2] = fVar15 * fVar44;
        pfVar1[3] = fVar16 * fVar44;
        pfVar1 = (float *)((long)pfVar4 + uVar37 + 0x10);
        *pfVar1 = fVar17 * fVar44;
        pfVar1[1] = fVar18 * fVar44;
        pfVar1[2] = fVar19 * fVar44;
        pfVar1[3] = fVar20 * fVar44;
        uVar37 = uVar37 + 0x80;
      } while ((uVar42 * 0x20 & 0xffffffffffffff80) != uVar37);
      if (uVar42 == uVar43) goto LAB_0058837d;
    }
    uVar41 = uVar40 - 8;
    if ((uVar41 & 8) == 0) {
      fVar5 = pfVar36[1];
      fVar6 = pfVar36[2];
      fVar7 = pfVar36[3];
      fVar8 = pfVar36[4];
      fVar9 = pfVar36[5];
      fVar10 = pfVar36[6];
      fVar11 = pfVar36[7];
      *pfVar38 = *pfVar36 * fVar44;
      pfVar38[1] = fVar5 * fVar44;
      pfVar38[2] = fVar6 * fVar44;
      pfVar38[3] = fVar7 * fVar44;
      pfVar38[4] = fVar44 * fVar8;
      pfVar38[5] = fVar44 * fVar9;
      pfVar38[6] = fVar44 * fVar10;
      pfVar38[7] = fVar44 * fVar11;
      pfVar36 = pfVar36 + 8;
      pfVar38 = pfVar38 + 8;
      uVar40 = uVar41;
    }
    if (7 < uVar41) {
      lVar39 = 0;
      do {
        pfVar3 = pfVar36 + lVar39;
        fVar5 = pfVar3[1];
        fVar6 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = pfVar36 + lVar39 + 4;
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar4 = pfVar38 + lVar39;
        *pfVar4 = *pfVar3 * fVar44;
        pfVar4[1] = fVar5 * fVar44;
        pfVar4[2] = fVar6 * fVar44;
        pfVar4[3] = fVar7 * fVar44;
        pfVar3 = pfVar38 + lVar39 + 4;
        *pfVar3 = fVar8 * fVar44;
        pfVar3[1] = fVar9 * fVar44;
        pfVar3[2] = fVar10 * fVar44;
        pfVar3[3] = fVar11 * fVar44;
        pfVar3 = pfVar36 + lVar39 + 8;
        fVar5 = pfVar3[1];
        fVar6 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = pfVar36 + lVar39 + 0xc;
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar4 = pfVar38 + lVar39 + 8;
        *pfVar4 = *pfVar3 * fVar44;
        pfVar4[1] = fVar5 * fVar44;
        pfVar4[2] = fVar6 * fVar44;
        pfVar4[3] = fVar7 * fVar44;
        pfVar3 = pfVar38 + lVar39 + 0xc;
        *pfVar3 = fVar8 * fVar44;
        pfVar3[1] = fVar9 * fVar44;
        pfVar3[2] = fVar10 * fVar44;
        pfVar3[3] = fVar11 * fVar44;
        lVar39 = lVar39 + 0x10;
      } while (uVar40 != (uint)lVar39);
    }
  }
LAB_0058837d:
  return param_1 + 0x28;
}


