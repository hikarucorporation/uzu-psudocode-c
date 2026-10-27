// Function : cyrandom_frand
// Namespace: 
// Entry    : 00586380
// Prototype: float cyrandom_frand(uint * param_1, uint * param_2, uint * param_3)
// Body     : 00586380 - 005863e0


float cyrandom_frand(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = (uVar1 << 0xd ^ uVar1) >> 0x13 | (uVar1 & 0xfffffffe) << 0xc;
  uVar1 = *param_2;
  *param_2 = (uVar1 * 4 ^ uVar1) >> 0x19 | (uVar1 & 0xffffff8) << 4;
  uVar1 = *param_3;
  uVar1 = (uVar1 * 8 ^ uVar1) >> 0xb | (uVar1 & 0xfffffff0) << 0x11;
  *param_3 = uVar1;
  return (float)((*param_2 ^ *param_1 ^ uVar1) >> 9 | 0x40000000) + DAT_00652610;
}


