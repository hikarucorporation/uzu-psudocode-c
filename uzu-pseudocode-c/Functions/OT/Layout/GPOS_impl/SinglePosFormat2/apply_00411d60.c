// Function : apply
// Namespace: OT:Layout:GPOS_impl:SinglePosFormat2
// Entry    : 00411d60
// Prototype: undefined8 apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, SinglePosFormat2 * this, long param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00411d60 - 00411e8a


/* OT::Layout::GPOS_impl::SinglePosFormat2::apply(OT::hb_ot_apply_context_t*) const */

undefined8 __thiscall
OT::Layout::GPOS_impl::SinglePosFormat2::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          SinglePosFormat2 *this,long param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  ushort uVar1;
  hb_buffer_t *phVar2;
  hb_buffer_t *phVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint7 extraout_var;
  undefined8 uVar7;
  undefined1 unaff_BL;
  Coverage *this_00;
  int *piVar8;
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
  uVar6 = (ulong)*(uint *)(phVar2 + 0x5c);
  uVar4 = Common::Coverage::get_coverage(this_00,*(uint *)(*(long *)(phVar2 + 0x70) + uVar6 * 0x14))
  ;
  if ((uVar4 == 0xffffffff) ||
     ((ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) <= uVar4)) {
    uVar7 = 0;
  }
  else {
    if (*(long *)(phVar2 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar2,
                 *(undefined8 *)(param_10 + 0x90),"positioning glyph at %u",uVar6,param_13,param_14,
                 unaff_BL);
      uVar6 = (ulong)*(uint *)(phVar2 + 0x5c);
    }
    uVar5 = (uint)*(ushort *)(this + 4) - (*(ushort *)(this + 4) >> 1 & 0x5555);
    uVar5 = (uVar5 >> 2 & 0x3333) + (uVar5 & 0x3333);
    piVar8 = (int *)(uVar6 * 0x14 + *(long *)(phVar2 + 0x80));
    uVar6 = ValueFormat::apply_value
                      ((ValueFormat *)(this + 4),param_10,(long)this,
                       (ushort *)
                       (this + (ulong)(uVar4 * (((uVar5 >> 4) + uVar5 & 0xf0f) * 0x101 >> 8 & 0xff))
                               * 2 + 8),piVar8);
    phVar3 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar3,
                 *(undefined8 *)(param_10 + 0x90),"positioned glyph at %u",
                 (ulong)*(uint *)(phVar3 + 0x5c),piVar8,param_14,unaff_BL);
      uVar6 = (ulong)extraout_var << 8;
    }
    *(int *)(phVar2 + 0x5c) = *(int *)(phVar2 + 0x5c) + 1;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  return uVar7;
}


