// Function : tabwrite_float
// Namespace: 
// Entry    : 0058be50
// Prototype: undefined tabwrite_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0058be50 - 0058bf0a


void tabwrite_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13
                   ,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined1 in_stack_ffffffffffffffd8;
  int local_1c;
  long local_18;
  
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),*(long *)PTR_garray_class_00715780);
  if (plVar3 == (long *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"%s: no such array",**(undefined8 **)(param_9 + 0x30),param_12,
             param_13,param_14);
    return;
  }
  piVar6 = &local_1c;
  uVar4 = garray_getfloatwords
                    (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,(long)plVar3,piVar6,&local_18,param_12,param_13,
                     param_14);
  if ((int)uVar4 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"%s: bad template for tabwrite",
             **(undefined8 **)(param_9 + 0x30),param_12,param_13,param_14);
    return;
  }
  uVar2 = (uint)*(float *)(param_9 + 0x38);
  uVar1 = local_1c - 1;
  if ((int)uVar2 < local_1c) {
    uVar1 = uVar2;
  }
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar1;
  }
  *(int *)(local_18 + (long)(int)uVar5 * 8) = (int)param_1;
  garray_redraw(param_1 & 0xffffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                (long)plVar3,piVar6,(ulong)uVar1,(long)(int)uVar5,param_13,param_14,
                in_stack_ffffffffffffffd8);
  return;
}


