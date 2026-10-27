// Function : delete_glyph
// Namespace: hb_buffer_t
// Entry    : 00416560
// Prototype: undefined delete_glyph(hb_buffer_t * this)
// Body     : 00416560 - 00416609


/* hb_buffer_t::delete_glyph() */

void __thiscall hb_buffer_t::delete_glyph(hb_buffer_t *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(this + 0x70);
  uVar1 = *(uint *)(this + 0x5c);
  uVar2 = *(uint *)(lVar4 + 8 + (ulong)uVar1 * 0x14);
  uVar8 = uVar1 + 1;
  if (uVar8 < *(uint *)(this + 0x60)) {
    if (uVar2 == *(uint *)(lVar4 + 8 + (ulong)uVar8 * 0x14)) goto LAB_004165fe;
    uVar5 = *(uint *)(this + 100);
    if (uVar5 == 0) {
      merge_clusters_impl(this,uVar1,uVar1 + 2);
      uVar8 = *(int *)(this + 0x5c) + 1;
      goto LAB_004165fe;
    }
  }
  else {
    uVar5 = *(uint *)(this + 100);
    if (uVar5 == 0) goto LAB_004165fe;
  }
  uVar3 = *(uint *)(*(long *)(this + 0x78) + 8 + (ulong)(uVar5 - 1) * 0x14);
  if (uVar2 < uVar3) {
    uVar1 = *(uint *)(lVar4 + 4 + (ulong)uVar1 * 0x14);
    uVar7 = (ulong)uVar5;
    puVar6 = (uint *)(*(long *)(this + 0x78) + uVar7 * 0x14 + -0xc);
    do {
      if (*puVar6 != uVar3) break;
      uVar7 = uVar7 - 1;
      puVar6[-1] = puVar6[-1] & 0xfffffff8 | uVar1 & 7;
      *puVar6 = uVar2;
      puVar6 = puVar6 + -5;
    } while (uVar7 != 0);
  }
LAB_004165fe:
  *(uint *)(this + 0x5c) = uVar8;
  return;
}


