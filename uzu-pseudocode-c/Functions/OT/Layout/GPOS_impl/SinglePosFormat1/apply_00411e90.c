// Function : apply
// Namespace: OT:Layout:GPOS_impl:SinglePosFormat1
// Entry    : 00411e90
// Prototype: bool apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, SinglePosFormat1 * this, long param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00411e90 - 00411f69


/* OT::Layout::GPOS_impl::SinglePosFormat1::apply(OT::hb_ot_apply_context_t*) const */

bool __thiscall
OT::Layout::GPOS_impl::SinglePosFormat1::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          SinglePosFormat1 *this,long param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  ushort uVar1;
  hb_buffer_t *phVar2;
  hb_buffer_t *phVar3;
  uint uVar4;
  undefined1 unaff_BL;
  ulong uVar5;
  Coverage *this_00;
  int *piVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  phVar2 = *(hb_buffer_t **)(param_10 + 0xa0);
  uVar1 = *(ushort *)(this + 2);
  if (uVar1 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar5 = (ulong)*(uint *)(phVar2 + 0x5c);
  uVar4 = Common::Coverage::get_coverage(this_00,*(uint *)(*(long *)(phVar2 + 0x70) + uVar5 * 0x14))
  ;
  if (uVar4 != 0xffffffff) {
    if (*(long *)(phVar2 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar2,
                 *(undefined8 *)(param_10 + 0x90),"positioning glyph at %u",uVar5,param_13,param_14,
                 unaff_BL);
      uVar5 = (ulong)*(uint *)(phVar2 + 0x5c);
    }
    piVar6 = (int *)(uVar5 * 0x14 + *(long *)(phVar2 + 0x80));
    ValueFormat::apply_value
              ((ValueFormat *)(this + 4),param_10,(long)this,(ushort *)(this + 6),piVar6);
    phVar3 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar3,
                 *(undefined8 *)(param_10 + 0x90),"positioned glyph at %u",
                 (ulong)*(uint *)(phVar3 + 0x5c),piVar6,param_14,unaff_BL);
    }
    *(int *)(phVar2 + 0x5c) = *(int *)(phVar2 + 0x5c) + 1;
  }
  return uVar4 != 0xffffffff;
}


