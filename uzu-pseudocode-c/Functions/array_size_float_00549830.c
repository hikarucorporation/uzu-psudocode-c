// Function : array_size_float
// Namespace: 
// Entry    : 00549830
// Prototype: undefined array_size_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 00549830 - 005498c2


void array_size_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                     ulong param_14)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  long *local_10;
  
  piVar1 = (int *)array_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,param_9,(long *)&local_10,param_11,param_12,param_13,
                                      param_14);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*(long *)(param_9 + 0x30) != 0) {
    plVar2 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x30),
                            *(long *)PTR_garray_class_00715780);
    if (plVar2 == (long *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"no such array \'%s\'",
               **(undefined8 **)(param_9 + 0x30),param_12,param_13,param_14);
      return;
    }
    garray_resize_long(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(long)plVar2,(long)(float)param_1,
                       extraout_RDX,param_12,param_13,param_14);
    return;
  }
  iVar3 = (int)(float)param_1;
  iVar4 = 1;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  array_resize_and_redraw
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,piVar1,local_10,iVar4);
  return;
}


