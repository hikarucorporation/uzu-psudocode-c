// Function : hb_font_get_font_h_extents_nil
// Namespace: 
// Entry    : 00411f70
// Prototype: undefined8 hb_font_get_font_h_extents_nil(undefined8 param_1, undefined8 param_2, undefined8 * param_3)
// Body     : 00411f70 - 00411f80


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_font_h_extents_nil(hb_font_t*, void*, hb_font_extents_t*, void*) */

undefined8 __cdecl
hb_font_get_font_h_extents_nil(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  return 0;
}


