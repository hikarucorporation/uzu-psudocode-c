// Function : voutlet_new
// Namespace: 
// Entry    : 0051ae50
// Prototype: long * voutlet_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051ae50 - 0051aea6


long * voutlet_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_voutlet_class_00715fc0,param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8);
  plVar1[6] = (long)plVar2;
  plVar2 = canvas_addoutlet(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,plVar2,plVar1,0,param_12,param_13,param_14);
  plVar1[7] = (long)plVar2;
  inlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
            ,(long)plVar1,0,0,param_13,param_14);
  *(undefined4 *)(plVar1 + 8) = 0;
  plVar1[0xd] = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  return plVar1;
}


