// Function : bonk_attackbins
// Namespace: 
// Entry    : 004da830
// Prototype: undefined bonk_attackbins(float param_1, long param_2)
// Body     : 004da830 - 004da85b


void bonk_attackbins(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = DAT_005d9038;
  if ((DAT_005d9038 <= param_1) && (fVar1 = param_1, DAT_00651f38 < param_1)) {
    fVar1 = DAT_00651f38;
  }
  *(int *)(param_2 + 0x90) = (int)fVar1;
  return;
}


