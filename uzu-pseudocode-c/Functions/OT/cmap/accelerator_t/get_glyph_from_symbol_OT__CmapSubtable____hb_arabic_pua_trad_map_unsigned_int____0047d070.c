// Function : get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047d070
// Prototype: byte get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>(CmapSubtable * param_1, uint param_2, uint * param_3)
// Body     : 0047d070 - 0047d0c1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &(_hb_arabic_pua_trad_map(unsigned int))>(void const*, unsigned int, unsigned int*) */

byte __cdecl
OT::cmap::accelerator_t::
get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>
          (CmapSubtable *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined6 extraout_var;
  byte bVar4;
  uint uVar5;
  
  uVar3 = CmapSubtable::get_glyph(param_1,param_2,param_3);
  bVar4 = (byte)uVar3;
  bVar1 = 1;
  if (bVar4 == 0) {
    uVar2 = _hb_arabic_pua_trad_map(param_2);
    uVar5 = (uint)CONCAT62(extraout_var,uVar2);
    if (CONCAT62(extraout_var,uVar2) != 0) {
      uVar3 = CmapSubtable::get_glyph(param_1,uVar5,param_3);
      bVar4 = (byte)uVar3;
    }
    bVar1 = uVar5 != 0 & bVar4;
  }
  return bVar1;
}


