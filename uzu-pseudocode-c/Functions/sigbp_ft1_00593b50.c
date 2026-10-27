// Function : sigbp_ft1
// Namespace: 
// Entry    : 00593b50
// Prototype: undefined sigbp_ft1(float param_1, long param_2)
// Body     : 00593b50 - 00593c40


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigbp_ft1(float param_1,long param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  dVar1 = DAT_00651e50;
  if ((double)param_1 < DAT_00651e50) {
    param_1 = DAT_0065260c;
  }
  fVar5 = 0.0;
  fVar4 = *(float *)(param_2 + 0x38);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_2 + 0x34) = param_1;
  *(float *)(param_2 + 0x38) = fVar4;
  fVar2 = (param_1 * DAT_0065d81c) / *(float *)(param_2 + 0x30);
  fVar3 = DAT_005d9038;
  if (dVar1 <= (double)fVar4) {
    fVar3 = fVar2 / fVar4;
  }
  if (DAT_005d9038 <= fVar3) {
    fVar3 = DAT_005d9038;
  }
  fVar4 = DAT_005d9038 - fVar3;
  if ((_DAT_0065d80c <= fVar2) && (fVar2 <= _DAT_0065d810)) {
    fVar5 = fVar2 * fVar2;
    fVar5 = (float)((double)fVar5 * DAT_00652be8 + _DAT_005d9000 +
                   (double)((fVar5 * _DAT_0065d814 + _DAT_0065d818) * fVar5 * fVar5));
    fVar5 = fVar5 + fVar5;
  }
  *(float *)(param_2 + 0x44) = fVar5 * fVar4;
  *(float *)(param_2 + 0x48) = (float)(_DAT_006524b0 ^ (uint)fVar4) * fVar4;
  fVar4 = fVar2 * fVar4 + fVar3;
  *(float *)(param_2 + 0x4c) = (fVar4 + fVar4) * fVar3;
  return;
}


