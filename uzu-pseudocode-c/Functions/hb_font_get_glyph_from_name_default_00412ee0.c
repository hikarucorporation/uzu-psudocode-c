// Function : hb_font_get_glyph_from_name_default
// Namespace: 
// Entry    : 00412ee0
// Prototype: undefined hb_font_get_glyph_from_name_default(long param_1, undefined8 param_2, char * param_3, size_t param_4, undefined4 * param_5)
// Body     : 00412ee0 - 00412f3f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_glyph_from_name_default(hb_font_t*, void*, char const*, int, unsigned int*, void*) */

void __cdecl
hb_font_get_glyph_from_name_default
          (long param_1,undefined8 param_2,char *param_3,size_t param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_5 = 0;
  if ((int)param_4 == -1) {
    param_4 = strlen(param_3);
  }
  lVar2 = *(long *)(*(long *)(lVar1 + 0x90) + 0x10);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00412f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x90) + 0xa0))
            (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,param_4,param_5,uVar3);
  return;
}


