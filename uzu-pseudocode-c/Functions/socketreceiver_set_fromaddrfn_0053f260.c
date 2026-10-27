// Function : socketreceiver_set_fromaddrfn
// Namespace: 
// Entry    : 0053f260
// Prototype: undefined socketreceiver_set_fromaddrfn(long param_1, long param_2)
// Body     : 0053f260 - 0053f29b


void socketreceiver_set_fromaddrfn(long param_1,long param_2)

{
  void *pvVar1;
  
  *(long *)(param_1 + 0x38) = param_2;
  pvVar1 = *(void **)(param_1 + 0x20);
  if (param_2 == 0) {
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  else if (pvVar1 == (void *)0x0) {
    pvVar1 = malloc(0x80);
    *(void **)(param_1 + 0x20) = pvVar1;
    return;
  }
  return;
}


