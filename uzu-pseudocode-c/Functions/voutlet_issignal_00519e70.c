// Function : voutlet_issignal
// Namespace: 
// Entry    : 00519e70
// Prototype: bool voutlet_issignal(long param_1)
// Body     : 00519e70 - 00519e7a


bool voutlet_issignal(long param_1)

{
  return *(long *)(param_1 + 0x68) != 0;
}


