// Function : pd_defaultlist
// Namespace: 
// Entry    : 00536420
// Prototype: undefined pd_defaultlist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00536420 - 00536574


void pd_defaultlist(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                   undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  if (param_11 == 1) {
    iVar1 = *param_12;
    if (iVar1 == 3) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_9 + 0x40);
      if (UNRECOVERED_JUMPTABLE_00 != pd_defaultpointer) {
LAB_005364af:
                    /* WARNING: Could not recover jumptable at 0x005364c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_9,*(undefined8 *)(param_12 + 2));
        return;
      }
    }
    else if (iVar1 == 2) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_9 + 0x50);
      if (UNRECOVERED_JUMPTABLE_00 != pd_defaultsymbol) goto LAB_005364af;
    }
    else if ((iVar1 == 1) && (*(code **)(*param_9 + 0x48) != pd_defaultfloat)) {
                    /* WARNING: Could not recover jumptable at 0x0053649a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_9 + 0x48))(param_12[2],param_9);
      return;
    }
  }
  else if ((param_11 == 0) && (*(code **)(*param_9 + 0x38) != pd_defaultbang)) {
                    /* WARNING: Could not recover jumptable at 0x00536460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_9 + 0x38))(param_9);
    return;
  }
  puVar2 = (undefined8 *)*param_9;
  UNRECOVERED_JUMPTABLE_00 = (code *)puVar2[0xc];
  if (UNRECOVERED_JUMPTABLE_00 != pd_defaultanything) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
                    /* WARNING: Could not recover jumptable at 0x00536518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_9,*plVar3 + 0xc0,param_11,param_12);
    return;
  }
  if ((*(byte *)((long)puVar2 + 0x94) & 2) == 0) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)param_9,"%s: no method for \'%s\'",*(undefined8 *)*puVar2,
             *(undefined8 *)(*plVar3 + 0xc0),param_13,param_14);
    return;
  }
  obj_list(param_9,param_10,param_11,param_12);
  return;
}


