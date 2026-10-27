// Function : get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047d0e0
// Prototype: byte get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>(CmapSubtable * param_1, uint param_2, uint * param_3)
// Body     : 0047d0e0 - 0047d129


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &OT::_hb_symbol_pua_map>(void const*, unsigned int, unsigned int*) */

byte __cdecl
OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>
          (CmapSubtable *param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = CmapSubtable::get_glyph(param_1,param_2,param_3);
  bVar2 = 1;
  if ((char)uVar1 == '\0') {
    bVar2 = 0;
    if (param_2 < 0x100) {
      uVar1 = CmapSubtable::get_glyph(param_1,param_2 + 0xf000,param_3);
      bVar2 = (byte)uVar1;
    }
    bVar2 = param_2 < 0x100 & bVar2;
  }
  return bVar2;
}


