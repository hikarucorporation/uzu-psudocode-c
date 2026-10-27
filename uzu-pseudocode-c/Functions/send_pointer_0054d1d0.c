// Function : send_pointer
// Namespace: 
// Entry    : 0054d1d0
// Prototype: undefined send_pointer(long param_1)
// Body     : 0054d1d0 - 0054d1e2


void send_pointer(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pd_pointer(plVar1);
  return;
}


