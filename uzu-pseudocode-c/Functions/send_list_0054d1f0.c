// Function : send_list
// Namespace: 
// Entry    : 0054d1f0
// Prototype: undefined send_list(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
// Body     : 0054d1f0 - 0054d202


void send_list(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pd_list(plVar1,param_2,param_3,param_4);
  return;
}


