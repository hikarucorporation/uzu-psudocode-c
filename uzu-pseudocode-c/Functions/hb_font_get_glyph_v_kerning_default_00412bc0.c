// Function : hb_font_get_glyph_v_kerning_default
// Namespace: 
// Entry    : 00412bc0
// Prototype: undefined hb_font_get_glyph_v_kerning_default(hb_font_t * param_1, void * param_2, uint param_3, uint param_4, void * param_5)
// Body     : 00412bc0 - 00412c4b


/* hb_font_get_glyph_v_kerning_default(hb_font_t*, void*, unsigned int, unsigned int, void*) */

ulong hb_font_get_glyph_v_kerning_default
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  pcVar3 = *(code **)(*(long *)(lVar2 + 0x90) + 0x80);
  if (*(long *)(*(long *)(lVar2 + 0x90) + 0x10) == 0) {
    uVar4 = (*pcVar3)(lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,0);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar4 = (*pcVar3)();
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x2c);
    if (uVar1 != *(uint *)(param_1 + 0x2c)) {
      uVar4 = (long)(int)*(uint *)(param_1 + 0x2c) * (long)(int)uVar4;
      if ((uVar4 | (long)(int)uVar1) >> 0x20 == 0) {
        return (uVar4 & 0xffffffff) / (ulong)uVar1;
      }
      return (long)uVar4 / (long)(int)uVar1;
    }
  }
  return uVar4;
}


