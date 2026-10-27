// Function : ex_random
// Namespace: 
// Entry    : 005d0180
// Prototype: undefined ex_random(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d0180 - 005d0c19


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_random(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,float *param_11,float *param_12,char *param_13,
              undefined8 param_14)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  
  lVar10 = *(long *)(param_11 + 2);
  if (lVar10 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar6 = *(long *)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005d0c02:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      lVar6 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(long *)param_12 = lVar6;
      param_1 = extraout_XMM0_Qa;
    }
    lVar12 = *(long *)param_11;
    lVar10 = *(long *)(param_11 + 10);
    if (lVar10 - 0xeU < 2) {
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      lVar10 = *(long *)(param_11 + 8);
      lVar9 = 0;
      do {
        iVar8 = (int)*(float *)(lVar12 + lVar9 * 4);
        fVar16 = *(float *)(lVar10 + lVar9 * 4);
        uVar2 = rand();
        *(float *)(lVar6 + lVar9 * 4) =
             (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar16 - iVar8)) *
                          _DAT_006601e0) + iVar8);
        lVar9 = lVar9 + 1;
      } while (iVar5 != (int)lVar9);
      return;
    }
    if (lVar10 == 2) {
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      fVar16 = param_11[8];
      lVar10 = 0;
      do {
        iVar8 = (int)*(float *)(lVar12 + lVar10 * 4);
        uVar2 = rand();
        *(float *)(lVar6 + lVar10 * 4) =
             (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar16 - iVar8)) *
                          _DAT_006601e0) + iVar8);
        lVar10 = lVar10 + 1;
      } while (iVar5 != (int)lVar10);
      return;
    }
    if (lVar10 == 1) {
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      lVar10 = *(long *)(param_11 + 8);
      lVar9 = 0;
      do {
        iVar8 = (int)*(float *)(lVar12 + lVar9 * 4);
        uVar2 = rand();
        *(float *)(lVar6 + lVar9 * 4) =
             (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)(float)lVar10 - iVar8)) *
                          _DAT_006601e0) + iVar8);
        lVar9 = lVar9 + 1;
      } while (iVar5 != (int)lVar9);
      return;
    }
  }
  else if (lVar10 == 2) {
    lVar10 = *(long *)(param_11 + 10);
    if (lVar10 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d0c02;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar4 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar4;
      }
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      fVar16 = *param_11;
      lVar10 = *(long *)param_12;
      lVar6 = *(long *)(param_11 + 8);
      lVar12 = 0;
      do {
        fVar11 = *(float *)(lVar6 + lVar12 * 4);
        uVar2 = rand();
        *(float *)(lVar10 + lVar12 * 4) =
             (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar11 - (int)fVar16)) *
                          _DAT_006601e0) + (int)fVar16);
        lVar12 = lVar12 + 1;
      } while (iVar5 != (int)lVar12);
      return;
    }
    if (lVar10 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        fVar16 = *param_11;
        lVar10 = *(long *)param_12;
        fVar11 = param_11[8];
        uVar2 = rand();
        iVar5 = *(int *)(param_9 + 0x28f8);
        if (iVar5 == 0) {
          return;
        }
        fVar16 = (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar11 - (int)fVar16)
                                       ) * _DAT_006601e0) + (int)fVar16);
        if (6 < iVar5 - 1U) {
          uVar3 = (ulong)(iVar5 - 1U) + 1;
          uVar7 = uVar3 & 0xfffffffffffffff8;
          uVar15 = (uVar7 - 8 >> 3) + 1;
          uVar13 = (ulong)((uint)uVar15 & 7);
          if (uVar7 - 8 < 0x38) {
            lVar6 = 0;
          }
          else {
            uVar15 = uVar15 & 0xfffffffffffffff8;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x20 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x30 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x40 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x50 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x60 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x70 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x80 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x90 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xa0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xb0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xc0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xd0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xe0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xf0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar6 = lVar6 + 0x40;
              uVar15 = uVar15 - 8;
            } while (uVar15 != 0);
          }
          if (uVar13 != 0) {
            lVar6 = lVar10 + lVar6 * 4;
            lVar12 = 0;
            do {
              pfVar1 = (float *)(lVar6 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar6 + 0x10 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar12 = lVar12 + 0x20;
            } while (uVar13 * 0x20 != lVar12);
          }
          if (uVar3 == uVar7) {
            return;
          }
          iVar5 = iVar5 - (int)uVar7;
          lVar10 = lVar10 + uVar7 * 4;
        }
        lVar6 = 0;
        do {
          *(float *)(lVar10 + lVar6 * 4) = fVar16;
          lVar6 = lVar6 + 1;
        } while (iVar5 != (int)lVar6);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar16 = (float)(int)*param_11;
