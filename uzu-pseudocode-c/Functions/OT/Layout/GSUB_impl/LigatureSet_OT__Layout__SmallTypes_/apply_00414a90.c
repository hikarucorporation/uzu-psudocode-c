// Function : apply
// Namespace: OT:Layout:GSUB_impl:LigatureSet_OT__Layout__SmallTypes_
// Entry    : 00414a90
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, LigatureSet<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_10)
// Body     : 00414a90 - 00414fd5


/* OT::Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          LigatureSet<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_10)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  hb_ot_apply_context_t hVar16;
  uint uVar17;
  Ligature<OT::Layout::SmallTypes> *pLVar18;
  byte *pbVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  uVar2 = *(ushort *)this;
  uVar4 = uVar2 << 8 | uVar2 >> 8;
  uVar5 = (uint)uVar4;
  if (4 < uVar4) {
    lVar6 = *(long *)(param_10 + 0x10);
    uVar10 = *(uint *)(*(long *)(param_10 + 0xa0) + 0x5c);
    uVar20 = (ulong)uVar10;
    *(uint *)(param_10 + 8) = uVar10;
    lVar14 = *(long *)(lVar6 + 0xa0);
    iVar13 = *(int *)(lVar14 + 0x60);
    *(int *)(param_10 + 0x40) = iVar13;
    hVar16 = (hb_ot_apply_context_t)0x0;
    if (*(uint *)(lVar14 + 0x5c) == uVar10) {
      hVar16 = *(hb_ot_apply_context_t *)(*(long *)(lVar14 + 0x70) + 0xf + uVar20 * 0x14);
    }
    if (param_10[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar16 = (hb_ot_apply_context_t)0x0;
    }
    param_10[0x24] = hVar16;
    *(code **)(param_10 + 0x28) = match_always;
    iVar13 = iVar13 + -1;
    uVar23 = 0;
    uVar24 = 0;
    *(undefined8 *)(param_10 + 0x30) = 0;
    *(undefined8 *)(param_10 + 0x38) = 0;
    param_1_00 = 0;
    if ((int)uVar10 < iVar13) {
      do {
        uVar10 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar10;
        *(uint *)(param_10 + 8) = uVar10;
        lVar14 = *(long *)(lVar14 + 0x70);
        uVar10 = *(uint *)(param_10 + 0x18);
        uVar4 = *(ushort *)(lVar14 + 0xc + uVar20 * 0x14);
        if ((uVar10 & uVar4 & 0xe) != 0) goto LAB_00414c3d;
        puVar1 = (uint *)(lVar14 + uVar20 * 0x14);
        if ((uVar4 & 8) == 0) {
LAB_00414b71:
          lVar6 = lVar14 + uVar20 * 0x14;
          uVar4 = *(ushort *)(lVar14 + 0x10 + uVar20 * 0x14);
          uVar12 = 0;
          bVar9 = false;
          if (((((uVar4 & 0x20) != 0) && (bVar9 = false, (*(byte *)(lVar6 + 0xc) & 0x10) == 0)) &&
              ((param_10[0x20] != (hb_ot_apply_context_t)0x0 ||
               (bVar9 = false, (uVar4 & 0x21f) != 0x201)))) &&
             ((param_10[0x21] != (hb_ot_apply_context_t)0x0 ||
              (bVar9 = false, (uVar4 & 0x11f) != 0x101)))) {
            bVar9 = (uVar4 & 0x40) == 0 || param_10[0x22] != (hb_ot_apply_context_t)0x0;
          }
          puVar11 = *(ushort **)(param_10 + 0x38);
          if (puVar11 != (ushort *)0x0) {
            uVar12 = *puVar11 << 8 | *puVar11 >> 8;
          }
          if (((*(uint *)(lVar14 + 4 + uVar20 * 0x14) & *(uint *)(param_10 + 0x1c)) != 0) &&
             ((param_10[0x24] == (hb_ot_apply_context_t)0x0 ||
              (param_10[0x24] == *(hb_ot_apply_context_t *)(lVar6 + 0xf))))) {
            if (*(code **)(param_10 + 0x28) == (code *)0x0) {
              if (bVar9) goto LAB_00414c3d;
            }
            else {
              cVar3 = (**(code **)(param_10 + 0x28))(puVar1,uVar12,*(undefined8 *)(param_10 + 0x30))
              ;
              uVar23 = extraout_XMM0_Da;
              uVar24 = extraout_XMM0_Db;
              if (cVar3 == '\0') goto LAB_00414c34;
              puVar11 = *(ushort **)(param_10 + 0x38);
            }
            if (puVar11 != (ushort *)0x0) {
              *(ushort **)(param_10 + 0x38) = puVar11 + 1;
            }
            lVar6 = *(long *)(*(long *)(param_10 + 0xa0) + 0x70);
            uVar10 = *(uint *)(param_10 + 8);
            uVar20 = (ulong)uVar10;
            uVar4 = *(ushort *)(lVar6 + 0xc + uVar20 * 0x14);
            param_1_00 = CONCAT44(uVar24,uVar23);
            if ((*(uint *)(param_10 + 0x18) & (uint)uVar4 & 0xe) != 0) break;
            uVar17 = *(uint *)(lVar6 + uVar20 * 0x14);
            if ((uVar4 & 8) != 0) {
              uVar15 = hb_ot_apply_context_t::match_properties_mark
                                 (*(hb_ot_apply_context_t **)(param_10 + 0x10),uVar17,(uint)uVar4,
                                  *(uint *)(param_10 + 0x18));
              param_1_00 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
              uVar23 = extraout_XMM0_Da_03;
              uVar24 = extraout_XMM0_Db_03;
              if ((char)uVar15 == '\0') break;
            }
            uVar4 = *(ushort *)(lVar6 + 0x10 + uVar20 * 0x14);
            if (((((uVar4 & 0x20) == 0) || ((*(byte *)(lVar6 + uVar20 * 0x14 + 0xc) & 0x10) != 0))
                || ((param_10[0x20] == (hb_ot_apply_context_t)0x0 && ((uVar4 & 0x21f) == 0x201))))
               || (((param_10[0x21] == (hb_ot_apply_context_t)0x0 && ((uVar4 & 0x11f) == 0x101)) ||
                   ((param_1_00 = CONCAT44(uVar24,uVar23),
                    param_10[0x22] == (hb_ot_apply_context_t)0x0 &&
                    (param_1_00 = CONCAT44(uVar24,uVar23), (uVar4 & 0x40) != 0)))))) {
              uVar10 = uVar10 + 1;
              uVar20 = 1;
              if (1 < uVar5) {
                uVar20 = (ulong)uVar5;
              }
              bVar21 = true;
              bVar9 = false;
              uVar15 = 1;
              goto LAB_00414dfa;
            }
            break;
          }
LAB_00414c34:
          param_1_00 = CONCAT44(uVar24,uVar23);
          if (!bVar9) break;
        }
        else if ((uVar10 & 0x10) == 0) {
          if (((uVar10 & 0xff00) == 0) || ((uVar10 & 0xff00) == (uVar4 & 0xff00)))
          goto LAB_00414b71;
        }
        else {
          uVar7 = GDEF::accelerator_t::mark_set_covers
                            (*(accelerator_t **)(lVar6 + 0xf8),uVar10 >> 0x10,*puVar1);
          uVar23 = extraout_XMM0_Da_00;
          uVar24 = extraout_XMM0_Db_00;
          if ((char)uVar7 != '\0') goto LAB_00414b71;
        }
LAB_00414c3d:
        uVar20 = (ulong)*(uint *)(param_10 + 8);
        param_1_00 = CONCAT44(uVar24,uVar23);
        if (iVar13 <= (int)*(uint *)(param_10 + 8)) break;
        lVar6 = *(long *)(param_10 + 0x10);
        lVar14 = *(long *)(lVar6 + 0xa0);
      } while( true );
    }
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar20 = 1;
  if (1 < uVar5) {
    uVar20 = (ulong)uVar5;
  }
  uVar15 = 1;
  while( true ) {
    uVar2 = *(ushort *)(this + uVar15 * 2);
    pLVar18 = (Ligature<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar2 != 0) {
      pLVar18 = (Ligature<OT::Layout::SmallTypes> *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    uVar8 = Ligature<OT::Layout::SmallTypes>::apply
                      (param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pLVar18,
                       param_10);
    param_1_00 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    if ((char)uVar8 != '\0') break;
    bVar9 = uVar20 == uVar15;
    uVar15 = uVar15 + 1;
    if (bVar9) {
      return uVar8;
    }
  }
  return uVar8;
LAB_00414dfa:
  uVar2 = *(ushort *)(this + uVar15 * 2);
  pLVar18 = (Ligature<OT::Layout::SmallTypes> *)&_hb_NullPool;
  if (uVar2 != 0) {
    pLVar18 = (Ligature<OT::Layout::SmallTypes> *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  if (((1 < (ushort)(*(ushort *)(pLVar18 + 2) << 8 | *(ushort *)(pLVar18 + 2) >> 8)) &&
      (bVar22 = true,
      uVar17 != (ushort)(*(ushort *)(pLVar18 + 4) << 8 | *(ushort *)(pLVar18 + 4) >> 8))) ||
     (uVar8 = Ligature<OT::Layout::SmallTypes>::apply
                        (CONCAT44(uVar24,uVar23),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,pLVar18,param_10), uVar23 = extraout_XMM0_Da_02,
     uVar24 = extraout_XMM0_Db_02, bVar22 = bVar9, (char)uVar8 == '\0')) goto LAB_00414de0;
  uVar20 = CONCAT71((int7)(uVar8 >> 8),1);
  if (!bVar9) {
    return uVar20;
  }
  lVar6 = *(long *)(param_10 + 0xa0);
  if ((*(byte *)(lVar6 + 0x18) & 0x40) == 0) {
    return uVar20;
  }
  uVar5 = *(uint *)(lVar6 + 0x5c);
  uVar15 = (ulong)uVar5;
  uVar17 = *(uint *)(lVar6 + 0x60);
  if (uVar10 <= *(uint *)(lVar6 + 0x60)) {
    uVar17 = uVar10;
  }
  *(byte *)(lVar6 + 0xc0) = *(byte *)(lVar6 + 0xc0) | 0x20;
  if (uVar17 <= uVar5) {
    return uVar20;
  }
  lVar6 = *(long *)(lVar6 + 0x70);
  uVar8 = ~uVar15;
  if ((uVar17 - uVar5 & 3) != 0) {
    pbVar19 = (byte *)(lVar6 + uVar15 * 0x14 + 4);
    lVar14 = 0;
    do {
      *pbVar19 = *pbVar19 | 2;
      lVar14 = lVar14 + -1;
      pbVar19 = pbVar19 + 0x14;
    } while (-lVar14 != ((ulong)(uVar17 - uVar5) & 3));
    uVar15 = uVar15 - lVar14;
  }
  if (2 < uVar8 + uVar17) {
    lVar14 = uVar17 - uVar15;
    pbVar19 = (byte *)(lVar6 + uVar15 * 0x14 + 0x40);
    do {
      pbVar19[-0x3c] = pbVar19[-0x3c] | 2;
      pbVar19[-0x28] = pbVar19[-0x28] | 2;
      pbVar19[-0x14] = pbVar19[-0x14] | 2;
      *pbVar19 = *pbVar19 | 2;
      pbVar19 = pbVar19 + 0x50;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
  }
  if (bVar21) {
    return uVar20;
  }
  goto LAB_00414e53;
LAB_00414de0:
  bVar9 = bVar22;
  bVar21 = uVar15 < uVar5;
  bVar22 = uVar15 == uVar20;
  uVar15 = uVar15 + 1;
  if (bVar22) {
    if (bVar9) {
LAB_00414e53:
      lVar6 = *(long *)(param_10 + 0xa0);
      if ((*(byte *)(lVar6 + 0x18) & 0x40) != 0) {
        uVar5 = *(uint *)(lVar6 + 0x5c);
        uVar20 = (ulong)uVar5;
        if (*(uint *)(lVar6 + 0x60) < uVar10) {
          uVar10 = *(uint *)(lVar6 + 0x60);
        }
        *(byte *)(lVar6 + 0xc0) = *(byte *)(lVar6 + 0xc0) | 0x20;
        if (uVar5 < uVar10) {
          lVar6 = *(long *)(lVar6 + 0x70);
          uVar15 = ~uVar20;
          if ((uVar10 - uVar5 & 3) != 0) {
            pbVar19 = (byte *)(lVar6 + uVar20 * 0x14 + 4);
            lVar14 = 0;
            do {
              *pbVar19 = *pbVar19 | 2;
              lVar14 = lVar14 + -1;
              pbVar19 = pbVar19 + 0x14;
            } while (-lVar14 != ((ulong)(uVar10 - uVar5) & 3));
            uVar20 = uVar20 - lVar14;
          }
          if (2 < uVar15 + uVar10) {
            lVar14 = uVar10 - uVar20;
            pbVar19 = (byte *)(lVar6 + uVar20 * 0x14 + 0x40);
            do {
              pbVar19[-0x3c] = pbVar19[-0x3c] | 2;
              pbVar19[-0x28] = pbVar19[-0x28] | 2;
              pbVar19[-0x14] = pbVar19[-0x14] | 2;
              *pbVar19 = *pbVar19 | 2;
              pbVar19 = pbVar19 + 0x50;
              lVar14 = lVar14 + -4;
            } while (lVar14 != 0);
            return 0;
          }
        }
      }
    }
    return 0;
  }
  goto LAB_00414dfa;
}


