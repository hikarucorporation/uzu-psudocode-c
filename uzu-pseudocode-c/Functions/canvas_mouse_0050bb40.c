// Function : canvas_mouse
// Namespace: 
// Entry    : 0050bb40
// Prototype: undefined canvas_mouse(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0050bb40 - 0050bb53


void canvas_mouse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9)

{
  uint *in_R9;
  undefined1 in_stack_00000008;
  
  canvas_doclick(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 (ulong)(uint)(int)(float)param_1,(ulong)(uint)(int)(float)param_2,
                 (ulong)(uint)(int)(float)param_4,(int *)0x1,in_R9,in_stack_00000008);
  return;
}


