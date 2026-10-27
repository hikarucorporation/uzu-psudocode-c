// Function : canvas_vdial
// Namespace: 
// Entry    : 0052a010
// Prototype: undefined canvas_vdial(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0052a010 - 0052a02b


void canvas_vdial(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9)

{
  undefined8 *puVar1;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = gensym("vdl");
  canvas_iemguis(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 puVar1);
  return;
}


