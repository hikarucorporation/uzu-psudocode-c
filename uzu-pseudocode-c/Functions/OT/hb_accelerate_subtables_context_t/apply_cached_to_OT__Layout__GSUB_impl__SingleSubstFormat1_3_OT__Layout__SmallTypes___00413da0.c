// Function : apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00413da0
// Prototype: ulong apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>(long param_1, hb_ot_apply_context_t * param_2)
// Body     : 00413da0 - 00413da4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>
          (long param_1,hb_ot_apply_context_t *param_2)

{
  ushort uVar1;
  uint uVar2;
  hb_buffer_t *this;
  hb_buffer_t *phVar3;
  undefined1 in_AL;
  uint uVar4;
  ulong uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  this = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar2 = *(uint *)(*(long *)(this + 0x70) + (ulong)*(uint *)(this + 0x5c) * 0x14);
  uVar1 = *(ushort *)(param_1 + 2);
  if (uVar1 == 0) {
    uVar4 = Layout::Common::Coverage::get_coverage((Coverage *)&_hb_NullPool,uVar2);
  }
  else {
    uVar4 = Layout::Common::Coverage::get_coverage
                      ((Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1),uVar2);
  }
  if (uVar4 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 4);
    if (*(long *)(this + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(this);
      hb_buffer_t::message
                (extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                 in_XMM7_Qa,*(hb_buffer_t **)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),
                 "replacing glyph at %u (single substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_2 + 0xa0) + 0x5c),in_R8,in_R9,in_AL);
    }
    uVar6 = hb_ot_apply_context_t::replace_glyph
                      (param_2,uVar2 + (ushort)(uVar1 << 8 | uVar1 >> 8) & 0xffff);
    phVar3 = *(hb_buffer_t **)(param_2 + 0xa0);
    uVar5 = CONCAT71((int7)((ulong)this >> 8),1);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (uVar6,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                 phVar3,*(undefined8 *)(param_2 + 0x90),"replaced glyph at %u (single substitution)"
                 ,(ulong)(*(int *)(phVar3 + 0x5c) - 1),in_R8,in_R9,in_AL);
    }
  }
  return uVar5 & 0xffffffff;
}


