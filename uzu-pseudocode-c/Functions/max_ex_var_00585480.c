// Function : max_ex_var
// Namespace: 
// Entry    : 00585480
// Prototype: undefined8 max_ex_var(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, float * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00585480 - 00585588


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
max_ex_var(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 *param_10,float *param_11,undefined8 param_12,char *param_13,
          undefined8 param_14)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uStack_28;
  float fStack_24;
  
  iVar1 = (int)param_12;
  uStack_28 = in_RAX;
  iVar2 = strcmp((char *)*param_10,"sys_idx");
  if (iVar2 == 0) {
    if (*(long *)(param_11 + 2) != 0xf) {
      *(long *)param_11 = (long)iVar1;
      param_11[2] = 1.4013e-45;
      param_11[3] = 0.0;
      return 0;
    }
    lVar4 = *(long *)param_11;
    fStack_24 = (float)iVar1;
  }
  else {
    uVar3 = value_getfloat(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)param_10,&fStack_24);
    if ((int)uVar3 != 0) {
      if (((*(byte *)(param_9 + 0x34) & 0x10) == 0) &&
         (uVar3 = ex_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,param_9,"no such var \'%s\'",*param_10,
                           param_12,param_13,param_14,(undefined1)uStack_28),
         (*(byte *)(param_9 + 0x30) & 6) != 0)) {
        uVar3 = post(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "expr: no more var errors will be reported");
        post(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "expr: till the next reset");
        *(byte *)(param_9 + 0x34) = *(byte *)(param_9 + 0x34) | 0x10;
      }
      uVar3 = _UNK_005d99f8;
      if (*(long *)(param_11 + 2) == 0xf) {
        ex_mkvector(0,*(long *)param_11,*(int *)(param_9 + 0x28f8));
        return 1;
      }
      *(undefined8 *)param_11 = _DAT_005d99f0;
      *(undefined8 *)(param_11 + 2) = uVar3;
      return 1;
    }
    if (*(long *)(param_11 + 2) != 0xf) {
      *param_11 = fStack_24;
      param_11[2] = 2.8026e-45;
      param_11[3] = 0.0;
      return 0;
    }
    lVar4 = *(long *)param_11;
  }
  ex_mkvector(fStack_24,lVar4,*(int *)(param_9 + 0x28f8));
  return 0;
}


