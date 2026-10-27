// Function : apply
// Namespace: OT:RuleSet_OT__Layout__SmallTypes_
// Entry    : 0040ca80
// Prototype: undefined8 apply(RuleSet<OT::Layout::SmallTypes> * this, long param_1, undefined8 * param_2)
// Body     : 0040ca80 - 0040d3ff


/* OT::RuleSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ContextApplyLookupContext const&) const */

undefined8 __thiscall
OT::RuleSet<OT::Layout::SmallTypes>::apply
          (RuleSet<OT::Layout::SmallTypes> *this,long param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  RuleSet<OT::Layout::SmallTypes> *pRVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  long lVar18;
  int iVar19;
  RuleSet<OT::Layout::SmallTypes> *pRVar20;
  undefined1 uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  bool bVar25;
  uint local_6c;
  long local_68;
  
  uVar13 = *(ushort *)this;
  uVar17 = uVar13 << 8 | uVar13 >> 8;
  if (uVar17 < 5) {
LAB_0040ccd0:
    if (uVar13 == 0) {
      return 0;
    }
    lVar6 = 1;
    while( true ) {
      uVar17 = *(ushort *)(this + lVar6 * 2);
      pRVar20 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
      if (uVar17 != 0) {
        pRVar20 = this + (ushort)(uVar17 << 8 | uVar17 >> 8);
      }
      uVar9 = Rule<OT::Layout::SmallTypes>::apply((ushort *)pRVar20,param_1,*param_2,param_2[1]);
      if ((char)uVar9 != '\0') break;
      uVar16 = (uint)lVar6;
      lVar6 = lVar6 + 1;
      if ((ushort)(uVar13 << 8 | uVar13 >> 8) == uVar16) {
        return uVar9;
      }
    }
    return uVar9;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar16 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x5c);
  uVar11 = (ulong)uVar16;
  *(uint *)(param_1 + 8) = uVar16;
  lVar18 = *(long *)(lVar6 + 0xa0);
  iVar19 = *(int *)(lVar18 + 0x60);
  *(int *)(param_1 + 0x40) = iVar19;
  uVar21 = 0;
  if (*(uint *)(lVar18 + 0x5c) == uVar16) {
    uVar21 = *(undefined1 *)(*(long *)(lVar18 + 0x70) + 0xf + uVar11 * 0x14);
  }
  if (*(char *)(param_1 + 0x23) == '\0') {
    uVar21 = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar21;
  *(code **)(param_1 + 0x28) = match_always;
  iVar19 = iVar19 + -1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((int)uVar16 < iVar19) {
    do {
      uVar16 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar16;
      *(uint *)(param_1 + 8) = uVar16;
      lVar18 = *(long *)(lVar18 + 0x70);
      uVar16 = *(uint *)(param_1 + 0x18);
      uVar13 = *(ushort *)(lVar18 + 0xc + uVar11 * 0x14);
      if ((uVar16 & uVar13 & 0xe) != 0) goto LAB_0040cc2e;
      puVar1 = (uint *)(lVar18 + uVar11 * 0x14);
      if ((uVar13 & 8) == 0) {
LAB_0040cb63:
        lVar6 = lVar18 + uVar11 * 0x14;
        uVar13 = *(ushort *)(lVar18 + 0x10 + uVar11 * 0x14);
        uVar15 = 0;
        bVar12 = false;
        if (((((uVar13 & 0x20) != 0) && (bVar12 = false, (*(byte *)(lVar6 + 0xc) & 0x10) == 0)) &&
            ((*(char *)(param_1 + 0x20) != '\0' || (bVar12 = false, (uVar13 & 0x21f) != 0x201)))) &&
           ((*(char *)(param_1 + 0x21) != '\0' || (bVar12 = false, (uVar13 & 0x11f) != 0x101)))) {
          bVar12 = (uVar13 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
        }
        puVar14 = *(ushort **)(param_1 + 0x38);
        if (puVar14 != (ushort *)0x0) {
          uVar15 = *puVar14 << 8 | *puVar14 >> 8;
        }
        if (((*(uint *)(lVar18 + 4 + uVar11 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
           ((*(char *)(param_1 + 0x24) == '\0' ||
            (*(char *)(param_1 + 0x24) == *(char *)(lVar6 + 0xf))))) {
          if (*(code **)(param_1 + 0x28) == (code *)0x0) {
            if (bVar12) goto LAB_0040cc2e;
          }
          else {
            cVar4 = (**(code **)(param_1 + 0x28))(puVar1,uVar15,*(undefined8 *)(param_1 + 0x30));
            if (cVar4 == '\0') goto LAB_0040cc26;
            puVar14 = *(ushort **)(param_1 + 0x38);
          }
          if (puVar14 != (ushort *)0x0) {
            *(ushort **)(param_1 + 0x38) = puVar14 + 1;
          }
          lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
          uVar16 = *(uint *)(param_1 + 8);
          uVar11 = (ulong)uVar16;
          uVar13 = *(ushort *)(lVar6 + 0xc + uVar11 * 0x14);
          if ((((*(uint *)(param_1 + 0x18) & (uint)uVar13 & 0xe) != 0) ||
              ((puVar1 = (uint *)(lVar6 + uVar11 * 0x14), (uVar13 & 8) != 0 &&
               (uVar23 = hb_ot_apply_context_t::match_properties_mark
                                   (*(hb_ot_apply_context_t **)(param_1 + 0x10),*puVar1,(uint)uVar13
                                    ,*(uint *)(param_1 + 0x18)), (char)uVar23 == '\0')))) ||
             ((((uVar13 = *(ushort *)(lVar6 + 0x10 + uVar11 * 0x14), (uVar13 & 0x20) != 0 &&
                (((*(byte *)(lVar6 + uVar11 * 0x14 + 0xc) & 0x10) == 0 &&
                 ((*(char *)(param_1 + 0x20) != '\0' || ((uVar13 & 0x21f) != 0x201)))))) &&
               ((*(char *)(param_1 + 0x21) != '\0' || ((uVar13 & 0x11f) != 0x101)))) &&
              ((*(char *)(param_1 + 0x22) != '\0' || ((uVar13 & 0x40) == 0)))))) {
            uVar13 = *(ushort *)this;
            goto LAB_0040ccd0;
          }
          iVar19 = *(int *)(param_1 + 8);
          iVar2 = *(int *)(param_1 + 0x40);
          goto LAB_0040cdea;
        }
LAB_0040cc26:
        if (!bVar12) goto LAB_0040cf6e;
      }
      else if ((uVar16 & 0x10) == 0) {
        if (((uVar16 & 0xff00) == 0) || ((uVar16 & 0xff00) == (uVar13 & 0xff00))) goto LAB_0040cb63;
      }
      else {
        uVar9 = GDEF::accelerator_t::mark_set_covers
                          (*(accelerator_t **)(lVar6 + 0xf8),uVar16 >> 0x10,*puVar1);
        if ((char)uVar9 != '\0') goto LAB_0040cb63;
      }
LAB_0040cc2e:
      uVar11 = (ulong)*(uint *)(param_1 + 8);
      if (iVar19 <= (int)*(uint *)(param_1 + 8)) goto LAB_0040cf6e;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar18 = *(long *)(lVar6 + 0xa0);
    } while( true );
  }
LAB_0040cf76:
  if (uVar13 != 0) {
    uVar16 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
    pRVar20 = this;
    while( true ) {
      pRVar20 = pRVar20 + 2;
      uVar13 = *(ushort *)pRVar20;
      pRVar8 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
      if (uVar13 != 0) {
        pRVar8 = this + (ushort)(uVar13 << 8 | uVar13 >> 8);
      }
      if ((ushort)(*(ushort *)pRVar8 << 8 | *(ushort *)pRVar8 >> 8) < 2) break;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) {
        return 0;
      }
    }
    if (uVar16 != 0) {
      uVar13 = *(ushort *)pRVar20;
      while( true ) {
        pRVar8 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
        if (uVar13 != 0) {
          pRVar8 = this + (ushort)(uVar13 << 8 | uVar13 >> 8);
        }
        uVar9 = Rule<OT::Layout::SmallTypes>::apply((ushort *)pRVar8,param_1,*param_2,param_2[1]);
        if ((char)uVar9 != '\0') break;
        do {
          if (uVar16 == 1) {
            return 0;
          }
          uVar13 = *(ushort *)(pRVar20 + 2);
          pRVar8 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
          if (uVar13 != 0) {
            pRVar8 = this + (ushort)(uVar13 << 8 | uVar13 >> 8);
          }
          pRVar20 = pRVar20 + 2;
          uVar16 = uVar16 - 1;
        } while (1 < (ushort)(*(ushort *)pRVar8 << 8 | *(ushort *)pRVar8 >> 8));
      }
      return CONCAT71((int7)((ulong)uVar9 >> 8),1);
    }
  }
  return 0;
LAB_0040cdea:
  if (iVar2 + -1 <= iVar19) goto LAB_0040d0fb;
  uVar11 = (ulong)(iVar19 + 1U);
  *(uint *)(param_1 + 8) = iVar19 + 1U;
  lVar6 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_1 + 0x10) + 0xa0) + 0x70);
  uVar13 = *(ushort *)(lVar6 + 0xc + uVar11 * 0x14);
  if (((*(uint *)(param_1 + 0x18) & (uint)uVar13 & 0xe) == 0) &&
     ((puVar24 = (uint *)(uVar11 * 0x14 + lVar6), (uVar13 & 8) == 0 ||
      (uVar23 = hb_ot_apply_context_t::match_properties_mark
                          (*(hb_ot_apply_context_t **)(param_1 + 0x10),*puVar24,(uint)uVar13,
                           *(uint *)(param_1 + 0x18)), (char)uVar23 != '\0')))) {
    pbVar7 = (byte *)(uVar11 * 0x14 + 0xc + lVar6);
    uVar13 = *(ushort *)(lVar6 + 0x10 + uVar11 * 0x14);
    uVar15 = 0;
    bVar12 = false;
    if ((((uVar13 & 0x20) != 0) &&
        ((bVar12 = false, (*pbVar7 & 0x10) == 0 &&
         ((*(char *)(param_1 + 0x20) != '\0' || (bVar12 = false, (uVar13 & 0x21f) != 0x201)))))) &&
       ((*(char *)(param_1 + 0x21) != '\0' || (bVar12 = false, (uVar13 & 0x11f) != 0x101)))) {
      bVar12 = (uVar13 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
    }
    puVar14 = *(ushort **)(param_1 + 0x38);
    if (puVar14 != (ushort *)0x0) {
      uVar15 = *puVar14 << 8 | *puVar14 >> 8;
    }
    if (((*(uint *)(lVar6 + 4 + uVar11 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
       ((*(byte *)(param_1 + 0x24) == 0 || (*(byte *)(param_1 + 0x24) == pbVar7[3])))) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        if (bVar12) goto LAB_0040cde6;
      }
      else {
        cVar4 = (**(code **)(param_1 + 0x28))(puVar24,uVar15,*(undefined8 *)(param_1 + 0x30));
        if (cVar4 == '\0') goto LAB_0040cddd;
        puVar14 = *(ushort **)(param_1 + 0x38);
      }
      if (puVar14 != (ushort *)0x0) {
        *(ushort **)(param_1 + 0x38) = puVar14 + 1;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
      uVar11 = (ulong)*(uint *)(param_1 + 8);
      uVar13 = *(ushort *)(lVar6 + 0xc + uVar11 * 0x14);
      if (((*(uint *)(param_1 + 0x18) & (uint)uVar13 & 0xe) != 0) ||
         (((uVar13 & 8) != 0 &&
          (uVar23 = hb_ot_apply_context_t::match_properties_mark
                              (*(hb_ot_apply_context_t **)(param_1 + 0x10),
                               *(uint *)(lVar6 + uVar11 * 0x14),(uint)uVar13,
                               *(uint *)(param_1 + 0x18)), (char)uVar23 == '\0')))) {
        local_68 = 0;
        local_6c = 0;
        goto LAB_0040d10f;
      }
      uVar13 = *(ushort *)(lVar6 + 0x10 + uVar11 * 0x14);
      if (((((uVar13 & 0x20) != 0) && ((*(byte *)(lVar6 + uVar11 * 0x14 + 0xc) & 0x10) == 0)) &&
          ((*(char *)(param_1 + 0x20) != '\0' || ((uVar13 & 0x21f) != 0x201)))) &&
         ((*(char *)(param_1 + 0x21) != '\0' || ((uVar13 & 0x11f) != 0x101)))) {
        local_68 = 0;
        if (*(char *)(param_1 + 0x22) != '\0') {
          local_6c = 0;
          goto LAB_0040d10f;
        }
        local_6c = 0;
        if ((uVar13 & 0x40) == 0) goto LAB_0040d10f;
      }
      local_68 = (ulong)*(uint *)(param_1 + 8) * 0x14 + *(long *)(*(long *)(param_1 + 0xa0) + 0x70);
      local_6c = *(uint *)(param_1 + 8) + 1;
      goto LAB_0040d10f;
    }
LAB_0040cddd:
    if (!bVar12) goto LAB_0040d0fb;
  }
LAB_0040cde6:
  iVar19 = *(int *)(param_1 + 8);
  goto LAB_0040cdea;
LAB_0040d0fb:
  local_68 = 0;
  local_6c = 0;
LAB_0040d10f:
  uVar16 = uVar16 + 1;
  pcVar3 = (code *)*param_2;
  uVar9 = param_2[1];
  uVar5 = 1;
  if (1 < uVar17) {
    uVar5 = (uint)uVar17;
  }
  bVar12 = true;
  uVar11 = 1;
  do {
    uVar13 = *(ushort *)(this + uVar11 * 2);
    pRVar20 = (RuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar13 != 0) {
      pRVar20 = this + (ushort)(uVar13 << 8 | uVar13 >> 8);
    }
    if ((((ushort)(*(ushort *)pRVar20 << 8 | *(ushort *)pRVar20 >> 8) < 2) ||
        (pcVar3 == (code *)0x0)) ||
       (cVar4 = (*pcVar3)(puVar1,*(ushort *)(pRVar20 + 4) << 8 | *(ushort *)(pRVar20 + 4) >> 8,uVar9
                         ), cVar4 != '\0')) {
      if ((((local_68 == 0) || ((ushort)(*(ushort *)pRVar20 << 8 | *(ushort *)pRVar20 >> 8) < 3)) ||
          ((pcVar3 == (code *)0x0 ||
           (cVar4 = (*pcVar3)(local_68,*(ushort *)(pRVar20 + 6) << 8 | *(ushort *)(pRVar20 + 6) >> 8
                              ,uVar9), uVar22 = local_6c, cVar4 != '\0')))) &&
         (uVar10 = Rule<OT::Layout::SmallTypes>::apply
                             ((ushort *)pRVar20,param_1,*param_2,param_2[1]), uVar22 = uVar16,
         (char)uVar10 != '\0')) {
        uVar9 = CONCAT71((int7)((ulong)uVar10 >> 8),1);
        if (uVar16 == 0xffffffff) {
          return uVar9;
        }
        lVar6 = *(long *)(param_1 + 0xa0);
        if ((*(byte *)(lVar6 + 0x18) & 0x40) == 0) {
          return uVar9;
        }
        uVar5 = *(uint *)(lVar6 + 0x5c);
        uVar11 = (ulong)uVar5;
        uVar22 = *(uint *)(lVar6 + 0x60);
        if (uVar16 <= *(uint *)(lVar6 + 0x60)) {
          uVar22 = uVar16;
        }
        *(byte *)(lVar6 + 0xc0) = *(byte *)(lVar6 + 0xc0) | 0x20;
        if (uVar22 <= uVar5) {
          return uVar9;
        }
        lVar6 = *(long *)(lVar6 + 0x70);
        uVar23 = ~uVar11;
        if ((uVar22 - uVar5 & 3) != 0) {
          pbVar7 = (byte *)(lVar6 + uVar11 * 0x14 + 4);
          lVar18 = 0;
          do {
            *pbVar7 = *pbVar7 | 2;
            lVar18 = lVar18 + -1;
            pbVar7 = pbVar7 + 0x14;
          } while (-lVar18 != ((ulong)(uVar22 - uVar5) & 3));
          uVar11 = uVar11 - lVar18;
        }
        if (2 < uVar23 + uVar22) {
          lVar18 = uVar22 - uVar11;
          pbVar7 = (byte *)(lVar6 + uVar11 * 0x14 + 0x40);
          do {
            pbVar7[-0x3c] = pbVar7[-0x3c] | 2;
            pbVar7[-0x28] = pbVar7[-0x28] | 2;
            pbVar7[-0x14] = pbVar7[-0x14] | 2;
            *pbVar7 = *pbVar7 | 2;
            pbVar7 = pbVar7 + 0x50;
            lVar18 = lVar18 + -4;
          } while (lVar18 != 0);
        }
        if (bVar12) {
          return uVar9;
        }
LAB_0040d30b:
        if (uVar16 == 0xffffffff) {
          return 0;
        }
        lVar6 = *(long *)(param_1 + 0xa0);
        if ((*(byte *)(lVar6 + 0x18) & 0x40) == 0) {
          return 0;
        }
        uVar5 = *(uint *)(lVar6 + 0x5c);
        uVar11 = (ulong)uVar5;
        if (*(uint *)(lVar6 + 0x60) < uVar16) {
          uVar16 = *(uint *)(lVar6 + 0x60);
        }
        *(byte *)(lVar6 + 0xc0) = *(byte *)(lVar6 + 0xc0) | 0x20;
        if (uVar16 <= uVar5) {
          return 0;
        }
        lVar6 = *(long *)(lVar6 + 0x70);
        uVar23 = ~uVar11;
        if ((uVar16 - uVar5 & 3) != 0) {
          pbVar7 = (byte *)(lVar6 + uVar11 * 0x14 + 4);
          lVar18 = 0;
          do {
            *pbVar7 = *pbVar7 | 2;
            lVar18 = lVar18 + -1;
            pbVar7 = pbVar7 + 0x14;
          } while (-lVar18 != ((ulong)(uVar16 - uVar5) & 3));
          uVar11 = uVar11 - lVar18;
        }
        if (uVar23 + uVar16 < 3) {
          return 0;
        }
        lVar18 = uVar16 - uVar11;
        pbVar7 = (byte *)(lVar6 + uVar11 * 0x14 + 0x40);
        do {
          pbVar7[-0x3c] = pbVar7[-0x3c] | 2;
          pbVar7[-0x28] = pbVar7[-0x28] | 2;
          pbVar7[-0x14] = pbVar7[-0x14] | 2;
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 0x50;
          lVar18 = lVar18 + -4;
        } while (lVar18 != 0);
        return 0;
      }
    }
    else {
      uVar22 = uVar16;
      if (uVar16 == 0xffffffff) {
        uVar22 = 0;
      }
    }
    uVar16 = uVar22;
    bVar12 = uVar11 < (uint)uVar17;
    bVar25 = uVar11 == uVar5;
    uVar11 = uVar11 + 1;
    if (bVar25) goto LAB_0040d30b;
  } while( true );
LAB_0040cf6e:
  uVar13 = *(ushort *)this;
  goto LAB_0040cf76;
}


