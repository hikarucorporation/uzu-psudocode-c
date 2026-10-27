// Function : cyrandom_hash
// Namespace: 
// Entry    : 005863f0
// Prototype: uint cyrandom_hash(int param_1)
// Body     : 005863f0 - 0058641a


uint cyrandom_hash(int param_1)

{
  uint uVar1;
  
  uVar1 = ~(param_1 << 0xf) + param_1;
  uVar1 = (uVar1 >> 10 ^ uVar1) * 9;
  uVar1 = uVar1 >> 6 ^ uVar1;
  uVar1 = ~(uVar1 << 0xb) + uVar1;
  return uVar1 >> 0x10 ^ uVar1;
}


