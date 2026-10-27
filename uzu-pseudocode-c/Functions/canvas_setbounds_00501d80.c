// Function : canvas_setbounds
// Namespace: 
// Entry    : 00501d80
// Prototype: undefined canvas_setbounds(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00501d80 - 00501d95


void canvas_setbounds(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9)

{
  undefined *in_R9;
  undefined1 in_stack_00000008;
  
  canvas_dosetbounds(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(ulong)(uint)(int)(float)param_1,(ulong)(uint)(int)(float)param_2,
                     (undefined *)(ulong)(uint)(int)(float)param_3,
                     (undefined *)(ulong)(uint)(int)(float)param_4,in_R9,in_stack_00000008);
  return;
}


