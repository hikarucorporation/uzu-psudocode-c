// Function : sanitize
// Namespace: OT:GDEFVersion1_2_OT__Layout__SmallTypes_
// Entry    : 003d8480
// Prototype: ulong sanitize(GDEFVersion1_2<OT::Layout::SmallTypes> * this, long param_1, undefined8 param_2, undefined8 param_3, GDEFVersion1_2<OT::Layout::SmallTypes> * param_4)
// Body     : 003d8480 - 003d8c3b


/* OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
          (GDEFVersion1_2<OT::Layout::SmallTypes> *this,long param_1,undefined8 param_2,
          undefined8 param_3,GDEFVersion1_2<OT::Layout::SmallTypes> *param_4)

{
  long *plVar1;
  uint *puVar2;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar3;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  GDEFVersion1_2<OT::Layout::SmallTypes> *extraout_RDX;
  GDEFVersion1_2<OT::Layout::SmallTypes> *extraout_RDX_00;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar15;
  GDEFVersion1_2<OT::Layout::SmallTypes> *extraout_RDX_01;
  GDEFVersion1_2<OT::Layout::SmallTypes> *extraout_RDX_02;
  GDEFVersion1_2<OT::Layout::SmallTypes> *extraout_RDX_03;
  undefined7 uVar16;
  long lVar17;
  ulong uVar18;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar19;
  MarkGlyphSetsFormat1 *this_00;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar20;
  ushort uVar21;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar22;
  
  pGVar15 = this + (4 - *(long *)(param_1 + 8));
  uVar8 = 0;
  if (((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) < pGVar15) ||
     ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (6 - *(long *)(param_1 + 8)))) goto LAB_003d8c2b;
  uVar12 = *(ushort *)(this + 4);
  if ((uVar12 == 0) ||
     (uVar8 = ClassDef::sanitize((ClassDef *)(this + (ushort)(uVar12 << 8 | uVar12 >> 8)),param_1),
     pGVar15 = extraout_RDX, (char)uVar8 != '\0')) {
LAB_003d84fe:
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    if (this + (8 - *plVar1) <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
      uVar12 = *(ushort *)(this + 6);
      if (uVar12 != 0) {
        uVar8 = (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8);
        pGVar22 = this + uVar8 + 2;
        if ((ulong)((long)pGVar22 - *plVar1) <= (ulong)*puVar2) {
          pGVar3 = this + uVar8;
          uVar12 = *(ushort *)pGVar3;
          if ((uVar12 != 0) &&
             (uVar9 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                                (param_1,(ushort *)(pGVar3 + (ushort)(uVar12 << 8 | uVar12 >> 8))),
             (char)uVar9 == '\0')) {
            pGVar15 = extraout_RDX_00;
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d86d7;
            *(ushort *)pGVar3 = 0;
          }
          pGVar10 = pGVar3 + 4;
          pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
          if ((pGVar10 + -*plVar1 <= pGVar15) &&
             (pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2,
             pGVar10 + -*plVar1 <= pGVar15)) {
            uVar13 = (uint)(ushort)(*(ushort *)pGVar22 << 8 | *(ushort *)pGVar22 >> 8);
            uVar14 = *(int *)(param_1 + 0x10) - (int)pGVar10;
            pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar14;
            if ((uVar13 * 2 <= uVar14) &&
               (iVar7 = *(int *)(param_1 + 0x1c) + uVar13 * -2, *(int *)(param_1 + 0x1c) = iVar7,
               0 < iVar7)) {
              uVar12 = *(ushort *)pGVar22;
              if (uVar12 != 0) {
                uVar5 = uVar12 << 8 | uVar12 >> 8;
                uVar12 = 1;
                if (1 < uVar5) {
                  uVar12 = uVar5;
                }
                param_4 = this + uVar8 + 6;
                lVar17 = 0;
                do {
                  pGVar15 = param_4 + (lVar17 - *plVar1);
                  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 < pGVar15)
                  goto LAB_003d86d7;
                  uVar5 = *(ushort *)(this + lVar17 + uVar8 + 4);
                  pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar5;
                  if (uVar5 != 0) {
                    uVar9 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
                    pGVar22 = pGVar3 + uVar9 + 2;
                    if (((ulong)((long)pGVar22 - *plVar1) <= (ulong)*puVar2) &&
                       ((ulong)((long)pGVar22 - *plVar1) <= (ulong)*puVar2)) {
                      uVar14 = (uint)(ushort)(*(ushort *)(pGVar3 + uVar9) << 8 |
                                             *(ushort *)(pGVar3 + uVar9) >> 8);
                      uVar13 = uVar14 * 2;
                      pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar13;
                      if ((uVar13 <= (uint)(*(int *)(param_1 + 0x10) - (int)pGVar22)) &&
                         (iVar7 = *(int *)(param_1 + 0x1c) + uVar14 * -2,
                         *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)) goto LAB_003d8647;
                    }
                    uVar13 = *(uint *)(param_1 + 0x2c);
                    pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar13;
                    if (0x1f < uVar13) goto LAB_003d86d7;
                    pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar13 + 1);
                    *(uint *)(param_1 + 0x2c) = uVar13 + 1;
                    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d86d7;
                    *(undefined2 *)(this + lVar17 + uVar8 + 4) = 0;
                  }
LAB_003d8647:
                  lVar17 = lVar17 + 2;
                } while ((ulong)uVar12 * 2 != lVar17);
              }
              goto LAB_003d8701;
            }
          }
        }
LAB_003d86d7:
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8c29;
        *(undefined2 *)(this + 6) = 0;
      }
LAB_003d8701:
      if (this + (10 - *plVar1) <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
        uVar12 = *(ushort *)(this + 8);
        if (uVar12 != 0) {
          uVar8 = (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8);
          pGVar22 = this + uVar8 + 2;
          if ((ulong)((long)pGVar22 - *plVar1) <= (ulong)*puVar2) {
            pGVar3 = this + uVar8;
            uVar12 = *(ushort *)pGVar3;
            if ((uVar12 != 0) &&
               (uVar9 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                                  (param_1,(ushort *)(pGVar3 + (ushort)(uVar12 << 8 | uVar12 >> 8)))
               , (char)uVar9 == '\0')) {
              pGVar15 = extraout_RDX_01;
              if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                 (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                 pGVar15 = extraout_RDX_01, *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8acd;
              *(ushort *)pGVar3 = 0;
            }
            pGVar10 = pGVar3 + 4;
            pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
            if ((pGVar10 + -*plVar1 <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) &&
               (pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2,
               pGVar10 + -*plVar1 <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2)) {
              uVar13 = (uint)(ushort)(*(ushort *)pGVar22 << 8 | *(ushort *)pGVar22 >> 8);
              uVar14 = *(int *)(param_1 + 0x10) - (int)pGVar10;
              pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar14;
              if ((uVar13 * 2 <= uVar14) &&
                 (iVar7 = *(int *)(param_1 + 0x1c) + uVar13 * -2, *(int *)(param_1 + 0x1c) = iVar7,
                 0 < iVar7)) {
                uVar12 = *(ushort *)pGVar22;
                if (uVar12 != 0) {
                  uVar5 = uVar12 << 8 | uVar12 >> 8;
                  uVar12 = 1;
                  if (1 < uVar5) {
                    uVar12 = uVar5;
                  }
                  uVar9 = 0;
                  do {
                    pGVar15 = pGVar3;
                    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                        pGVar3 + (uVar9 * 2 - *plVar1) + 6) goto LAB_003d8acd;
                    uVar5 = *(ushort *)(pGVar3 + uVar9 * 2 + 4);
                    if (uVar5 != 0) {
                      uVar18 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
                      pGVar10 = pGVar3 + uVar18 + 2;
                      pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                      if ((pGVar10 + -*plVar1 <=
                           (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) &&
                         (pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2,
                         pGVar10 + -*plVar1 <=
                         (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2)) {
                        pGVar4 = pGVar3 + uVar18;
                        uVar13 = (uint)(ushort)(*(ushort *)pGVar4 << 8 | *(ushort *)pGVar4 >> 8);
                        uVar14 = *(int *)(param_1 + 0x10) - (int)pGVar10;
                        pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar14;
                        if ((uVar13 * 2 <= uVar14) &&
                           (iVar7 = *(int *)(param_1 + 0x1c) + uVar13 * -2,
                           *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)) {
                          uVar5 = *(ushort *)pGVar4;
                          if (uVar5 != 0) {
                            uVar6 = uVar5 << 8 | uVar5 >> 8;
                            uVar5 = 1;
                            if (1 < uVar6) {
                              uVar5 = uVar6;
                            }
                            uVar11 = (ulong)uVar5;
                            pGVar10 = pGVar22 + uVar18;
                            pGVar19 = this + uVar18 + uVar8 + 4;
                            do {
                              pGVar15 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                              if (pGVar15 < pGVar19 + -*plVar1) goto LAB_003d8aa4;
                              uVar5 = *(ushort *)pGVar10;
                              if (uVar5 == 0) goto LAB_003d8915;
                              pGVar15 = pGVar4 + (ushort)(uVar5 << 8 | uVar5 >> 8);
                              if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                  pGVar15 + (2 - *plVar1)) {
LAB_003d895b:
                                uVar13 = *(uint *)(param_1 + 0x2c);
LAB_003d895f:
                                if (0x1f < uVar13) goto LAB_003d8aa4;
                                uVar13 = uVar13 + 1;
                                *(uint *)(param_1 + 0x2c) = uVar13;
                                pGVar15 = pGVar10;
                                if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d8aa8;
LAB_003d8910:
                                *(ushort *)pGVar15 = 0;
                              }
                              else {
                                uVar5 = *(ushort *)pGVar15 << 8 | *(ushort *)pGVar15 >> 8;
                                if (uVar5 != 1) {
                                  if (uVar5 != 3) {
                                    if (uVar5 != 2) goto LAB_003d8915;
                                    goto LAB_003d899d;
                                  }
                                  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                      pGVar15 + (6 - *plVar1)) goto LAB_003d895b;
                                  uVar5 = *(ushort *)(pGVar15 + 4);
                                  if (uVar5 == 0) goto LAB_003d8915;
                                  pGVar20 = pGVar15 + (ushort)(uVar5 << 8 | uVar5 >> 8);
                                  param_4 = pGVar20 + -*plVar1;
                                  if (param_4 + 6 <=
                                      (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                    uVar5 = *(ushort *)(pGVar20 + 4);
                                    if ((ushort)((uVar5 << 8 | uVar5 >> 8) - 1) < 3) {
                                      uVar6 = *(ushort *)pGVar20 << 8 | *(ushort *)pGVar20 >> 8;
                                      uVar21 = *(ushort *)(pGVar20 + 2) << 8 |
                                               *(ushort *)(pGVar20 + 2) >> 8;
                                      if (uVar21 < uVar6) {
                                        uVar13 = 6;
                                      }
                                      else {
                                        uVar13 = ((uint)uVar21 - (uint)uVar6 >>
                                                 (4U - (char)(uVar5 >> 8) & 0x1f)) * 2 + 8;
                                      }
                                      if ((((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                            < param_4) ||
                                          ((uint)(*(int *)(param_1 + 0x10) - (int)pGVar20) < uVar13)
                                          ) || (iVar7 = *(int *)(param_1 + 0x1c) - uVar13,
                                               *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1))
                                      goto LAB_003d89eb;
                                    }
                                    goto LAB_003d8915;
                                  }
LAB_003d89eb:
                                  if (*(uint *)(param_1 + 0x2c) < 0x20) {
                                    uVar13 = *(uint *)(param_1 + 0x2c) + 1;
                                    *(uint *)(param_1 + 0x2c) = uVar13;
                                    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d895f;
                                    pGVar15 = pGVar15 + 4;
                                    goto LAB_003d8910;
                                  }
                                  goto LAB_003d8acd;
                                }
LAB_003d899d:
                                pGVar15 = pGVar15 + (4 - *plVar1);
                                if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                    pGVar15) goto LAB_003d895b;
                              }
LAB_003d8915:
                              pGVar10 = pGVar10 + 2;
                              pGVar19 = pGVar19 + 2;
                              uVar11 = uVar11 - 1;
                            } while (uVar11 != 0);
                          }
                          goto LAB_003d8830;
                        }
                      }
LAB_003d8aa4:
                      pGVar10 = pGVar15;
                      uVar13 = *(uint *)(param_1 + 0x2c);
LAB_003d8aa8:
                      pGVar15 = pGVar10;
                      if ((0x1f < uVar13) ||
                         (*(uint *)(param_1 + 0x2c) = uVar13 + 1, *(char *)(param_1 + 0x28) == '\0')
                         ) goto LAB_003d8acd;
                      *(undefined2 *)(pGVar3 + uVar9 * 2 + 4) = 0;
                    }
LAB_003d8830:
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != uVar12);
                }
                goto LAB_003d8af3;
              }
            }
          }
LAB_003d8acd:
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8c29;
          *(undefined2 *)(this + 8) = 0;
        }
LAB_003d8af3:
        if (this + (0xc - *plVar1) <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
          uVar12 = *(ushort *)(this + 10);
          if ((uVar12 != 0) &&
             (uVar8 = ClassDef::sanitize((ClassDef *)(this + (ushort)(uVar12 << 8 | uVar12 >> 8)),
                                         param_1), pGVar15 = extraout_RDX_02, (char)uVar8 == '\0'))
          {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8c29;
            *(undefined2 *)(this + 10) = 0;
          }
          uVar13 = *(uint *)this;
          if (0x10001 < (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                        uVar13 << 0x18)) {
            if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 < this + (0xe - *plVar1))
            goto LAB_003d8c29;
            uVar12 = *(ushort *)(this + 0xc);
            if ((uVar12 != 0) &&
               ((this_00 = (MarkGlyphSetsFormat1 *)(this + (ushort)(uVar12 << 8 | uVar12 >> 8)),
                (MarkGlyphSetsFormat1 *)(ulong)*puVar2 < this_00 + (2 - *plVar1) ||
                ((*(short *)this_00 == 0x100 &&
                 (uVar8 = MarkGlyphSetsFormat1::sanitize(this_00,param_1), pGVar15 = extraout_RDX_03
                 , (char)uVar8 == '\0')))))) {
              if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                 (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                 *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8c29;
              *(undefined2 *)(this + 0xc) = 0;
            }
          }
          uVar13 = *(uint *)this;
          uVar16 = (undefined7)((ulong)puVar2 >> 8);
          if ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18)
              < 0x10003) {
            uVar8 = CONCAT71(uVar16,1);
            goto LAB_003d8c2b;
          }
          if (this + (0x12 - *plVar1) <= (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
            uVar13 = *(uint *)(this + 0xe);
            uVar8 = CONCAT71(uVar16,1);
            if ((uVar13 == 0) ||
               (uVar9 = ItemVariationStore::sanitize
                                  ((short *)(this + (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                                     (uVar13 & 0xff00) << 8 | uVar13 << 0x18)),
                                   param_1,pGVar15,
                                   (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2,param_4)
               , (char)uVar9 != '\0')) goto LAB_003d8c2b;
            if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) != '\0')) {
              *(undefined4 *)(this + 0xe) = 0;
              goto LAB_003d8c2b;
            }
          }
        }
      }
    }
  }
  else if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
          (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
          *(char *)(param_1 + 0x28) != '\0')) {
    *(undefined2 *)(this + 4) = 0;
    goto LAB_003d84fe;
  }
LAB_003d8c29:
  uVar8 = 0;
LAB_003d8c2b:
  return uVar8 & 0xffffffff;
}


