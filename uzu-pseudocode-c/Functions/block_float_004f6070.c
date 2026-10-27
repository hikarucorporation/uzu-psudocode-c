// Function : block_float
// Namespace: 
// Entry    : 004f6070
// Prototype: undefined block_float(float param_1, long param_2)
// Body     : 004f6070 - 004f60ba


void block_float(float param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  
  if (((*(char *)(param_2 + 0x54) == '\0') ||
      (cVar1 = *(char *)(param_2 + 0x55), *(bool *)(param_2 + 0x55) = param_1 != 0.0, cVar1 != '\0')
      ) || (*(char *)(param_2 + 0x56) == '\0')) {
    return;
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(uint *)(param_2 + 0x38) =
       *(int *)(param_2 + 0x3c) - 1U & *(uint *)(*(long *)(*plVar2 + 0x40) + 0x130);
  return;
}