LAB_005d0882:
      fVar11 = (float)(int)param_11[8];
LAB_005d0889:
      uVar2 = rand();
      *param_12 = (float)((int)((double)((float)(uVar2 & 0x7fff) *
                                        (float)((int)fVar11 - (int)fVar16)) * _DAT_006601e0) +
                         (int)fVar16);
      return;
    }
    if (lVar10 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar10 = *(long *)param_12;
        fVar16 = *param_11;
        fVar11 = param_11[8];
        uVar2 = rand();
        iVar5 = *(int *)(param_9 + 0x28f8);
        if (iVar5 == 0) {
          return;
        }
        fVar16 = (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar11 - (int)fVar16)
                                       ) * _DAT_006601e0) + (int)fVar16);
        if (6 < iVar5 - 1U) {
          uVar3 = (ulong)(iVar5 - 1U) + 1;
          uVar7 = uVar3 & 0xfffffffffffffff8;
          uVar15 = (uVar7 - 8 >> 3) + 1;
          uVar13 = (ulong)((uint)uVar15 & 7);
          if (uVar7 - 8 < 0x38) {
            lVar6 = 0;
          }
          else {
            uVar15 = uVar15 & 0xfffffffffffffff8;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x20 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x30 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x40 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x50 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x60 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x70 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x80 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x90 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xa0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xb0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xc0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xd0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xe0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xf0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar6 = lVar6 + 0x40;
              uVar15 = uVar15 - 8;
            } while (uVar15 != 0);
          }
          if (uVar13 != 0) {
            lVar6 = lVar10 + lVar6 * 4;
            lVar12 = 0;
            do {
              pfVar1 = (float *)(lVar6 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar6 + 0x10 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar12 = lVar12 + 0x20;
            } while (uVar13 * 0x20 != lVar12);
          }
          if (uVar3 == uVar7) {
            return;
          }
          iVar5 = iVar5 - (int)uVar7;
          lVar10 = lVar10 + uVar7 * 4;
        }
        lVar6 = 0;
        do {
          *(float *)(lVar10 + lVar6 * 4) = fVar16;
          lVar6 = lVar6 + 1;
        } while (iVar5 != (int)lVar6);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar16 = (float)(int)*param_11;
      fVar11 = param_11[8];
      goto LAB_005d0889;
    }
  }
  else {
    if (lVar10 != 1) {
      pcVar14 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005d043f;
    }
    lVar10 = *(long *)(param_11 + 10);
    if (lVar10 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d0c02;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        uVar4 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar4;
      }
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      lVar10 = *(long *)param_12;
      lVar6 = *(long *)(param_11 + 8);
      lVar12 = *(long *)param_11;
      lVar9 = 0;
      do {
        fVar16 = *(float *)(lVar6 + lVar9 * 4);
        uVar2 = rand();
        *(float *)(lVar10 + lVar9 * 4) =
             (float)((int)((double)((float)(uVar2 & 0x7fff) *
                                   (float)((int)fVar16 - (int)(float)lVar12)) * _DAT_006601e0) +
                    (int)(float)lVar12);
        lVar9 = lVar9 + 1;
      } while (iVar5 != (int)lVar9);
      return;
    }
    if (lVar10 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar10 = *(long *)param_12;
        fVar11 = *param_11;
        fVar16 = param_11[8];
        uVar2 = rand();
        iVar5 = *(int *)(param_9 + 0x28f8);
        if (iVar5 == 0) {
          return;
        }
        fVar16 = (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar16 - (int)fVar11)
                                       ) * _DAT_006601e0) + (int)fVar11);
        if (6 < iVar5 - 1U) {
          uVar3 = (ulong)(iVar5 - 1U) + 1;
          uVar7 = uVar3 & 0xfffffffffffffff8;
          uVar15 = (uVar7 - 8 >> 3) + 1;
          uVar13 = (ulong)((uint)uVar15 & 7);
          if (uVar7 - 8 < 0x38) {
            lVar6 = 0;
          }
          else {
            uVar15 = uVar15 & 0xfffffffffffffff8;
            lVar6 = 0;
            do {
              pfVar1 = (float *)(lVar10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x10 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x20 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x30 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x40 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x50 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x60 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x70 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x80 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0x90 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xa0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xb0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xc0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xd0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xe0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar10 + 0xf0 + lVar6 * 4);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar6 = lVar6 + 0x40;
              uVar15 = uVar15 - 8;
            } while (uVar15 != 0);
          }
          if (uVar13 != 0) {
            lVar6 = lVar10 + lVar6 * 4;
            lVar12 = 0;
            do {
              pfVar1 = (float *)(lVar6 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              pfVar1 = (float *)(lVar6 + 0x10 + lVar12);
              *pfVar1 = fVar16;
              pfVar1[1] = fVar16;
              pfVar1[2] = fVar16;
              pfVar1[3] = fVar16;
              lVar12 = lVar12 + 0x20;
            } while (uVar13 * 0x20 != lVar12);
          }
          if (uVar3 == uVar7) {
            return;
          }
          iVar5 = iVar5 - (int)uVar7;
          lVar10 = lVar10 + uVar7 * 4;
        }
        lVar6 = 0;
        do {
          *(float *)(lVar10 + lVar6 * 4) = fVar16;
          lVar6 = lVar6 + 1;
        } while (iVar5 != (int)lVar6);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar16 = *param_11;
      goto LAB_005d0882;
    }
    if (lVar10 == 1) {
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 1.4013e-45;
        param_12[3] = 0.0;
        fVar16 = *param_11;
        fVar11 = param_11[8];
        uVar2 = rand();
        *(long *)param_12 =
             (long)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar11 - (int)fVar16)) *
                         _DAT_006601e0) + (int)fVar16);
        return;
      }
      lVar10 = *(long *)param_12;
      fVar16 = *param_11;
      fVar11 = param_11[8];
      uVar2 = rand();
      iVar5 = *(int *)(param_9 + 0x28f8);
      if (iVar5 == 0) {
        return;
      }
      fVar16 = (float)((int)((double)((float)(uVar2 & 0x7fff) * (float)((int)fVar11 - (int)fVar16))
                            * _DAT_006601e0) + (int)fVar16);
      if (6 < iVar5 - 1U) {
        uVar3 = (ulong)(iVar5 - 1U) + 1;
        uVar7 = uVar3 & 0xfffffffffffffff8;
        uVar15 = (uVar7 - 8 >> 3) + 1;
        uVar13 = (ulong)((uint)uVar15 & 7);
        if (uVar7 - 8 < 0x38) {
          lVar6 = 0;
        }
        else {
          uVar15 = uVar15 & 0xfffffffffffffff8;
          lVar6 = 0;
          do {
            pfVar1 = (float *)(lVar10 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x10 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x20 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x30 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x40 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x50 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x60 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x70 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x80 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0x90 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xa0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xb0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xc0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xd0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xe0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar10 + 0xf0 + lVar6 * 4);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            lVar6 = lVar6 + 0x40;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
        }
        if (uVar13 != 0) {
          lVar6 = lVar10 + lVar6 * 4;
          lVar12 = 0;
          do {
            pfVar1 = (float *)(lVar6 + lVar12);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            pfVar1 = (float *)(lVar6 + 0x10 + lVar12);
            *pfVar1 = fVar16;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar16;
            pfVar1[3] = fVar16;
            lVar12 = lVar12 + 0x20;
          } while (uVar13 * 0x20 != lVar12);
        }
        if (uVar3 == uVar7) {
          return;
        }
        iVar5 = iVar5 - (int)uVar7;
        lVar10 = lVar10 + uVar7 * 4;
      }
      lVar6 = 0;
      do {
        *(float *)(lVar10 + lVar6 * 4) = fVar16;
        lVar6 = lVar6 + 1;
      } while (iVar5 != (int)lVar6);
      return;
    }
  }
  pcVar14 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005d043f:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar14,0x412,
           lVar10,param_13,param_14);
  return;
}


