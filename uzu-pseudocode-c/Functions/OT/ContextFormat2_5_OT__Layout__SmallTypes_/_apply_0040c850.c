// Function : _apply
// Namespace: OT:ContextFormat2_5_OT__Layout__SmallTypes_
// Entry    : 0040c850
// Prototype: undefined8 _apply(ContextFormat2_5<OT::Layout::SmallTypes> * this, long param_1, char param_2)
// Body     : 0040c850 - 0040c95c


/* OT::ContextFormat2_5<OT::Layout::SmallTypes>::_apply(OT::hb_ot_apply_context_t*, bool) const */

undefined8 __thiscall
OT::ContextFormat2_5<OT::Layout::SmallTypes>::_apply
          (ContextFormat2_5<OT::Layout::SmallTypes> *this,long param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  undefined6 extraout_var;
  undefined8 uVar7;
  ContextFormat2_5<OT::Layout::SmallTypes> *pCVar8;
  Coverage *this_00;
  RuleSet<OT::Layout::SmallTypes> *this_01;
  code *local_40;
  ClassDef *local_38;
  
  uVar4 = *(ushort *)(this + 2);
  if (uVar4 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
  uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c);
  uVar2 = *(uint *)(lVar3 + uVar6 * 0x14);
  uVar5 = Layout::Common::Coverage::get_coverage(this_00,uVar2);
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  uVar4 = *(ushort *)(this + 4);
  if (uVar4 == 0) {
    local_38 = (ClassDef *)&_hb_NullPool;
  }
  else {
    local_38 = (ClassDef *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8));
  }
  local_40 = match_class;
  if (param_2 != '\0') {
    local_40 = match_class_cached;
    bVar1 = *(byte *)(lVar3 + 0xf + uVar6 * 0x14);
    uVar5 = (uint)bVar1;
    if (bVar1 != 0xff) goto LAB_0040c905;
  }
  uVar4 = ClassDef::get_class(local_38,uVar2);
  uVar5 = (uint)CONCAT62(extraout_var,uVar4);
LAB_0040c905:
  this_01 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
  pCVar8 = (ContextFormat2_5<OT::Layout::SmallTypes> *)&_hb_NullPool;
  if (uVar5 < (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8)) {
    pCVar8 = this + (ulong)uVar5 * 2 + 8;
  }
  uVar4 = *(ushort *)pCVar8;
  if (uVar4 != 0) {
    this_01 = (RuleSet<OT::Layout::SmallTypes> *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8));
  }
  uVar7 = RuleSet<OT::Layout::SmallTypes>::apply(this_01,param_1,&local_40);
  return uVar7;
}


