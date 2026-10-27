// Function : realtime_bang
// Namespace: 
// Entry    : 00581130
// Prototype: undefined realtime_bang(long param_1)
// Body     : 00581130 - 0058113f


void realtime_bang(long param_1)

{
  double dVar1;
  
  dVar1 = sys_getrealtime();
  *(double *)(param_1 + 0x30) = dVar1;
  return;
}


