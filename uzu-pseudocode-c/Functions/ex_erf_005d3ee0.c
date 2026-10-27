// Function : ex_erf
// Namespace: 
// Entry    : 005d3ee0
// Prototype: undefined ex_erf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d3ee0 - 005d402f


void ex_erf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
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
        dVar5 = erf((double)*(float *)(lVar2 + lVar4 * 4));
        *(float *)(lVar3 + lVar4 * 4) = (float)dVar5;
        lVar4 = lVar4 + 1;
      } while (iVar1 != (int)lVar4);
    }
  }
  else {
    if (lVar3 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar3 = *(long *)param_12;
        dVar5 = (double)*param_11;
        goto LAB_005d3f5d;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar5 = (double)*param_11;
    }
    else {
      if (lVar3 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x77f,lVar3,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar3 = *(long *)param_12;
        dVar5 = (double)*(long *)param_11;
LAB_005d3f5d:
        dVar5 = erf(dVar5);
        ex_mkvector((float)dVar5,lVar3,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar5 = (double)*(long *)param_11;
    }
    dVar5 = erf(dVar5);
    *param_12 = (float)dVar5;
  }
  return;
}


