// Function : dispatch<OT::hb_accelerate_subtables_context_t>
// Namespace: OT:ChainContext
// Entry    : 004087f0
// Prototype: return_t dispatch<OT::hb_accelerate_subtables_context_t>(ChainContext * this, long param_1)
// Body     : 004087f0 - 00408a10


/* OT::hb_accelerate_subtables_context_t::return_t
   OT::ChainContext::dispatch<OT::hb_accelerate_subtables_context_t>(OT::hb_accelerate_subtables_context_t*)
   const */

void __thiscall
OT::ChainContext::dispatch<OT::hb_accelerate_subtables_context_t>(ChainContext *this,long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ChainContext *this_00;
  ulong uVar8;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar9;
  Coverage *this_01;
  ChainContext *pCVar10;
  
  uVar3 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar3 == 3) {
    lVar2 = *(long *)(param_1 + 8);
    uVar5 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar5 + 1;
    lVar7 = (ulong)uVar5 * 0x38;
    *(ChainContext **)(lVar2 + lVar7) = this;
    *(code **)(lVar2 + 8 + lVar7) =
         hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat3>;
    *(code **)(lVar2 + 0x10 + lVar7) =
         hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>;
    *(code **)(lVar2 + 0x18 + lVar7) =
         hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat3>;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar7) = 0;
    uVar8 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    this_00 = (ChainContext *)&_hb_NullPool;
    pCVar10 = (ChainContext *)&_hb_NullPool;
    if (*(short *)(this + uVar8 * 2 + 4) != 0) {
      pCVar10 = this + uVar8 * 2 + 6;
    }
    phVar9 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar2 + lVar7 + 0x20);
    uVar3 = *(ushort *)pCVar10;
    if (uVar3 == 0) goto LAB_00408918;
  }
  else {
    if (uVar3 == 2) {
      lVar2 = *(long *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = uVar5 + 1;
      lVar7 = (ulong)uVar5 * 0x38;
      *(ChainContext **)(lVar2 + lVar7) = this;
      *(code **)(lVar2 + 8 + lVar7) =
           hb_accelerate_subtables_context_t::
           apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      *(code **)(lVar2 + 0x10 + lVar7) =
           hb_accelerate_subtables_context_t::
           apply_cached_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      *(code **)(lVar2 + 0x18 + lVar7) =
           hb_accelerate_subtables_context_t::
           cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar2 + 0x30 + lVar7) = 0;
      uVar3 = *(ushort *)(this + 2);
      pCVar10 = (ChainContext *)&_hb_NullPool;
      this_01 = (Coverage *)&_hb_NullPool;
      if (uVar3 != 0) {
        this_01 = (Coverage *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
      }
      Layout::Common::Coverage::
      collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                (this_01,(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                          *)(lVar2 + 0x20 + lVar7));
      uVar3 = *(ushort *)(this + 8);
      if (uVar3 != 0) {
        pCVar10 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
      }
      uVar3 = *(ushort *)pCVar10 << 8 | *(ushort *)pCVar10 >> 8;
      iVar4 = 0;
      if (uVar3 == 2) {
        uVar3 = *(ushort *)(pCVar10 + 2);
        if (uVar3 != 0) {
          uVar3 = uVar3 << 8 | uVar3 >> 8;
          uVar5 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          iVar4 = (uVar5 ^ 0xffffffe0) + 0x21;
        }
      }
      else if (uVar3 == 1) {
        iVar4 = 1;
      }
      uVar6 = (uint)(ushort)(*(ushort *)(this + 10) << 8 | *(ushort *)(this + 10) >> 8) * iVar4;
      uVar5 = 0;
      if (3 < uVar6) {
        uVar5 = uVar6;
      }
      if (*(uint *)(param_1 + 0x18) < uVar5) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + -1;
        *(uint *)(param_1 + 0x18) = uVar5;
      }
      return;
    }
    if (uVar3 != 1) {
      return;
    }
    lVar2 = *(long *)(param_1 + 8);
    uVar5 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar5 + 1;
    lVar7 = (ulong)uVar5 * 0x38;
    *(ChainContext **)(lVar2 + lVar7) = this;
    *(code **)(lVar2 + 8 + lVar7) =
         hb_accelerate_subtables_context_t::
         apply_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    *(code **)(lVar2 + 0x10 + lVar7) =
         hb_accelerate_subtables_context_t::
         apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    *(code **)(lVar2 + 0x18 + lVar7) =
         hb_accelerate_subtables_context_t::
         cache_func_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    phVar9 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              *)(lVar2 + 0x20 + lVar7);
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar7) = 0;
    uVar3 = *(ushort *)(this + 2);
    if (uVar3 == 0) {
      this_00 = (ChainContext *)&_hb_NullPool;
      goto LAB_00408918;
    }
  }
  this_00 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
LAB_00408918:
  Layout::Common::Coverage::
  collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
            ((Coverage *)this_00,phVar9);
  return;
}


