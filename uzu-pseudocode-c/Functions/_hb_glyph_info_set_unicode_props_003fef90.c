// Function : _hb_glyph_info_set_unicode_props
// Namespace: 
// Entry    : 003fef90
// Prototype: undefined _hb_glyph_info_set_unicode_props(uint * param_1, long param_2)
// Body     : 003fef90 - 003ff0e9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_glyph_info_set_unicode_props(hb_glyph_info_t*, hb_buffer_t*) */

void __cdecl _hb_glyph_info_set_unicode_props(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined7 extraout_var;
  uint uVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar5 = *param_1;
  uVar4 = (**(code **)(lVar2 + 0x28))(lVar2,uVar5,*(undefined8 *)(lVar2 + 0x68));
  uVar6 = uVar4;
  if (uVar5 < 0x80) goto LAB_003feffb;
  uVar1 = *(uint *)(param_2 + 0xc0);
  *(uint *)(param_2 + 0xc0) = uVar1 | 1;
  bVar3 = hb_unicode_funcs_t::is_default_ignorable(uVar5);
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    *(uint *)(param_2 + 0xc0) = uVar1 | 3;
    if ((uVar5 - 0x180b < 5) && (uVar5 - 0x180b != 3)) goto LAB_003ff02c;
    if (uVar5 == 0x200d) {
      uVar6 = uVar4 | 0x120;
    }
    else if (uVar5 == 0x200c) {
      uVar6 = uVar4 | 0x220;
    }
    else {
      if (0x5f < uVar5 - 0xe0020) {
        if (uVar5 != 0x34f) {
          uVar6 = uVar4 | 0x20;
          goto LAB_003fefe4;
        }
        *(uint *)(param_2 + 0xc0) = uVar1 | 0x13;
      }
LAB_003ff02c:
      uVar6 = uVar4 | 0x60;
    }
  }
LAB_003fefe4:
  if ((uVar4 < 0x20) && ((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0)) {
    uVar4 = 0xfe00;
    if ((uVar5 != 0x1a60) && (uVar5 != 0xfc6)) {
      if (uVar5 == 0xf39) {
        uVar4 = 0x7f00;
      }
      else {
        uVar5 = (**(code **)(lVar2 + 0x18))(lVar2,uVar5,*(undefined8 *)(lVar2 + 0x58));
        uVar4 = (uint)(byte)_hb_modified_combining_class[uVar5] << 8;
      }
    }
    uVar6 = uVar6 | uVar4 | 0x80;
  }
LAB_003feffb:
  *(short *)(param_1 + 4) = (short)uVar6;
  return;
}


