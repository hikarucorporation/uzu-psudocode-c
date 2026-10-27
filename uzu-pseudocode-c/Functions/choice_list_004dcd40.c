// Function : choice_list
// Namespace: 
// Entry    : 004dcd40
// Prototype: undefined choice_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 004dcd40 - 004dd0c4


void choice_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                undefined8 param_10,int param_11,long param_12)

{
  undefined8 uVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
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
  
  fVar13 = (float)atom_getfloatarg(0,param_11,param_12);
  fVar14 = (float)atom_getfloatarg(1,param_11,param_12);
  fVar15 = (float)atom_getfloatarg(2,param_11,param_12);
  fVar16 = (float)atom_getfloatarg(3,param_11,param_12);
  fVar17 = (float)atom_getfloatarg(4,param_11,param_12);
  fVar18 = (float)atom_getfloatarg(5,param_11,param_12);
  fVar19 = (float)atom_getfloatarg(6,param_11,param_12);
  fVar20 = (float)atom_getfloatarg(7,param_11,param_12);
  fVar21 = (float)atom_getfloatarg(8,param_11,param_12);
  fVar22 = (float)atom_getfloatarg(9,param_11,param_12);
  uVar2 = *(uint *)(param_9 + 0x38);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar11 = -1;
  }
  else {
    pfVar7 = *(float **)(param_9 + 0x30);
    if (*(int *)(param_9 + 0x3c) == 0) {
      param_6 = CONCAT44(fVar14,fVar13);
      param_8 = CONCAT44(fVar20,fVar19);
      param_7 = CONCAT44(fVar16,fVar15);
      pfVar7 = pfVar7 + 3;
      fVar24 = 0.0;
      uVar12 = 0xffffffff;
      uVar8 = 0;
      do {
        fVar23 = (float)*(undefined8 *)(pfVar7 + -2) * fVar13;
        fVar25 = (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20) * fVar14;
        fVar28 = pfVar7[6] * fVar21 + pfVar7[2] * fVar17 + pfVar7[4] * fVar19 + *pfVar7 * fVar15;
        fVar29 = pfVar7[7] * fVar22 + pfVar7[3] * fVar18 + pfVar7[5] * fVar20 + pfVar7[1] * fVar16;
        param_5 = CONCAT44(fVar29,fVar28);
        fVar28 = fVar29 + fVar28;
        fVar26 = fVar25 + fVar23 + fVar28;
        if (fVar24 < fVar26) {
          uVar12 = uVar8 & 0xffffffff;
        }
        iVar11 = (int)uVar12;
        if (fVar24 <= fVar26) {
          fVar24 = fVar26;
        }
        uVar8 = uVar8 + 1;
        pfVar7 = pfVar7 + 0xb;
        fVar27 = fVar25;
      } while (uVar6 != uVar8);
    }
    else {
      param_5 = 0;
      uVar12 = 0xffffffff;
      uVar8 = 0;
      do {
        fVar24 = (float)param_5;
        uVar1 = *(undefined8 *)(pfVar7 + 1);
        fVar23 = pfVar7[3];
        fVar25 = pfVar7[4];
        fVar26 = pfVar7[5];
        fVar28 = pfVar7[6];
        fVar29 = pfVar7[7];
        fVar27 = pfVar7[8];
        fVar4 = pfVar7[9];
        fVar5 = pfVar7[10];
        dVar3 = log((double)*pfVar7);
        fVar23 = (float)dVar3 *
                 ((float)((ulong)uVar1 >> 0x20) * fVar14 + (float)uVar1 * fVar13 +
                 fVar5 * fVar22 + fVar28 * fVar18 + fVar27 * fVar20 + fVar25 * fVar16 +
                 fVar4 * fVar21 + fVar26 * fVar17 + fVar29 * fVar19 + fVar23 * fVar15);
        if (fVar24 < fVar23) {
          uVar12 = uVar8 & 0xffffffff;
        }
        iVar11 = (int)uVar12;
        if (fVar24 <= fVar23) {
          fVar24 = fVar23;
        }
        param_5 = (ulong)(uint)fVar24;
        uVar8 = uVar8 + 1;
        pfVar7 = pfVar7 + 0xb;
        fVar23 = fVar13;
        fVar25 = fVar14;
        fVar26 = fVar15;
        fVar27 = fVar16;
        fVar28 = fVar19;
        fVar29 = fVar20;
      } while (uVar6 != uVar8);
    }
    fVar13 = DAT_005d9038;
    param_2 = CONCAT44(fVar25,fVar23);
    param_3 = CONCAT44(fVar27,fVar26);
    param_4 = CONCAT44(fVar29,fVar28);
    if (-1 < iVar11) {
      pfVar7 = *(float **)(param_9 + 0x30);
      if (0 < (int)uVar2) {
        if (uVar6 - 1 < 3) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          pfVar9 = pfVar7;
          do {
            *pfVar9 = *pfVar9 + fVar13;
            pfVar9[0xb] = pfVar9[0xb] + fVar13;
            pfVar9[0x16] = pfVar9[0x16] + fVar13;
            fVar25 = 0.0;
            fVar23 = pfVar9[0x21] + fVar13;
            pfVar9[0x21] = fVar23;
            uVar6 = uVar6 + 4;
            pfVar9 = pfVar9 + 0x2c;
          } while ((uVar2 & 0xfffffffc) != uVar6);
        }
        fVar13 = DAT_005d9038;
        if ((ulong)(uVar2 & 3) != 0) {
          lVar10 = 0;
          do {
            fVar25 = 0.0;
            fVar23 = *(float *)((long)pfVar7 + lVar10 + uVar6 * 0x2c) + fVar13;
            *(float *)((long)pfVar7 + lVar10 + uVar6 * 0x2c) = fVar23;
            lVar10 = lVar10 + 0x2c;
          } while ((ulong)(uVar2 & 3) * 0x2c != lVar10);
        }
      }
      param_2 = CONCAT44(fVar25,fVar23);
      pfVar7[(long)iVar11 * 0xb] = 1.0;
      param_3 = CONCAT44(fVar27,fVar26);
      param_4 = CONCAT44(fVar29,fVar28);
    }
  }
  outlet_float((ulong)(uint)(float)iVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


