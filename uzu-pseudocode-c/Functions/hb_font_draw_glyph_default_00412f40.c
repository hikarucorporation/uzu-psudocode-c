// Function : hb_font_draw_glyph_default
// Namespace: 
// Entry    : 00412f40
// Prototype: undefined hb_font_draw_glyph_default(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 00412f40 - 00413008


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_draw_glyph_default(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */

void __cdecl
hb_font_draw_glyph_default
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x28) == 0) {
    local_10 = 0.0;
    iVar1 = *(int *)(lVar2 + 0x2c);
  }
  else {
    local_10 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar2 + 0x28);
    iVar1 = *(int *)(lVar2 + 0x2c);
  }
  if (iVar1 == 0) {
    local_c = 0.0;
    local_8 = 0.0;
  }
  else {
    local_c = (float)*(int *)(param_1 + 0x2c) / (float)iVar1;
    local_8 = ((float)*(int *)(param_1 + 0x28) *
              (*(float *)(param_1 + 0x44) - *(float *)(lVar2 + 0x44))) / (float)iVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x88);
  }
  local_20 = param_4;
  local_18 = param_5;
  (**(code **)(*(long *)(lVar2 + 0x90) + 0xa8))
            (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,_hb_draw_funcs_default,&local_20,uVar4);
  return;
}


