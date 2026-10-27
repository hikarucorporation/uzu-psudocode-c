// Function : my_numbox_log_height
// Namespace: 
// Entry    : 005a5e60
// Prototype: undefined my_numbox_log_height(float param_1, long param_2)
// Body     : 005a5e60 - 005a5ebb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void my_numbox_log_height(float param_1,long param_2)

{
  double dVar1;
  
  if (param_1 <= DAT_0065260c) {
    param_1 = DAT_0065260c;
  }
  *(int *)(param_2 + 0x4e8) = (int)param_1;
  if (*(int *)(param_2 + 0x4c0) == 0) {
    dVar1 = _DAT_005d9000;
  }
  else {
    dVar1 = log(*(double *)(param_2 + 0x4b0) / *(double *)(param_2 + 0x4a8));
    dVar1 = exp(dVar1 / (double)(int)param_1);
  }
  *(double *)(param_2 + 0x4b8) = dVar1;
  return;
}


