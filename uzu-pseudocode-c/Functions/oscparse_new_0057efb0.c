// Function : oscparse_new
// Namespace: 
// Entry    : 0057efb0
// Prototype: long * oscparse_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057efb0 - 0057f030


long * oscparse_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,oscparse_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 7) = 0;
  if ((int)param_10 != 0) {
    puVar3 = *(undefined8 **)(param_11 + 8);
    puVar2 = gensym("-n");
    if (puVar3 == puVar2) {
      *(undefined4 *)(plVar1 + 7) = 1;
    }
  }
  puVar3 = gensym("list");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             (long)puVar3,extraout_RDX,param_12,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar4 = outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar4 + 0x78,extraout_RDX_00,param_12,param_13,param_14);
  plVar1[6] = (long)plVar4;
  return plVar1;
}


