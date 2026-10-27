// Function : else_magic_isnan
// Namespace: 
// Entry    : 00586120
// Prototype: bool else_magic_isnan(uint param_1)
// Body     : 00586120 - 0058613e


bool else_magic_isnan(uint param_1)

{
  return (param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0;
}


