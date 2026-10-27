// Function : line_stop
// Namespace: 
// Entry    : 0055c5c0
// Prototype: undefined line_stop(long param_1)
// Body     : 0055c5c0 - 0055c645


void line_stop(long param_1)

{
  double dVar1;
  float fVar2;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x30) {
    fVar2 = *(float *)(param_1 + 0x50);
  }
  else {
    clock_getlogicaltime();
    if (*(double *)(param_1 + 0x38) <= extraout_XMM0_Qa) {
      fVar2 = *(float *)(param_1 + 0x40);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x60);
      clock_getlogicaltime();
      fVar2 = (float)((double)*(float *)(param_1 + 0x50) +
                     (double)(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x50)) *
                     (extraout_XMM0_Qa_00 - *(double *)(param_1 + 0x48)) * dVar1);
    }
    *(float *)(param_1 + 0x50) = fVar2;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  clock_unset(*(double **)(param_1 + 0x30));
  return;
}


