// Function : bob_perform
// Namespace: 
// Entry    : 004d7fa0
// Prototype: long bob_perform(undefined8 param_1, float param_2, undefined8 param_3, long param_4)
// Body     : 004d7fa0 - 004d8aab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long bob_perform(undefined8 param_1,float param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  float *pfVar34;
  int iVar35;
  ulong uVar36;
  uint uVar37;
  double *pdVar38;
  ulong uVar39;
  ulong uVar40;
  float fVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  float in_XMM1_Dd;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  float in_XMM2_Dd;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  double dVar60;
  float in_XMM4_Dd;
  undefined8 uVar61;
  undefined8 uVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  
  dVar19 = _UNK_00651e88;
  dVar18 = _DAT_00651e80;
  lVar6 = *(long *)(param_4 + 8);
  pdVar38 = (double *)(lVar6 + 0x80);
  if (0x33 < *(int *)PTR_pd_compatibilitylevel_00715a40) {
    pdVar38 = (double *)(lVar6 + 0x98);
  }
  uVar7 = *(ulong *)(param_4 + 0x30);
  iVar35 = (int)uVar7;
  if (iVar35 < 1) goto LAB_004d8a96;
  pfVar33 = *(float **)(param_4 + 0x10);
  pfVar34 = *(float **)(param_4 + 0x18);
  pfVar24 = *(float **)(param_4 + 0x20);
  pfVar25 = *(float **)(param_4 + 0x28);
  iVar5 = *(int *)(lVar6 + 0xa8);
  if (0 < iVar5) {
    dVar48 = _DAT_005d9000 / ((double)iVar5 * *(double *)(lVar6 + 0xa0));
    dVar56 = DAT_005db338 * dVar48;
    dVar60 = DAT_00651e60 * dVar48;
    dVar75 = *(double *)(lVar6 + 0x98);
    dVar77 = *(double *)(lVar6 + 0x80);
    dVar44 = *(double *)(lVar6 + 0x88);
    dVar47 = *(double *)(lVar6 + 0x90);
    iVar30 = 0;
    uVar61 = _DAT_00651e90;
    uVar62 = _UNK_00651e98;
    dVar79 = DAT_00651e70;
    dVar43 = _DAT_00651ea0;
    dVar46 = _UNK_00651ea8;
    do {
      dVar23 = _UNK_00651ea8;
      dVar22 = _DAT_00651ea0;
      uVar21 = _UNK_00651e98;
      uVar20 = _DAT_00651e90;
      dVar17 = DAT_00651e70;
      dVar9 = (double)*pfVar33;
      fVar41 = *pfVar34;
      fVar2 = *pfVar24;
      if (*pfVar24 <= DAT_005d9058) {
        fVar2 = DAT_005d9058;
      }
      dVar8 = (double)fVar2;
      dVar63 = (double)fVar41 * _DAT_00651e68;
      dVar4 = *(double *)(lVar6 + 0x58);
      dVar54 = _DAT_005d9000 / dVar4;
      iVar26 = iVar5;
      do {
        auVar50._0_8_ = dVar54 * dVar77;
        auVar50._8_8_ = dVar54 * dVar44;
        auVar51._8_8_ = uVar62;
        auVar51._0_8_ = uVar61;
        auVar51 = maxpd(auVar50,auVar51);
        dVar42 = (double)(~-(ulong)(dVar18 < auVar50._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar50._0_8_));
        dVar49 = (double)(~-(ulong)(dVar19 < auVar50._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar50._8_8_));
        dVar42 = (dVar42 - dVar43 * dVar42 * dVar42 * dVar42) * dVar4;
        dVar46 = (dVar49 - dVar46 * dVar49 * dVar49 * dVar49) * dVar4;
        auVar52._0_8_ = dVar47 * dVar54;
        auVar52._8_8_ = (dVar9 - dVar75 * dVar8) * dVar54;
        auVar10._8_8_ = _UNK_00651e98;
        auVar10._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar52,auVar10);
        dVar43 = (double)(~-(ulong)(dVar18 < auVar52._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar52._0_8_));
        dVar65 = (double)(~-(ulong)(dVar19 < auVar52._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar52._8_8_));
        dVar64 = (dVar43 - _DAT_00651ea0 * dVar43 * dVar43 * dVar43) * dVar4;
        dVar49 = dVar75 * dVar54;
        dVar43 = dVar49;
        if (dVar49 <= dVar79) {
          dVar43 = dVar79;
        }
        dVar79 = (double)(-(ulong)(_DAT_005d9000 < dVar49) & (ulong)_DAT_005d9000 |
                         ~-(ulong)(_DAT_005d9000 < dVar49) & (ulong)(double)(float)dVar43);
        dVar57 = (dVar42 - dVar46) * dVar63;
        dVar59 = (dVar46 - dVar64) * dVar63;
        dVar64 = (dVar64 - (dVar79 - DAT_00651e78 * dVar79 * dVar79 * dVar79) * dVar4) * dVar63;
        dVar65 = ((dVar65 - _UNK_00651ea8 * dVar65 * dVar65 * dVar65) * dVar4 - dVar42) * dVar63;
        dVar70 = dVar64 * dVar56 + dVar75;
        auVar53._0_8_ = (dVar65 * dVar56 + dVar77) * dVar54;
        auVar53._8_8_ = (dVar57 * dVar56 + dVar44) * dVar54;
        auVar11._8_8_ = _UNK_00651e98;
        auVar11._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar53,auVar11);
        dVar79 = (double)(~-(ulong)(dVar18 < auVar53._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar53._0_8_));
        dVar46 = (double)(~-(ulong)(dVar19 < auVar53._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar53._8_8_));
        dVar43 = (dVar79 - _DAT_00651ea0 * dVar79 * dVar79 * dVar79) * dVar4;
        dVar46 = (dVar46 - _UNK_00651ea8 * dVar46 * dVar46 * dVar46) * dVar4;
        auVar66._0_8_ = (dVar47 + dVar59 * dVar56) * dVar54;
        auVar66._8_8_ = (dVar9 - dVar70 * dVar8) * dVar54;
        auVar12._8_8_ = _UNK_00651e98;
        auVar12._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar66,auVar12);
        dVar79 = (double)(~-(ulong)(dVar18 < auVar66._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar66._0_8_));
        dVar49 = (double)(~-(ulong)(dVar19 < auVar66._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar66._8_8_));
        dVar42 = (dVar79 - _DAT_00651ea0 * dVar79 * dVar79 * dVar79) * dVar4;
        dVar70 = dVar70 * dVar54;
        dVar79 = dVar70;
        if (dVar70 <= DAT_00651e70) {
          dVar79 = DAT_00651e70;
        }
        dVar79 = (double)(-(ulong)(_DAT_005d9000 < dVar70) & (ulong)_DAT_005d9000 |
                         ~-(ulong)(_DAT_005d9000 < dVar70) & (ulong)(double)(float)dVar79);
        dVar70 = (dVar43 - dVar46) * dVar63;
        dVar67 = (dVar46 - dVar42) * dVar63;
        dVar46 = (dVar42 - (dVar79 - DAT_00651e78 * dVar79 * dVar79 * dVar79) * dVar4) * dVar63;
        dVar43 = ((dVar49 - _UNK_00651ea8 * dVar49 * dVar49 * dVar49) * dVar4 - dVar43) * dVar63;
        dVar71 = dVar46 * dVar56 + dVar75;
        auVar45._0_8_ = (dVar43 * dVar56 + dVar77) * dVar54;
        auVar45._8_8_ = (dVar70 * dVar56 + dVar44) * dVar54;
        auVar13._8_8_ = _UNK_00651e98;
        auVar13._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar45,auVar13);
        dVar79 = (double)(~-(ulong)(dVar18 < auVar45._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar45._0_8_));
        dVar49 = (double)(~-(ulong)(dVar19 < auVar45._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar45._8_8_));
        dVar42 = (dVar79 - _DAT_00651ea0 * dVar79 * dVar79 * dVar79) * dVar4;
        dVar49 = (dVar49 - _UNK_00651ea8 * dVar49 * dVar49 * dVar49) * dVar4;
        auVar58._0_8_ = (dVar47 + dVar67 * dVar56) * dVar54;
        auVar58._8_8_ = (dVar9 - dVar71 * dVar8) * dVar54;
        auVar14._8_8_ = _UNK_00651e98;
        auVar14._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar58,auVar14);
        dVar79 = (double)(~-(ulong)(dVar18 < auVar58._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar58._0_8_));
        dVar68 = (double)(~-(ulong)(dVar19 < auVar58._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar58._8_8_));
        dVar73 = (dVar79 - _DAT_00651ea0 * dVar79 * dVar79 * dVar79) * dVar4;
        dVar71 = dVar71 * dVar54;
        dVar79 = dVar71;
        if (dVar71 <= DAT_00651e70) {
          dVar79 = DAT_00651e70;
        }
        dVar79 = (double)(-(ulong)(_DAT_005d9000 < dVar71) & (ulong)_DAT_005d9000 |
                         ~-(ulong)(_DAT_005d9000 < dVar71) & (ulong)(double)(float)dVar79);
        dVar71 = (dVar42 - dVar49) * dVar63;
        dVar49 = (dVar49 - dVar73) * dVar63;
        dVar74 = (dVar73 - (dVar79 - DAT_00651e78 * dVar79 * dVar79 * dVar79) * dVar4) * dVar63;
        dVar76 = ((dVar68 - _UNK_00651ea8 * dVar68 * dVar68 * dVar68) * dVar4 - dVar42) * dVar63;
        auVar55._0_8_ = (dVar76 * dVar48 + dVar77) * dVar54;
        auVar55._8_8_ = (dVar71 * dVar48 + dVar44) * dVar54;
        auVar15._8_8_ = _UNK_00651e98;
        auVar15._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar55,auVar15);
        dVar78 = dVar74 * dVar48 + dVar75;
        dVar68 = (double)(~-(ulong)(dVar18 < auVar55._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar55._0_8_));
        dVar69 = (double)(~-(ulong)(dVar19 < auVar55._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar55._8_8_));
        auVar72._0_8_ = (dVar49 * dVar48 + dVar47) * dVar54;
        auVar72._8_8_ = (dVar9 - dVar78 * dVar8) * dVar54;
        auVar16._8_8_ = _UNK_00651e98;
        auVar16._0_8_ = _DAT_00651e90;
        auVar51 = maxpd(auVar72,auVar16);
        dVar42 = (double)(~-(ulong)(dVar18 < auVar72._0_8_) & (ulong)(double)(float)auVar51._0_8_ |
                         (ulong)dVar18 & -(ulong)(dVar18 < auVar72._0_8_));
        dVar73 = (double)(~-(ulong)(dVar19 < auVar72._8_8_) & (ulong)(double)(float)auVar51._8_8_ |
                         (ulong)dVar19 & -(ulong)(dVar19 < auVar72._8_8_));
        dVar78 = dVar78 * dVar54;
        dVar79 = dVar78;
        if (dVar78 <= DAT_00651e70) {
          dVar79 = DAT_00651e70;
        }
        dVar79 = (double)(-(ulong)(_DAT_005d9000 < dVar78) & (ulong)_DAT_005d9000 |
                         ~-(ulong)(_DAT_005d9000 < dVar78) & (ulong)(double)(float)dVar79);
        dVar68 = (dVar68 - _DAT_00651ea0 * dVar68 * dVar68 * dVar68) * dVar4;
        dVar69 = (dVar69 - _UNK_00651ea8 * dVar69 * dVar69 * dVar69) * dVar4;
        dVar42 = (dVar42 - _DAT_00651ea0 * dVar42 * dVar42 * dVar42) * dVar4;
        dVar71 = dVar71 + dVar70;
        dVar49 = dVar49 + dVar67;
        dVar44 = (dVar71 + dVar71 + dVar57 + (dVar68 - dVar69) * dVar63) * dVar60 + dVar44;
        dVar47 = (dVar49 + dVar49 + dVar59 + (dVar69 - dVar42) * dVar63) * dVar60 + dVar47;
        dVar74 = dVar74 + dVar46;
        dVar76 = dVar76 + dVar43;
        dVar75 = (dVar74 + dVar74 + dVar64 +
                 (dVar42 - (dVar79 - DAT_00651e78 * dVar79 * dVar79 * dVar79) * dVar4) * dVar63) *
                 dVar60 + dVar75;
        dVar77 = (dVar76 + dVar76 + dVar65 +
                 ((dVar73 - _UNK_00651ea8 * dVar73 * dVar73 * dVar73) * dVar4 - dVar68) * dVar63) *
                 dVar60 + dVar77;
        iVar26 = iVar26 + -1;
        uVar61 = _DAT_00651e90;
        uVar62 = _UNK_00651e98;
        dVar79 = DAT_00651e70;
        dVar43 = _DAT_00651ea0;
        dVar46 = _UNK_00651ea8;
      } while (iVar26 != 0);
      pfVar33 = pfVar33 + 1;
      pfVar34 = pfVar34 + 1;
      pfVar24 = pfVar24 + 1;
      *(double *)(lVar6 + 0x80) = dVar77;
      *(double *)(lVar6 + 0x98) = dVar75;
      *pfVar25 = (float)*pdVar38;
      pfVar25 = pfVar25 + 1;
      iVar30 = iVar30 + 1;
      uVar61 = uVar20;
      uVar62 = uVar21;
      dVar79 = dVar17;
      dVar43 = dVar22;
      dVar46 = dVar23;
    } while (iVar30 != iVar35);
    *(double *)(lVar6 + 0x40) = dVar9;
    *(double *)(lVar6 + 0x48) = (double)fVar41;
    *(double *)(lVar6 + 0x50) = dVar8;
    *(double *)(lVar6 + 0x88) = dVar44;
    *(double *)(lVar6 + 0x90) = dVar47;
    goto LAB_004d8a96;
  }
  fVar41 = (float)*pdVar38;
  uVar39 = 0;
  if (iVar35 - 1U < 7) {
LAB_004d89f9:
    uVar37 = (uint)uVar39;
    uVar31 = ~uVar37;
    in_XMM1_Dd = param_2;
    uVar61 = param_3;
    if ((uVar7 & 1) != 0) {
      in_XMM1_Dd = *pfVar24;
      pfVar24 = pfVar24 + 1;
      fVar2 = *pfVar34;
      pfVar34 = pfVar34 + 1;
      fVar3 = *pfVar33;
      pfVar33 = pfVar33 + 1;
      *pfVar25 = fVar41;
      pfVar25 = pfVar25 + 1;
      uVar37 = uVar37 + 1;
      uVar61 = CONCAT44(fVar2,fVar3);
    }
    if (uVar31 + iVar35 != 0) {
      lVar32 = 0;
      do {
        pfVar25[lVar32] = fVar41;
        uVar61 = CONCAT44(pfVar34[lVar32 + 1],pfVar33[lVar32 + 1]);
        in_XMM1_Dd = pfVar24[lVar32 + 1];
        pfVar25[lVar32 + 1] = fVar41;
        lVar32 = lVar32 + 2;
      } while (iVar35 - uVar37 != (int)lVar32);
    }
  }
  else {
    uVar28 = (ulong)(iVar35 - 1);
    pfVar27 = pfVar25 + uVar28 + 1;
    if (((pfVar25 < pfVar33 + uVar28 + 1 && pfVar33 < pfVar27) ||
        (pfVar25 < pfVar34 + uVar28 + 1 && pfVar34 < pfVar27)) ||
       (pfVar25 < pfVar24 + uVar28 + 1 && pfVar24 < pfVar27)) goto LAB_004d89f9;
    uVar36 = (ulong)(iVar35 - 1U) + 1;
    uVar39 = uVar36 & 0xfffffffffffffff8;
    uVar28 = (uVar39 - 8 >> 3) + 1;
    uVar40 = (ulong)((uint)uVar28 & 3);
    if (uVar39 - 8 < 0x18) {
      lVar32 = 0;
    }
    else {
      uVar28 = uVar28 & 0xfffffffffffffffc;
      lVar32 = 0;
      do {
        pfVar27 = pfVar25 + lVar32;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 4;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 8;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 0xc;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 0x10;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 0x14;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        in_XMM4_Dd = pfVar33[lVar32 + 0x1f];
        param_3 = *(undefined8 *)(pfVar34 + lVar32 + 0x1c);
        in_XMM2_Dd = (pfVar34 + lVar32 + 0x1c)[3];
        param_2 = pfVar24[lVar32 + 0x1c];
        in_XMM1_Dd = (pfVar24 + lVar32 + 0x1c)[3];
        pfVar27 = pfVar25 + lVar32 + 0x18;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = pfVar25 + lVar32 + 0x1c;
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        lVar32 = lVar32 + 0x20;
        uVar28 = uVar28 - 4;
      } while (uVar28 != 0);
    }
    if (uVar40 != 0) {
      lVar29 = 0;
      do {
        in_XMM4_Dd = *(float *)((long)pfVar33 + lVar29 + lVar32 * 4 + 0x1c);
        puVar1 = (undefined8 *)((long)pfVar34 + lVar29 + lVar32 * 4 + 0x10);
        param_3 = *puVar1;
        in_XMM2_Dd = *(float *)((long)puVar1 + 0xc);
        pfVar27 = (float *)((long)pfVar24 + lVar29 + lVar32 * 4 + 0x10);
        param_2 = *pfVar27;
        in_XMM1_Dd = pfVar27[3];
        pfVar27 = (float *)((long)pfVar25 + lVar29 + lVar32 * 4);
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        pfVar27 = (float *)((long)pfVar25 + lVar29 + lVar32 * 4 + 0x10);
        *pfVar27 = fVar41;
        pfVar27[1] = fVar41;
        pfVar27[2] = fVar41;
        pfVar27[3] = fVar41;
        lVar29 = lVar29 + 0x20;
      } while (uVar40 * 0x20 != lVar29);
    }
    uVar61 = CONCAT44(in_XMM2_Dd,in_XMM4_Dd);
    if (uVar36 != uVar39) {
      pfVar33 = pfVar33 + uVar39;
      pfVar34 = pfVar34 + uVar39;
      pfVar24 = pfVar24 + uVar39;
      pfVar25 = pfVar25 + uVar39;
      goto LAB_004d89f9;
    }
  }
  fVar41 = 0.0;
  if (0.0 <= in_XMM1_Dd) {
    fVar41 = in_XMM1_Dd;
  }
  *(double *)(lVar6 + 0x40) = (double)(float)uVar61;
  *(double *)(lVar6 + 0x48) = (double)(float)((ulong)uVar61 >> 0x20);
  *(double *)(lVar6 + 0x50) = (double)fVar41;
LAB_004d8a96:
  return param_4 + 0x38;
}


