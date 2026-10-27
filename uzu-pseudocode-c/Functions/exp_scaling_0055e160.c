// Function : exp_scaling
// Namespace: 
// Entry    : 0055e160
// Prototype: undefined8 exp_scaling(float param_1, long param_2)
// Body     : 0055e160 - 0055e221


undefined8 exp_scaling(float param_1,long param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = *(float *)(param_2 + 0x40);
  fVar3 = *(float *)(param_2 + 0x44) - fVar1;
  fVar4 = (param_1 - fVar1) / fVar3;
  if (fVar4 == 0.0) {
    return CONCAT44((int)((ulong)(double)*(float *)(param_2 + 0x48) >> 0x20),
                    *(float *)(param_2 + 0x48));
  }
  dVar6 = (double)*(float *)(param_2 + 0x48);
  dVar5 = (double)(*(float *)(param_2 + 0x4c) - *(float *)(param_2 + 0x48));
  if (0.0 < fVar4) {
    dVar2 = pow((double)fVar4,(double)*(float *)(param_2 + 0x50));
    dVar6 = dVar2 * dVar5 + dVar6;
    return CONCAT44((int)((ulong)dVar6 >> 0x20),(float)dVar6);
  }
  dVar2 = pow((double)((fVar1 - param_1) / fVar3),(double)*(float *)(param_2 + 0x50));
  dVar6 = dVar6 - dVar2 * dVar5;
  return CONCAT44((int)((ulong)dVar6 >> 0x20),(float)dVar6);
}


