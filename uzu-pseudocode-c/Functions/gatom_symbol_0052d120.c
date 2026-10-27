// Function : gatom_symbol
// Namespace: 
// Entry    : 0052d120
// Prototype: undefined gatom_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052d120 - 0052d150


void gatom_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  int local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 2;
  local_10 = param_10;
  uVar1 = gatom_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,1,
                    local_18,param_13,param_14);
  gatom_bang(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9);
  return;
}


