// Function : get_glyph_from_ascii<OT::CmapSubtable>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047d1b0
// Prototype: ulong get_glyph_from_ascii<OT::CmapSubtable>(CmapSubtable * param_1, uint param_2, uint * param_3)
// Body     : 0047d1b0 - 0047d1bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */

ulong __cdecl
OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>
          (CmapSubtable *param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = CmapSubtable::get_glyph(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


