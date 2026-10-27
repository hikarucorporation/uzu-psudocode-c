// Function : ex_ldexp
// Namespace: 
// Entry    : 005d1e10
// Prototype: undefined ex_ldexp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d1e10 - 005d2699


void ex_ldexp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
             undefined8 param_14)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  float fVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  
  lVar9 = *(long *)(param_11 + 2);
  if (lVar9 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar5 = *(long *)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005d2682:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      lVar5 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(long *)param_12 = lVar5;
      param_1 = extraout_XMM0_Qa;
    }
    lVar6 = *(long *)param_11;
    lVar9 = *(long *)(param_11 + 10);
    if (lVar9 - 0xeU < 2) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar9 = *(long *)(param_11 + 8);
      lVar8 = 0;
      do {
        dVar14 = ldexp((double)*(float *)(lVar6 + lVar8 * 4),(int)*(float *)(lVar9 + lVar8 * 4));
        *(float *)(lVar5 + lVar8 * 4) = (float)dVar14;
        lVar8 = lVar8 + 1;
      } while (iVar3 != (int)lVar8);
      return;
    }
    if (lVar9 == 2) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      fVar13 = param_11[8];
      lVar9 = 0;
      do {
        dVar14 = ldexp((double)*(float *)(lVar6 + lVar9 * 4),(int)fVar13);
        *(float *)(lVar5 + lVar9 * 4) = (float)dVar14;
        lVar9 = lVar9 + 1;
      } while (iVar3 != (int)lVar9);
      return;
    }
    if (lVar9 == 1) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar9 = *(long *)(param_11 + 8);
      lVar8 = 0;
      do {
        dVar14 = ldexp((double)*(float *)(lVar6 + lVar8 * 4),(int)(float)lVar9);
        *(float *)(lVar5 + lVar8 * 4) = (float)dVar14;
        lVar8 = lVar8 + 1;
      } while (iVar3 != (int)lVar8);
      return;
    }
  }
  else if (lVar9 == 2) {
    lVar9 = *(long *)(param_11 + 10);
    if (lVar9 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d2682;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar2 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar2;
      }
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar9 = *(long *)param_12;
      lVar5 = *(long *)(param_11 + 8);
      fVar13 = *param_11;
      lVar6 = 0;
      do {
        dVar14 = ldexp((double)fVar13,(int)*(float *)(lVar5 + lVar6 * 4));
        *(float *)(lVar9 + lVar6 * 4) = (float)dVar14;
        lVar6 = lVar6 + 1;
      } while (iVar3 != (int)lVar6);
      return;
    }
    if (lVar9 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = ldexp((double)*param_11,(int)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar9 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar10 = uVar4 & 0xfffffffffffffff8;
          uVar12 = (uVar10 - 8 >> 3) + 1;
          uVar7 = (ulong)((uint)uVar12 & 7);
          if (uVar10 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar12 = uVar12 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar9 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
          }
          if (uVar7 != 0) {
            lVar5 = lVar9 + lVar5 * 4;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 != lVar6);
          }
          if (uVar4 == uVar10) {
            return;
          }
          iVar3 = iVar3 - (int)uVar10;
          lVar9 = lVar9 + uVar10 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar9 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*param_11;
LAB_005d232e:
      fVar13 = (float)(int)param_11[8];
LAB_005d2334:
      dVar14 = ldexp(dVar14,(int)fVar13);
      *param_12 = (float)dVar14;
      return;
    }
    if (lVar9 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = ldexp((double)*param_11,(int)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar9 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar10 = uVar4 & 0xfffffffffffffff8;
          uVar12 = (uVar10 - 8 >> 3) + 1;
          uVar7 = (ulong)((uint)uVar12 & 7);
          if (uVar10 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar12 = uVar12 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar9 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
          }
          if (uVar7 != 0) {
            lVar5 = lVar9 + lVar5 * 4;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 != lVar6);
          }
          if (uVar4 == uVar10) {
            return;
          }
          iVar3 = iVar3 - (int)uVar10;
          lVar9 = lVar9 + uVar10 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar9 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*param_11;
LAB_005d2308:
      fVar13 = param_11[8];
      goto LAB_005d2334;
    }
  }
  else {
    if (lVar9 != 1) {
      pcVar11 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005d2042;
    }
    lVar9 = *(long *)(param_11 + 10);
    if (lVar9 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d2682;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar2 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar2;
      }
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar9 = *(long *)param_11;
      lVar5 = *(long *)param_12;
      lVar6 = *(long *)(param_11 + 8);
      lVar8 = 0;
      do {
        dVar14 = ldexp((double)lVar9,(int)*(float *)(lVar6 + lVar8 * 4));
        *(float *)(lVar5 + lVar8 * 4) = (float)dVar14;
        lVar8 = lVar8 + 1;
      } while (iVar3 != (int)lVar8);
      return;
    }
    if (lVar9 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = ldexp((double)*(long *)param_11,(int)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar9 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar10 = uVar4 & 0xfffffffffffffff8;
          uVar12 = (uVar10 - 8 >> 3) + 1;
          uVar7 = (ulong)((uint)uVar12 & 7);
          if (uVar10 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar12 = uVar12 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar9 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
          }
          if (uVar7 != 0) {
            lVar5 = lVar9 + lVar5 * 4;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 != lVar6);
          }
          if (uVar4 == uVar10) {
            return;
          }
          iVar3 = iVar3 - (int)uVar10;
          lVar9 = lVar9 + uVar10 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar9 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*(long *)param_11;
      goto LAB_005d232e;
    }
    if (lVar9 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = ldexp((double)*(long *)param_11,(int)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar9 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar10 = uVar4 & 0xfffffffffffffff8;
          uVar12 = (uVar10 - 8 >> 3) + 1;
          uVar7 = (ulong)((uint)uVar12 & 7);
          if (uVar10 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar12 = uVar12 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar9 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar9 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
          }
          if (uVar7 != 0) {
            lVar5 = lVar9 + lVar5 * 4;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar6);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 != lVar6);
          }
          if (uVar4 == uVar10) {
            return;
          }
          iVar3 = iVar3 - (int)uVar10;
          lVar9 = lVar9 + uVar10 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar9 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*(long *)param_11;
      goto LAB_005d2308;
    }
  }
  pcVar11 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005d2042:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar11,0x774,
           lVar9,param_13,param_14);
  return;
}


