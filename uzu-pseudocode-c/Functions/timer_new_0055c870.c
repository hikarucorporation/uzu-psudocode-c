// Function : timer_new
// Namespace: 
// Entry    : 0055c870
// Prototype: long * timer_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c870 - 0055c955


long * timer_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  long extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar4;
  long extraout_XMM0_Qa_02;
  double dVar5;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,timer_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar1[8] = 0x3f800000;
  clock_getlogicaltime();
  plVar1[6] = extraout_XMM0_Qa;
  plVar1[7] = 0;
  puVar2 = gensym("float");
  outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,(long)puVar2,extraout_RDX,param_12,param_13,param_14);
  puVar2 = gensym("bang");
  puVar3 = gensym("bang2");
  inlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
            ,(long)plVar1,(long)puVar2,(long)puVar3,param_13,param_14);
  if ((float)param_1 != 0.0) {
    dVar5 = (double)*(float *)(plVar1 + 8);
    dVar4 = clock_gettimesincewithunits((double)plVar1[6],dVar5,*(int *)((long)plVar1 + 0x44));
    plVar1[7] = (long)(dVar4 + (double)plVar1[7]);
    clock_getlogicaltime();
    plVar1[6] = extraout_XMM0_Qa_02;
    parsetimeunits((float)param_1,dVar5,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
                   ,param_9,(float *)(plVar1 + 8),(undefined4 *)((long)plVar1 + 0x44),param_13,
                   param_14);
  }
  return plVar1;
}


