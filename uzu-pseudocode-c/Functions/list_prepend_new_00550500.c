// Function : list_prepend_new
// Namespace: 
// Entry    : 00550500
// Prototype: long * list_prepend_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00550500 - 00550584


long * list_prepend_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,ulong param_10,undefined8 *param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_list_prepend_class_00715770,param_10,param_11,param_12,param_13,
                  param_14);
  plVar1[6] = *(long *)PTR_alist_class_00715f58;
  plVar1[7] = 0;
  plVar1[8] = 0;
  alist_list(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)(plVar1 + 6),0,
             param_10 & 0xffffffff,param_11,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,*plVar2 + 0xc0,extraout_RDX,param_11,param_13,param_14);
  inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)(plVar1 + 6),0,0,param_13,param_14);
  return plVar1;
}


