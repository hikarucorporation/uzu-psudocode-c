// Function : aiff_endianness
// Namespace: 
// Entry    : 005a0830
// Prototype: bool aiff_endianness(int param_1, uint param_2)
// Body     : 005a0830 - 005a083d


bool aiff_endianness(int param_1,uint param_2)

{
  return (param_2 & 0xfffffffe) != 2 || param_1 != 0;
}


