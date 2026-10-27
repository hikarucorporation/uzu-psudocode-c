// Function : send_bang
// Namespace: 
// Entry    : 0054d170
// Prototype: undefined send_bang(long param_1)
// Body     : 0054d170 - 0054d182


void send_bang(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  pd_bang(plVar1);
  return;
}


