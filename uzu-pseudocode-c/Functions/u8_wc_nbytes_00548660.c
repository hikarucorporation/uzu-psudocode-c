// Function : u8_wc_nbytes
// Namespace: 
// Entry    : 00548660
// Prototype: long u8_wc_nbytes(uint param_1)
// Body     : 00548660 - 00548695


long u8_wc_nbytes(uint param_1)

{
  long lVar1;
  
  lVar1 = 1;
  if (((0x7f < param_1) && (lVar1 = 2, 0x7ff < param_1)) && (lVar1 = 3, 0xffff < param_1)) {
    lVar1 = (ulong)(param_1 < 0x200000) << 2;
  }
  return lVar1;
}


