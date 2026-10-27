// Function : max_ex_var_store
// Namespace: 
// Entry    : 00585f60
// Prototype: undefined8 max_ex_var_store(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, float * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00585f60 - 00586030


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
max_ex_var_store(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,float *param_11,long *param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 in_AL;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  float fVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  plVar5 = param_12;
  if (*(long *)(param_11 + 2) == 2) {
    fVar7 = *param_11;
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_11 + 2) != 1) {
      uVar4 = *(undefined8 *)(param_9 + 0x40);
      pcVar6 = "bad right value - \'%s\'\n";
      goto LAB_00585fb9;
    }
    fVar7 = (float)*(long *)param_11;
  }
  uVar4 = value_setfloat(CONCAT44(uVar8,fVar7),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,(long)param_10);
  param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if ((int)uVar4 == 0) {
    if (param_12[1] == 0xf) {
      ex_mkvector(fVar7,*param_12,*(int *)(param_9 + 0x28f8));
    }
    else {
      lVar1 = *(long *)param_11;
      lVar2 = *(long *)(param_11 + 2);
      lVar3 = *(long *)(param_11 + 6);
      param_12[2] = *(long *)(param_11 + 4);
      param_12[3] = lVar3;
      *param_12 = lVar1;
      param_12[1] = lVar2;
    }
    return 0;
  }
  uVar4 = *param_10;
  pcVar6 = "no such var \'%s\'";
LAB_00585fb9:
  ex_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,uVar4,
           plVar5,param_13,param_14,in_AL);
  lVar1 = _UNK_005d99f8;
  if (param_12[1] == 0xf) {
    ex_mkvector(0,*param_12,*(int *)(param_9 + 0x28f8));
  }
  else {
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar1;
  }
  return 1;
}


