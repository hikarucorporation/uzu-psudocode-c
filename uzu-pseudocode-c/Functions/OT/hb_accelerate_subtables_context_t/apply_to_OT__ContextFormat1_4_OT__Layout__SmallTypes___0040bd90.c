// Function : apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 0040bd90
// Prototype: undefined8 apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 0040bd90 - 0040be37


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  Coverage *this;
  RuleSet<OT::Layout::SmallTypes> *this_00;
  undefined *local_28;
  undefined8 uStack_20;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (uVar1 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
  }
  uVar2 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                                   (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  this_00 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  puVar4 = (ushort *)&_hb_NullPool;
  if (uVar2 < (ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8)) {
    puVar4 = (ushort *)(param_1 + (ulong)uVar2 * 2 + 6);
  }
  uVar1 = *puVar4;
  if (uVar1 != 0) {
    this_00 = (RuleSet<OT::Layout::SmallTypes> *)
              (param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  local_28 = PTR_match_glyph_00712a88;
  uStack_20 = _UNK_00712a90;
  uVar3 = RuleSet<OT::Layout::SmallTypes>::apply(this_00,param_2,&local_28);
  return uVar3;
}


