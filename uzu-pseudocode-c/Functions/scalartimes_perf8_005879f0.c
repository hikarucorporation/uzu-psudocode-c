// Function : scalartimes_perf8
// Namespace: 
// Entry    : 005879f0
// Prototype: long scalartimes_perf8(long param_1)
// Body     : 005879f0 - 00587ce3


long scalartimes_perf8(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
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
  float fVar36;
  float *pfVar37;
  ulong uVar38;
  float *pfVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  
  uVar41 = (uint)*(undefined8 *)(param_1 + 0x20);
  if (uVar41 != 0) {
    fVar3 = **(float **)(param_1 + 0x10);
    pfVar4 = *(float **)(param_1 + 8);
    pfVar5 = *(float **)(param_1 + 0x18);
    uVar42 = uVar41 - 8 >> 3;
    if ((uVar42 < 3) ||
       ((uVar38 = (ulong)(uVar41 - 8 & 0xfffffff8), pfVar5 < pfVar4 + uVar38 + 8 &&
        (pfVar4 < pfVar5 + uVar38 + 8)))) {
      pfVar37 = pfVar4;
      pfVar39 = pfVar5;
    }
    else {
      uVar43 = (ulong)uVar42 + 1;
      uVar42 = (uint)uVar43 & 0xfffffffc;
      uVar44 = (ulong)uVar42;
      pfVar37 = pfVar4 + uVar44 * 8;
      pfVar39 = pfVar5 + uVar44 * 8;
      uVar41 = uVar41 + uVar42 * -8;
      uVar38 = 0;
      do {
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x50);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x70);
        fVar10 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38);
        fVar14 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar16 = pfVar1[2];
        fVar17 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x10);
        fVar18 = *pfVar1;
        fVar19 = pfVar1[1];
        fVar20 = pfVar1[2];
        fVar21 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x20);
        fVar22 = *pfVar1;
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x30);
        fVar26 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar28 = pfVar1[2];
        fVar29 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x40);
        fVar30 = *pfVar1;
        fVar31 = pfVar1[1];
        fVar32 = pfVar1[2];
        fVar33 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar38 + 0x60);
        fVar34 = pfVar1[1];
        fVar35 = pfVar1[2];
        fVar36 = pfVar1[3];
        pfVar2 = (float *)((long)pfVar5 + uVar38 + 0x60);
        *pfVar2 = *pfVar1 * fVar3;
        pfVar2[1] = fVar34 * fVar3;
        pfVar2[2] = fVar35 * fVar3;
        pfVar2[3] = fVar36 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x70);
        *pfVar1 = fVar10 * fVar3;
        pfVar1[1] = fVar11 * fVar3;
        pfVar1[2] = fVar12 * fVar3;
        pfVar1[3] = fVar13 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x40);
        *pfVar1 = fVar30 * fVar3;
        pfVar1[1] = fVar31 * fVar3;
        pfVar1[2] = fVar32 * fVar3;
        pfVar1[3] = fVar33 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x50);
        *pfVar1 = fVar6 * fVar3;
        pfVar1[1] = fVar7 * fVar3;
        pfVar1[2] = fVar8 * fVar3;
        pfVar1[3] = fVar9 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x20);
        *pfVar1 = fVar22 * fVar3;
        pfVar1[1] = fVar23 * fVar3;
        pfVar1[2] = fVar24 * fVar3;
        pfVar1[3] = fVar25 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x30);
        *pfVar1 = fVar26 * fVar3;
        pfVar1[1] = fVar27 * fVar3;
        pfVar1[2] = fVar28 * fVar3;
        pfVar1[3] = fVar29 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38);
        *pfVar1 = fVar14 * fVar3;
        pfVar1[1] = fVar15 * fVar3;
        pfVar1[2] = fVar16 * fVar3;
        pfVar1[3] = fVar17 * fVar3;
        pfVar1 = (float *)((long)pfVar5 + uVar38 + 0x10);
        *pfVar1 = fVar18 * fVar3;
        pfVar1[1] = fVar19 * fVar3;
        pfVar1[2] = fVar20 * fVar3;
        pfVar1[3] = fVar21 * fVar3;
        uVar38 = uVar38 + 0x80;
      } while ((uVar43 * 0x20 & 0xffffffffffffff80) != uVar38);
      if (uVar43 == uVar44) goto LAB_00587cde;
    }
    uVar42 = uVar41 - 8;
    if ((uVar42 & 8) == 0) {
      fVar6 = pfVar37[1];
      fVar7 = pfVar37[2];
      fVar8 = pfVar37[3];
      fVar9 = pfVar37[4];
      fVar10 = pfVar37[5];
      fVar11 = pfVar37[6];
      fVar12 = pfVar37[7];
      *pfVar39 = *pfVar37 * fVar3;
      pfVar39[1] = fVar6 * fVar3;
      pfVar39[2] = fVar7 * fVar3;
      pfVar39[3] = fVar8 * fVar3;
      pfVar39[4] = fVar3 * fVar9;
      pfVar39[5] = fVar3 * fVar10;
      pfVar39[6] = fVar3 * fVar11;
      pfVar39[7] = fVar3 * fVar12;
      pfVar37 = pfVar37 + 8;
      pfVar39 = pfVar39 + 8;
      uVar41 = uVar42;
    }
    if (7 < uVar42) {
      lVar40 = 0;
      do {
        pfVar4 = pfVar37 + lVar40;
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        pfVar5 = pfVar37 + lVar40 + 4;
        fVar9 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar12 = pfVar5[3];
        pfVar5 = pfVar39 + lVar40;
        *pfVar5 = *pfVar4 * fVar3;
        pfVar5[1] = fVar6 * fVar3;
        pfVar5[2] = fVar7 * fVar3;
        pfVar5[3] = fVar8 * fVar3;
        pfVar4 = pfVar39 + lVar40 + 4;
        *pfVar4 = fVar9 * fVar3;
        pfVar4[1] = fVar10 * fVar3;
        pfVar4[2] = fVar11 * fVar3;
        pfVar4[3] = fVar12 * fVar3;
        pfVar4 = pfVar37 + lVar40 + 8;
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        pfVar5 = pfVar37 + lVar40 + 0xc;
        fVar9 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar12 = pfVar5[3];
        pfVar5 = pfVar39 + lVar40 + 8;
        *pfVar5 = *pfVar4 * fVar3;
        pfVar5[1] = fVar6 * fVar3;
        pfVar5[2] = fVar7 * fVar3;
        pfVar5[3] = fVar8 * fVar3;
        pfVar4 = pfVar39 + lVar40 + 0xc;
        *pfVar4 = fVar9 * fVar3;
        pfVar4[1] = fVar10 * fVar3;
        pfVar4[2] = fVar11 * fVar3;
        pfVar4[3] = fVar12 * fVar3;
        lVar40 = lVar40 + 0x10;
      } while (uVar41 != (uint)lVar40);
    }
  }
LAB_00587cde:
  return param_1 + 0x28;
}


