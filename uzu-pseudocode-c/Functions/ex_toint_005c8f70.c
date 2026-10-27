// Function : ex_toint
// Namespace: 
// Entry    : 005c8f70
// Prototype: undefined ex_toint(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005c8f70 - 005c91f9


/* WARNING: Removing unreachable block (ram,0x005c91f5) */

void ex_toint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
             undefined8 param_14)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  
  lVar14 = *(long *)(param_11 + 2);
  if (1 < lVar14 - 0xeU) {
    if (lVar14 == 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 2.8026e-45;
        param_12[3] = 0.0;
        *param_12 = (float)(int)*param_11;
        return;
      }
      lVar14 = *(long *)param_12;
      fVar19 = (float)(int)*param_11;
    }
    else {
      if (lVar14 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x263,lVar14,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 1.4013e-45;
        param_12[3] = 0.0;
        *(long *)param_12 = (long)(int)*param_11;
        return;
      }
      lVar14 = *(long *)param_12;
      fVar19 = *param_11;
    }
    ex_mkvector((float)(int)fVar19,lVar14,*(int *)(param_9 + 0x28f8));
    return;
  }
  if (*(long *)(param_12 + 2) == 0xf) {
    pfVar10 = *(float **)param_12;
    uVar12 = *(uint *)(param_9 + 0x28f8);
  }
  else {
    param_12[2] = 2.10195e-44;
    param_12[3] = 0.0;
    pfVar10 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
    *(float **)param_12 = pfVar10;
    uVar12 = *(uint *)(param_9 + 0x28f8);
  }
  if (uVar12 == 0) {
    return;
  }
  pfVar11 = *(float **)param_11;
  uVar15 = (ulong)(uVar12 - 1);
  if ((uVar12 - 1 < 7) || ((pfVar10 < pfVar11 + uVar15 + 1 && (pfVar11 < pfVar10 + uVar15 + 1))))
  goto LAB_005c9116;
  uVar17 = uVar15 + 1 & 0xfffffffffffffff8;
  uVar18 = (uVar17 - 8 >> 3) + 1;
  if (uVar17 - 8 == 0) {
    lVar14 = 0;
LAB_005c90e2:
    pfVar2 = pfVar11 + lVar14;
    fVar19 = pfVar2[1];
    fVar4 = pfVar2[2];
    fVar5 = pfVar2[3];
    pfVar3 = pfVar11 + lVar14 + 4;
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    pfVar3 = pfVar10 + lVar14;
    *pfVar3 = (float)(int)*pfVar2;
    pfVar3[1] = (float)(int)fVar19;
    pfVar3[2] = (float)(int)fVar4;
    pfVar3[3] = (float)(int)fVar5;
    pfVar2 = pfVar10 + lVar14 + 4;
    *pfVar2 = (float)(int)fVar6;
    pfVar2[1] = (float)(int)fVar7;
    pfVar2[2] = (float)(int)fVar8;
    pfVar2[3] = (float)(int)fVar9;
  }
  else {
    uVar16 = uVar18 & 0xfffffffffffffffe;
    lVar14 = 0;
    do {
      pfVar2 = pfVar11 + lVar14;
      fVar19 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      pfVar3 = pfVar11 + lVar14 + 4;
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      pfVar3 = pfVar10 + lVar14;
      *pfVar3 = (float)(int)*pfVar2;
      pfVar3[1] = (float)(int)fVar19;
      pfVar3[2] = (float)(int)fVar4;
      pfVar3[3] = (float)(int)fVar5;
      pfVar2 = pfVar10 + lVar14 + 4;
      *pfVar2 = (float)(int)fVar6;
      pfVar2[1] = (float)(int)fVar7;
      pfVar2[2] = (float)(int)fVar8;
      pfVar2[3] = (float)(int)fVar9;
      pfVar2 = pfVar11 + lVar14 + 8;
      fVar19 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      pfVar3 = pfVar11 + lVar14 + 0xc;
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      pfVar3 = pfVar10 + lVar14 + 8;
      *pfVar3 = (float)(int)*pfVar2;
      pfVar3[1] = (float)(int)fVar19;
      pfVar3[2] = (float)(int)fVar4;
      pfVar3[3] = (float)(int)fVar5;
      pfVar2 = pfVar10 + lVar14 + 0xc;
      *pfVar2 = (float)(int)fVar6;
      pfVar2[1] = (float)(int)fVar7;
      pfVar2[2] = (float)(int)fVar8;
      pfVar2[3] = (float)(int)fVar9;
      lVar14 = lVar14 + 0x10;
      uVar16 = uVar16 - 2;
    } while (uVar16 != 0);
    if ((uVar18 & 1) != 0) goto LAB_005c90e2;
  }
  if (uVar15 + 1 == uVar17) {
    return;
  }
  uVar12 = uVar12 - (int)uVar17;
  pfVar10 = pfVar10 + uVar17;
  pfVar11 = pfVar11 + uVar17;
LAB_005c9116:
  uVar1 = uVar12 - 1;
  if ((uVar12 & 3) != 0) {
    uVar13 = 0;
    do {
      fVar19 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar10 = (float)(int)fVar19;
      pfVar10 = pfVar10 + 1;
      uVar13 = uVar13 + 1;
    } while ((uVar12 & 3) != uVar13);
    uVar12 = uVar12 - uVar13;
  }
  if (2 < uVar1) {
    lVar14 = 0;
    do {
      pfVar10[lVar14] = (float)(int)pfVar11[lVar14];
      pfVar10[lVar14 + 1] = (float)(int)pfVar11[lVar14 + 1];
      pfVar10[lVar14 + 2] = (float)(int)pfVar11[lVar14 + 2];
      pfVar10[lVar14 + 3] = (float)(int)pfVar11[lVar14 + 3];
      lVar14 = lVar14 + 4;
    } while (uVar12 != (uint)lVar14);
  }
  return;
}


