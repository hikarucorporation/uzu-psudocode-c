// Function : apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00408ae0
// Prototype: ulong apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 00408ae0 - 00408b9f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ushort *puVar4;
  Coverage *this;
  ChainRuleSet<OT::Layout::SmallTypes> *this_00;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
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
  this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  puVar4 = (ushort *)&_hb_NullPool;
  if (uVar2 < (ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8)) {
    puVar4 = (ushort *)(param_1 + (ulong)uVar2 * 2 + 6);
  }
  uVar1 = *puVar4;
  if (uVar1 != 0) {
    this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)
              (param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  local_28 = _DAT_00712ab8;
  uStack_20 = _UNK_00712ac0;
  local_38 = PTR_match_glyph_00712aa8;
  uStack_30 = _UNK_00712ab0;
  local_48 = PTR_match_glyph_00712a98;
  puStack_40 = PTR_match_glyph_00712aa0;
  uVar3 = ChainRuleSet<OT::Layout::SmallTypes>::apply(this_00,param_2,&local_48);
  return uVar3;
}


