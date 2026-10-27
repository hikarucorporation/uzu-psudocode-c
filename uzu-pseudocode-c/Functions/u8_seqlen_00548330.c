// Function : u8_seqlen
// Namespace: 
// Entry    : 00548330
// Prototype: int u8_seqlen(byte * param_1)
// Body     : 00548330 - 00548341


int u8_seqlen(byte *param_1)

{
  return (char)trailingBytesForUTF8[*param_1] + 1;
}


