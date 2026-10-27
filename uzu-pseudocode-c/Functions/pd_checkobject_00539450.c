// Function : pd_checkobject
// Namespace: 
// Entry    : 00539450
// Prototype: long * pd_checkobject(long * param_1)
// Body     : 00539450 - 00539460


long * pd_checkobject(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if ((*(byte *)(*param_1 + 0x94) & 2) != 0) {
    plVar1 = param_1;
  }
  return plVar1;
}


