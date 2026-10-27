// Function : hb_font_get_glyph_name_default
// Namespace: 
// Entry    : 00412ea0
// Prototype: undefined hb_font_get_glyph_name_default(long param_1, undefined8 param_2, undefined8 param_3, undefined1 * param_4, int param_5)
// Body     : 00412ea0 - 00412ed6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_glyph_name_default(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */

void __cdecl
hb_font_get_glyph_name_default
          (long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,int param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (param_5 != 0) {
    *param_4 = 0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x98);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00412ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00412ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}


