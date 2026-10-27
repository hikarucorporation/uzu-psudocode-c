// Function : apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00414130
// Prototype: ulong apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, hb_ot_apply_context_t * param_10)
// Body     : 00414130 - 004141c5


/* WARNING: Unknown calling convention: __cdecl */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          hb_ot_apply_context_t *param_10)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ushort *puVar4;
  Coverage *this;
  LigatureSet<OT::Layout::SmallTypes> *this_00;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = *(ushort *)(param_9 + 2);
  if (uVar1 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_9);
  }
  uVar2 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(*(long *)(param_10 + 0xa0) + 0x70) +
                                   (ulong)*(uint *)(*(long *)(param_10 + 0xa0) + 0x5c) * 0x14));
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  this_00 = (LigatureSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  puVar4 = (ushort *)&_hb_NullPool;
  if (uVar2 < (ushort)(*(ushort *)(param_9 + 4) << 8 | *(ushort *)(param_9 + 4) >> 8)) {
    puVar4 = (ushort *)(param_9 + (ulong)uVar2 * 2 + 6);
  }
  uVar1 = *puVar4;
  if (uVar1 != 0) {
    this_00 = (LigatureSet<OT::Layout::SmallTypes> *)
              (param_9 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar3 = Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply
                    (extraout_XMM0_Qa,param_2_00,param_3,param_4,param_5,param_6,param_7,param_8,
                     this_00,param_10);
  return uVar3;
}


