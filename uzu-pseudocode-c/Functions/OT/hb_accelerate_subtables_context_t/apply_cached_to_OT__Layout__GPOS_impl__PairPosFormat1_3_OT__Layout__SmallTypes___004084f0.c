// Function : apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 004084f0
// Prototype: undefined8 apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 004084f0 - 004084f4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  ushort uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  Coverage *this;
  PairSet<OT::Layout::SmallTypes> *this_00;
  ulong uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  lVar4 = *(long *)(param_2 + 0xa0);
  uVar3 = *(ushort *)(param_1 + 2);
  if (uVar3 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_1);
  }
  uVar13 = *(uint *)(lVar4 + 0x5c);
  uVar12 = (ulong)uVar13;
  uVar6 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(lVar4 + 0x70) + uVar12 * 0x14));
  if (uVar6 != 0xffffffff) {
    *(uint *)(param_2 + 8) = uVar13;
    uVar10 = *(uint *)(param_2 + 0x40);
    if ((int)uVar13 < (int)(uVar10 - 1)) {
      uVar8 = extraout_XMM0_Qa;
      do {
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar13;
        *(uint *)(param_2 + 8) = uVar13;
        lVar14 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_2 + 0x10) + 0xa0) + 0x70);
        uVar3 = *(ushort *)(lVar14 + 0xc + uVar12 * 0x14);
        if (((*(uint *)(param_2 + 0x18) & (uint)uVar3 & 0xe) == 0) &&
           ((puVar1 = (uint *)(lVar14 + uVar12 * 0x14), (uVar3 & 8) == 0 ||
            (uVar16 = hb_ot_apply_context_t::match_properties_mark
                                (*(hb_ot_apply_context_t **)(param_2 + 0x10),*puVar1,(uint)uVar3,
                                 *(uint *)(param_2 + 0x18)), uVar8 = extraout_XMM0_Qa_01,
            (char)uVar16 != '\0')))) {
          lVar2 = lVar14 + uVar12 * 0x14;
          uVar3 = *(ushort *)(lVar14 + 0x10 + uVar12 * 0x14);
          uVar11 = 0;
          bVar9 = false;
          if ((((uVar3 & 0x20) != 0) &&
              ((bVar9 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0 &&
               ((*(char *)(param_2 + 0x20) != '\0' || (bVar9 = false, (uVar3 & 0x21f) != 0x201))))))
             && ((*(char *)(param_2 + 0x21) != '\0' || (bVar9 = false, (uVar3 & 0x11f) != 0x101))))
          {
            bVar9 = (uVar3 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
          }
          puVar7 = *(ushort **)(param_2 + 0x38);
          if (puVar7 != (ushort *)0x0) {
            uVar11 = *puVar7 << 8 | *puVar7 >> 8;
          }
          if (((*(uint *)(lVar14 + 4 + uVar12 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(char *)(param_2 + 0x24) == '\0' ||
              (*(char *)(param_2 + 0x24) == *(char *)(lVar2 + 0xf))))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if (!bVar9) goto LAB_004114d0;
              goto LAB_0041139e;
            }
            cVar5 = (**(code **)(param_2 + 0x28))(puVar1,uVar11,*(undefined8 *)(param_2 + 0x30));
            uVar8 = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              puVar7 = *(ushort **)(param_2 + 0x38);
LAB_004114d0:
              if (puVar7 != (ushort *)0x0) {
                *(ushort **)(param_2 + 0x38) = puVar7 + 1;
              }
              this_00 = (PairSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
              puVar7 = (ushort *)&_hb_NullPool;
              if (uVar6 < (ushort)(*(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8)) {
                puVar7 = (ushort *)(param_1 + (ulong)uVar6 * 2 + 10);
              }
              uVar3 = *puVar7;
              if (uVar3 != 0) {
                this_00 = (PairSet<OT::Layout::SmallTypes> *)
                          ((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_1);
              }
              uVar8 = Layout::GPOS_impl::PairSet<OT::Layout::SmallTypes>::apply
                                (uVar8,in_XMM1_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                 in_XMM7_Qa,this_00,param_2,(ValueFormat *)(param_1 + 4),
                                 *(uint *)(param_2 + 8));
              return uVar8;
            }
          }
          if (!bVar9) {
            uVar10 = *(int *)(param_2 + 8) + 1;
            goto LAB_00411543;
          }
        }
LAB_0041139e:
        uVar12 = (ulong)*(uint *)(param_2 + 8);
      } while ((int)*(uint *)(param_2 + 8) < (int)(uVar10 - 1));
      uVar10 = *(uint *)(param_2 + 0x40);
    }
LAB_00411543:
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar13 = *(uint *)(lVar4 + 0x5c);
      uVar12 = (ulong)uVar13;
      if (*(uint *)(lVar4 + 0x60) < uVar10) {
        uVar10 = *(uint *)(lVar4 + 0x60);
      }
      *(byte *)(lVar4 + 0xc0) = *(byte *)(lVar4 + 0xc0) | 0x20;
      if (uVar13 < uVar10) {
        lVar4 = *(long *)(lVar4 + 0x70);
        uVar16 = ~uVar12;
        if ((uVar10 - uVar13 & 3) != 0) {
          pbVar15 = (byte *)(lVar4 + uVar12 * 0x14 + 4);
          lVar14 = 0;
          do {
            *pbVar15 = *pbVar15 | 2;
            lVar14 = lVar14 + -1;
            pbVar15 = pbVar15 + 0x14;
          } while (-lVar14 != ((ulong)(uVar10 - uVar13) & 3));
          uVar12 = uVar12 - lVar14;
        }
        if (2 < uVar16 + uVar10) {
          lVar14 = uVar10 - uVar12;
          pbVar15 = (byte *)(lVar4 + uVar12 * 0x14 + 0x40);
          do {
            pbVar15[-0x3c] = pbVar15[-0x3c] | 2;
            pbVar15[-0x28] = pbVar15[-0x28] | 2;
            pbVar15[-0x14] = pbVar15[-0x14] | 2;
            *pbVar15 = *pbVar15 | 2;
            pbVar15 = pbVar15 + 0x50;
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
        }
      }
    }
  }
  return 0;
}


