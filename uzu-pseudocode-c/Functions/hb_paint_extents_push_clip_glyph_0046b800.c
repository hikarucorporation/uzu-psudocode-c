// Function : hb_paint_extents_push_clip_glyph
// Namespace: 
// Entry    : 0046b800
// Prototype: undefined hb_paint_extents_push_clip_glyph(undefined8 param_1, long param_2, undefined4 param_3, long param_4)
// Body     : 0046b800 - 0046b8d5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_push_clip_glyph(hb_paint_funcs_t*, void*, unsigned int, hb_font_t*, void*) */

void __cdecl
hb_paint_extents_push_clip_glyph(undefined8 param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = _DAT_005de1f0;
  uStack_30 = _UNK_005de1f8;
  while (piVar3 = static_draw_extents_funcs, static_draw_extents_funcs = piVar3,
        piVar3 == (int *)0x0) {
    piVar3 = hb_draw_extents_funcs_lazy_loader_t::create();
    piVar2 = static_draw_extents_funcs;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)&_hb_Null_hb_draw_funcs_t;
      LOCK();
      if (static_draw_extents_funcs == (int *)0x0) {
        static_draw_extents_funcs = (int *)&_hb_Null_hb_draw_funcs_t;
      }
      UNLOCK();
    }
    else {
      LOCK();
      if (static_draw_extents_funcs == (int *)0x0) {
        static_draw_extents_funcs = piVar3;
      }
      UNLOCK();
    }
    if (piVar2 == (int *)0x0) break;
    if ((piVar3 != (int *)0x0) && (piVar3 != (int *)&_hb_Null_hb_draw_funcs_t)) {
      hb_draw_funcs_destroy(piVar3);
    }
  }
  lVar1 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
  }
  (**(code **)(*(long *)(param_4 + 0x90) + 0xa8))
            (param_4,*(undefined8 *)(param_4 + 0x98),param_3,piVar3,&local_38,uVar4);
  hb_paint_extents_context_t::push_clip(local_38,uStack_30,param_2);
  return;
}


