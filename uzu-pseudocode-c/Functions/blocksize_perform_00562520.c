// Function : blocksize_perform
// Namespace: 
// Entry    : 00562520
// Prototype: long blocksize_perform(long param_1)
// Body     : 00562520 - 0056253c


long blocksize_perform(long param_1)

{
  clock_delay(0.0,*(double **)(*(long *)(param_1 + 8) + 0x30));
  return param_1 + 0x10;
}


