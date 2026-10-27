// Function : ex_cosh
// Namespace: 
// Entry    : 005cf7f0
// Prototype: undefined ex_cosh(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005cf7f0 - 005cf938


void ex_cosh(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  
  lVar3 = *(long *)(param_11 + 2);
  if (lVar3 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar3 = *(long *)param_12;
      iVar1 = *(int *)(param_9 + 0x28f8);
    }
    else {
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      lVar3 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(long *)param_12 = lVar3;
      iVar1 = *(int *)(param_9 + 0x28f8);
    }
    if (iVar1 != 0) {
      lVar2 = *(long *)param_11;
      lVar4 = 0;
      do {
        fVar5 = coshf(*(float *)(lVar2 + lVar4 * 4));
        *(float *)(lVar3 + lVar4 * 4) = fVar5;
        lVar4 = lVar4 + 1;
      } while (iVar1 != (int)lVar4);
    }
  }
  else {
    if (lVar3 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar3 = *(long *)param_12;
        fVar5 = coshf(*param_11);
        goto LAB_005cf877;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar5 = coshf(*param_11);
    }
    else {
      if (lVar3 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x39c,lVar3,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar3 = *(long *)param_12;
        dVar6 = cosh((double)*(long *)param_11);
        fVar5 = (float)dVar6;
LAB_005cf877:
        ex_mkvector(fVar5,lVar3,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar6 = cosh((double)*(long *)param_11);
      fVar5 = (float)dVar6;
    }
    *param_12 = fVar5;
  }
  return;
}


