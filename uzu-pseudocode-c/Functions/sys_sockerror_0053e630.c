// Function : sys_sockerror
// Namespace: 
// Entry    : 0053e630
// Prototype: undefined sys_sockerror(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)
// Body     : 0053e630 - 0053e67b


void sys_sockerror(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  char acStack_408 [1008];
  
  uVar1 = socket_errno();
  uVar2 = socket_strerror(uVar1,acStack_408,1000);
  pd_error(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"%s: %s (%d)",param_9,
           acStack_408,(char *)(ulong)uVar1,in_R9);
  return;
}


