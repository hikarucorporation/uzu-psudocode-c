// Function : hb_ot_get_font_h_extents
// Namespace: 
// Entry    : 004431a0
// Prototype: ulong hb_ot_get_font_h_extents(long param_1, undefined8 param_2, int * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 004431a0 - 004431fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_font_h_extents(hb_font_t*, void*, hb_font_extents_t*, void*) */

ulong __cdecl
hb_ot_get_font_h_extents
          (long param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = _hb_ot_metrics_get_position_common(param_1,0x68617363,param_3,param_4,param_5);
  uVar2 = 0;
  if ((char)uVar1 != '\0') {
    uVar1 = _hb_ot_metrics_get_position_common(param_1,0x68647363,param_3 + 1,param_4,param_5);
    if ((char)uVar1 != '\0') {
      uVar2 = _hb_ot_metrics_get_position_common(param_1,0x686c6770,param_3 + 2,param_4,param_5);
      uVar2 = uVar2 & 0xff;
    }
  }
  iVar3 = -*(int *)(param_1 + 0x40);
  if (-1 < *(int *)(param_1 + 0x2c)) {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  *param_3 = *param_3 + iVar3;
  return uVar2;
}


