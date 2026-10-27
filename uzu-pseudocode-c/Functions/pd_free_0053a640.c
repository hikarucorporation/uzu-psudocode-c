// Function : pd_free
// Namespace: 
// Entry    : 0053a640
// Prototype: undefined pd_free(long * param_1)
// Body     : 0053a640 - 0053a6cb


void pd_free(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
    (**(code **)(lVar1 + 0x30))(param_1);
  }
  if ((*(byte *)(lVar1 + 0x94) & 2) != 0) {
    plVar2 = (long *)param_1[3];
    while (plVar2 != (long *)0x0) {
      outlet_free(plVar2);
      plVar2 = (long *)param_1[3];
    }
    while ((void *)param_1[4] != (void *)0x0) {
      inlet_free((void *)param_1[4]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      binbuf_free((void *)param_1[2]);
    }
  }
  if (*(long *)(lVar1 + 0x18) == 0) {
    return;
  }
  freebytes(param_1);
  return;
}


