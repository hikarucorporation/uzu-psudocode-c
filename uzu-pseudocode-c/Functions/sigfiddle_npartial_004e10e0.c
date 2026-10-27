// Function : sigfiddle_npartial
// Namespace: 
// Entry    : 004e10e0
// Prototype: undefined sigfiddle_npartial(float param_1, long param_2)
// Body     : 004e10e0 - 004e10fe


void sigfiddle_npartial(float param_1,long param_2)

{
  if ((double)param_1 < DAT_006524a0) {
    param_1 = DAT_005d9068;
  }
  *(float *)(param_2 + 0x334) = param_1;
  return;
}


