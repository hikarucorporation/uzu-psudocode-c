// Function : hb_font_get_variation_glyph_default
// Namespace: 
// Entry    : 00412790
// Prototype: undefined hb_font_get_variation_glyph_default(long param_1)
// Body     : 00412790 - 004127c2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_variation_glyph_default(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*,
   void*) */

void __cdecl hb_font_get_variation_glyph_default(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *in_R8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *in_R8 = 0;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x40);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004127c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004127ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}


