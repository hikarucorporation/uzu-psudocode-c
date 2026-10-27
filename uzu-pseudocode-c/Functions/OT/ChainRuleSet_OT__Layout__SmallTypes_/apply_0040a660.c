// Function : apply
// Namespace: OT:ChainRuleSet_OT__Layout__SmallTypes_
// Entry    : 0040a660
// Prototype: ulong apply(ChainRuleSet<OT::Layout::SmallTypes> * this, long param_1, undefined8 * param_2)
// Body     : 0040a660 - 0040b13f


/* OT::ChainRuleSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ChainContextApplyLookupContext const&) const */

ulong __thiscall
OT::ChainRuleSet<OT::Layout::SmallTypes>::apply
          (ChainRuleSet<OT::Layout::SmallTypes> *this,long param_1,undefined8 *param_2)

{
  ChainRule<OT::Layout::SmallTypes> *pCVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  ushort *puVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  uint *puVar21;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar22;
  ulong uVar23;
  undefined1 uVar24;
  long lVar25;
  hb_ot_apply_context_t *this_00;
  ChainRule<OT::Layout::SmallTypes> *pCVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  uint *puVar30;
  bool bVar31;
  uint local_94;
  long local_88;
  
  uVar19 = *(ushort *)this;
  uVar18 = uVar19 << 8 | uVar19 >> 8;
  uVar29 = (uint)uVar18;
  if (4 < uVar18) {
    if ((*(char *)(param_1 + 0x13d) != '\0') && (*(char *)(param_1 + 0x13e) != '\0')) {
      this_00 = *(hb_ot_apply_context_t **)(param_1 + 0x10);
      uVar9 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x5c);
      uVar13 = (ulong)uVar9;
      *(uint *)(param_1 + 8) = uVar9;
      lVar25 = *(long *)(this_00 + 0xa0);
      iVar28 = *(int *)(lVar25 + 0x60);
      *(int *)(param_1 + 0x40) = iVar28;
      uVar24 = 0;
      if (*(uint *)(lVar25 + 0x5c) == uVar9) {
        uVar24 = *(undefined1 *)(*(long *)(lVar25 + 0x70) + 0xf + uVar13 * 0x14);
      }
      if (*(char *)(param_1 + 0x23) == '\0') {
        uVar24 = 0;
      }
      *(undefined1 *)(param_1 + 0x24) = uVar24;
      *(code **)(param_1 + 0x28) = match_always;
      iVar28 = iVar28 + -1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      if ((int)uVar9 < iVar28) {
        do {
          uVar9 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar9;
          *(uint *)(param_1 + 8) = uVar9;
          lVar25 = *(long *)(lVar25 + 0x70);
          uVar19 = *(ushort *)(lVar25 + 0xc + uVar13 * 0x14);
          if (((*(uint *)(param_1 + 0x18) & (uint)uVar19 & 0xe) == 0) &&
             ((puVar21 = (uint *)(uVar13 * 0x14 + lVar25), (uVar19 & 8) == 0 ||
              (uVar27 = hb_ot_apply_context_t::match_properties_mark
                                  (this_00,*puVar21,(uint)uVar19,*(uint *)(param_1 + 0x18)),
              (char)uVar27 != '\0')))) {
            pbVar11 = (byte *)(uVar13 * 0x14 + 0xc + lVar25);
            uVar19 = *(ushort *)(lVar25 + 0x10 + uVar13 * 0x14);
            uVar17 = 0;
            bVar14 = false;
            if ((((uVar19 & 0x20) != 0) &&
                ((bVar14 = false, (*pbVar11 & 0x10) == 0 &&
                 ((*(char *)(param_1 + 0x20) != '\0' || (bVar14 = false, (uVar19 & 0x21f) != 0x201))
                 )))) && ((*(char *)(param_1 + 0x21) != '\0' ||
                          (bVar14 = false, (uVar19 & 0x11f) != 0x101)))) {
              bVar14 = (uVar19 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
            }
            puVar16 = *(ushort **)(param_1 + 0x38);
            if (puVar16 != (ushort *)0x0) {
              uVar17 = *puVar16 << 8 | *puVar16 >> 8;
            }
            if (((*(uint *)(lVar25 + 4 + uVar13 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
               ((*(byte *)(param_1 + 0x24) == 0 || (*(byte *)(param_1 + 0x24) == pbVar11[3])))) {
              if (*(code **)(param_1 + 0x28) == (code *)0x0) {
                if (bVar14) goto LAB_0040a83e;
              }
              else {
                cVar8 = (**(code **)(param_1 + 0x28))
                                  (puVar21,uVar17,*(undefined8 *)(param_1 + 0x30));
                if (cVar8 == '\0') goto LAB_0040a836;
                puVar16 = *(ushort **)(param_1 + 0x38);
              }
              if (puVar16 != (ushort *)0x0) {
                *(ushort **)(param_1 + 0x38) = puVar16 + 1;
              }
              lVar25 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
              uVar9 = *(uint *)(param_1 + 8);
              uVar13 = (ulong)uVar9;
              uVar19 = *(ushort *)(lVar25 + 0xc + uVar13 * 0x14);
              if ((((*(uint *)(param_1 + 0x18) & (uint)uVar19 & 0xe) != 0) ||
                  ((puVar21 = (uint *)(lVar25 + uVar13 * 0x14), (uVar19 & 8) != 0 &&
                   (uVar27 = hb_ot_apply_context_t::match_properties_mark
                                       (*(hb_ot_apply_context_t **)(param_1 + 0x10),*puVar21,
                                        (uint)uVar19,*(uint *)(param_1 + 0x18)),
                   (char)uVar27 == '\0')))) ||
                 ((((uVar19 = *(ushort *)(lVar25 + 0x10 + uVar13 * 0x14), (uVar19 & 0x20) != 0 &&
                    (((*(byte *)(lVar25 + uVar13 * 0x14 + 0xc) & 0x10) == 0 &&
                     ((*(char *)(param_1 + 0x20) != '\0' || ((uVar19 & 0x21f) != 0x201)))))) &&
                   ((*(char *)(param_1 + 0x21) != '\0' || ((uVar19 & 0x11f) != 0x101)))) &&
                  ((*(char *)(param_1 + 0x22) != '\0' || ((uVar19 & 0x40) == 0))))))
              goto LAB_0040a8ad;
              iVar28 = *(int *)(param_1 + 8);
              iVar2 = *(int *)(param_1 + 0x40);
              goto LAB_0040a9d3;
            }
LAB_0040a836:
            if (!bVar14) goto LAB_0040ab4f;
          }
LAB_0040a83e:
          uVar13 = (ulong)*(uint *)(param_1 + 8);
          if (iVar28 <= (int)*(uint *)(param_1 + 8)) goto LAB_0040ab4f;
          this_00 = *(hb_ot_apply_context_t **)(param_1 + 0x10);
          lVar25 = *(long *)(this_00 + 0xa0);
        } while( true );
      }
      goto LAB_0040ab64;
    }
LAB_0040a8ad:
    uVar19 = *(ushort *)this;
  }
  if (uVar19 == 0) {
    return 0;
  }
  lVar25 = 1;
  while( true ) {
    uVar18 = *(ushort *)(this + lVar25 * 2);
    pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar18 != 0) {
      pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)(this + (ushort)(uVar18 << 8 | uVar18 >> 8));
    }
    uVar13 = ChainRule<OT::Layout::SmallTypes>::apply(pCVar26,param_1,param_2);
    if ((char)uVar13 != '\0') break;
    uVar29 = (uint)lVar25;
    lVar25 = lVar25 + 1;
    if ((ushort)(uVar19 << 8 | uVar19 >> 8) == uVar29) {
      return uVar13;
    }
  }
  return uVar13;
LAB_0040a9d3:
  if (iVar2 + -1 <= iVar28) goto LAB_0040ad35;
  uVar13 = (ulong)(iVar28 + 1U);
  *(uint *)(param_1 + 8) = iVar28 + 1U;
  lVar25 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_1 + 0x10) + 0xa0) + 0x70);
  uVar19 = *(ushort *)(lVar25 + 0xc + uVar13 * 0x14);
  if (((*(uint *)(param_1 + 0x18) & (uint)uVar19 & 0xe) == 0) &&
     ((puVar30 = (uint *)(uVar13 * 0x14 + lVar25), (uVar19 & 8) == 0 ||
      (uVar27 = hb_ot_apply_context_t::match_properties_mark
                          (*(hb_ot_apply_context_t **)(param_1 + 0x10),*puVar30,(uint)uVar19,
                           *(uint *)(param_1 + 0x18)), (char)uVar27 != '\0')))) {
    pbVar11 = (byte *)(uVar13 * 0x14 + 0xc + lVar25);
    uVar19 = *(ushort *)(lVar25 + 0x10 + uVar13 * 0x14);
    uVar17 = 0;
    bVar14 = false;
    if ((((uVar19 & 0x20) != 0) &&
        ((bVar14 = false, (*pbVar11 & 0x10) == 0 &&
         ((*(char *)(param_1 + 0x20) != '\0' || (bVar14 = false, (uVar19 & 0x21f) != 0x201)))))) &&
       ((*(char *)(param_1 + 0x21) != '\0' || (bVar14 = false, (uVar19 & 0x11f) != 0x101)))) {
      bVar14 = (uVar19 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
    }
    puVar16 = *(ushort **)(param_1 + 0x38);
    if (puVar16 != (ushort *)0x0) {
      uVar17 = *puVar16 << 8 | *puVar16 >> 8;
    }
    if (((*(uint *)(lVar25 + 4 + uVar13 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
       ((*(byte *)(param_1 + 0x24) == 0 || (*(byte *)(param_1 + 0x24) == pbVar11[3])))) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        if (bVar14) goto LAB_0040a9cf;
      }
      else {
        cVar8 = (**(code **)(param_1 + 0x28))(puVar30,uVar17,*(undefined8 *)(param_1 + 0x30));
        if (cVar8 == '\0') goto LAB_0040a9c6;
        puVar16 = *(ushort **)(param_1 + 0x38);
      }
      if (puVar16 != (ushort *)0x0) {
        *(ushort **)(param_1 + 0x38) = puVar16 + 1;
      }
      lVar25 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
      uVar13 = (ulong)*(uint *)(param_1 + 8);
      uVar19 = *(ushort *)(lVar25 + 0xc + uVar13 * 0x14);
      if (((*(uint *)(param_1 + 0x18) & (uint)uVar19 & 0xe) != 0) ||
         (((uVar19 & 8) != 0 &&
          (uVar27 = hb_ot_apply_context_t::match_properties_mark
                              (*(hb_ot_apply_context_t **)(param_1 + 0x10),
                               *(uint *)(lVar25 + uVar13 * 0x14),(uint)uVar19,
                               *(uint *)(param_1 + 0x18)), (char)uVar27 == '\0')))) {
        local_88 = 0;
        local_94 = 0;
        goto LAB_0040ad49;
      }
      uVar19 = *(ushort *)(lVar25 + 0x10 + uVar13 * 0x14);
      if (((((uVar19 & 0x20) != 0) && ((*(byte *)(lVar25 + uVar13 * 0x14 + 0xc) & 0x10) == 0)) &&
          ((*(char *)(param_1 + 0x20) != '\0' || ((uVar19 & 0x21f) != 0x201)))) &&
         ((*(char *)(param_1 + 0x21) != '\0' || ((uVar19 & 0x11f) != 0x101)))) {
        local_88 = 0;
        if (*(char *)(param_1 + 0x22) != '\0') {
          local_94 = 0;
          goto LAB_0040ad49;
        }
        local_94 = 0;
        if ((uVar19 & 0x40) == 0) goto LAB_0040ad49;
      }
      local_88 = (ulong)*(uint *)(param_1 + 8) * 0x14 + *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
      local_94 = *(uint *)(param_1 + 8) + 1;
      goto LAB_0040ad49;
    }
LAB_0040a9c6:
    if (!bVar14) goto LAB_0040ad35;
  }
LAB_0040a9cf:
  iVar28 = *(int *)(param_1 + 8);
  goto LAB_0040a9d3;
LAB_0040ad35:
  local_88 = 0;
  local_94 = 0;
LAB_0040ad49:
  pcVar3 = (code *)param_2[1];
  pcVar4 = (code *)param_2[2];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar10 = 1;
  if (1 < uVar18) {
    uVar10 = uVar29;
  }
  uVar15 = 0xffffffff;
  bVar14 = true;
  uVar13 = 1;
  do {
    uVar19 = *(ushort *)(this + uVar13 * 2);
    pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar19 != 0) {
      pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)(this + (ushort)(uVar19 << 8 | uVar19 >> 8));
    }
    uVar27 = (ulong)(ushort)(*(ushort *)pCVar26 << 8 | *(ushort *)pCVar26 >> 8);
    uVar19 = *(ushort *)(pCVar26 + uVar27 * 2 + 2);
    uVar18 = uVar19 << 8 | uVar19 >> 8;
    lVar25 = (ulong)uVar18 * 2;
    if (uVar19 == 0) {
      lVar25 = 2;
    }
    pCVar1 = pCVar26 + lVar25 + 2 + uVar27 * 2;
    if (uVar19 == 0) {
      uVar18 = 1;
    }
    if (uVar18 < 2) {
      if (((*(ushort *)pCVar1 != 0) && (pcVar4 != (code *)0x0)) &&
         (cVar8 = (*pcVar4)(puVar21,*(ushort *)(pCVar1 + 2) << 8 | *(ushort *)(pCVar1 + 2) >> 8,
                            uVar6), cVar8 == '\0')) goto LAB_0040af30;
LAB_0040aee0:
      if (local_88 != 0) {
        if (uVar18 < 3) {
          if ((2 - uVar18 < (uint)(ushort)(*(ushort *)pCVar1 << 8 | *(ushort *)pCVar1 >> 8)) &&
             (pcVar4 != (code *)0x0)) {
            cVar8 = (*pcVar4)(local_88,*(ushort *)(pCVar1 + (ulong)(2 - uVar18) * 2 + 2) << 8 |
                                       *(ushort *)(pCVar1 + (ulong)(2 - uVar18) * 2 + 2) >> 8,uVar6)
            ;
            goto joined_r0x0040af8e;
          }
        }
        else if (pcVar3 != (code *)0x0) {
          cVar8 = (*pcVar3)(local_88,*(ushort *)(pCVar26 + uVar27 * 2 + 6) << 8 |
                                     *(ushort *)(pCVar26 + uVar27 * 2 + 6) >> 8,uVar5);
joined_r0x0040af8e:
          uVar7 = local_94;
          if (cVar8 == '\0') goto LAB_0040adca;
        }
      }
      uVar27 = ChainRule<OT::Layout::SmallTypes>::apply(pCVar26,param_1,param_2);
      uVar7 = uVar15;
      if ((char)uVar27 != '\0') {
        uVar13 = CONCAT71((int7)(uVar27 >> 8),1);
        if (uVar15 == 0xffffffff) {
          return uVar13;
        }
        lVar25 = *(long *)(param_1 + 0xa0);
        if ((*(byte *)(lVar25 + 0x18) & 0x40) == 0) {
          return uVar13;
        }
        uVar29 = *(uint *)(lVar25 + 0x5c);
        uVar27 = (ulong)uVar29;
        uVar9 = *(uint *)(lVar25 + 0x60);
        if (uVar15 <= *(uint *)(lVar25 + 0x60)) {
          uVar9 = uVar15;
        }
        *(byte *)(lVar25 + 0xc0) = *(byte *)(lVar25 + 0xc0) | 0x20;
        if (uVar9 <= uVar29) {
          return uVar13;
        }
        lVar25 = *(long *)(lVar25 + 0x70);
        uVar23 = ~uVar27;
        if ((uVar9 - uVar29 & 3) != 0) {
          pbVar11 = (byte *)(lVar25 + uVar27 * 0x14 + 4);
          lVar20 = 0;
          do {
            *pbVar11 = *pbVar11 | 2;
            lVar20 = lVar20 + -1;
            pbVar11 = pbVar11 + 0x14;
          } while (-lVar20 != ((ulong)(uVar9 - uVar29) & 3));
          uVar27 = uVar27 - lVar20;
        }
        if (2 < uVar23 + uVar9) {
          lVar20 = uVar9 - uVar27;
          pbVar11 = (byte *)(lVar25 + uVar27 * 0x14 + 0x40);
          do {
            pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
            pbVar11[-0x28] = pbVar11[-0x28] | 2;
            pbVar11[-0x14] = pbVar11[-0x14] | 2;
            *pbVar11 = *pbVar11 | 2;
            pbVar11 = pbVar11 + 0x50;
            lVar20 = lVar20 + -4;
          } while (lVar20 != 0);
        }
        if (bVar14) {
          return uVar13;
        }
LAB_0040b045:
        if (uVar15 == 0xffffffff) {
          return 0;
        }
        lVar25 = *(long *)(param_1 + 0xa0);
        if ((*(byte *)(lVar25 + 0x18) & 0x40) == 0) {
          return 0;
        }
        uVar29 = *(uint *)(lVar25 + 0x5c);
        uVar13 = (ulong)uVar29;
        if (*(uint *)(lVar25 + 0x60) < uVar15) {
          uVar15 = *(uint *)(lVar25 + 0x60);
        }
        *(byte *)(lVar25 + 0xc0) = *(byte *)(lVar25 + 0xc0) | 0x20;
        if (uVar15 <= uVar29) {
          return 0;
        }
        lVar25 = *(long *)(lVar25 + 0x70);
        uVar27 = ~uVar13;
        if ((uVar15 - uVar29 & 3) != 0) {
          pbVar11 = (byte *)(lVar25 + uVar13 * 0x14 + 4);
          lVar20 = 0;
          do {
            *pbVar11 = *pbVar11 | 2;
            lVar20 = lVar20 + -1;
            pbVar11 = pbVar11 + 0x14;
          } while (-lVar20 != ((ulong)(uVar15 - uVar29) & 3));
          uVar13 = uVar13 - lVar20;
        }
        if (uVar27 + uVar15 < 3) {
          return 0;
        }
        lVar20 = uVar15 - uVar13;
        pbVar11 = (byte *)(lVar25 + uVar13 * 0x14 + 0x40);
        do {
          pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
          pbVar11[-0x28] = pbVar11[-0x28] | 2;
          pbVar11[-0x14] = pbVar11[-0x14] | 2;
          *pbVar11 = *pbVar11 | 2;
          pbVar11 = pbVar11 + 0x50;
          lVar20 = lVar20 + -4;
        } while (lVar20 != 0);
        return 0;
      }
    }
    else {
      if ((pcVar3 == (code *)0x0) ||
         (cVar8 = (*pcVar3)(puVar21,*(ushort *)(pCVar26 + uVar27 * 2 + 4) << 8 |
                                    *(ushort *)(pCVar26 + uVar27 * 2 + 4) >> 8,uVar5), cVar8 != '\0'
         )) goto LAB_0040aee0;
LAB_0040af30:
      uVar7 = uVar15;
      if (uVar15 == 0xffffffff) {
        uVar7 = uVar9 + 1;
      }
    }
LAB_0040adca:
    uVar15 = uVar7;
    bVar14 = uVar13 < uVar29;
    bVar31 = uVar13 == uVar10;
    uVar13 = uVar13 + 1;
    if (bVar31) goto LAB_0040b045;
  } while( true );
