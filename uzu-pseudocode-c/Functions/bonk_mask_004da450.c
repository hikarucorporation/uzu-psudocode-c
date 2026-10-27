// Function : bonk_mask
// Namespace: 
// Entry    : 004da450
// Prototype: undefined bonk_mask(float param_1, float param_2, long param_3)
// Body     : 004da450 - 004da47f


void bonk_mask(float param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, DAT_005d9038 < param_2)) {
    fVar2 = DAT_005d9038;
  }
  iVar1 = 0;
  if (-1 < (int)param_1) {
    iVar1 = (int)param_1;
  }
  *(int *)(param_3 + 0x74) = iVar1;
  *(float *)(param_3 + 0x70) = fVar2;
  return;
}


