// Function : list_split_new
// Namespace: 
// Entry    : 00550590
// Prototype: long * list_split_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00550590 - 00550623


long * list_split_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_list_split_class_00715c58,param_10,param_11,param_12,param_13,
                  param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xc0,extraout_RDX,param_12,
                      param_13,param_14);
  plVar1[7] = (long)plVar3;
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xc0,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar1[8] = (long)plVar3;
  plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xc0,extraout_RDX_01,
                      param_12,param_13,param_14);
  plVar1[9] = (long)plVar2;
  floatinlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar1,(long)(plVar1 + 6),extraout_RDX_02,param_12,
                 param_13,param_14);
  *(int *)(plVar1 + 6) = (int)param_1;
  return plVar1;
}


