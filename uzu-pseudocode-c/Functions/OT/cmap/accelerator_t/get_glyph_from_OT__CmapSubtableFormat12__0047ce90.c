// Function : get_glyph_from<OT::CmapSubtableFormat12>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047ce90
// Prototype: uint get_glyph_from<OT::CmapSubtableFormat12>(long param_1, uint param_2, int * param_3)
// Body     : 0047ce90 - 0047cf21


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>(void const*, unsigned int,
   unsigned int*) */

uint __cdecl
OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>
          (long param_1,uint param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  puVar6 = &_hb_Null_OT_CmapSubtableLongGroup;
  if (0 < (int)uVar7) {
    iVar8 = uVar7 - 1;
    iVar5 = 0;
    do {
      while( true ) {
        uVar4 = (uint)(iVar8 + iVar5) >> 1;
        lVar2 = (ulong)uVar4 * 0xc;
        uVar7 = *(uint *)(param_1 + 0x10 + lVar2);
        if (param_2 < (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18)) break;
        uVar7 = *(uint *)(param_1 + 0x14 + lVar2);
        if (param_2 <=
            (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18)) {
          puVar6 = (uint *)(param_1 + (ulong)uVar4 * 0xc + 0x10);
          goto LAB_0047cefc;
        }
        iVar5 = uVar4 + 1;
        if (iVar8 < iVar5) goto LAB_0047cefc;
      }
      iVar8 = uVar4 - 1;
    } while (iVar5 <= iVar8);
  }
LAB_0047cefc:
  uVar7 = *puVar6;
  uVar4 = puVar6[1];
  uVar3 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  bVar1 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) < uVar3;
  uVar7 = puVar6[2];
  iVar8 = (param_2 - uVar3) +
          (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
  if (iVar8 != 0 && !bVar1) {
    *param_3 = iVar8;
  }
  return CONCAT31((int3)(uVar3 >> 8),iVar8 == 0 || bVar1) ^ 1;
}


