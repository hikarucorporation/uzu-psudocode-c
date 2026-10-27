// Function : apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00413fe0
// Prototype: ulong apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>(undefined8 param_1_00, undefined8 param_2_00, long param_3, hb_ot_apply_context_t * param_4, undefined8 param_5, undefined8 param_6, ulong param_7, undefined8 param_8)
// Body     : 00413fe0 - 00414075


/* WARNING: Unknown calling convention: __cdecl */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>
          (undefined8 param_1_00,undefined8 param_2_00,long param_3,hb_ot_apply_context_t *param_4,
          undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  ushort *puVar5;
  Coverage *this;
  AlternateSet<OT::Layout::SmallTypes> *this_00;
  undefined8 extraout_XMM0_Qa;
  
  uVar4 = *(ushort *)(param_3 + 2);
  if (uVar4 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + param_3);
  }
  uVar2 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(*(long *)(param_4 + 0xa0) + 0x70) +
                                   (ulong)*(uint *)(*(long *)(param_4 + 0xa0) + 0x5c) * 0x14));
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  uVar4 = *(ushort *)(param_3 + 4) << 8 | *(ushort *)(param_3 + 4) >> 8;
  this_00 = (AlternateSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  puVar5 = (ushort *)&_hb_NullPool;
  if (uVar2 < uVar4) {
    puVar5 = (ushort *)(param_3 + (ulong)uVar2 * 2 + 6);
  }
  uVar1 = *puVar5;
  if (uVar1 != 0) {
    this_00 = (AlternateSet<OT::Layout::SmallTypes> *)
              (param_3 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar3 = Layout::GSUB_impl::AlternateSet<OT::Layout::SmallTypes>::apply
                    (extraout_XMM0_Qa,param_2_00,this_00,param_4,(ulong)uVar4,puVar5,param_7,param_8
                    );
  return uVar3;
}


