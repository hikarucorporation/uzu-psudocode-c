// Function : keyname_new
// Namespace: 
// Entry    : 0054fd10
// Prototype: long * keyname_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054fd10 - 0054fd7e


long * keyname_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,keyname_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar2 + 0x78,extraout_RDX,param_12,param_13,param_14);
  plVar1[6] = (long)plVar3;
  plVar2 = outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar2 + 0x90,extraout_RDX_00,param_12,param_13,param_14);
  plVar1[7] = (long)plVar2;
  puVar4 = gensym("#keyname");
  pd_bind(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
          (long)puVar4,extraout_RDX_01,param_12,param_13,param_14);
  return plVar1;
}


