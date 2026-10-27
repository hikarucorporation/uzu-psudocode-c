// Function : send_symbol
// Namespace: 
// Entry    : 0054d1b0
// Prototype: undefined send_symbol(long param_1)
// Body     : 0054d1b0 - 0054d1c2


void send_symbol(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pd_symbol(plVar1);
  return;
}


