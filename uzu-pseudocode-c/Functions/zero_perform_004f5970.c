// Function : zero_perform
// Namespace: 
// Entry    : 004f5970
// Prototype: long zero_perform(long param_1)
// Body     : 004f5970 - 004f5995


long zero_perform(long param_1)

{
  if ((int)*(ulong *)(param_1 + 0x10) != 0) {
    memset(*(void **)(param_1 + 8),0,(*(ulong *)(param_1 + 0x10) & 0xffffffff) << 2);
  }
  return param_1 + 0x18;
}


