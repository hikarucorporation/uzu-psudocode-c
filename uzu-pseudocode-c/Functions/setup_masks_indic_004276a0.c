// Function : setup_masks_indic
// Namespace: 
// Entry    : 004276a0
// Prototype: undefined setup_masks_indic(undefined8 param_1, long param_2)
// Body     : 004276a0 - 004276ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_masks_indic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl setup_masks_indic(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  long lVar4;
  
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0xc0;
  uVar1 = *(uint *)(param_2 + 0x60);
  if ((ulong)uVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    lVar4 = 0;
    do {
      uVar3 = hb_indic_get_categories(*(uint *)(lVar2 + lVar4));
      *(undefined2 *)(lVar2 + 0x12 + lVar4) = uVar3;
      lVar4 = lVar4 + 0x14;
    } while ((ulong)uVar1 * 0x14 != lVar4);
  }
  return;
}


