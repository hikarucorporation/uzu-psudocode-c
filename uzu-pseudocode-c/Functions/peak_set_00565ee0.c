// Function : peak_set
// Namespace: 
// Entry    : 00565ee0
// Prototype: ulong peak_set(float param_1, float param_2, long param_3)
// Body     : 00565ee0 - 00565f33


ulong peak_set(float param_1,float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (uint)param_1;
  uVar1 = *(uint *)(param_3 + 0x58);
  uVar4 = uVar2;
  if ((int)uVar2 < (int)uVar1) {
    uVar4 = uVar1;
  }
  uVar3 = 0x400;
  if (0 < (int)uVar2) {
    uVar3 = uVar4;
  }
  *(undefined4 *)(param_3 + 0x40) = 0;
  *(uint *)(param_3 + 0x4c) = uVar3;
  uVar4 = uVar3 >> 1;
  if (0 < (int)param_2) {
    uVar4 = (int)param_2;
  }
  uVar2 = (uVar3 >> 5) + 1;
  if (uVar3 >> 5 < uVar4) {
    uVar2 = uVar4;
  }
  if ((int)uVar2 < (int)uVar1) {
    uVar2 = uVar1;
  }
  *(uint *)(param_3 + 0x44) = uVar2;
  iVar5 = uVar1 - (int)uVar2 % (int)uVar1;
  if ((int)uVar2 % (int)uVar1 == 0) {
    iVar5 = 0;
  }
  *(uint *)(param_3 + 0x48) = iVar5 + uVar2;
  return (long)(int)uVar2 / (long)(int)uVar1 & 0xffffffff;
}


