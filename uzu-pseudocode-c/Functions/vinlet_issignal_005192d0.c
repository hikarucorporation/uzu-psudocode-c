// Function : vinlet_issignal
// Namespace: 
// Entry    : 005192d0
// Prototype: bool vinlet_issignal(long param_1)
// Body     : 005192d0 - 005192da


bool vinlet_issignal(long param_1)

{
  return *(long *)(param_1 + 0x70) != 0;
}


