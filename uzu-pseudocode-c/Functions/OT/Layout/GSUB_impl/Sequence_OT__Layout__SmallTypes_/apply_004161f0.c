// Function : apply
// Namespace: OT:Layout:GSUB_impl:Sequence_OT__Layout__SmallTypes_
// Entry    : 004161f0
// Prototype: undefined apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, Sequence<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004161f0 - 00416551


/* OT::Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*) const
    */

void __thiscall
OT::Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          Sequence<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_10,undefined8 param_11
          ,undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  hb_buffer_t hVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  size_t sVar7;
  hb_buffer_t *phVar8;
  ulong uVar9;
  char *pcVar10;
  ushort uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 in_stack_fffffffffffffbb8;
  char local_438 [1024];
  undefined1 local_38 [8];
  
  uVar2 = *(ushort *)this;
  uVar11 = uVar2 << 8 | uVar2 >> 8;
  if (uVar11 == 1) {
    if (*(long *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(*(hb_buffer_t **)(param_10 + 0xa0));
      hb_buffer_t::message
                (extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(hb_buffer_t **)(param_10 + 0xa0),*(undefined8 *)(param_10 + 0x90),
                 "replacing glyph at %u (multiple substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),param_13,param_14,
                 in_stack_fffffffffffffbb8);
    }
    uVar5 = hb_ot_apply_context_t::replace_glyph
                      (param_10,(uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                              *(ushort *)(this + 2) >> 8));
    phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar8 + 0xd0) != 0) {
      uVar15 = *(undefined8 *)(param_10 + 0x90);
      uVar16 = *(int *)(phVar8 + 0x5c) - 1;
      pcVar10 = "replaced glyph at %u (multiple substitution)";
LAB_0041653a:
      hb_buffer_t::message
                (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar8,uVar15,pcVar10
                 ,(ulong)uVar16,param_13,param_14,param_15);
      return;
    }
  }
  else if (uVar11 == 0) {
    phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar8 + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(phVar8);
      hb_buffer_t::message
                (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(hb_buffer_t **)(param_10 + 0xa0),*(undefined8 *)(param_10 + 0x90),
                 "deleting glyph at %u (multiple substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),param_13,param_14,
                 in_stack_fffffffffffffbb8);
      phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    }
    hb_buffer_t::delete_glyph(phVar8);
    if (*(long *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0xd0) != 0) {
      hb_buffer_t::sync_so_far(*(hb_buffer_t **)(param_10 + 0xa0));
      uVar15 = *(undefined8 *)(param_10 + 0x90);
      phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
      uVar16 = *(uint *)(phVar8 + 0x5c);
      pcVar10 = "deleted glyph at %u (multiple substitution)";
      uVar5 = extraout_XMM0_Qa_04;
      goto LAB_0041653a;
    }
  }
  else {
    phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar8 + 0xd0) != 0) {
      hVar1 = phVar8[0x5a];
      uVar3 = *(undefined4 *)(phVar8 + 0x5c);
      uVar17 = *(undefined4 *)(phVar8 + 100);
      uVar5 = hb_buffer_t::sync(phVar8);
      if ((char)uVar5 == '\0') {
        uVar17 = uVar3;
      }
      *(undefined4 *)(phVar8 + 0x5c) = uVar17;
      if (hVar1 != (hb_buffer_t)0x0) {
        phVar8[0x5a] = (hb_buffer_t)0x1;
        *(undefined4 *)(phVar8 + 100) = uVar17;
      }
      hb_buffer_t::message
                (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(hb_buffer_t **)(param_10 + 0xa0),*(undefined8 *)(param_10 + 0x90),
                 "multiplying glyph at %u",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),param_13,param_14,
                 in_stack_fffffffffffffbb8);
      phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    }
    if (uVar2 != 0) {
      lVar6 = *(long *)(phVar8 + 0x70);
      uVar14 = (ulong)*(uint *)(phVar8 + 0x5c);
      uVar16 = *(uint *)(lVar6 + 0xc + uVar14 * 0x14) >> 1 & 2;
      uVar9 = 1;
      if (1 < uVar11) {
        uVar9 = (ulong)(uint)uVar11;
      }
      if (*(byte *)(lVar6 + uVar14 * 0x14 + 0xe) < 0x20) {
        lVar13 = 0;
        while( true ) {
          *(byte *)(lVar6 + 0xe + uVar14 * 0x14) = (byte)lVar13 & 0xf;
          hb_ot_apply_context_t::output_glyph_for_component
                    (param_10,(uint)(ushort)(*(ushort *)(this + lVar13 * 2 + 2) << 8 |
                                            *(ushort *)(this + lVar13 * 2 + 2) >> 8),uVar16);
          if (uVar9 - 1 == lVar13) break;
          lVar6 = *(long *)(*(long *)(param_10 + 0xa0) + 0x70);
          uVar14 = (ulong)*(uint *)(*(long *)(param_10 + 0xa0) + 0x5c);
          lVar13 = lVar13 + 1;
        }
      }
      else {
        uVar14 = 0;
        do {
          hb_ot_apply_context_t::output_glyph_for_component
                    (param_10,(uint)(ushort)(*(ushort *)(this + uVar14 * 2 + 2) << 8 |
                                            *(ushort *)(this + uVar14 * 2 + 2) >> 8),uVar16);
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
    iVar12 = *(int *)(phVar8 + 0x5c);
    *(int *)(phVar8 + 0x5c) = iVar12 + 1;
    if (*(long *)(phVar8 + 0xd0) != 0) {
      hVar1 = phVar8[0x5a];
      iVar4 = *(int *)(phVar8 + 100);
      uVar5 = hb_buffer_t::sync(phVar8);
      iVar12 = iVar12 + 1;
      if ((char)uVar5 != '\0') {
        iVar12 = iVar4;
      }
      *(int *)(phVar8 + 0x5c) = iVar12;
      if (hVar1 != (hb_buffer_t)0x0) {
        phVar8[0x5a] = (hb_buffer_t)0x1;
        *(int *)(phVar8 + 100) = iVar12;
      }
      memset(local_438,0,0x400);
      phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
      uVar16 = *(uint *)(phVar8 + 0x5c) - (uint)uVar11;
      uVar5 = extraout_XMM0_Qa_00;
      if (uVar16 < *(uint *)(phVar8 + 0x5c)) {
        pcVar10 = local_438;
        do {
          if (local_438 < pcVar10) {
            *pcVar10 = ',';
            pcVar10 = pcVar10 + 1;
          }
          snprintf(pcVar10,(size_t)(local_38 + -(long)pcVar10),"%u",uVar16);
          sVar7 = strlen(pcVar10);
          pcVar10 = pcVar10 + sVar7;
          uVar16 = uVar16 + 1;
          phVar8 = *(hb_buffer_t **)(param_10 + 0xa0);
          uVar5 = extraout_XMM0_Qa_01;
        } while (uVar16 < *(uint *)(phVar8 + 0x5c));
      }
      hb_buffer_t::message
                (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar8,
                 *(undefined8 *)(param_10 + 0x90),"multiplied glyphs at %s",local_438,param_13,
                 param_14,in_stack_fffffffffffffbb8);
    }
  }
  return;
}


