// Function : apply
// Namespace: OT:Layout:GSUB_impl:SingleSubstFormat1_3_OT__Layout__SmallTypes_
// Entry    : 004167f0
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, SingleSubstFormat1_3<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004167f0 - 004168d2


/* OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          SingleSubstFormat1_3<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_10,
          undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  ushort uVar1;
  uint uVar2;
  hb_buffer_t *this_00;
  hb_buffer_t *phVar3;
  undefined1 in_AL;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  this_00 = *(hb_buffer_t **)(param_10 + 0xa0);
  uVar2 = *(uint *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
  uVar1 = *(ushort *)(this + 2);
  if (uVar1 == 0) {
    uVar4 = Common::Coverage::get_coverage((Coverage *)&_hb_NullPool,uVar2);
  }
  else {
    uVar4 = Common::Coverage::get_coverage
                      ((Coverage *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),uVar2);
  }
  if (uVar4 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)(this + 4);
    if (*(long *)(this_00 + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(this_00);
      hb_buffer_t::message
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(hb_buffer_t **)(param_10 + 0xa0),*(undefined8 *)(param_10 + 0x90),
                 "replacing glyph at %u (single substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),param_13,param_14,in_AL
                );
    }
    uVar6 = hb_ot_apply_context_t::replace_glyph
                      (param_10,uVar2 + (ushort)(uVar1 << 8 | uVar1 >> 8) & 0xffff);
    phVar3 = *(hb_buffer_t **)(param_10 + 0xa0);
    uVar5 = CONCAT71((int7)((ulong)this_00 >> 8),1);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar3,
                 *(undefined8 *)(param_10 + 0x90),"replaced glyph at %u (single substitution)",
                 (ulong)(*(int *)(phVar3 + 0x5c) - 1),param_13,param_14,in_AL);
    }
  }
  return uVar5 & 0xffffffff;
}


