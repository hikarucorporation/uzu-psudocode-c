// Function : _hb_ft_get_table_tags
// Namespace: 
// Entry    : 0047dd40
// Prototype: ulong _hb_ft_get_table_tags(undefined8 param_1, undefined8 param_2, undefined4 * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 0047dd40 - 0047dd76


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_ft_get_table_tags(hb_face_t const*, unsigned int, unsigned int*, unsigned int*, void*) */

ulong __cdecl
_hb_ft_get_table_tags
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong local_10;
  
  local_10 = 0;
  FT_Sfnt_Table_Info(param_5,0,0,&local_10);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return local_10 & 0xffffffff;
}


