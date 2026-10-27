// Function : canvas_dosettracing
// Namespace: 
// Entry    : 004fd230
// Prototype: undefined canvas_dosettracing(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fd230 - 004fd297


void canvas_dosettracing(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,uint param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar1 = PTR_canvas_class_00715918;
  plVar3 = *(long **)(param_9 + 0x30);
  if (plVar3 != (long *)0x0) {
    do {
      if (*plVar3 == *(long *)puVar1) {
        canvas_dosettracing(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)plVar3,param_10,param_11,param_12,param_13,param_14);
        plVar2 = pd_checkobject(plVar3);
        param_11 = extraout_RDX_00;
        param_1 = extraout_XMM0_Qa_00;
      }
      else {
        plVar2 = pd_checkobject(plVar3);
        param_11 = extraout_RDX;
        param_1 = extraout_XMM0_Qa;
      }
      if (plVar2 != (long *)0x0) {
        param_1 = obj_dosettracing(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   (long)plVar2,(ulong)param_10,param_11,param_12,param_13,param_14)
        ;
        param_11 = extraout_RDX_01;
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  return;
}


