// Function : ex_tofloat
// Namespace: 
// Entry    : 005c95a0
// Prototype: undefined ex_tofloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005c95a0 - 005c984a


void ex_tofloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  
  lVar13 = *(long *)(param_11 + 2);
  if (lVar13 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      puVar8 = *(undefined4 **)param_12;
      uVar17 = *(uint *)(param_9 + 0x28f8);
    }
    else {
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      puVar8 = (undefined4 *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(undefined4 **)param_12 = puVar8;
      uVar17 = *(uint *)(param_9 + 0x28f8);
    }
    if (uVar17 != 0) {
      puVar9 = *(undefined4 **)param_11;
      uVar16 = (ulong)(uVar17 - 1);
      if ((6 < uVar17 - 1) && ((puVar9 + uVar16 + 1 <= puVar8 || (puVar8 + uVar16 + 1 <= puVar9))))
      {
        uVar15 = uVar16 + 1 & 0xfffffffffffffff8;
        uVar12 = (uVar15 - 8 >> 3) + 1;
        uVar14 = (ulong)((uint)uVar12 & 3);
        if (uVar15 - 8 < 0x18) {
          lVar13 = 0;
        }
        else {
          uVar12 = uVar12 & 0xfffffffffffffffc;
          lVar13 = 0;
          do {
            uVar5 = *(undefined8 *)((long)(puVar9 + lVar13) + 8);
            uVar6 = *(undefined8 *)(puVar9 + lVar13 + 4);
            uVar7 = *(undefined8 *)((long)(puVar9 + lVar13 + 4) + 8);
            *(undefined8 *)(puVar8 + lVar13) = *(undefined8 *)(puVar9 + lVar13);
            *(undefined8 *)((long)(puVar8 + lVar13) + 8) = uVar5;
            *(undefined8 *)(puVar8 + lVar13 + 4) = uVar6;
            *(undefined8 *)((long)(puVar8 + lVar13 + 4) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 8) + 8);
            uVar6 = *(undefined8 *)(puVar9 + lVar13 + 0xc);
            uVar7 = *(undefined8 *)((long)(puVar9 + lVar13 + 0xc) + 8);
            *(undefined8 *)(puVar8 + lVar13 + 8) = *(undefined8 *)(puVar9 + lVar13 + 8);
            *(undefined8 *)((long)(puVar8 + lVar13 + 8) + 8) = uVar5;
            *(undefined8 *)(puVar8 + lVar13 + 0xc) = uVar6;
            *(undefined8 *)((long)(puVar8 + lVar13 + 0xc) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 0x10) + 8);
            uVar6 = *(undefined8 *)(puVar9 + lVar13 + 0x14);
            uVar7 = *(undefined8 *)((long)(puVar9 + lVar13 + 0x14) + 8);
            *(undefined8 *)(puVar8 + lVar13 + 0x10) = *(undefined8 *)(puVar9 + lVar13 + 0x10);
            *(undefined8 *)((long)(puVar8 + lVar13 + 0x10) + 8) = uVar5;
            *(undefined8 *)(puVar8 + lVar13 + 0x14) = uVar6;
            *(undefined8 *)((long)(puVar8 + lVar13 + 0x14) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 0x18) + 8);
            uVar6 = *(undefined8 *)(puVar9 + lVar13 + 0x1c);
            uVar7 = *(undefined8 *)((long)(puVar9 + lVar13 + 0x1c) + 8);
            *(undefined8 *)(puVar8 + lVar13 + 0x18) = *(undefined8 *)(puVar9 + lVar13 + 0x18);
            *(undefined8 *)((long)(puVar8 + lVar13 + 0x18) + 8) = uVar5;
            *(undefined8 *)(puVar8 + lVar13 + 0x1c) = uVar6;
            *(undefined8 *)((long)(puVar8 + lVar13 + 0x1c) + 8) = uVar7;
            lVar13 = lVar13 + 0x20;
            uVar12 = uVar12 - 4;
          } while (uVar12 != 0);
        }
        if (uVar14 != 0) {
          lVar10 = 0;
          do {
            puVar3 = (undefined8 *)((long)puVar9 + lVar10 + lVar13 * 4);
            uVar5 = puVar3[1];
            puVar2 = (undefined8 *)((long)puVar9 + lVar10 + lVar13 * 4 + 0x10);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            puVar2 = (undefined8 *)((long)puVar8 + lVar10 + lVar13 * 4);
            *puVar2 = *puVar3;
            puVar2[1] = uVar5;
            puVar2 = (undefined8 *)((long)puVar8 + lVar10 + lVar13 * 4 + 0x10);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            lVar10 = lVar10 + 0x20;
          } while (uVar14 * 0x20 != lVar10);
        }
        if (uVar16 + 1 == uVar15) {
          return;
        }
        uVar17 = uVar17 - (int)uVar15;
        puVar8 = puVar8 + uVar15;
        puVar9 = puVar9 + uVar15;
      }
      uVar1 = uVar17 - 1;
      if ((uVar17 & 7) != 0) {
        uVar11 = 0;
        do {
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar8 = uVar4;
          puVar8 = puVar8 + 1;
          uVar11 = uVar11 + 1;
        } while ((uVar17 & 7) != uVar11);
        uVar17 = uVar17 - uVar11;
      }
      if (6 < uVar1) {
        lVar13 = 0;
        do {
          puVar8[lVar13] = puVar9[lVar13];
          puVar8[lVar13 + 1] = puVar9[lVar13 + 1];
          puVar8[lVar13 + 2] = puVar9[lVar13 + 2];
          puVar8[lVar13 + 3] = puVar9[lVar13 + 3];
          puVar8[lVar13 + 4] = puVar9[lVar13 + 4];
          puVar8[lVar13 + 5] = puVar9[lVar13 + 5];
          puVar8[lVar13 + 6] = puVar9[lVar13 + 6];
          puVar8[lVar13 + 7] = puVar9[lVar13 + 7];
          lVar13 = lVar13 + 8;
        } while (uVar17 != (uint)lVar13);
      }
    }
    return;
  }
  if (lVar13 == 2) {
    if (*(long *)(param_12 + 2) != 0xf) {
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar18 = *param_11;
      goto LAB_005c96d6;
    }
    lVar13 = *(long *)param_12;
    fVar18 = *param_11;
  }
  else {
    if (lVar13 != 1) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x290,lVar13,param_13,param_14);
      return;
    }
    if (*(long *)(param_12 + 2) != 0xf) {
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar18 = (float)*(long *)param_11;
LAB_005c96d6:
      *param_12 = fVar18;
      return;
    }
    lVar13 = *(long *)param_12;
    fVar18 = (float)*(long *)param_11;
  }
  ex_mkvector(fVar18,lVar13,*(int *)(param_9 + 0x28f8));
  return;
}


