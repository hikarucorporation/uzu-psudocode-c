// Function : my_numbox_set
// Namespace: 
// Entry    : 005a5890
// Prototype: undefined my_numbox_set(float param_1, long param_2)
// Body     : 005a5890 - 005a5908


void my_numbox_set(float param_1,long param_2)

{
  float fVar1;
  double dVar2;
  
  if (param_1 == *(float *)(param_2 + 0x4a0)) {
    return;
  }
  *(float *)(param_2 + 0x4a0) = param_1;
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x35) {
    dVar2 = (double)param_1;
    if (dVar2 < *(double *)(param_2 + 0x4a8)) {
      fVar1 = (float)*(double *)(param_2 + 0x4a8);
      *(float *)(param_2 + 0x4a0) = fVar1;
      dVar2 = (double)fVar1;
    }
    if (*(double *)(param_2 + 0x4b0) < dVar2) {
      *(float *)(param_2 + 0x4a0) = (float)*(double *)(param_2 + 0x4b0);
    }
  }
  sys_queuegui(param_2,*(long *)(param_2 + 0x30),0x5a68b0);
  return;
}


