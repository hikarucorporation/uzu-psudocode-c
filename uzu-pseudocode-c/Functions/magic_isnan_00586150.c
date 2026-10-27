// Function : magic_isnan
// Namespace: 
// Entry    : 00586150
// Prototype: bool magic_isnan(uint param_1)
// Body     : 00586150 - 0058616e


bool magic_isnan(uint param_1)

{
  return (param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0;
}


