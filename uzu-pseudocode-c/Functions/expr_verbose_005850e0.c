// Function : expr_verbose
// Namespace: 
// Entry    : 005850e0
// Prototype: undefined expr_verbose(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005850e0 - 00585108


void expr_verbose(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  char *pcVar1;
  
  pcVar1 = "verbose off";
  if ((*(uint *)(param_9 + 0x30) & 0x10) == 0) {
    pcVar1 = "verbose on";
  }
  *(uint *)(param_9 + 0x30) = *(uint *)(param_9 + 0x30) ^ 0x10;
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar1);
  return;
}


