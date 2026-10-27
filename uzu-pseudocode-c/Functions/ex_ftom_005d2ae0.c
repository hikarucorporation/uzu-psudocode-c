// Function : ex_ftom
// Namespace: 
// Entry    : 005d2ae0
// Prototype: undefined ex_ftom(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d2ae0 - 005d2c23


void ex_ftom(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,float *param_11,long *param_12,char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 extraout_XMM0_Da;
  float fVar5;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  
  lVar3 = *(long *)(param_11 + 2);
  if (lVar3 - 0xeU < 2) {
    if (param_12[1] == 0xf) {
      lVar3 = *param_12;
      iVar1 = *(int *)(param_9 + 0x28f8);
    }
    else {
      param_12[1] = 0xf;
      lVar3 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *param_12 = lVar3;
      iVar1 = *(int *)(param_9 + 0x28f8);
    }
    if (iVar1 != 0) {
      lVar2 = *(long *)param_11;
      lVar4 = 0;
      do {
        ftom(*(float *)(lVar2 + lVar4 * 4));
        *(undefined4 *)(lVar3 + lVar4 * 4) = extraout_XMM0_Da_00;
        lVar4 = lVar4 + 1;
      } while (iVar1 != (int)lVar4);
    }
  }
  else {
    if (lVar3 == 2) {
      if (param_12[1] == 0xf) {
        lVar3 = *param_12;
        fVar5 = *param_11;
        goto LAB_005d2b5d;
      }
      param_12[1] = 2;
      fVar5 = *param_11;
    }
    else {
      if (lVar3 != 1) {
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x76b,lVar3,param_13,param_14);
        return;
      }
      if (param_12[1] == 0xf) {
        lVar3 = *param_12;
        fVar5 = (float)*(long *)param_11;
LAB_005d2b5d:
        ftom(fVar5);
        ex_mkvector(extraout_XMM0_Da,lVar3,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[1] = 2;
      fVar5 = (float)*(long *)param_11;
    }
    ftom(fVar5);
    *(undefined4 *)param_12 = extraout_XMM0_Da_01;
  }
  return;
}


