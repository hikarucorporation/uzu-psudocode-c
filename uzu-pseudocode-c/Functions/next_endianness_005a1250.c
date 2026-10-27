// Function : next_endianness
// Namespace: 
// Entry    : 005a1250
// Prototype: ulong next_endianness(uint param_1)
// Body     : 005a1250 - 005a125c


ulong next_endianness(uint param_1)

{
  ulong uVar1;
  
  if (param_1 == 0xffffffff) {
    uVar1 = sys_isbigendian();
    return uVar1;
  }
  return (ulong)param_1;
}


