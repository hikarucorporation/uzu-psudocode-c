// Function : zero_perf8
// Namespace: 
// Entry    : 004f59a0
// Prototype: long zero_perf8(long param_1)
// Body     : 004f59a0 - 004f59d4


long zero_perf8(long param_1)

{
  if ((int)*(long *)(param_1 + 0x10) != 0) {
    memset(*(void **)(param_1 + 8),0,
           (*(long *)(param_1 + 0x10) * 4 + 0x3ffffffe0U & 0x3ffffffe0) + 0x20);
  }
  return param_1 + 0x18;
}


