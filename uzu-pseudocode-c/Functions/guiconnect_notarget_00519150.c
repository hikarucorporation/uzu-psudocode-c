// Function : guiconnect_notarget
// Namespace: 
// Entry    : 00519150
// Prototype: undefined guiconnect_notarget(double param_1, long * param_2)
// Body     : 00519150 - 005191af


void guiconnect_notarget(double param_1,long *param_2)

{
  double *pdVar1;
  
  if (param_2[7] == 0) {
    pd_free(param_2);
    return;
  }
  param_2[6] = 0;
  if (0.0 < param_1) {
    pdVar1 = (double *)clock_new(param_2,guiconnect_tick);
    param_2[8] = (long)pdVar1;
    clock_delay(param_1,pdVar1);
    return;
  }
  return;
}


