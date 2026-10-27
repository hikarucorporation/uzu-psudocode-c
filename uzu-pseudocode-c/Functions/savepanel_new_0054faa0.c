// Function : savepanel_new
// Namespace: 
// Entry    : 0054faa0
// Prototype: long * savepanel_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054faa0 - 0054fb18


long * savepanel_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char acStack_48 [56];
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,savepanel_class,
                  param_10,param_11,param_12,param_13,param_14);
  sprintf(acStack_48,"d%lx",plVar1);
  puVar2 = gensym(acStack_48);
  plVar1[7] = (long)puVar2;
  lVar3 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  plVar1[6] = lVar3;
  pd_bind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
          plVar1[7],extraout_RDX,param_12,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,*plVar4 + 0x90,extraout_RDX_00,param_12,param_13,param_14);
  return plVar1;
}


