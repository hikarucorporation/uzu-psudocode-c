// Function : send_float
// Namespace: 
// Entry    : 0054d190
// Prototype: undefined send_float(long param_1)
// Body     : 0054d190 - 0054d1a2


void send_float(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pd_float(plVar1);
  return;
}


