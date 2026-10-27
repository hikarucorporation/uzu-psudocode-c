// Function : scale_classic
// Namespace: 
// Entry    : 0055e0d0
// Prototype: undefined scale_classic(float param_1, long param_2)
// Body     : 0055e0d0 - 0055e153


void scale_classic(float param_1,long param_2)

{
  float fVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  *(long *)(param_2 + 0x68) = lVar2;
  fVar1 = *(float *)(param_2 + 0x54);
  if (lVar2 == 1) {
    if (fVar1 < DAT_005d9038) {
      *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
      goto LAB_0055e145;
    }
  }
  else if (fVar1 < 0.0) {
    *(undefined4 *)(param_2 + 0x50) = 0;
    ptrtoscaling = clas_scaling;
    if (lVar2 == 0) {
      ptrtoscaling = exp_scaling;
    }
    return;
  }
  ptrtoscaling = clas_scaling;
  if (lVar2 == 0) {
    ptrtoscaling = exp_scaling;
  }
  *(float *)(param_2 + 0x50) = fVar1;
  if (fVar1 != DAT_005d9038) {
    return;
  }
LAB_0055e145:
  ptrtoscaling = scaling;
  return;
}


