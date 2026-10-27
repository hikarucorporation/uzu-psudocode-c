// Function : hb_font_get_nominal_glyph_default
// Namespace: 
// Entry    : 00412700
// Prototype: undefined hb_font_get_nominal_glyph_default(long param_1, undefined8 param_2, undefined8 param_3, undefined4 * param_4)
// Body     : 00412700 - 00412788


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_nominal_glyph_default(hb_font_t*, void*, unsigned int, unsigned int*, void*) */

void __cdecl
hb_font_get_nominal_glyph_default
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar1;
  long lVar2;
  undefined4 in_EAX;
  undefined8 uVar3;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT44((int)param_3,in_EAX);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x90) + 0x38);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)PTR_hb_font_get_nominal_glyphs_default_00718aa8) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
    }
    (*UNRECOVERED_JUMPTABLE_00)
              (param_1,*(undefined8 *)(param_1 + 0x98),1,(long)&uStack_8 + 4,0,param_4,0,uVar3);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  lVar2 = *(long *)(*(long *)(lVar1 + 0x90) + 0x10);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00412787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,param_4,0,uStack_8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00412761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)
            (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,param_4,*(undefined8 *)(lVar2 + 0x10),
             uStack_8);
  return;
}


