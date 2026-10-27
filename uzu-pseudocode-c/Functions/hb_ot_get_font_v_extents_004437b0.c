// Function : hb_ot_get_font_v_extents
// Namespace: 
// Entry    : 004437b0
// Prototype: ulong hb_ot_get_font_v_extents(long param_1, undefined8 param_2, int * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 004437b0 - 004437fc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_font_v_extents(hb_font_t*, void*, hb_font_extents_t*, void*) */

ulong __cdecl
hb_ot_get_font_v_extents
          (long param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = _hb_ot_metrics_get_position_common(param_1,0x76617363,param_3,param_4,param_5);
  uVar2 = 0;
  if ((char)uVar1 != '\0') {
    uVar1 = _hb_ot_metrics_get_position_common(param_1,0x76647363,param_3 + 1,param_4,param_5);
    if ((char)uVar1 != '\0') {
      uVar2 = _hb_ot_metrics_get_position_common(param_1,0x766c6770,param_3 + 2,param_4,param_5);
      uVar2 = uVar2 & 0xff;
    }
  }
  return uVar2;
}


