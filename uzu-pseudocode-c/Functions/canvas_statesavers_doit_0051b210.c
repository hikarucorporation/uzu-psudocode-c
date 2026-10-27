// Function : canvas_statesavers_doit
// Namespace: 
// Entry    : 0051b210
// Prototype: undefined canvas_statesavers_doit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 0051b210 - 0051b27d


void canvas_statesavers_doit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar2 = PTR_canvas_class_00715918;
  for (plVar1 = *(long **)(param_9 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if (*plVar1 == savestate_class) {
      plVar1[8] = param_10;
      outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)plVar1[7])
      ;
      plVar1[8] = 0;
      param_1 = extraout_XMM0_Qa;
    }
    else if ((*plVar1 == *(long *)puVar2) &&
            (bVar3 = canvas_isabstraction((long)plVar1), param_1 = extraout_XMM0_Qa_00,
            (int)CONCAT71(extraout_var,bVar3) == 0)) {
      param_1 = canvas_statesavers_doit
                          (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,(long)plVar1,param_10);
    }
  }
  return;
}


