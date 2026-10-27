// Function : ex_nearbyint
// Namespace: 
// Entry    : 005d4620
// Prototype: undefined ex_nearbyint(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d4620 - 005d49bf


/* WARNING: Removing unreachable block (ram,0x005d49bb) */

void ex_nearbyint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
                 undefined8 param_14)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar7 = *(long *)(param_11 + 2);
  if (1 < lVar7 - 0xeU) {
    if (lVar7 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar7 = *(long *)param_12;
        fVar13 = nearbyintf(*param_11);
        iVar8 = *(int *)(param_9 + 0x28f8);
        goto LAB_005d46b8;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar13 = nearbyintf(*param_11);
    }
    else {
      if (lVar7 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x7bc,lVar7,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        fVar13 = (float)*(long *)param_11;
        lVar7 = *(long *)param_12;
        iVar8 = *(int *)(param_9 + 0x28f8);
LAB_005d46b8:
        ex_mkvector(fVar13,lVar7,iVar8);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar13 = (float)*(long *)param_11;
    }
    *param_12 = fVar13;
    return;
  }
  if (*(long *)(param_12 + 2) == 0xf) {
    pfVar3 = *(float **)param_12;
    uVar11 = *(uint *)(param_9 + 0x28f8);
  }
  else {
    param_12[2] = 2.10195e-44;
    param_12[3] = 0.0;
    pfVar3 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
    *(float **)param_12 = pfVar3;
    uVar11 = *(uint *)(param_9 + 0x28f8);
  }
  if (uVar11 == 0) {
    return;
  }
  pfVar5 = *(float **)param_11;
  uVar12 = (ulong)(uVar11 - 1);
  if ((uVar11 - 1 < 3) || ((pfVar3 < pfVar5 + uVar12 + 1 && (pfVar5 < pfVar3 + uVar12 + 1))))
  goto LAB_005d48d1;
  uVar4 = uVar12 + 1 & 0xfffffffffffffffc;
  uVar9 = (uVar4 - 4 >> 2) + 1;
  if (uVar4 - 4 == 0) {
    lVar7 = 0;
LAB_005d485c:
    pfVar2 = pfVar5 + lVar7;
    fVar13 = *pfVar2;
    fVar16 = pfVar2[1];
    fVar15 = pfVar2[2];
    fVar14 = nearbyintf(pfVar2[3]);
    fVar15 = nearbyintf(fVar15);
    fVar13 = nearbyintf(fVar13);
    fVar16 = nearbyintf(fVar16);
    pfVar2 = pfVar3 + lVar7;
    *pfVar2 = fVar13;
    pfVar2[1] = fVar16;
    pfVar2[2] = fVar15;
    pfVar2[3] = fVar14;
  }
  else {
    uVar10 = uVar9 & 0xfffffffffffffffe;
    lVar7 = 0;
    do {
      pfVar2 = pfVar5 + lVar7;
      fVar13 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar14 = nearbyintf(pfVar2[3]);
      fVar15 = nearbyintf(fVar15);
      fVar13 = nearbyintf(fVar13);
      fVar16 = nearbyintf(fVar16);
      pfVar2 = pfVar3 + lVar7;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar16;
      pfVar2[2] = fVar15;
      pfVar2[3] = fVar14;
      pfVar2 = pfVar5 + lVar7 + 4;
      fVar13 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar14 = nearbyintf(pfVar2[3]);
      fVar15 = nearbyintf(fVar15);
      fVar13 = nearbyintf(fVar13);
      fVar16 = nearbyintf(fVar16);
      pfVar2 = pfVar3 + lVar7 + 4;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar16;
      pfVar2[2] = fVar15;
      pfVar2[3] = fVar14;
      lVar7 = lVar7 + 8;
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
    if ((uVar9 & 1) != 0) goto LAB_005d485c;
  }
  if (uVar12 + 1 == uVar4) {
    return;
  }
  uVar11 = uVar11 - (int)uVar4;
  pfVar3 = pfVar3 + uVar4;
  pfVar5 = pfVar5 + uVar4;
LAB_005d48d1:
  uVar1 = uVar11 - 1;
  if ((uVar11 & 3) != 0) {
    uVar6 = 0;
    do {
      fVar13 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar13 = nearbyintf(fVar13);
      *pfVar3 = fVar13;
      pfVar3 = pfVar3 + 1;
      uVar6 = uVar6 + 1;
    } while ((uVar11 & 3) != uVar6);
    uVar11 = uVar11 - uVar6;
  }
  if (2 < uVar1) {
    lVar7 = 0;
    do {
      fVar13 = nearbyintf(pfVar5[lVar7]);
      pfVar3[lVar7] = fVar13;
      fVar13 = nearbyintf(pfVar5[lVar7 + 1]);
      pfVar3[lVar7 + 1] = fVar13;
      fVar13 = nearbyintf(pfVar5[lVar7 + 2]);
      pfVar3[lVar7 + 2] = fVar13;
      fVar13 = nearbyintf(pfVar5[lVar7 + 3]);
      pfVar3[lVar7 + 3] = fVar13;
      lVar7 = lVar7 + 4;
    } while (uVar11 != (uint)lVar7);
  }
  return;
}


