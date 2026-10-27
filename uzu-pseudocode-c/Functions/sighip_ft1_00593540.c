// Function : sighip_ft1
// Namespace: 
// Entry    : 00593540
// Prototype: undefined sighip_ft1(float param_1, long param_2)
// Body     : 00593540 - 00593590


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sighip_ft1(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar3 = (double)param_1 * _DAT_0065d800;
  *(float *)(param_2 + 0x34) = param_1;
  fVar1 = (float)(dVar3 / (double)*(float *)(param_2 + 0x30) + _DAT_005d9000);
  *(float *)(param_2 + 0x3c) = fVar1;
  fVar2 = 0.0;
  if ((fVar1 < 0.0) || (fVar2 = DAT_005d9038, DAT_005d9038 < fVar1)) {
    *(float *)(param_2 + 0x3c) = fVar2;
  }
  return;
}


