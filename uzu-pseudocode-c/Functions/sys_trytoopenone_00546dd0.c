// Function : sys_trytoopenone
// Namespace: 
// Entry    : 00546dd0
// Prototype: undefined sys_trytoopenone(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, char * param_12, undefined8 * param_13, ulong param_14)
// Body     : 00546dd0 - 00546de5


void sys_trytoopenone(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     char *param_9,char *param_10,char *param_11,char *param_12,undefined8 *param_13
                     ,ulong param_14)

{
  undefined8 in_stack_ffffffffffffffe8;
  
  sys_trytoopenit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,in_stack_ffffffffffffffe8,1);
  return;
}


