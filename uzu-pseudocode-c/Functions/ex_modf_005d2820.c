// Function : ex_modf
// Namespace: 
// Entry    : 005d2820
// Prototype: undefined ex_modf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d2820 - 005d298d


void ex_modf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double local_30;
  
  lVar5 = *(long *)(param_11 + 2);
  if (lVar5 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) != 0xf) {
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      uVar3 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(undefined8 *)param_12 = uVar3;
    }
    iVar1 = *(int *)(param_9 + 0x28f8);
    if (iVar1 != 0) {
      lVar5 = *(long *)param_11;
      lVar2 = *(long *)param_12;
      lVar4 = 0;
      do {
        dVar6 = modf((double)*(float *)(lVar5 + lVar4 * 4),&local_30);
        *(float *)(lVar2 + lVar4 * 4) = (float)dVar6;
        lVar4 = lVar4 + 1;
      } while (iVar1 != (int)lVar4);
    }
  }
  else {
    if (lVar5 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar5 = *(long *)param_12;
        dVar6 = (double)*param_11;
        goto LAB_005d28fe;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar6 = (double)*param_11;
    }
    else {
      if (lVar5 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x767,lVar5,param_13,param_14);
        return;
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        lVar5 = *(long *)param_12;
        dVar6 = (double)*(long *)param_11;
LAB_005d28fe:
        dVar6 = modf(dVar6,&local_30);
        ex_mkvector((float)dVar6,lVar5,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar6 = (double)*(long *)param_11;
    }
    dVar6 = modf(dVar6,&local_30);
    *param_12 = (float)dVar6;
  }
  return;
}


