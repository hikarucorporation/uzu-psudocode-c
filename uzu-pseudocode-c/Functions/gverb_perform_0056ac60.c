// Function : gverb_perform
// Namespace: 
// Entry    : 0056ac60
// Prototype: long gverb_perform(long param_1)
// Body     : 0056ac60 - 0056b807


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long gverb_perform(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined8 *puVar19;
  float *pfVar20;
  float *pfVar21;
  int *piVar22;
  int *piVar23;
  float *pfVar24;
  int *piVar25;
  float *pfVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  long lVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  long lVar34;
  long lVar35;
  float *pfVar36;
  long lVar37;
  float *pfVar38;
  int *piVar39;
  int *piVar40;
  long lVar41;
  float *pfVar42;
  float *pfVar43;
  int *piVar44;
  float *pfVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  float *pfVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  double dVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  long lVar67;
  uint uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  uint uVar74;
  float fVar75;
  float fVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  
  fVar63 = _UNK_0065b25c;
  fVar62 = _UNK_0065b258;
  fVar61 = _UNK_0065b254;
  fVar60 = _DAT_0065b250;
  fVar59 = DAT_0065b1fc;
  uVar58 = _DAT_005d91c0;
  dVar57 = _DAT_005d9000;
  iVar64 = (int)*(undefined8 *)(param_1 + 0x28);
  if (iVar64 != 0) {
    lVar14 = *(long *)(param_1 + 8);
    puVar15 = *(undefined8 **)(lVar14 + 0x68);
    puVar16 = *(undefined8 **)(lVar14 + 0x98);
    piVar17 = (int *)*puVar16;
    piVar18 = (int *)puVar16[1];
    puVar19 = *(undefined8 **)(lVar14 + 0x70);
    pfVar20 = (float *)*puVar15;
    pfVar21 = (float *)puVar15[1];
    piVar22 = (int *)*puVar19;
    piVar23 = (int *)puVar19[1];
    pfVar24 = (float *)puVar15[2];
    piVar25 = (int *)puVar19[2];
    pfVar26 = (float *)puVar15[3];
    piVar27 = (int *)puVar19[3];
    piVar28 = (int *)puVar16[2];
    piVar29 = (int *)puVar16[3];
    lVar30 = *(long *)(lVar14 + 0xa0);
    piVar31 = *(int **)(lVar30 + 8);
    piVar32 = *(int **)(lVar30 + 0x10);
    piVar33 = *(int **)(lVar30 + 0x18);
    lVar30 = *(long *)(param_1 + 0x20);
    lVar34 = *(long *)(param_1 + 0x10);
    lVar35 = *(long *)(param_1 + 0x18);
    pfVar36 = *(float **)(lVar14 + 0x60);
    lVar37 = *(long *)(piVar17 + 4);
    iVar1 = *piVar17;
    pfVar38 = *(float **)(lVar14 + 0xb0);
    piVar39 = *(int **)(lVar14 + 0x78);
    piVar40 = *(int **)(lVar14 + 0xa8);
    iVar2 = *piVar39;
    lVar41 = *(long *)(piVar39 + 2);
    pfVar42 = *(float **)(lVar14 + 0xc0);
    pfVar43 = *(float **)(lVar14 + 0x80);
    piVar44 = *(int **)(lVar14 + 0x88);
    pfVar45 = *(float **)(lVar14 + 0xb8);
    iVar3 = *piVar22;
    lVar46 = *(long *)(piVar22 + 2);
    iVar4 = *piVar23;
    lVar47 = *(long *)(piVar23 + 2);
    iVar5 = *piVar25;
    lVar48 = *(long *)(piVar25 + 2);
    iVar6 = *piVar27;
    lVar49 = *(long *)(piVar27 + 2);
    pfVar50 = *(float **)(lVar14 + 200);
    lVar51 = *(long *)(piVar18 + 4);
    iVar7 = *piVar18;
    lVar52 = *(long *)(piVar28 + 4);
    iVar8 = *piVar28;
    lVar53 = *(long *)(piVar29 + 4);
    iVar9 = *piVar29;
    lVar54 = *(long *)(piVar31 + 4);
    iVar10 = *piVar31;
    lVar55 = *(long *)(piVar32 + 4);
    iVar11 = *piVar32;
    lVar56 = *(long *)(piVar33 + 4);
    iVar12 = *piVar33;
    lVar67 = 0;
    do {
      fVar13 = *(float *)(lVar34 + lVar67 * 4);
      uVar68 = ~-(uint)(fVar59 < (float)((uint)fVar13 & uVar58)) & (uint)fVar13;
      uVar77 = 0;
      if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
        uVar77 = uVar68;
      }
      uVar74 = 0;
      if (((uint)fVar13 & 0x7f800000) != 0) {
        uVar74 = uVar77;
      }
      fVar71 = (float)(-(uint)(fVar13 != 0.0) & uVar74 | ~-(uint)(fVar13 != 0.0) & uVar68);
      fVar78 = (float)((double)(*pfVar36 * pfVar36[1]) +
                      (dVar57 - (double)*pfVar36) * (double)fVar71);
      pfVar36[1] = fVar78;
      iVar65 = piVar17[2];
      fVar75 = *(float *)(lVar37 + (long)iVar65 * 4);
      fVar72 = (float)piVar17[1];
      fVar78 = fVar78 - fVar72 * fVar75;
      fVar79 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0x7f800000) {
        fVar79 = fVar78;
      }
      fVar82 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0) {
        fVar82 = fVar79;
      }
      fVar79 = (float)(-(uint)(fVar78 != 0.0) & (uint)fVar82 |
                      ~-(uint)(fVar78 != 0.0) & (uint)fVar78);
      iVar66 = iVar65 + 1;
      if (iVar1 <= iVar66) {
        iVar66 = 0;
      }
      *(float *)(lVar37 + (long)iVar65 * 4) = fVar79;
      piVar17[2] = iVar66;
      iVar65 = piVar39[1];
      iVar66 = iVar65 + iVar2;
      *pfVar42 = *(float *)(lVar41 + (long)((iVar66 - *piVar40) % iVar2) * 4) * *pfVar38;
      pfVar42[1] = *(float *)(lVar41 + (long)((iVar66 - piVar40[1]) % iVar2) * 4) * pfVar38[1];
      pfVar42[2] = *(float *)(lVar41 + (long)((iVar66 - piVar40[2]) % iVar2) * 4) * pfVar38[2];
      pfVar42[3] = *(float *)(lVar41 + (long)((iVar66 - piVar40[3]) % iVar2) * 4) * pfVar38[3];
      fVar75 = fVar79 * fVar72 + fVar75;
      fVar72 = 0.0;
      if (((uint)fVar75 & 0x7f800000) != 0x7f800000) {
        fVar72 = fVar75;
      }
      fVar79 = 0.0;
      if (((uint)fVar75 & 0x7f800000) != 0) {
        fVar79 = fVar72;
      }
      *(uint *)(lVar41 + (long)iVar65 * 4) =
           -(uint)(fVar75 != 0.0) & (uint)fVar79 | ~-(uint)(fVar75 != 0.0) & (uint)fVar75;
      piVar39[1] = (iVar65 + 1) % iVar2;
      iVar65 = piVar22[1];
      fVar75 = (float)((double)(*pfVar20 * pfVar20[1]) +
                      (dVar57 - (double)*pfVar20) *
                      (double)(*(float *)(lVar46 + (long)(((iVar3 - *piVar44) + iVar65) % iVar3) * 4
                                         ) * *pfVar43));
      pfVar20[1] = fVar75;
      *pfVar45 = fVar75;
      fVar75 = (float)((double)(*pfVar21 * pfVar21[1]) +
                      (dVar57 - (double)*pfVar21) *
                      (double)(*(float *)(lVar47 + (long)(((iVar4 - piVar44[1]) + piVar23[1]) %
                                                         iVar4) * 4) * pfVar43[1]));
      pfVar21[1] = fVar75;
      pfVar45[1] = fVar75;
      fVar75 = (float)((double)(*pfVar24 * pfVar24[1]) +
                      (dVar57 - (double)*pfVar24) *
                      (double)(*(float *)(lVar48 + (long)(((iVar5 - piVar44[2]) + piVar25[1]) %
                                                         iVar5) * 4) * pfVar43[2]));
      pfVar24[1] = fVar75;
      pfVar45[2] = fVar75;
      fVar81 = (float)((double)(*pfVar26 * pfVar26[1]) +
                      (dVar57 - (double)*pfVar26) *
                      (double)(*(float *)(lVar49 + (long)(((iVar6 - piVar44[3]) + piVar27[1]) %
                                                         iVar6) * 4) * pfVar43[3]));
      pfVar26[1] = fVar81;
      pfVar45[3] = fVar81;
      fVar83 = (float)*(undefined8 *)(lVar14 + 0x3c);
      fVar84 = (float)((ulong)*(undefined8 *)(lVar14 + 0x3c) >> 0x20);
      fVar75 = pfVar45[2];
      fVar69 = (float)*(undefined8 *)pfVar45;
      fVar73 = (float)((ulong)*(undefined8 *)pfVar45 >> 0x20);
      fVar70 = ((fVar69 + fVar73) - (fVar81 + fVar75)) * fVar60;
      fVar72 = pfVar42[3];
      fVar79 = *pfVar42;
      fVar78 = pfVar42[2];
      fVar82 = pfVar42[1];
      *pfVar50 = fVar70;
      pfVar50[1] = ((fVar81 + fVar69) - (fVar75 + fVar73)) * fVar61;
      pfVar50[2] = ((fVar81 + fVar73) - (fVar75 + fVar69)) * fVar62;
      pfVar50[3] = (fVar69 + fVar73 + fVar81 + fVar75) * fVar63;
      fVar70 = fVar70 + *pfVar42;
      fVar80 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0x7f800000) {
        fVar80 = fVar70;
      }
      fVar76 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0) {
        fVar76 = fVar80;
      }
      *(uint *)(lVar46 + (long)iVar65 * 4) =
           -(uint)(fVar70 != 0.0) & (uint)fVar76 | ~-(uint)(fVar70 != 0.0) & (uint)fVar70;
      piVar22[1] = (iVar65 + 1) % iVar3;
      fVar70 = pfVar50[1] + pfVar42[1];
      fVar80 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0x7f800000) {
        fVar80 = fVar70;
      }
      fVar76 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0) {
        fVar76 = fVar80;
      }
      iVar65 = piVar23[1];
      *(uint *)(lVar47 + (long)iVar65 * 4) =
           -(uint)(fVar70 != 0.0) & (uint)fVar76 | ~-(uint)(fVar70 != 0.0) & (uint)fVar70;
      piVar23[1] = (iVar65 + 1) % iVar4;
      fVar70 = pfVar50[2] + pfVar42[2];
      fVar80 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0x7f800000) {
        fVar80 = fVar70;
      }
      fVar76 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0) {
        fVar76 = fVar80;
      }
      iVar65 = piVar25[1];
      *(uint *)(lVar48 + (long)iVar65 * 4) =
           -(uint)(fVar70 != 0.0) & (uint)fVar76 | ~-(uint)(fVar70 != 0.0) & (uint)fVar70;
      piVar25[1] = (iVar65 + 1) % iVar5;
      fVar70 = pfVar50[3] + pfVar42[3];
      fVar80 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0x7f800000) {
        fVar80 = fVar70;
      }
      fVar76 = 0.0;
      if (((uint)fVar70 & 0x7f800000) != 0) {
        fVar76 = fVar80;
      }
      iVar65 = piVar27[1];
      *(uint *)(lVar49 + (long)iVar65 * 4) =
           -(uint)(fVar70 != 0.0) & (uint)fVar76 | ~-(uint)(fVar70 != 0.0) & (uint)fVar70;
      piVar27[1] = (iVar65 + 1) % iVar6;
      fVar78 = (fVar84 * (fVar71 + fVar79 + fVar78) + (fVar75 + fVar69) * fVar83) -
               (fVar83 * (fVar81 + fVar73) + fVar82 * fVar84 + fVar84 * fVar72);
      iVar65 = piVar18[2];
      fVar75 = *(float *)(lVar51 + (long)iVar65 * 4);
      fVar72 = (float)piVar18[1];
      fVar79 = fVar78 - fVar72 * fVar75;
      fVar71 = 0.0;
      if (((uint)fVar79 & 0x7f800000) != 0x7f800000) {
        fVar71 = fVar79;
      }
      fVar82 = 0.0;
      if (((uint)fVar79 & 0x7f800000) != 0) {
        fVar82 = fVar71;
      }
      fVar71 = (float)(-(uint)(fVar79 != 0.0) & (uint)fVar82 |
                      ~-(uint)(fVar79 != 0.0) & (uint)fVar79);
      *(float *)(lVar51 + (long)iVar65 * 4) = fVar71;
      iVar65 = iVar65 + 1;
      if (iVar7 <= iVar65) {
        iVar65 = 0;
      }
      piVar18[2] = iVar65;
      iVar65 = piVar28[2];
      fVar79 = *(float *)(lVar52 + (long)iVar65 * 4);
      fVar82 = (float)piVar28[1];
      fVar72 = (fVar71 * fVar72 + fVar75) - fVar82 * fVar79;
      fVar75 = 0.0;
      if (((uint)fVar72 & 0x7f800000) != 0x7f800000) {
        fVar75 = fVar72;
      }
      fVar71 = 0.0;
      if (((uint)fVar72 & 0x7f800000) != 0) {
        fVar71 = fVar75;
      }
      fVar75 = (float)(-(uint)(fVar72 != 0.0) & (uint)fVar71 |
                      ~-(uint)(fVar72 != 0.0) & (uint)fVar72);
      *(float *)(lVar52 + (long)iVar65 * 4) = fVar75;
      iVar65 = iVar65 + 1;
      if (iVar8 <= iVar65) {
        iVar65 = 0;
      }
      piVar28[2] = iVar65;
      iVar65 = piVar29[2];
      fVar72 = *(float *)(lVar53 + (long)iVar65 * 4);
      fVar71 = (float)piVar29[1];
      fVar79 = (fVar79 - fVar71 * fVar72) + fVar75 * fVar82;
      fVar75 = 0.0;
      if (((uint)fVar79 & 0x7f800000) != 0x7f800000) {
        fVar75 = fVar79;
      }
      fVar82 = 0.0;
      if (((uint)fVar79 & 0x7f800000) != 0) {
        fVar82 = fVar75;
      }
      fVar75 = (float)(-(uint)(fVar79 != 0.0) & (uint)fVar82 |
                      ~-(uint)(fVar79 != 0.0) & (uint)fVar79);
      *(float *)(lVar53 + (long)iVar65 * 4) = fVar75;
      iVar65 = iVar65 + 1;
      if (iVar9 <= iVar65) {
        iVar65 = 0;
      }
      piVar29[2] = iVar65;
      iVar65 = piVar31[2];
      fVar79 = *(float *)(lVar54 + (long)iVar65 * 4);
      fVar82 = (float)piVar31[1];
      fVar78 = fVar78 - fVar82 * fVar79;
      fVar80 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0x7f800000) {
        fVar80 = fVar78;
      }
      fVar69 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0) {
        fVar69 = fVar80;
      }
      fVar78 = (float)(-(uint)(fVar78 != 0.0) & (uint)fVar69 |
                      ~-(uint)(fVar78 != 0.0) & (uint)fVar78);
      *(float *)(lVar54 + (long)iVar65 * 4) = fVar78;
      iVar65 = iVar65 + 1;
      if (iVar10 <= iVar65) {
        iVar65 = 0;
      }
      piVar31[2] = iVar65;
      iVar65 = piVar32[2];
      fVar80 = *(float *)(lVar55 + (long)iVar65 * 4);
      fVar69 = (float)piVar32[1];
      fVar78 = (fVar78 * fVar82 + fVar79) - fVar69 * fVar80;
      fVar79 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0x7f800000) {
        fVar79 = fVar78;
      }
      fVar82 = 0.0;
      if (((uint)fVar78 & 0x7f800000) != 0) {
        fVar82 = fVar79;
      }
      fVar79 = (float)(-(uint)(fVar78 != 0.0) & (uint)fVar82 |
                      ~-(uint)(fVar78 != 0.0) & (uint)fVar78);
      *(float *)(lVar55 + (long)iVar65 * 4) = fVar79;
      iVar65 = iVar65 + 1;
      if (iVar11 <= iVar65) {
        iVar65 = 0;
      }
      piVar32[2] = iVar65;
      iVar65 = piVar33[2];
      fVar78 = *(float *)(lVar56 + (long)iVar65 * 4);
      fVar82 = (float)piVar33[1];
      fVar80 = (fVar80 - fVar82 * fVar78) + fVar79 * fVar69;
      fVar79 = 0.0;
      if (((uint)fVar80 & 0x7f800000) != 0x7f800000) {
        fVar79 = fVar80;
      }
      fVar69 = 0.0;
      if (((uint)fVar80 & 0x7f800000) != 0) {
        fVar69 = fVar79;
      }
      fVar79 = (float)(-(uint)(fVar80 != 0.0) & (uint)fVar69 |
                      ~-(uint)(fVar80 != 0.0) & (uint)fVar80);
      *(float *)(lVar56 + (long)iVar65 * 4) = fVar79;
      iVar65 = iVar65 + 1;
      if (iVar12 <= iVar65) {
        iVar65 = 0;
      }
      piVar33[2] = iVar65;
      *(float *)(lVar35 + lVar67 * 4) =
           (fVar75 * fVar71 + fVar72) * *(float *)(lVar14 + 0x44) +
           *(float *)(lVar14 + 0x38) * fVar13;
      *(float *)(lVar30 + lVar67 * 4) =
           (fVar79 * fVar82 + fVar78) * *(float *)(lVar14 + 0x44) +
           fVar13 * *(float *)(lVar14 + 0x38);
      lVar67 = lVar67 + 1;
    } while (iVar64 != (int)lVar67);
  }
  return param_1 + 0x30;
}


