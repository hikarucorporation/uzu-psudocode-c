// Function : swap4s
// Namespace: 
// Entry    : 00599f70
// Prototype: uint swap4s(uint param_1, int param_2)
// Body     : 00599f70 - 00599f79


uint swap4s(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  if (param_2 == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


