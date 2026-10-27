// Function : sigfiddle_ff
// Namespace: 
// Entry    : 004e1d00
// Prototype: undefined sigfiddle_ff(long param_1)
// Body     : 004e1d00 - 004e1d5c


void sigfiddle_ff(long param_1)

{
  if (*(void **)(param_1 + 0x38) == (void *)0x0) {
    return;
  }
  freebytes(*(void **)(param_1 + 0x38));
  freebytes(*(void **)(param_1 + 0x40));
  freebytes(*(void **)(param_1 + 0x48));
  freebytes(*(void **)(param_1 + 0x50));
  clock_free(*(double **)(param_1 + 0x30));
  return;
}


