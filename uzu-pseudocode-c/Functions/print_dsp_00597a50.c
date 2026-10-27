// Function : print_dsp
// Namespace: 
// Entry    : 00597a50
// Prototype: undefined print_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 00597a50 - 00597a6f


void print_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 *param_10)

{
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,print_perform,3,param_9,
          *(undefined8 *)((int *)*param_10 + 2),(long)*(int *)*param_10,in_R9,in_stack_00000008);
  return;
}


