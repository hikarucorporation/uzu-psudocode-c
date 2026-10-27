// Function : gatom_float
// Namespace: 
// Entry    : 0052d0e0
// Prototype: undefined gatom_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0052d0e0 - 0052d111


void gatom_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9)

{
  char *in_R8;
  undefined8 in_R9;
  undefined8 uVar1;
  int local_18 [2];
  undefined4 local_10;
  
  local_10 = (undefined4)param_1;
  local_18[0] = 1;
  uVar1 = gatom_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,1,
                    local_18,in_R8,in_R9);
  gatom_bang(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9);
  return;
}


