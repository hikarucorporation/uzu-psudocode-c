// Function : cputime_new
// Namespace: 
// Entry    : 00580fd0
// Prototype: long * cputime_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00580fd0 - 00581039


long * cputime_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,cputime_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar2 = gensym("float");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             (long)puVar2,extraout_RDX,param_12,param_13,param_14);
  puVar2 = gensym("bang");
  puVar3 = gensym("bang2");
  inlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
            ,(long)plVar1,(long)puVar2,(long)puVar3,param_13,param_14);
  times((tms *)(plVar1 + 6));
  return plVar1;
}


