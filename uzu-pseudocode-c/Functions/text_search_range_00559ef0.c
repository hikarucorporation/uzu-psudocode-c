// Function : text_search_range
// Namespace: 
// Entry    : 00559ef0
// Prototype: undefined text_search_range(float param_1, float param_2, long param_3)
// Body     : 00559ef0 - 00559f3e


void text_search_range(float param_1,float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = DAT_0065a050;
  fVar2 = DAT_00653434;
  bVar1 = DAT_00653434 <= param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(int *)(param_3 + 0x6c) =
       (int)(float)(-(uint)bVar1 & DAT_0065a050 | ~-(uint)bVar1 & (uint)param_1);
  fVar4 = 0.0;
  if (0.0 <= param_2) {
    fVar4 = param_2;
  }
  *(int *)(param_3 + 0x70) =
       (int)(float)(-(uint)(fVar2 <= param_2) & uVar3 | ~-(uint)(fVar2 <= param_2) & (uint)fVar4);
  return;
}