LAB_0040ab4f:
  uVar19 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  uVar29 = (uint)uVar19;
  if (uVar19 == 0) {
    return 0;
  }
LAB_0040ab64:
  pCVar22 = this;
  do {
    pCVar22 = pCVar22 + 2;
    uVar19 = *(ushort *)pCVar22;
    pCVar12 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar19 != 0) {
      pCVar12 = this + (ushort)(uVar19 << 8 | uVar19 >> 8);
    }
    uVar13 = (ulong)(ushort)(*(ushort *)pCVar12 << 8 | *(ushort *)pCVar12 >> 8);
    uVar19 = *(ushort *)(pCVar12 + uVar13 * 2 + 2);
    uVar18 = uVar19 << 8 | uVar19 >> 8;
    if (uVar18 < 2) {
      lVar25 = (ulong)uVar18 * 2;
      if (uVar19 == 0) {
        lVar25 = 2;
      }
      if (*(short *)(pCVar12 + lVar25 + uVar13 * 2 + 2) == 0) {
        if (uVar29 == 0) {
          return 0;
        }
        uVar19 = *(ushort *)pCVar22;
LAB_0040abf8:
        pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)&_hb_NullPool;
        if (uVar19 != 0) {
          pCVar26 = (ChainRule<OT::Layout::SmallTypes> *)
                    (this + (ushort)(uVar19 << 8 | uVar19 >> 8));
        }
        uVar13 = ChainRule<OT::Layout::SmallTypes>::apply(pCVar26,param_1,param_2);
        if ((char)uVar13 != '\0') {
          return uVar13;
        }
        uVar29 = uVar29 - 1;
        if (uVar29 == 0) {
          return uVar13;
        }
        do {
          pCVar22 = pCVar22 + 2;
          uVar19 = *(ushort *)pCVar22;
          pCVar12 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
          if (uVar19 != 0) {
            pCVar12 = this + (ushort)(uVar19 << 8 | uVar19 >> 8);
          }
          uVar13 = (ulong)(ushort)(*(ushort *)pCVar12 << 8 | *(ushort *)pCVar12 >> 8);
          uVar18 = *(ushort *)(pCVar12 + uVar13 * 2 + 2);
          uVar17 = uVar18 << 8 | uVar18 >> 8;
          if (uVar17 < 2) {
            lVar25 = (ulong)uVar17 * 2;
            if (uVar18 == 0) {
              lVar25 = 2;
            }
            if (*(short *)(pCVar12 + lVar25 + uVar13 * 2 + 2) == 0) goto LAB_0040abf8;
          }
          uVar29 = uVar29 - 1;
          if (uVar29 == 0) {
            return 0;
          }
        } while( true );
      }
    }
    uVar29 = uVar29 - 1;
    if (uVar29 == 0) {
      return 0;
    }
  } while( true );
}


