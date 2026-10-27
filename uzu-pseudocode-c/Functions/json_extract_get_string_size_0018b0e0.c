// Function : json_extract_get_string_size
// Namespace: 
// Entry    : 0018b0e0
// Prototype: undefined1[16] json_extract_get_string_size(long param_1)
// Body     : 0018b0e0 - 0018b0ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_extract_get_string_size(json_string_s const*) */

undefined1  [16] __cdecl json_extract_get_string_size(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(param_1 + 8) + 1;
  auVar1._0_8_ = 0x10;
  return auVar1;
}


