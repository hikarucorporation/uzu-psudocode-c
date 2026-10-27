// Function : ex_abs
// Namespace: 
// Entry    : 005d0c20
// Prototype: undefined ex_abs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d0c20 - 005d0ea9


/* WARNING: Removing unreachable block (ram,0x005d0ea5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_abs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  lVar10 = *(long *)(param_11 + 2);
  if (1 < lVar10 - 0xeU) {
    if (lVar10 == 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 2.8026e-45;
        param_12[3] = 0.0;
        *param_12 = (float)((uint)*param_11 & _DAT_005d91c0);
        return;
      }
      lVar10 = *(long *)param_12;
      fVar15 = *param_11;
    }
    else {
      if (lVar10 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x421,lVar10,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 1.4013e-45;
        param_12[3] = 0.0;
        *(long *)param_12 = (long)(int)(double)((ulong)(double)*(long *)param_11 & _DAT_005d91b0);
        return;
      }
      fVar15 = (float)*(long *)param_11;
      lVar10 = *(long *)param_12;
    }
    ex_mkvector((uint)fVar15 & _DAT_005d91c0,lVar10,*(int *)(param_9 + 0x28f8));
    return;
  }
  if (*(long *)(param_12 + 2) == 0xf) {
    puVar7 = *(uint **)param_12;
    uVar9 = *(uint *)(param_9 + 0x28f8);
    uVar16 = _DAT_005d91c0;
    uVar17 = _UNK_005d91c4;
    uVar18 = _UNK_005d91c8;
    uVar19 = _UNK_005d91cc;
  }
  else {
    param_12[2] = 2.10195e-44;
    param_12[3] = 0.0;
    puVar7 = (uint *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
    *(uint **)param_12 = puVar7;
    uVar9 = *(uint *)(param_9 + 0x28f8);
    uVar16 = _DAT_005d91c0;
    uVar17 = _UNK_005d91c4;
    uVar18 = _UNK_005d91c8;
    uVar19 = _UNK_005d91cc;
  }
  if (uVar9 == 0) {
    _DAT_005d91c0 = uVar16;
    _UNK_005d91c4 = uVar17;
    _UNK_005d91c8 = uVar18;
    _UNK_005d91cc = uVar19;
    return;
  }
  puVar8 = *(uint **)param_11;
  uVar11 = (ulong)(uVar9 - 1);
  _DAT_005d91c0 = uVar16;
  _UNK_005d91c4 = uVar17;
  _UNK_005d91c8 = uVar18;
  _UNK_005d91cc = uVar19;
  if ((uVar9 - 1 < 7) || ((puVar7 < puVar8 + uVar11 + 1 && (puVar8 < puVar7 + uVar11 + 1))))
  goto LAB_005d0dc5;
  uVar13 = uVar11 + 1 & 0xfffffffffffffff8;
  uVar14 = (uVar13 - 8 >> 3) + 1;
  if (uVar13 - 8 == 0) {
    lVar10 = 0;
LAB_005d0d92:
    puVar1 = puVar8 + lVar10;
    puVar2 = puVar8 + lVar10 + 4;
    uVar16 = puVar1[1] & _UNK_005d91c4;
    uVar17 = puVar1[2] & _UNK_005d91c8;
    uVar18 = puVar1[3] & _UNK_005d91cc;
    uVar19 = *puVar2 & _DAT_005d91c0;
    uVar20 = puVar2[1] & _UNK_005d91c4;
    uVar21 = puVar2[2] & _UNK_005d91c8;
    uVar22 = puVar2[3] & _UNK_005d91cc;
    puVar2 = puVar7 + lVar10;
    *puVar2 = *puVar1 & _DAT_005d91c0;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    puVar1 = puVar7 + lVar10 + 4;
    *puVar1 = uVar19;
    puVar1[1] = uVar20;
    puVar1[2] = uVar21;
    puVar1[3] = uVar22;
  }
  else {
    uVar12 = uVar14 & 0xfffffffffffffffe;
    lVar10 = 0;
    do {
      puVar1 = puVar8 + lVar10;
      uVar20 = puVar1[1];
      uVar21 = puVar1[2];
      uVar22 = puVar1[3];
      puVar2 = puVar8 + lVar10 + 4;
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar2 = puVar7 + lVar10;
      *puVar2 = *puVar1 & uVar16;
      puVar2[1] = uVar20 & uVar17;
      puVar2[2] = uVar21 & uVar18;
      puVar2[3] = uVar22 & uVar19;
      puVar1 = puVar7 + lVar10 + 4;
      *puVar1 = uVar3 & uVar16;
      puVar1[1] = uVar4 & uVar17;
      puVar1[2] = uVar5 & uVar18;
      puVar1[3] = uVar6 & uVar19;
      puVar1 = puVar8 + lVar10 + 8;
      uVar20 = puVar1[1];
      uVar21 = puVar1[2];
      uVar22 = puVar1[3];
      puVar2 = puVar8 + lVar10 + 0xc;
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar2 = puVar7 + lVar10 + 8;
      *puVar2 = *puVar1 & uVar16;
      puVar2[1] = uVar20 & uVar17;
      puVar2[2] = uVar21 & uVar18;
      puVar2[3] = uVar22 & uVar19;
      puVar1 = puVar7 + lVar10 + 0xc;
      *puVar1 = uVar3 & uVar16;
      puVar1[1] = uVar4 & uVar17;
      puVar1[2] = uVar5 & uVar18;
      puVar1[3] = uVar6 & uVar19;
      lVar10 = lVar10 + 0x10;
      uVar12 = uVar12 - 2;
    } while (uVar12 != 0);
    if ((uVar14 & 1) != 0) goto LAB_005d0d92;
  }
  if (uVar11 + 1 == uVar13) {
    return;
  }
  uVar9 = uVar9 - (int)uVar13;
  puVar7 = puVar7 + uVar13;
  puVar8 = puVar8 + uVar13;
LAB_005d0dc5:
  uVar17 = _DAT_005d91c0;
  uVar16 = uVar9 - 1;
  if ((uVar9 & 3) != 0) {
    uVar18 = 0;
    do {
      uVar19 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar7 = uVar19 & uVar17;
      puVar7 = puVar7 + 1;
      uVar18 = uVar18 + 1;
    } while ((uVar9 & 3) != uVar18);
    uVar9 = uVar9 - uVar18;
  }
  uVar17 = _DAT_005d91c0;
  if (2 < uVar16) {
    lVar10 = 0;
    do {
      puVar7[lVar10] = puVar8[lVar10] & uVar17;
      puVar7[lVar10 + 1] = puVar8[lVar10 + 1] & uVar17;
      puVar7[lVar10 + 2] = puVar8[lVar10 + 2] & uVar17;
      puVar7[lVar10 + 3] = puVar8[lVar10 + 3] & uVar17;
      lVar10 = lVar10 + 4;
    } while (uVar9 != (uint)lVar10);
  }
  return;
}


