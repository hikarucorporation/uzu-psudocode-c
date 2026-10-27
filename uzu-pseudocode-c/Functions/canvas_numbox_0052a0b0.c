// Function : canvas_numbox
// Namespace: 
// Entry    : 0052a0b0
// Prototype: undefined canvas_numbox(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0052a0b0 - 0052a0cb


void canvas_numbox(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9)

{
  undefined8 *puVar1;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = gensym("nbx");
  canvas_iemguis(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 puVar1);
  return;
}


