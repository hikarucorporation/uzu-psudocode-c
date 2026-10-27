// Function : tabread_float
// Namespace: 
// Entry    : 0058e6c0
// Prototype: undefined tabread_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0058e6c0 - 0058e771


void tabread_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                  undefined8 param_14)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint uVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int local_14;
  long local_10;
  
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),*(long *)PTR_garray_class_00715780);
  if (plVar3 == (long *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"%s: no such array",**(undefined8 **)(param_9 + 0x30),param_12,
             param_13,param_14);
    return;
  }
  uVar4 = garray_getfloatwords
                    (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,(long)plVar3,&local_14,&local_10,param_12,param_13,
                     param_14);
  if ((int)uVar4 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"%s: bad template for tabread",
             **(undefined8 **)(param_9 + 0x30),param_12,param_13,param_14);
    return;
  }
  if (local_14 == 0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)(float)param_1;
    iVar1 = local_14 + -1;
    if (iVar5 < local_14) {
      iVar1 = iVar5;
    }
    iVar2 = 0;
    if (-1 < iVar5) {
      iVar2 = iVar1;
    }
    uVar6 = *(uint *)(local_10 + (long)iVar2 * 8);
  }
  outlet_float((ulong)uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


