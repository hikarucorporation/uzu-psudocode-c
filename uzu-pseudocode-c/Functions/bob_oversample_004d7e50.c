// Function : bob_oversample
// Namespace: 
// Entry    : 004d7e50
// Prototype: undefined bob_oversample(float param_1, long param_2)
// Body     : 004d7e50 - 004d7e62


void bob_oversample(float param_1,long param_2)

{
  if (param_1 <= DAT_005d9038) {
    param_1 = DAT_005d9038;
  }
  *(int *)(param_2 + 0xa8) = (int)param_1;
  return;
}


