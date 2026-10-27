// Function : apply_to<OT::Layout::GPOS_impl::SinglePosFormat1>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00408480
// Prototype: bool apply_to<OT::Layout::GPOS_impl::SinglePosFormat1>(long param_1, long param_2)
// Body     : 00408480 - 00408484


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GPOS_impl::SinglePosFormat1>(void
   const*, OT::hb_ot_apply_context_t*) */

bool __cdecl
OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GPOS_impl::SinglePosFormat1>
          (long param_1,long param_2)

{
  ushort uVar1;
  hb_buffer_t *phVar2;
  hb_buffer_t *phVar3;
  uint uVar4;
  undefined1 unaff_BL;
  ulong uVar5;
  Coverage *this;
  undefined8 in_R8;
  int *piVar6;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  phVar2 = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar1 = *(ushort *)(param_1 + 2);
  if (uVar1 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
  }
  uVar5 = (ulong)*(uint *)(phVar2 + 0x5c);
  uVar4 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(phVar2 + 0x70) + uVar5 * 0x14));
  if (uVar4 != 0xffffffff) {
    if (*(long *)(phVar2 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                 in_XMM7_Qa,phVar2,*(undefined8 *)(param_2 + 0x90),"positioning glyph at %u",uVar5,
                 in_R8,in_R9,unaff_BL);
      uVar5 = (ulong)*(uint *)(phVar2 + 0x5c);
    }
    piVar6 = (int *)(uVar5 * 0x14 + *(long *)(phVar2 + 0x80));
    Layout::GPOS_impl::ValueFormat::apply_value
              ((ValueFormat *)(param_1 + 4),param_2,param_1,(ushort *)(param_1 + 6),piVar6);
    phVar3 = *(hb_buffer_t **)(param_2 + 0xa0);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (extraout_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                 in_XMM6_Qa,in_XMM7_Qa,phVar3,*(undefined8 *)(param_2 + 0x90),
                 "positioned glyph at %u",(ulong)*(uint *)(phVar3 + 0x5c),piVar6,in_R9,unaff_BL);
    }
    *(int *)(phVar2 + 0x5c) = *(int *)(phVar2 + 0x5c) + 1;
  }
  return uVar4 != 0xffffffff;
}


