// Function : apply
// Namespace: OT:Layout:GSUB_impl:SingleSubstFormat2_4_OT__Layout__SmallTypes_
// Entry    : 004166e0
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, SingleSubstFormat2_4<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004166e0 - 004167e7


/* OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          SingleSubstFormat2_4<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_10,
          undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  hb_buffer_t *phVar1;
  undefined1 in_AL;
  ushort uVar2;
  uint uVar3;
  SingleSubstFormat2_4<OT::Layout::SmallTypes> *pSVar4;
  ulong uVar5;
  Coverage *this_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  uVar2 = *(ushort *)(this + 2);
  if (uVar2 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  phVar1 = *(hb_buffer_t **)(param_10 + 0xa0);
  uVar3 = Common::Coverage::get_coverage
                    (this_00,*(uint *)(*(long *)(phVar1 + 0x70) +
                                      (ulong)*(uint *)(phVar1 + 0x5c) * 0x14));
  if ((uVar3 == 0xffffffff) ||
     (uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8, uVar2 <= uVar3)) {
    uVar5 = 0;
  }
  else {
    if (*(long *)(phVar1 + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(phVar1);
      hb_buffer_t::message
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(hb_buffer_t **)(param_10 + 0xa0),*(undefined8 *)(param_10 + 0x90),
                 "replacing glyph at %u (single substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),param_13,param_14,in_AL
                );
      uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    }
    if (uVar3 < uVar2) {
      pSVar4 = this + (ulong)uVar3 * 2 + 6;
    }
    else {
      pSVar4 = (SingleSubstFormat2_4<OT::Layout::SmallTypes> *)&_hb_NullPool;
    }
    uVar6 = hb_ot_apply_context_t::replace_glyph
                      (param_10,(uint)(ushort)(*(ushort *)pSVar4 << 8 | *(ushort *)pSVar4 >> 8));
    phVar1 = *(hb_buffer_t **)(param_10 + 0xa0);
    uVar5 = CONCAT71((int7)((ulong)this >> 8),1);
    if (*(long *)(phVar1 + 0xd0) != 0) {
      hb_buffer_t::message
                (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar1,
                 *(undefined8 *)(param_10 + 0x90),"replaced glyph at %u (single substitution)",
                 (ulong)(*(int *)(phVar1 + 0x5c) - 1),param_13,param_14,in_AL);
    }
  }
  return uVar5 & 0xffffffff;
}


