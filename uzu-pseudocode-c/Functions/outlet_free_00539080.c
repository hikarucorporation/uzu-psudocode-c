// Function : outlet_free
// Namespace: 
// Entry    : 00539080
// Prototype: undefined outlet_free(long * param_1)
// Body     : 00539080 - 005390bb


void outlet_free(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(*param_1 + 0x18);
  if (plVar1 == param_1) {
    plVar2 = (long *)(*param_1 + 0x18);
  }
  else {
    do {
      plVar2 = plVar1;
      if (plVar2 == (long *)0x0) goto LAB_005390b2;
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != param_1);
    plVar2 = plVar2 + 1;
  }
  *plVar2 = param_1[1];
LAB_005390b2:
  freebytes(param_1);
  return;
}


