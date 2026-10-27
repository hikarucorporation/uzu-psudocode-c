// Function : dispatch<OT::hb_accelerate_subtables_context_t>
// Namespace: OT:Context
// Entry    : 00408600
// Prototype: return_t dispatch<OT::hb_accelerate_subtables_context_t>(Context * this, long param_1)
// Body     : 00408600 - 004087ee


/* OT::hb_accelerate_subtables_context_t::return_t
   OT::Context::dispatch<OT::hb_accelerate_subtables_context_t>(OT::hb_accelerate_subtables_context_t*)
   const */

void __thiscall
OT::Context::dispatch<OT::hb_accelerate_subtables_context_t>(Context *this,long param_1)

{
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  Coverage *pCVar9;
  Context *pCVar10;
  
  uVar4 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar4 == 3) {
    lVar3 = *(long *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar6 + 1;
    lVar8 = (ulong)uVar6 * 0x38;
    *(Context **)(lVar3 + lVar8) = this;
    *(code **)(lVar3 + 8 + lVar8) = hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat3>;
    *(code **)(lVar3 + 0x10 + lVar8) =
         hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>;
    *(code **)(lVar3 + 0x18 + lVar8) =
         hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat3>;
    phVar1 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar3 + 0x20 + lVar8);
    puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar8);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar8) = 0;
    uVar4 = *(ushort *)(this + 6);
joined_r0x004086e7:
    if (uVar4 == 0) {
      pCVar9 = (Coverage *)&_hb_NullPool;
    }
    else {
      pCVar9 = (Coverage *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    Layout::Common::Coverage::
    collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              (pCVar9,phVar1);
    return;
  }
  if (uVar4 == 2) {
    lVar3 = *(long *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar6 + 1;
    lVar8 = (ulong)uVar6 * 0x38;
    *(Context **)(lVar3 + lVar8) = this;
    *(code **)(lVar3 + 8 + lVar8) =
         hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
    *(code **)(lVar3 + 0x10 + lVar8) =
         hb_accelerate_subtables_context_t::
         apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
    *(code **)(lVar3 + 0x18 + lVar8) =
         hb_accelerate_subtables_context_t::
         cache_func_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
    puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar8);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar8) = 0;
    uVar4 = *(ushort *)(this + 2);
    pCVar10 = (Context *)&_hb_NullPool;
    pCVar9 = (Coverage *)&_hb_NullPool;
    if (uVar4 != 0) {
      pCVar9 = (Coverage *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    Layout::Common::Coverage::
    collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
              (pCVar9,(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                       *)(lVar3 + 0x20 + lVar8));
    uVar4 = *(ushort *)(this + 4);
    if (uVar4 != 0) {
      pCVar10 = this + (ushort)(uVar4 << 8 | uVar4 >> 8);
    }
    uVar4 = *(ushort *)pCVar10 << 8 | *(ushort *)pCVar10 >> 8;
    iVar5 = 0;
    if (uVar4 == 2) {
      uVar4 = *(ushort *)(pCVar10 + 2);
      if (uVar4 != 0) {
        uVar4 = uVar4 << 8 | uVar4 >> 8;
        uVar6 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        iVar5 = (uVar6 ^ 0xffffffe0) + 0x21;
      }
    }
    else if (uVar4 == 1) {
      iVar5 = 1;
    }
    uVar7 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) * iVar5;
    uVar6 = 0;
    if (3 < uVar7) {
      uVar6 = uVar7;
    }
    if (*(uint *)(param_1 + 0x18) < uVar6) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + -1;
      *(uint *)(param_1 + 0x18) = uVar6;
    }
  }
  else if (uVar4 == 1) {
    lVar3 = *(long *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar6 + 1;
    lVar8 = (ulong)uVar6 * 0x38;
    *(Context **)(lVar3 + lVar8) = this;
    *(code **)(lVar3 + 8 + lVar8) =
         hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
    *(code **)(lVar3 + 0x10 + lVar8) =
         hb_accelerate_subtables_context_t::
         apply_cached_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
    *(code **)(lVar3 + 0x18 + lVar8) =
         hb_accelerate_subtables_context_t::
         cache_func_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
    phVar1 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar3 + 0x20 + lVar8);
    puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar8);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar8) = 0;
    uVar4 = *(ushort *)(this + 2);
    goto joined_r0x004086e7;
  }
  return;
}


