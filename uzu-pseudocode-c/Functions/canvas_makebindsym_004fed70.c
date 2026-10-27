// Function : canvas_makebindsym
// Namespace: 
// Entry    : 004fed70
// Prototype: undefined canvas_makebindsym(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9)
// Body     : 004fed70 - 004fedac


void canvas_makebindsym(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 *param_9)

{
  undefined8 in_R8;
  undefined8 in_R9;
  char acStack_478 [128];
  undefined1 in_stack_fffffffffffffc08;
  
  pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,acStack_478 + 0x80,999
              ,"pd-%s",*param_9,in_R8,in_R9,in_stack_fffffffffffffc08);
  gensym(acStack_478 + 0x80);
  return;
}


