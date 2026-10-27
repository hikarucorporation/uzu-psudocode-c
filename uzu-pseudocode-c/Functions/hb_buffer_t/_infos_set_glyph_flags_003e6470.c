// Function : _infos_set_glyph_flags
// Namespace: hb_buffer_t
// Entry    : 003e6470
// Prototype: undefined _infos_set_glyph_flags(hb_buffer_t * this, long param_1, uint param_2, uint param_3, uint param_4, uint param_5)
// Body     : 003e6470 - 003e657e


/* hb_buffer_t::_infos_set_glyph_flags(hb_glyph_info_t*, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
hb_buffer_t::_infos_set_glyph_flags
          (hb_buffer_t *this,long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_2 != param_3) {
    uVar3 = (ulong)param_2;
    uVar2 = *(uint *)(param_1 + 8 + uVar3 * 0x14);
    if ((*(int *)(this + 0x1c) == 2) ||
       ((uVar8 = *(uint *)(param_1 + 8 + (ulong)(param_3 - 1) * 0x14), uVar2 != param_4 &&
        (uVar8 != param_4)))) {
      if (param_2 < param_3) {
        uVar8 = *(uint *)(this + 0xc0);
        puVar6 = (uint *)(param_1 + uVar3 * 0x14 + 4);
        lVar4 = ~uVar3 + (ulong)param_3;
        while( true ) {
          if (uVar2 != param_4) {
            uVar8 = uVar8 | 0x20;
            *(uint *)(this + 0xc0) = uVar8;
            *puVar6 = *puVar6 | param_5;
          }
          bVar9 = lVar4 == 0;
          lVar4 = lVar4 + -1;
          if (bVar9) break;
          uVar2 = puVar6[6];
          puVar6 = puVar6 + 5;
        }
      }
    }
    else if (uVar2 == param_4) {
      if (param_2 < param_3) {
        uVar2 = *(uint *)(this + 0xc0);
        uVar7 = (ulong)param_3;
        puVar6 = (uint *)(param_1 + uVar7 * 0x14 + -0x10);
        do {
          if (puVar6[1] == param_4) {
            return;
          }
          *(uint *)(this + 0xc0) = uVar2 | 0x20;
          *puVar6 = *puVar6 | param_5;
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + -5;
        } while (uVar3 < uVar7);
      }
    }
    else if ((param_2 < param_3) && (uVar2 != uVar8)) {
      uVar2 = *(uint *)(this + 0xc0);
      iVar5 = param_3 - param_2;
      puVar6 = (uint *)(param_1 + uVar3 * 0x14 + 4);
      do {
        *puVar6 = *puVar6 | param_5;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) break;
        puVar1 = puVar6 + 6;
        puVar6 = puVar6 + 5;
      } while (*puVar1 != uVar8);
      *(uint *)(this + 0xc0) = uVar2 | 0x20;
      return;
    }
  }
  return;
}


