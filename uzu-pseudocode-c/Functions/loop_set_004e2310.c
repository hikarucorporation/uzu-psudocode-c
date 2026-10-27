// Function : loop_set
// Namespace: 
// Entry    : 004e2310
// Prototype: undefined loop_set(float param_1, long param_2)
// Body     : 004e2310 - 004e2352


void loop_set(float param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 <= DAT_005d9038) {
    dVar1 = (double)param_1;
  }
  if (0.0 <= param_1) {
    *(double *)(param_2 + 0x38) = dVar1;
    *(undefined4 *)(param_2 + 0x48) = 1;
    return;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x48) = 1;
  return;
}


