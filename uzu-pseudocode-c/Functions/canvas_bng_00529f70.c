// Function : canvas_bng
// Namespace: 
// Entry    : 00529f70
// Prototype: undefined canvas_bng(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00529f70 - 00529f8b


void canvas_bng(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  undefined8 *puVar1;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = gensym("bng");
  canvas_iemguis(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 puVar1);
  return;
}


