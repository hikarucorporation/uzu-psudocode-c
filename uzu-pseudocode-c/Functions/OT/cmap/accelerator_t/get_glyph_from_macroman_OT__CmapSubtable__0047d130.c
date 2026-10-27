// Function : get_glyph_from_macroman<OT::CmapSubtable>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047d130
// Prototype: ulong get_glyph_from_macroman<OT::CmapSubtable>(CmapSubtable * param_1, uint param_2, uint * param_3)
// Body     : 0047d130 - 0047d1a9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>(void const*, unsigned
   int, unsigned int*) */

ulong __cdecl
OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>
          (CmapSubtable *param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 0x80) {
    uVar1 = CmapSubtable::get_glyph(param_1,param_2,param_3);
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  iVar2 = 0x7f;
  iVar4 = 0;
  while( true ) {
    while( true ) {
      uVar3 = (uint)(iVar2 + iVar4) >> 1;
      if (*(ushort *)(unicode_to_macroman(unsigned_int)::mapping + (ulong)uVar3 * 4) <=
          (ushort)param_2) break;
      iVar2 = uVar3 - 1;
      if (iVar2 < iVar4) {
        return 0;
      }
    }
    if ((ushort)param_2 <=
        *(ushort *)(unicode_to_macroman(unsigned_int)::mapping + (ulong)uVar3 * 4)) break;
    iVar4 = uVar3 + 1;
    if (iVar2 < iVar4) {
      return 0;
    }
  }
  uVar1 = CmapSubtable::get_glyph
                    (param_1,(uint)(byte)unicode_to_macroman(unsigned_int)::mapping
                                         [(ulong)uVar3 * 4 + 2],param_3);
  return uVar1;
}


