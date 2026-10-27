// Function : hb_font_get_nominal_glyphs_default
// Namespace: 
// Entry    : 00411fc0
// Prototype: ulong hb_font_get_nominal_glyphs_default(long param_1, undefined8 param_2, ulong param_3, undefined4 * param_4, ulong param_5, undefined4 * param_6, uint param_7)
// Body     : 00411fc0 - 004120af


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_nominal_glyphs_default(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned
   int, unsigned int*, unsigned int, void*) */

ulong __cdecl
hb_font_get_nominal_glyphs_default
          (long param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,ulong param_5,
          undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (*(undefined **)(lVar4 + 0x30) == PTR_hb_font_get_nominal_glyph_default_00718aa0) {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
    }
    uVar5 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x38))
                      (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,param_5,param_6,param_7,
                       uVar6);
  }
  else {
    if ((int)param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      while( true ) {
        uVar1 = *param_4;
        *param_6 = 0;
        if (*(long *)(lVar4 + 0x10) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
        }
        iVar3 = (**(code **)(lVar4 + 0x30))
                          (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,uVar6);
        if (iVar3 == 0) goto LAB_0041208d;
        if ((int)param_3 + -1 == (int)uVar5) break;
        param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
        param_4 = (undefined4 *)((long)param_4 + (param_5 & 0xffffffff));
        lVar4 = *(long *)(param_1 + 0x90);
        uVar5 = (ulong)((int)uVar5 + 1);
      }
      uVar5 = param_3;
    }
LAB_0041208d:
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}


