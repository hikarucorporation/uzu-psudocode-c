// Function : _apply
// Namespace: OT:ChainContextFormat2_5_OT__Layout__SmallTypes_
// Entry    : 0040a100
// Prototype: ulong _apply(ChainContextFormat2_5<OT::Layout::SmallTypes> * this, long param_1, char param_2)
// Body     : 0040a100 - 0040a264


/* OT::ChainContextFormat2_5<OT::Layout::SmallTypes>::_apply(OT::hb_ot_apply_context_t*, bool) const
    */

ulong __thiscall
OT::ChainContextFormat2_5<OT::Layout::SmallTypes>::_apply
          (ChainContextFormat2_5<OT::Layout::SmallTypes> *this,long param_1,char param_2)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined6 extraout_var;
  ulong uVar6;
  ChainContextFormat2_5<OT::Layout::SmallTypes> *pCVar7;
  Coverage *this_00;
  ChainRuleSet<OT::Layout::SmallTypes> *this_01;
  code *local_60;
  code *local_58;
  code *local_50;
  ChainContextFormat2_5<OT::Layout::SmallTypes> *local_48;
  ClassDef *local_40;
  ChainContextFormat2_5<OT::Layout::SmallTypes> *local_38;
  
  uVar3 = *(ushort *)(this + 2);
  if (uVar3 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
  uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c);
  uVar5 = *(uint *)(lVar2 + uVar6 * 0x14);
  uVar4 = Layout::Common::Coverage::get_coverage(this_00,uVar5);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 4);
  local_38 = (ChainContextFormat2_5<OT::Layout::SmallTypes> *)&_hb_NullPool;
  local_48 = (ChainContextFormat2_5<OT::Layout::SmallTypes> *)&_hb_NullPool;
  if (uVar3 != 0) {
    local_48 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
  }
  uVar3 = *(ushort *)(this + 6);
  local_40 = (ClassDef *)&_hb_NullPool;
  if (uVar3 != 0) {
    local_40 = (ClassDef *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar3 = *(ushort *)(this + 8);
  if (uVar3 != 0) {
    local_38 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
  }
  local_50 = match_class_cached1;
  if (param_2 == '\0') {
    local_50 = match_class;
  }
  local_60 = match_class;
  if (local_48 == local_38) {
    local_60 = local_50;
  }
  local_58 = match_class_cached2;
  if (param_2 == '\0') {
    local_58 = match_class;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0xf + uVar6 * 0x14);
    if (bVar1 < 0xf0) {
      uVar5 = (uint)(bVar1 >> 4);
      goto LAB_0040a219;
    }
  }
  uVar3 = ClassDef::get_class(local_40,uVar5);
  uVar5 = (uint)CONCAT62(extraout_var,uVar3);
LAB_0040a219:
  this_01 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  pCVar7 = (ChainContextFormat2_5<OT::Layout::SmallTypes> *)&_hb_NullPool;
  if (uVar5 < (ushort)(*(ushort *)(this + 10) << 8 | *(ushort *)(this + 10) >> 8)) {
    pCVar7 = this + (ulong)uVar5 * 2 + 0xc;
  }
  uVar3 = *(ushort *)pCVar7;
  if (uVar3 != 0) {
    this_01 = (ChainRuleSet<OT::Layout::SmallTypes> *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar6 = ChainRuleSet<OT::Layout::SmallTypes>::apply(this_01,param_1,&local_60);
  return uVar6;
}


