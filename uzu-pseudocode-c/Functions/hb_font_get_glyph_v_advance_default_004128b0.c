// Function : hb_font_get_glyph_v_advance_default
// Namespace: 
// Entry    : 004128b0
// Prototype: ulong hb_font_get_glyph_v_advance_default(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 004128b0 - 0041298c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_glyph_v_advance_default(hb_font_t*, void*, unsigned int, void*) */

ulong __cdecl
hb_font_get_glyph_v_advance_default(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint local_10;
  undefined4 local_c;
  
  local_c = (undefined4)param_3;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x90) + 0x60);
  if (pcVar2 != (code *)PTR_hb_font_get_glyph_v_advances_default_00718ad0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
    }
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_c,0,&local_10,0,uVar5);
    return (ulong)local_10;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  pcVar2 = *(code **)(*(long *)(lVar3 + 0x90) + 0x50);
  if (*(long *)(*(long *)(lVar3 + 0x90) + 0x10) == 0) {
    uVar4 = (*pcVar2)(lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,0);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar4 = (*pcVar2)();
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x2c);
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


