// Function : apply
// Namespace: OT:Layout:GPOS_impl:PairPosFormat1_3_OT__Layout__SmallTypes_
// Entry    : 004112f0
// Prototype: undefined8 apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, PairPosFormat1_3<OT::Layout::SmallTypes> * this, long param_10)
// Body     : 004112f0 - 004115d9


/* OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

undefined8 __thiscall
OT::Layout::GPOS_impl::PairPosFormat1_3<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          PairPosFormat1_3<OT::Layout::SmallTypes> *this,long param_10)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  PairPosFormat1_3<OT::Layout::SmallTypes> *pPVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  ushort *puVar11;
  ushort uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  Coverage *this_00;
  PairSet<OT::Layout::SmallTypes> *this_01;
  ulong uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  lVar4 = *(long *)(param_10 + 0xa0);
  uVar3 = *(ushort *)(this + 2);
  if (uVar3 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar14 = *(uint *)(lVar4 + 0x5c);
  uVar13 = (ulong)uVar14;
  uVar6 = Common::Coverage::get_coverage(this_00,*(uint *)(*(long *)(lVar4 + 0x70) + uVar13 * 0x14))
  ;
  if (uVar6 != 0xffffffff) {
    *(uint *)(param_10 + 8) = uVar14;
    uVar10 = *(uint *)(param_10 + 0x40);
    if ((int)uVar14 < (int)(uVar10 - 1)) {
      uVar8 = extraout_XMM0_Qa;
      do {
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar14;
        *(uint *)(param_10 + 8) = uVar14;
        lVar15 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_10 + 0x10) + 0xa0) + 0x70);
        uVar3 = *(ushort *)(lVar15 + 0xc + uVar13 * 0x14);
        if (((*(uint *)(param_10 + 0x18) & (uint)uVar3 & 0xe) == 0) &&
           ((puVar1 = (uint *)(lVar15 + uVar13 * 0x14), (uVar3 & 8) == 0 ||
            (uVar17 = hb_ot_apply_context_t::match_properties_mark
                                (*(hb_ot_apply_context_t **)(param_10 + 0x10),*puVar1,(uint)uVar3,
                                 *(uint *)(param_10 + 0x18)), uVar8 = extraout_XMM0_Qa_01,
            (char)uVar17 != '\0')))) {
          lVar2 = lVar15 + uVar13 * 0x14;
          uVar3 = *(ushort *)(lVar15 + 0x10 + uVar13 * 0x14);
          uVar12 = 0;
          bVar9 = false;
          if ((((uVar3 & 0x20) != 0) &&
              ((bVar9 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0 &&
               ((*(char *)(param_10 + 0x20) != '\0' || (bVar9 = false, (uVar3 & 0x21f) != 0x201)))))
              ) && ((*(char *)(param_10 + 0x21) != '\0' || (bVar9 = false, (uVar3 & 0x11f) != 0x101)
                    ))) {
            bVar9 = (uVar3 & 0x40) == 0 || *(char *)(param_10 + 0x22) != '\0';
          }
          puVar11 = *(ushort **)(param_10 + 0x38);
          if (puVar11 != (ushort *)0x0) {
            uVar12 = *puVar11 << 8 | *puVar11 >> 8;
          }
          if (((*(uint *)(lVar15 + 4 + uVar13 * 0x14) & *(uint *)(param_10 + 0x1c)) != 0) &&
             ((*(char *)(param_10 + 0x24) == '\0' ||
              (*(char *)(param_10 + 0x24) == *(char *)(lVar2 + 0xf))))) {
            if (*(code **)(param_10 + 0x28) == (code *)0x0) {
              if (!bVar9) goto LAB_004114d0;
              goto LAB_0041139e;
            }
            cVar5 = (**(code **)(param_10 + 0x28))(puVar1,uVar12,*(undefined8 *)(param_10 + 0x30));
            uVar8 = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              puVar11 = *(ushort **)(param_10 + 0x38);
LAB_004114d0:
              if (puVar11 != (ushort *)0x0) {
                *(ushort **)(param_10 + 0x38) = puVar11 + 1;
              }
              this_01 = (PairSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
              pPVar7 = (PairPosFormat1_3<OT::Layout::SmallTypes> *)&_hb_NullPool;
              if (uVar6 < (ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)) {
                pPVar7 = this + (ulong)uVar6 * 2 + 10;
              }
              uVar3 = *(ushort *)pPVar7;
              if (uVar3 != 0) {
                this_01 = (PairSet<OT::Layout::SmallTypes> *)
                          (this + (ushort)(uVar3 << 8 | uVar3 >> 8));
              }
              uVar8 = PairSet<OT::Layout::SmallTypes>::apply
                                (uVar8,param_2,param_4,param_5,param_6,param_7,param_8,this_01,
                                 param_10,(ValueFormat *)(this + 4),*(uint *)(param_10 + 8));
              return uVar8;
            }
          }
          if (!bVar9) {
            uVar10 = *(int *)(param_10 + 8) + 1;
            goto LAB_00411543;
          }
        }
LAB_0041139e:
        uVar13 = (ulong)*(uint *)(param_10 + 8);
      } while ((int)*(uint *)(param_10 + 8) < (int)(uVar10 - 1));
      uVar10 = *(uint *)(param_10 + 0x40);
    }
LAB_00411543:
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar14 = *(uint *)(lVar4 + 0x5c);
      uVar13 = (ulong)uVar14;
      if (*(uint *)(lVar4 + 0x60) < uVar10) {
        uVar10 = *(uint *)(lVar4 + 0x60);
      }
      *(byte *)(lVar4 + 0xc0) = *(byte *)(lVar4 + 0xc0) | 0x20;
      if (uVar14 < uVar10) {
        lVar4 = *(long *)(lVar4 + 0x70);
        uVar17 = ~uVar13;
        if ((uVar10 - uVar14 & 3) != 0) {
          pbVar16 = (byte *)(lVar4 + uVar13 * 0x14 + 4);
          lVar15 = 0;
          do {
            *pbVar16 = *pbVar16 | 2;
            lVar15 = lVar15 + -1;
            pbVar16 = pbVar16 + 0x14;
          } while (-lVar15 != ((ulong)(uVar10 - uVar14) & 3));
          uVar13 = uVar13 - lVar15;
        }
        if (2 < uVar17 + uVar10) {
          lVar15 = uVar10 - uVar13;
          pbVar16 = (byte *)(lVar4 + uVar13 * 0x14 + 0x40);
          do {
            pbVar16[-0x3c] = pbVar16[-0x3c] | 2;
            pbVar16[-0x28] = pbVar16[-0x28] | 2;
            pbVar16[-0x14] = pbVar16[-0x14] | 2;
            *pbVar16 = *pbVar16 | 2;
            pbVar16 = pbVar16 + 0x50;
            lVar15 = lVar15 + -4;
          } while (lVar15 != 0);
        }
      }
    }
  }
  return 0;
}


