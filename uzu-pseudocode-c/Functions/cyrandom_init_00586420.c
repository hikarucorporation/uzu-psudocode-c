// Function : cyrandom_init
// Namespace: 
// Entry    : 00586420
// Prototype: undefined cyrandom_init(uint * param_1, int param_2)
// Body     : 00586420 - 00586487


void cyrandom_init(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ~(param_2 << 0xf) + param_2;
  uVar1 = (uVar1 >> 10 ^ uVar1) * 9;
  uVar1 = uVar1 >> 6 ^ uVar1;
  uVar1 = ~(uVar1 << 0xb) + uVar1;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar2 = 0x4a1fcf79;
  if (1 < (uVar1 ^ 0x4a1fcf79)) {
    uVar2 = uVar1 ^ 0x4a1fcf79;
  }
  uVar3 = 0xb86271cc;
  if (7 < (uVar1 ^ 0xb86271cc)) {
    uVar3 = uVar1 ^ 0xb86271cc;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar2 = 0x6c986d11;
  if (0xf < (uVar1 ^ 0x6c986d11)) {
    uVar2 = uVar1 ^ 0x6c986d11;
  }
  param_1[2] = uVar2;
  return;
}


