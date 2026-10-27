// Function : value_new
// Namespace: 
// Entry    : 0054e930
// Prototype: long * value_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0054e930 - 0054e9eb


long * value_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,value_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar5 = extraout_XMM0_Qa;
  if (*(char *)*param_9 == '\0') {
    puVar2 = gensym("symbol");
    param_12 = gensym("symbol2");
    inlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              (long)plVar1,(long)plVar1,(long)puVar2,(long)param_12,param_13,param_14);
    uVar5 = extraout_XMM0_Qa_01;
  }
  plVar1[6] = (long)param_9;
  lVar4 = vcommon_class;
  plVar3 = pd_findbyclass(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,vcommon_class);
  if (plVar3 == (long *)0x0) {
    plVar3 = pd_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    vcommon_class,lVar4,extraout_RDX,param_12,param_13,param_14);
    plVar3[1] = 0;
    pd_bind(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
            (long)param_9,extraout_RDX_00,param_12,param_13,param_14);
  }
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  plVar1[7] = (long)plVar3 + 0xc;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,*plVar3 + 0x78,extraout_RDX_01,param_12,param_13,param_14);
  return plVar1;
}


