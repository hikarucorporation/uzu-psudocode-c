// Function : ex_atan2
// Namespace: 
// Entry    : 005ceda0
// Prototype: undefined ex_atan2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005ceda0 - 005cf699


void ex_atan2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
             undefined8 param_14)

{
  float *pfVar1;
  double __x;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  
  lVar8 = *(long *)(param_11 + 2);
  if (lVar8 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar5 = *(long *)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005cf682:
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
    lVar11 = *(long *)param_11;
    lVar8 = *(long *)(param_11 + 10);
    if (lVar8 - 0xeU < 2) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar8 = *(long *)(param_11 + 8);
      lVar7 = 0;
      do {
        dVar14 = atan2((double)*(float *)(lVar11 + lVar7 * 4),(double)*(float *)(lVar8 + lVar7 * 4))
        ;
        *(float *)(lVar5 + lVar7 * 4) = (float)dVar14;
        lVar7 = lVar7 + 1;
      } while (iVar3 != (int)lVar7);
      return;
    }
    if (lVar8 == 2) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      fVar13 = param_11[8];
      lVar8 = 0;
      do {
        dVar14 = atan2((double)*(float *)(lVar11 + lVar8 * 4),(double)fVar13);
        *(float *)(lVar5 + lVar8 * 4) = (float)dVar14;
        lVar8 = lVar8 + 1;
      } while (iVar3 != (int)lVar8);
      return;
    }
    if (lVar8 == 1) {
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar8 = *(long *)(param_11 + 8);
      lVar7 = 0;
      do {
        dVar14 = atan2((double)*(float *)(lVar11 + lVar7 * 4),(double)lVar8);
        *(float *)(lVar5 + lVar7 * 4) = (float)dVar14;
        lVar7 = lVar7 + 1;
      } while (iVar3 != (int)lVar7);
      return;
    }
  }
  else if (lVar8 == 2) {
    lVar8 = *(long *)(param_11 + 10);
    if (lVar8 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cf682;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar2 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar2;
      }
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar8 = *(long *)param_12;
      lVar5 = *(long *)(param_11 + 8);
      fVar13 = *param_11;
      lVar11 = 0;
      do {
        dVar14 = atan2((double)fVar13,(double)*(float *)(lVar5 + lVar11 * 4));
        *(float *)(lVar8 + lVar11 * 4) = (float)dVar14;
        lVar11 = lVar11 + 1;
      } while (iVar3 != (int)lVar11);
      return;
    }
    if (lVar8 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = atan2((double)*param_11,(double)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar8 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar12 = uVar4 & 0xfffffffffffffff8;
          uVar10 = (uVar12 - 8 >> 3) + 1;
          uVar6 = (ulong)((uint)uVar10 & 7);
          if (uVar12 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar8 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar6 != 0) {
            lVar5 = lVar8 + lVar5 * 4;
            lVar11 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar11 = lVar11 + 0x20;
            } while (uVar6 * 0x20 != lVar11);
          }
          if (uVar4 == uVar12) {
            return;
          }
          iVar3 = iVar3 - (int)uVar12;
          lVar8 = lVar8 + uVar12 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar8 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar13 = param_11[8];
      dVar14 = (double)*param_11;
LAB_005cf328:
      __x = (double)fVar13;
LAB_005cf32c:
      dVar14 = atan2(dVar14,__x);
      *param_12 = (float)dVar14;
      return;
    }
    if (lVar8 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = atan2((double)*param_11,(double)*(long *)(param_11 + 8));
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar8 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar12 = uVar4 & 0xfffffffffffffff8;
          uVar10 = (uVar12 - 8 >> 3) + 1;
          uVar6 = (ulong)((uint)uVar10 & 7);
          if (uVar12 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar8 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar6 != 0) {
            lVar5 = lVar8 + lVar5 * 4;
            lVar11 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar11 = lVar11 + 0x20;
            } while (uVar6 * 0x20 != lVar11);
          }
          if (uVar4 == uVar12) {
            return;
          }
          iVar3 = iVar3 - (int)uVar12;
          lVar8 = lVar8 + uVar12 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar8 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*param_11;
      __x = (double)*(long *)(param_11 + 8);
      goto LAB_005cf32c;
    }
  }
  else {
    if (lVar8 != 1) {
      pcVar9 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005cefe5;
    }
    lVar8 = *(long *)(param_11 + 10);
    if (lVar8 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cf682;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar2 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar2;
      }
      iVar3 = *(int *)(param_9 + 0x28f8);
      if (iVar3 == 0) {
        return;
      }
      lVar8 = *(long *)param_11;
      lVar5 = *(long *)param_12;
      lVar11 = *(long *)(param_11 + 8);
      lVar7 = 0;
      do {
        dVar14 = atan2((double)lVar8,(double)*(float *)(lVar11 + lVar7 * 4));
        *(float *)(lVar5 + lVar7 * 4) = (float)dVar14;
        lVar7 = lVar7 + 1;
      } while (iVar3 != (int)lVar7);
      return;
    }
    if (lVar8 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = atan2((double)*(long *)param_11,(double)param_11[8]);
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar8 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar12 = uVar4 & 0xfffffffffffffff8;
          uVar10 = (uVar12 - 8 >> 3) + 1;
          uVar6 = (ulong)((uint)uVar10 & 7);
          if (uVar12 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar8 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar6 != 0) {
            lVar5 = lVar8 + lVar5 * 4;
            lVar11 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar11 = lVar11 + 0x20;
            } while (uVar6 * 0x20 != lVar11);
          }
          if (uVar4 == uVar12) {
            return;
          }
          iVar3 = iVar3 - (int)uVar12;
          lVar8 = lVar8 + uVar12 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar8 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*(long *)param_11;
      fVar13 = param_11[8];
      goto LAB_005cf328;
    }
    if (lVar8 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar14 = atan2((double)*(long *)param_11,(double)*(long *)(param_11 + 8));
        iVar3 = *(int *)(param_9 + 0x28f8);
        if (iVar3 == 0) {
          return;
        }
        fVar13 = (float)dVar14;
        lVar8 = *(long *)param_12;
        if (6 < iVar3 - 1U) {
          uVar4 = (ulong)(iVar3 - 1U) + 1;
          uVar12 = uVar4 & 0xfffffffffffffff8;
          uVar10 = (uVar12 - 8 >> 3) + 1;
          uVar6 = (ulong)((uint)uVar10 & 7);
          if (uVar12 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = (float *)(lVar8 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x10 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x20 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x30 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x40 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x50 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x60 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x70 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x80 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0x90 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xa0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xb0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xc0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xd0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xe0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar8 + 0xf0 + lVar5 * 4);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar5 = lVar5 + 0x40;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar6 != 0) {
            lVar5 = lVar8 + lVar5 * 4;
            lVar11 = 0;
            do {
              pfVar1 = (float *)(lVar5 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              pfVar1 = (float *)(lVar5 + 0x10 + lVar11);
              *pfVar1 = fVar13;
              pfVar1[1] = fVar13;
              pfVar1[2] = fVar13;
              pfVar1[3] = fVar13;
              lVar11 = lVar11 + 0x20;
            } while (uVar6 * 0x20 != lVar11);
          }
          if (uVar4 == uVar12) {
            return;
          }
          iVar3 = iVar3 - (int)uVar12;
          lVar8 = lVar8 + uVar12 * 4;
        }
        lVar5 = 0;
        do {
          *(float *)(lVar8 + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (iVar3 != (int)lVar5);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar14 = (double)*(long *)param_11;
      __x = (double)*(long *)(param_11 + 8);
      goto LAB_005cf32c;
    }
  }
  pcVar9 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005cefe5:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar9,0x34d,
           lVar8,param_13,param_14);
  return;
}


