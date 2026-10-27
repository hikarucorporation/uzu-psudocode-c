// Function : nyquist_perform
// Namespace: 
// Entry    : 00565bf0
// Prototype: long nyquist_perform(long param_1)
// Body     : 00565bf0 - 00565c0c


long nyquist_perform(long param_1)

{
  clock_delay(0.0,*(double **)(*(long *)(param_1 + 8) + 0x30));
  return param_1 + 0x10;
}


