// Function : sigsamphold_new
// Namespace: 
// Entry    : 00594140
// Prototype: long * sigsamphold_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00594140 - 005941a9


long * sigsamphold_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_sigsamphold_class_00715b68,param_10,param_11,param_12,param_13,
                  param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar2 + 0xf0;
  inlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
            (long)plVar1,lVar3,lVar3,param_13,param_14);
  outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,*plVar2 + 0xf0,extraout_RDX,lVar3,param_13,param_14);
  *(undefined8 *)((long)plVar1 + 0x34) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


