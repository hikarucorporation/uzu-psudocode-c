// Function : apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00413dd0
// Prototype: ulong apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>(long param_1, hb_ot_apply_context_t * param_2)
// Body     : 00413dd0 - 00413dd4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>
          (long param_1,hb_ot_apply_context_t *param_2)

{
  hb_buffer_t *phVar1;
  undefined1 in_AL;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ulong uVar5;
  Coverage *this;
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
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + param_1);
  }
  phVar1 = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar3 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(phVar1 + 0x70) +
                                   (ulong)*(uint *)(phVar1 + 0x5c) * 0x14));
  if ((uVar3 == 0xffffffff) ||
     (uVar2 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8, uVar2 <= uVar3)) {
    uVar5 = 0;
  }
  else {
    if (*(long *)(phVar1 + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(phVar1);
      hb_buffer_t::message
                (extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                 in_XMM7_Qa,*(hb_buffer_t **)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),
                 "replacing glyph at %u (single substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_2 + 0xa0) + 0x5c),in_R8,in_R9,in_AL);
      uVar2 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    }
    if (uVar3 < uVar2) {
      puVar4 = (ushort *)(param_1 + (ulong)uVar3 * 2 + 6);
    }
    else {
      puVar4 = (ushort *)&_hb_NullPool;
    }
    uVar6 = hb_ot_apply_context_t::replace_glyph
                      (param_2,(uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8));
    phVar1 = *(hb_buffer_t **)(param_2 + 0xa0);
    uVar5 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    if (*(long *)(phVar1 + 0xd0) != 0) {
      hb_buffer_t::message
                (uVar6,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                 phVar1,*(undefined8 *)(param_2 + 0x90),"replaced glyph at %u (single substitution)"
                 ,(ulong)(*(int *)(phVar1 + 0x5c) - 1),in_R8,in_R9,in_AL);
    }
  }
  return uVar5 & 0xffffffff;
}


