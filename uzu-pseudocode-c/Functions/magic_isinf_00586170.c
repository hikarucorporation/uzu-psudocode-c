// Function : magic_isinf
// Namespace: 
// Entry    : 00586170
// Prototype: bool magic_isinf(uint param_1)
// Body     : 00586170 - 00586185


bool magic_isinf(uint param_1)

{
  return (param_1 & 0x7fffffff) == 0x7f800000;
}


