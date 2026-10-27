// Function : canvas_saved
// Namespace: 
// Entry    : 0051b280
// Prototype: undefined canvas_saved(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051b280 - 0051b301


void canvas_saved(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

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
      outlet_list(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)plVar1[6],
                  0,param_11,param_12,param_13,param_14);
      param_1 = extraout_XMM0_Qa;
    }
    else if ((*plVar1 == *(long *)puVar2) &&
            (bVar3 = canvas_isabstraction((long)plVar1), param_1 = extraout_XMM0_Qa_00,
            (int)CONCAT71(extraout_var,bVar3) == 0)) {
      param_1 = canvas_saved(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(long)plVar1,param_10,param_11,param_12,param_13,param_14);
    }
  }
  return;
}


