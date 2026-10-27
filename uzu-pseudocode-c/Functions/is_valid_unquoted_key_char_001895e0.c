// Function : is_valid_unquoted_key_char
// Namespace: 
// Entry    : 001895e0
// Prototype: bool is_valid_unquoted_key_char(byte param_1)
// Body     : 001895e0 - 00189604


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* is_valid_unquoted_key_char(char) */

bool __cdecl is_valid_unquoted_key_char(byte param_1)

{
  return (param_1 == 0x5f || (byte)(param_1 - 0x30) < 10) || (byte)((param_1 & 0xdf) + 0xbf) < 0x1a;
}


