// Function : gverb_decay
// Namespace: 
// Entry    : 0056d310
// Prototype: undefined gverb_decay(float param_1, long param_2)
// Body     : 0056d310 - 0056d440


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gverb_decay(float param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (DAT_0065b240 <= param_1) {
    param_1 = DAT_0065b240;
  }
  if (param_1 <= DAT_005d908c) {
    param_1 = DAT_005d908c;
  }
  *(float *)(param_2 + 0x50) = param_1;
  fVar5 = exp2f(DAT_0065b244 / ((float)*(int *)(param_2 + 0x30) * param_1));
  *(double *)(param_2 + 0xd0) = (double)fVar5;
  puVar1 = *(uint **)(param_2 + 0x80);
  puVar2 = *(undefined4 **)(param_2 + 0x88);
  puVar3 = *(undefined4 **)(param_2 + 0xa8);
  puVar4 = *(undefined4 **)(param_2 + 0xb0);
  uVar6 = __powisf2(*puVar2);
  *puVar1 = uVar6 ^ _DAT_006524b0;
  uVar7 = __powisf2(fVar5,*puVar3);
  *puVar4 = uVar7;
  uVar6 = __powisf2(fVar5,puVar2[1]);
  puVar1[1] = uVar6 ^ _DAT_006524b0;
  uVar7 = __powisf2(fVar5,puVar3[1]);
  puVar4[1] = uVar7;
  uVar6 = __powisf2(fVar5,puVar2[2]);
  puVar1[2] = uVar6 ^ _DAT_006524b0;
  uVar7 = __powisf2(fVar5,puVar3[2]);
  puVar4[2] = uVar7;
  uVar6 = __powisf2(fVar5,puVar2[3]);
  puVar1[3] = uVar6 ^ _DAT_006524b0;
  uVar7 = __powisf2(fVar5,puVar3[3]);
  puVar4[3] = uVar7;
  return;
}


