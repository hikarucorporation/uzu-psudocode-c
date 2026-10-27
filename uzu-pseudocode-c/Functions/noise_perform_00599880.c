// Function : noise_perform
// Namespace: 
// Entry    : 00599880
// Prototype: long noise_perform(long param_1, uint param_2)
// Body     : 00599880 - 0059995e


long noise_perform(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar6 = *puVar1;
  if (uVar4 == 0) {
    *puVar1 = uVar6;
    return param_1 + 0x20;
  }
  pfVar5 = *(float **)(param_1 + 8);
  uVar2 = uVar4;
  fVar3 = DAT_0065da14;
  if ((uVar4 & 1) != 0) {
    *pfVar5 = (float)(int)((uVar6 & 0x7fffffff) + 0xc0000000) * DAT_0065da14;
    pfVar5 = pfVar5 + 1;
    uVar6 = uVar6 * 0x19fb4787 + 0x16d1b86b;
    param_2 = uVar6;
    uVar2 = uVar4 - 1;
    fVar3 = DAT_0065da14;
  }
  DAT_0065da14 = fVar3;
  if (uVar4 != 1) {
    lVar7 = 0;
    param_2 = uVar6;
    do {
      pfVar5[lVar7] = (float)(int)((param_2 & 0x7fffffff) + 0xc0000000) * fVar3;
      uVar4 = param_2 * 0x19fb4787 + 0x16d1b86b;
      pfVar5[lVar7 + 1] = (float)(int)((uVar4 & 0x7fffffff) + 0xc0000000) * fVar3;
      param_2 = uVar4 * 0x19fb4787 + 0x16d1b86b;
      lVar7 = lVar7 + 2;
    } while (uVar2 != (uint)lVar7);
  }
  *puVar1 = param_2;
  return param_1 + 0x20;
}


