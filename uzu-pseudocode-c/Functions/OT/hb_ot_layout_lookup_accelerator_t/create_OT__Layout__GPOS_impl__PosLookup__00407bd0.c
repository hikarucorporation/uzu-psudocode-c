// Function : create<OT::Layout::GPOS_impl::PosLookup>
// Namespace: OT:hb_ot_layout_lookup_accelerator_t
// Entry    : 00407bd0
// Prototype: ulong * create<OT::Layout::GPOS_impl::PosLookup>(ushort * param_1)
// Body     : 00407bd0 - 004080ec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::hb_ot_layout_lookup_accelerator_t*
   OT::hb_ot_layout_lookup_accelerator_t::create<OT::Layout::GPOS_impl::PosLookup>(OT::Layout::GPOS_impl::PosLookup
   const&) */

ulong * __cdecl
OT::hb_ot_layout_lookup_accelerator_t::create<OT::Layout::GPOS_impl::PosLookup>(ushort *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong *puVar5;
  ushort *puVar6;
  ulong uVar7;
  code *pcVar8;
  Coverage *this;
  ChainContext *pCVar9;
  long lVar10;
  ulong uVar11;
  hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
  *phVar12;
  ChainContext *this_00;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 local_60 [2];
  ulong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint local_3c;
  ulong local_38;
  
  uVar4 = param_1[2];
  uVar2 = uVar4 << 8 | uVar4 >> 8;
  puVar5 = calloc(1,(ulong)((uint)uVar2 * 0x38 + 0x20));
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)0x0;
  }
  else {
    local_58 = puVar5 + 4;
    local_60[0] = 0;
    local_50 = 0xffffffff00000000;
    local_48 = 0;
    if (uVar4 != 0) {
      uVar3 = *param_1 << 8 | *param_1 >> 8;
      local_38 = 1;
      if (1 < uVar2) {
        local_38 = (ulong)uVar2;
      }
      uVar15 = 0;
      local_3c = (uint)uVar2;
      do {
        puVar6 = (ushort *)&_hb_NullPool;
        if (uVar15 < (ushort)(uVar4 << 8 | uVar4 >> 8)) {
          puVar6 = param_1 + 2 + uVar15 + 1;
        }
        uVar4 = *puVar6;
        this_00 = (ChainContext *)&_hb_NullPool;
        uVar2 = uVar3;
        if (uVar4 != 0) {
          this_00 = (ChainContext *)((ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + (long)param_1);
        }
        while (uVar2 == 9) {
          if (*(short *)this_00 != 0x100) goto switchD_00407d0b_default;
          uVar14 = *(uint *)(this_00 + 4);
          pCVar9 = (ChainContext *)&_hb_NullPool;
          if (uVar14 != 0) {
            pCVar9 = this_00 + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18);
          }
          uVar2 = *(ushort *)(this_00 + 2) << 8 | *(ushort *)(this_00 + 2) >> 8;
          this_00 = pCVar9;
        }
        switch(uVar2) {
        case 1:
          uVar4 = *(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8;
          if (uVar4 == 2) {
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::SinglePosFormat2>;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::SinglePosFormat2>;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::SinglePosFormat2>;
          }
          else {
            if (uVar4 != 1) break;
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::SinglePosFormat1>;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::SinglePosFormat1>;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::SinglePosFormat1>;
          }
          goto LAB_00407fa5;
        case 2:
          uVar4 = *(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8;
          if (uVar4 == 2) {
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>
            ;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>;
          }
          else {
            if (uVar4 != 1) break;
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>
            ;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>;
          }
LAB_00407fa5:
          *(code **)((long)local_58 + lVar10 + 0x18) = pcVar8;
          phVar12 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((long)local_58 + lVar10 + 0x20);
          puVar1 = (undefined8 *)((long)local_58 + lVar10 + 0x20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((long)local_58 + lVar10 + 0x30) = 0;
          uVar4 = *(ushort *)(this_00 + 2);
          this = (Coverage *)(this_00 + (ushort)(uVar4 << 8 | uVar4 >> 8));
          if (uVar4 == 0) {
            this = (Coverage *)&_hb_NullPool;
          }
LAB_00407fda:
          Layout::Common::Coverage::
          collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                    (this,phVar12);
          break;
        case 3:
          if (*(short *)this_00 != 0x100) break;
          uVar7 = local_50 & 0xffffffff;
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
          lVar10 = uVar7 * 0x38;
          local_58[uVar7 * 7] = (ulong)this_00;
          local_58[uVar7 * 7 + 1] =
               (ulong)hb_accelerate_subtables_context_t::
                      apply_to<OT::Layout::GPOS_impl::CursivePosFormat1>;
          local_58[uVar7 * 7 + 2] =
               (ulong)hb_accelerate_subtables_context_t::
                      apply_cached_to<OT::Layout::GPOS_impl::CursivePosFormat1>;
          pcVar8 = hb_accelerate_subtables_context_t::
                   cache_func_to<OT::Layout::GPOS_impl::CursivePosFormat1>;
LAB_00407edb:
          *(code **)((long)local_58 + lVar10 + 0x18) = pcVar8;
          puVar1 = (undefined8 *)((long)local_58 + lVar10 + 0x20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((long)local_58 + lVar10 + 0x30) = 0;
          uVar4 = *(ushort *)(this_00 + 2);
          this = (Coverage *)&_hb_NullPool;
          if (uVar4 != 0) {
            this = (Coverage *)(this_00 + (ushort)(uVar4 << 8 | uVar4 >> 8));
          }
          phVar12 = (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                     *)((long)local_58 + lVar10 + 0x20);
          goto LAB_00407fda;
        case 4:
          if (*(short *)this_00 == 0x100) {
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>
            ;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>
            ;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>
            ;
            goto LAB_00407edb;
          }
          break;
        case 5:
          if (*(short *)this_00 == 0x100) {
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            goto LAB_00407edb;
          }
          break;
        case 6:
          if (*(short *)this_00 == 0x100) {
            uVar7 = local_50 & 0xffffffff;
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
            lVar10 = uVar7 * 0x38;
            local_58[uVar7 * 7] = (ulong)this_00;
            local_58[uVar7 * 7 + 1] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            local_58[uVar7 * 7 + 2] =
                 (ulong)hb_accelerate_subtables_context_t::
                        apply_cached_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            pcVar8 = hb_accelerate_subtables_context_t::
                     cache_func_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>
            ;
            goto LAB_00407edb;
          }
          break;
        case 7:
          Context::dispatch<OT::hb_accelerate_subtables_context_t>
                    ((Context *)this_00,(long)local_60);
          break;
        case 8:
          ChainContext::dispatch<OT::hb_accelerate_subtables_context_t>(this_00,(long)local_60);
        }
switchD_00407d0b_default:
        uVar15 = uVar15 + 1;
        if (uVar15 == local_38) {
          uVar7 = 0;
          uVar11 = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          lVar10 = 0;
          uVar15 = 0;
          do {
            puVar13 = (ulong *)((long)puVar5 + lVar10 + 0x40);
            uVar7 = uVar7 | *puVar13;
            uVar11 = uVar11 | puVar13[1];
            *puVar5 = uVar7;
            puVar5[1] = uVar11;
            uVar15 = uVar15 | *(ulong *)((long)puVar5 + lVar10 + 0x50);
            puVar5[2] = uVar15;
            lVar10 = lVar10 + 0x38;
          } while ((ulong)local_3c * 0x38 != lVar10);
          uVar15 = (ulong)local_50._4_4_;
          *(uint *)(puVar5 + 3) = local_50._4_4_;
          uVar14 = 1;
          if (1 < local_3c) {
            uVar14 = local_3c;
          }
          if ((ushort)local_3c < 2) {
            uVar11 = 0;
          }
          else {
            puVar13 = puVar5 + 0xd;
            uVar7 = 0;
            do {
              uVar11 = uVar7;
              if (uVar15 != uVar11) {
                puVar13[-7] = puVar13[-8];
              }
              if (uVar11 + 1 != uVar15) {
                *puVar13 = puVar13[-1];
              }
              puVar13 = puVar13 + 0xe;
              uVar7 = uVar11 + 2;
            } while (uVar11 + 2 != (ulong)(uVar14 & 0xfffffffe));
            uVar11 = uVar11 + 2;
          }
          if ((uVar14 & 1) == 0) {
            return puVar5;
          }
          if (uVar11 == uVar15) {
            return puVar5;
          }
          puVar5[uVar11 * 7 + 6] = puVar5[uVar11 * 7 + 5];
          return puVar5;
        }
        uVar4 = param_1[2];
      } while( true );
    }
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  }
  return puVar5;
}


