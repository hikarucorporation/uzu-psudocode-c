// Function : swap8
// Namespace: 
// Entry    : 00599f40
// Prototype: ulong swap8(ulong param_1, int param_2)
// Body     : 00599f40 - 00599f4c


ulong swap8(ulong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
          (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
          (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 |
          param_1 << 0x38;
  if (param_2 == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


