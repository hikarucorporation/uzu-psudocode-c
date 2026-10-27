// Function : netsend_timeout
// Namespace: 
// Entry    : 00581d20
// Prototype: undefined netsend_timeout(float param_1, long param_2)
// Body     : 00581d20 - 00581d40


void netsend_timeout(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    *(float *)(param_2 + 0xe0) = (float)((double)param_1 * DAT_00651e50);
  }
  return;
}


