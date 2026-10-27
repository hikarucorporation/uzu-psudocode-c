// Function : click_click
// Namespace: 
// Entry    : 0056a120
// Prototype: undefined click_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9)
// Body     : 0056a120 - 0056a1b5


void click_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long *param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  int local_20 [2];
  undefined4 local_18;
  
  plVar2 = s_canvaslist;
  if (param_9 != (long *)0x0) {
    for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      if ((long *)*plVar2 == param_9) {
        plVar2 = (long *)plVar2[1];
        if (plVar2 != (long *)0x0) {
          do {
            outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long **)(*plVar2 + 0x30));
            plVar2 = (long *)plVar2[1];
            param_1 = extraout_XMM0_Qa;
          } while (plVar2 != (long *)0x0);
          return;
        }
        break;
      }
    }
  }
  local_20[0] = 1;
  local_18 = 0x3f800000;
  puVar1 = gensym("vis");
  pd_typedmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               puVar1,1,local_20,in_R8,in_R9);
  return;
}


