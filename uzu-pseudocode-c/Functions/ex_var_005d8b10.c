// Function : ex_var
// Namespace: 
// Entry    : 005d8b10
// Prototype: undefined ex_var(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d8b10 - 005d8bb2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_var(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,long *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  undefined8 *puVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar1 = param_11[1];
  if (lVar1 == 0xd) {
    puVar3 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar3 == (undefined8 *)0x0) goto LAB_005d8b62;
  }
  else {
    if (lVar1 != 7) {
      ex_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "var(): argument not a string - type = %ld\n",lVar1,param_12,param_13,param_14,in_AL)
      ;
LAB_005d8b62:
      uVar2 = _UNK_005d99f8;
      if (*(long *)(param_12 + 2) == 0xf) {
        ex_mkvector(0,*(long *)param_12,*(int *)(param_9 + 0x28f8));
        return;
      }
      *(undefined8 *)param_12 = _DAT_005d99f0;
      *(undefined8 *)(param_12 + 2) = uVar2;
      return;
    }
    if ((*(byte *)(param_11 + 3) & 1) == 0) {
      puVar3 = (undefined8 *)*param_11;
    }
    else {
      puVar3 = gensym((char *)*param_11);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
  }
  max_ex_var(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar3,param_12
             ,0,param_13,param_14);
  return;
}


