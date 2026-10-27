// Function : sanitize<OT::Layout::GSUB_impl::SubstLookup>
// Namespace: OT:GSUBGPOSVersion1_2_OT__Layout__SmallTypes_
// Entry    : 003d6d00
// Prototype: ulong sanitize<OT::Layout::GSUB_impl::SubstLookup>(GSUBGPOSVersion1_2<OT::Layout::SmallTypes> * this, long param_1)
// Body     : 003d6d00 - 003d8478


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   OT::GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::sanitize<OT::Layout::GSUB_impl::SubstLookup>(hb_sanitize_context_t*)
   const */

ulong __thiscall
OT::GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::sanitize<OT::Layout::GSUB_impl::SubstLookup>
          (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *this,long param_1)

{
  long *plVar1;
  uint *puVar2;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar3;
  uint *puVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [12];
  unkbyte10 Var22;
  char cVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar30;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar31;
  ulong uVar32;
  ulong uVar33;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar34;
  ushort uVar35;
  ushort uVar36;
  int iVar37;
  uint uVar38;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar39;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar40;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar45;
  ulong uVar46;
  ulong uVar47;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar48;
  ushort uVar49;
  ulong uVar50;
  ulong uVar51;
  ContextFormat1_4<OT::Layout::SmallTypes> *unaff_R14;
  long lVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined1 auVar82 [16];
  int local_b0;
  int local_a8;
  int local_88;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *local_78;
  
  if (this + (6 - *(long *)(param_1 + 8)) <=
      (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar35 = *(ushort *)(this + 4);
    if ((uVar35 != 0) &&
       (uVar28 = RecordListOf<OT::Script>::sanitize
                           ((RecordListOf<OT::Script> *)(this + (ushort)(uVar35 << 8 | uVar35 >> 8))
                            ,param_1), (char)uVar28 == '\0')) {
      if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
         *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8461;
      *(undefined2 *)(this + 4) = 0;
    }
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    if (this + (8 - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
      uVar35 = *(ushort *)(this + 6);
      if ((uVar35 != 0) &&
         (uVar28 = RecordListOf<OT::Feature>::sanitize
                             ((RecordListOf<OT::Feature> *)
                              (this + (ushort)(uVar35 << 8 | uVar35 >> 8)),param_1),
         (char)uVar28 == '\0')) {
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8461;
        *(undefined2 *)(this + 6) = 0;
      }
      pGVar3 = this + 8;
      if (pGVar3 + (2 - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
        uVar35 = *(ushort *)pGVar3;
        if (uVar35 != 0) {
          uVar29 = (ulong)(ushort)(uVar35 << 8 | uVar35 >> 8);
          pGVar39 = this + uVar29 + 2;
          if (((ulong)((long)pGVar39 - *plVar1) <= (ulong)*puVar2) &&
             ((ulong)((long)pGVar39 - *plVar1) <= (ulong)*puVar2)) {
            pGVar45 = this + uVar29;
            uVar43 = (uint)(ushort)(*(ushort *)pGVar45 << 8 | *(ushort *)pGVar45 >> 8);
            if ((uVar43 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pGVar39)) &&
               (iVar37 = *(int *)(param_1 + 0x1c) + uVar43 * -2, *(int *)(param_1 + 0x1c) = iVar37,
               0 < iVar37)) {
              uVar35 = *(ushort *)pGVar45;
              if (uVar35 != 0) {
                uVar35 = uVar35 << 8 | uVar35 >> 8;
                uVar43 = 1;
                if (1 < uVar35) {
                  uVar43 = (uint)uVar35;
                }
                puVar4 = (uint *)(param_1 + 0x1c);
                uVar46 = 0;
                uVar78 = _DAT_005de020;
                uVar79 = _UNK_005de024;
                uVar80 = _UNK_005de028;
                uVar81 = _UNK_005de02c;
                auVar82 = _DAT_005de030;
                do {
                  if ((GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                      pGVar45 + (uVar46 * 2 - *plVar1) + 4) goto LAB_003d83dd;
                  uVar35 = *(ushort *)(pGVar45 + uVar46 * 2 + 2);
                  if (uVar35 == 0) goto LAB_003d6f0c;
                  uVar47 = (ulong)(ushort)(uVar35 << 8 | uVar35 >> 8);
                  pGVar39 = pGVar45 + uVar47 + 6;
                  if (((ulong)*puVar2 < (ulong)((long)pGVar39 - *plVar1)) ||
                     ((ulong)*puVar2 < (ulong)((long)pGVar39 - *plVar1))) {
LAB_003d7040:
                    uVar38 = *(uint *)(param_1 + 0x2c);
LAB_003d7044:
                    if ((0x1f < uVar38) ||
                       (*(uint *)(param_1 + 0x2c) = uVar38 + 1, *(char *)(param_1 + 0x28) == '\0'))
                    goto LAB_003d83dd;
                    *(undefined2 *)(pGVar45 + uVar46 * 2 + 2) = 0;
                  }
                  else {
                    pGVar30 = pGVar45 + uVar47;
                    uVar38 = (uint)(ushort)(*(ushort *)(pGVar30 + 4) << 8 |
                                           *(ushort *)(pGVar30 + 4) >> 8);
                    local_88 = (int)pGVar39;
                    if (((uint)(*(int *)(param_1 + 0x10) - local_88) < uVar38 * 2) ||
                       (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38, (int)uVar38 < 1))
                    goto LAB_003d7040;
                    pGVar31 = pGVar30 + 4;
                    uVar35 = *(ushort *)pGVar31 << 8 | *(ushort *)pGVar31 >> 8;
                    iVar37 = *(int *)(param_1 + 0x20) + (uint)uVar35;
                    *(int *)(param_1 + 0x20) = iVar37;
                    if (0x3fff < iVar37) goto LAB_003d7040;
                    if (((byte)pGVar30[3] & 0x10) == 0) {
                      lVar52 = *plVar1;
                      pGVar34 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                    }
                    else {
                      lVar52 = *plVar1;
                      pGVar34 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                      if (pGVar34 < pGVar30 + ((ulong)uVar35 * 2 - lVar52) + 8) goto LAB_003d7040;
                    }
                    if ((((pGVar34 < pGVar39 + -lVar52) ||
                         (uVar26 = *(ushort *)pGVar30,
                         (ulong)*puVar2 < (ulong)((long)pGVar39 - *plVar1))) ||
                        (uVar38 = (uint)(ushort)(*(ushort *)pGVar31 << 8 | *(ushort *)pGVar31 >> 8),
                        (uint)(*(int *)(param_1 + 0x10) - local_88) < uVar38 * 2)) ||
                       (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38, (int)uVar38 < 1))
                    goto LAB_003d7040;
                    uVar49 = *(ushort *)pGVar31;
                    if (uVar49 != 0) {
                      uVar24 = uVar49 << 8 | uVar49 >> 8;
                      uVar49 = 1;
                      if (1 < uVar24) {
                        uVar49 = uVar24;
                      }
                      uVar51 = 0;
                      do {
                        if ((GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                            pGVar31 + (uVar51 * 2 - *plVar1) + 4) goto LAB_003d7040;
                        uVar24 = *(ushort *)(pGVar30 + uVar51 * 2 + 6);
                        if (uVar24 != 0) {
                          uVar25 = uVar26 << 8 | uVar26 >> 8;
                          unaff_R14 = (ContextFormat1_4<OT::Layout::SmallTypes> *)
                                      (pGVar30 + (ushort)(uVar24 << 8 | uVar24 >> 8));
                          while (uVar25 == 7) {
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                unaff_R14 + (2 - *plVar1)) goto LAB_003d7fc0;
                            if (*(short *)unaff_R14 != 0x100) goto switchD_003d71f8_caseD_7;
                            if (((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                 unaff_R14 + (8 - *plVar1)) || (*(short *)(unaff_R14 + 2) == 0x700))
                            goto LAB_003d7fc0;
                            uVar38 = *(uint *)(unaff_R14 + 4);
                            pCVar40 = (ContextFormat1_4<OT::Layout::SmallTypes> *)&_hb_NullPool;
                            if (uVar38 != 0) {
                              pCVar40 = unaff_R14 +
                                        (uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 |
                                         (uVar38 & 0xff00) << 8 | uVar38 << 0x18);
                            }
                            uVar25 = *(ushort *)(unaff_R14 + 2) << 8 |
                                     *(ushort *)(unaff_R14 + 2) >> 8;
                            unaff_R14 = pCVar40;
                          }
                          switch(uVar25) {
                          case 1:
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                unaff_R14 + (2 - *plVar1)) break;
                            uVar24 = *(ushort *)unaff_R14 << 8 | *(ushort *)unaff_R14 >> 8;
                            if (uVar24 != 2) {
                              if (uVar24 != 1) goto switchD_003d71f8_caseD_7;
                              if (((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                   unaff_R14 + (6 - *plVar1)) ||
                                 ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                  unaff_R14 + (4 - *plVar1))) break;
                              uVar24 = *(ushort *)(unaff_R14 + 2);
                              if (uVar24 == 0) {
LAB_003d803a:
                                unaff_R14 = (ContextFormat1_4<OT::Layout::SmallTypes> *)
                                            &_hb_NullPool;
                                uVar24 = (ushort)_hb_NullPool << 8 | (ushort)_hb_NullPool >> 8;
                                if (uVar24 == 2) goto LAB_003d72cb;
LAB_003d8053:
                                uVar38 = 0xffffffff;
                                if (uVar24 == 1) {
                                  uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + 2) << 8 |
                                                         *(ushort *)(unaff_R14 + 2) >> 8);
                                }
                              }
                              else {
                                uVar32 = hb_sanitize_context_t::
                                         _dispatch<OT::Layout::Common::Coverage>
                                                   (param_1,(ushort *)
                                                            (unaff_R14 +
                                                            (ushort)(uVar24 << 8 | uVar24 >> 8)));
                                auVar82 = _DAT_005de030;
                                uVar81 = _UNK_005de02c;
                                uVar80 = _UNK_005de028;
                                uVar79 = _UNK_005de024;
                                uVar78 = _DAT_005de020;
                                if ((char)uVar32 == '\0') {
                                  if (*(uint *)(param_1 + 0x2c) < 0x20) {
                                    uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                    *(uint *)(param_1 + 0x2c) = uVar38;
                                    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                    *(undefined2 *)(unaff_R14 + 2) = 0;
                                    goto LAB_003d803a;
                                  }
                                  goto LAB_003d7040;
                                }
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if (uVar24 == 0) goto LAB_003d803a;
                                unaff_R14 = unaff_R14 + (ushort)(uVar24 << 8 | uVar24 >> 8);
                                uVar24 = *(ushort *)unaff_R14 << 8 | *(ushort *)unaff_R14 >> 8;
                                if (uVar24 != 2) goto LAB_003d8053;
LAB_003d72cb:
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if (uVar24 == 0) {
                                  uVar38 = 0;
                                }
                                else {
                                  uVar32 = (ulong)(ushort)(uVar24 << 8 | uVar24 >> 8);
                                  uVar33 = uVar32 * 6 - 6;
                                  if (uVar33 < 0x30) {
                                    uVar38 = 0;
                                    pCVar40 = unaff_R14;
                                  }
                                  else {
                                    lVar52 = uVar33 / 6 + 1;
                                    uVar33 = (ulong)((uint)lVar52 & 7);
                                    if (uVar33 == 0) {
                                      uVar33 = 8;
                                    }
                                    lVar52 = lVar52 - uVar33;
                                    pCVar40 = unaff_R14 + 0x1c;
                                    iVar74 = 0;
                                    iVar75 = 0;
                                    iVar76 = 0;
                                    iVar77 = 0;
                                    iVar37 = 0;
                                    iVar53 = 0;
                                    iVar54 = 0;
                                    iVar55 = 0;
                                    lVar42 = lVar52;
                                    do {
                                      auVar67._4_4_ =
                                           (uint)((ulong)*(undefined8 *)(pCVar40 + -8) >> 0x20);
                                      auVar67._0_4_ = *(uint *)(pCVar40 + -0x18);
                                      auVar67._8_4_ = *(uint *)(pCVar40 + -0x10);
                                      auVar67._12_4_ = *(uint *)(pCVar40 + -0xc);
                                      auVar73._12_4_ = *(uint *)(pCVar40 + -0xc) & uVar81;
                                      auVar73._0_4_ =
                                           *(uint *)(pCVar40 + -0x18) & uVar78 |
                                           ~uVar78 & (uint)*(undefined8 *)(pCVar40 + -8);
                                      auVar73._4_4_ = *(uint *)(pCVar40 + -0x10) & uVar80;
                                      auVar73._8_4_ =
                                           *(uint *)(pCVar40 + -0x14) & uVar79 |
                                           ~uVar79 & auVar67._4_4_;
                                      auVar59 = pshufhw(auVar73,auVar73,0xe6);
                                      auVar60._0_4_ = auVar59._0_4_;
                                      auVar60._8_4_ = auVar59._8_4_;
                                      auVar60._12_4_ = auVar59._12_4_;
                                      auVar60._4_4_ = auVar60._8_4_;
                                      auVar61 = pshuflw(auVar60,auVar60,0x6c);
                                      auVar63._4_4_ =
                                           (uint)((ulong)*(undefined8 *)(pCVar40 + 0x10) >> 0x20);
                                      auVar63._0_4_ = *(uint *)pCVar40;
                                      auVar63._8_4_ = *(uint *)(pCVar40 + 8);
                                      auVar63._12_4_ = *(uint *)(pCVar40 + 0xc);
                                      auVar62._12_4_ = *(uint *)(pCVar40 + 0xc) & uVar81;
                                      auVar62._0_4_ =
                                           *(uint *)pCVar40 & uVar78 |
                                           ~uVar78 & (uint)*(undefined8 *)(pCVar40 + 0x10);
                                      auVar62._4_4_ = *(uint *)(pCVar40 + 8) & uVar80;
                                      auVar62._8_4_ =
                                           *(uint *)(pCVar40 + 4) & uVar79 | ~uVar79 & auVar63._4_4_
                                      ;
                                      auVar59 = pshufhw(auVar62,auVar62,0xe6);
                                      auVar70._0_4_ = auVar59._0_4_;
                                      auVar70._8_4_ = auVar59._8_4_;
                                      auVar70._12_4_ = auVar59._12_4_;
                                      auVar70._4_4_ = auVar70._8_4_;
                                      auVar59 = pshuflw(auVar70,auVar70,0x6c);
                                      auVar68 = pshuflw(auVar67,auVar67,0xe6);
                                      auVar68 = pshufhw(auVar68,auVar68,0xec);
                                      auVar69._0_4_ = auVar68._0_4_;
                                      auVar69._8_4_ = auVar68._8_4_;
                                      auVar69._12_4_ = auVar68._12_4_;
                                      auVar69._4_4_ = auVar69._8_4_;
                                      auVar72 = pshuflw(in_XMM7,auVar69,0x39);
                                      auVar68 = pshuflw(auVar63,auVar63,0xe6);
                                      auVar68 = pshufhw(auVar68,auVar68,0xec);
                                      auVar64._0_4_ = auVar68._0_4_;
                                      auVar64._8_4_ = auVar68._8_4_;
                                      auVar64._12_4_ = auVar68._12_4_;
                                      auVar64._4_4_ = auVar64._8_4_;
                                      auVar68 = pshuflw(auVar69,auVar64,0x39);
                                      auVar65._0_2_ = auVar72._0_2_ >> 8;
                                      auVar65._2_2_ = auVar72._2_2_ >> 8;
                                      auVar65._4_2_ = auVar72._4_2_ >> 8;
                                      auVar65._6_2_ = auVar72._6_2_ >> 8;
                                      auVar65._8_2_ = auVar72._8_2_ >> 8;
                                      auVar65._10_2_ = auVar72._10_2_ >> 8;
                                      auVar65._12_2_ = auVar72._12_2_ >> 8;
                                      auVar65._14_2_ = auVar72._14_2_ >> 8;
                                      auVar73 = psllw(auVar72,8);
                                      auVar73 = auVar73 | auVar65;
                                      auVar66._0_2_ = auVar68._0_2_ >> 8;
                                      auVar66._2_2_ = auVar68._2_2_ >> 8;
                                      auVar66._4_2_ = auVar68._4_2_ >> 8;
                                      auVar66._6_2_ = auVar68._6_2_ >> 8;
                                      auVar66._8_2_ = auVar68._8_2_ >> 8;
                                      auVar66._10_2_ = auVar68._10_2_ >> 8;
                                      auVar66._12_2_ = auVar68._12_2_ >> 8;
                                      auVar66._14_2_ = auVar68._14_2_ >> 8;
                                      auVar70 = psllw(auVar68,8);
                                      auVar70 = auVar70 | auVar66;
                                      auVar8._10_2_ = 0;
                                      auVar8._0_10_ = auVar73._0_10_;
                                      auVar8._12_2_ = auVar73._6_2_;
                                      auVar12._8_2_ = auVar73._4_2_;
                                      auVar12._0_8_ = auVar73._0_8_;
                                      auVar12._10_4_ = auVar8._10_4_;
                                      auVar17._6_8_ = 0;
                                      auVar17._0_6_ = auVar12._8_6_;
                                      auVar5._10_2_ = 0;
                                      auVar5._0_10_ = auVar70._0_10_;
                                      auVar5._12_2_ = auVar70._6_2_;
                                      auVar9._8_2_ = auVar70._4_2_;
                                      auVar9._0_8_ = auVar70._0_8_;
                                      auVar9._10_4_ = auVar5._10_4_;
                                      auVar18._6_8_ = 0;
                                      auVar18._0_6_ = auVar9._8_6_;
                                      auVar13._4_2_ = auVar70._2_2_;
                                      auVar13._0_4_ = auVar70._0_4_;
                                      auVar13._6_8_ = SUB148(auVar18 << 0x40,6);
                                      auVar68._0_2_ = auVar61._0_2_ >> 8;
                                      auVar68._2_2_ = auVar61._2_2_ >> 8;
                                      auVar68._4_2_ = auVar61._4_2_ >> 8;
                                      auVar68._6_2_ = auVar61._6_2_ >> 8;
                                      auVar68._8_2_ = auVar61._8_2_ >> 8;
                                      auVar68._10_2_ = auVar61._10_2_ >> 8;
                                      auVar68._12_2_ = auVar61._12_2_ >> 8;
                                      auVar68._14_2_ = auVar61._14_2_ >> 8;
                                      auVar62 = psllw(auVar61,8);
                                      auVar62 = auVar62 | auVar68;
                                      auVar61._0_2_ = auVar59._0_2_ >> 8;
                                      auVar61._2_2_ = auVar59._2_2_ >> 8;
                                      auVar61._4_2_ = auVar59._4_2_ >> 8;
                                      auVar61._6_2_ = auVar59._6_2_ >> 8;
                                      auVar61._8_2_ = auVar59._8_2_ >> 8;
                                      auVar61._10_2_ = auVar59._10_2_ >> 8;
                                      auVar61._12_2_ = auVar59._12_2_ >> 8;
                                      auVar61._14_2_ = auVar59._14_2_ >> 8;
                                      auVar68 = psllw(auVar59,8);
                                      auVar68 = auVar68 | auVar61;
                                      auVar6._10_2_ = 0;
                                      auVar6._0_10_ = auVar62._0_10_;
                                      auVar6._12_2_ = auVar62._6_2_;
                                      auVar10._8_2_ = auVar62._4_2_;
                                      auVar10._0_8_ = auVar62._0_8_;
                                      auVar10._10_4_ = auVar6._10_4_;
                                      auVar19._6_8_ = 0;
                                      auVar19._0_6_ = auVar10._8_6_;
                                      auVar14._4_2_ = auVar62._2_2_;
                                      auVar14._0_4_ = auVar62._0_4_;
                                      auVar14._6_8_ = SUB148(auVar19 << 0x40,6);
                                      auVar7._10_2_ = 0;
                                      auVar7._0_10_ = auVar68._0_10_;
                                      auVar7._12_2_ = auVar68._6_2_;
                                      auVar11._8_2_ = auVar68._4_2_;
                                      auVar11._0_8_ = auVar68._0_8_;
                                      auVar11._10_4_ = auVar7._10_4_;
                                      auVar20._6_8_ = 0;
                                      auVar20._0_6_ = auVar11._8_6_;
                                      auVar15._4_2_ = auVar68._2_2_;
                                      auVar15._0_4_ = auVar68._0_4_;
                                      auVar15._6_8_ = SUB148(auVar20 << 0x40,6);
                                      uVar38 = auVar68._0_4_ & 0xffff;
                                      auVar16._4_10_ = auVar15._4_10_;
                                      auVar16._0_4_ = uVar38;
                                      auVar61 = auVar62 ^ auVar82;
                                      in_XMM7 = auVar73 ^ auVar82;
                                      auVar71._0_12_ = auVar16._0_12_;
                                      auVar71._12_2_ = 0;
                                      auVar71._14_2_ = -(ushort)(in_XMM7._6_2_ < auVar61._6_2_);
                                      auVar72._12_4_ = auVar71._12_4_;
                                      auVar72._0_10_ = auVar16._0_10_;
                                      auVar72._10_2_ = -(ushort)(in_XMM7._4_2_ < auVar61._4_2_);
                                      uVar28 = CONCAT62(auVar72._10_6_,auVar68._2_2_);
                                      auVar59._2_8_ = uVar28;
                                      auVar59._0_2_ = -(ushort)(in_XMM7._2_2_ < auVar61._2_2_);
                                      auVar59._10_6_ = 0;
                                      auVar68 = auVar68 ^ auVar82;
                                      auVar71 = auVar70 ^ auVar82;
                                      sVar56 = -(ushort)(auVar71._2_2_ < auVar68._2_2_);
                                      sVar57 = -(ushort)(auVar71._4_2_ < auVar68._4_2_);
                                      sVar58 = -(ushort)(auVar71._6_2_ < auVar68._6_2_);
                                      Var22 = CONCAT64(CONCAT42(CONCAT22(sVar58,sVar58),sVar57),
                                                       CONCAT22(sVar57,sVar58));
                                      auVar21._4_8_ = (long)((unkuint10)Var22 >> 0x10);
                                      auVar21._2_2_ = sVar56;
                                      auVar21._0_2_ = sVar56;
                                      iVar74 = iVar74 + (~(int)(short)-(ushort)(in_XMM7._0_2_ <
                                                                               auVar61._0_2_) &
                                                        ((uint)auVar73._0_2_ -
                                                        (auVar62._0_4_ & 0xffff)) + 1);
                                      iVar75 = iVar75 + (~(SUB164(auVar59 << 0x30,4) >> 0x10) &
                                                        ((int)CONCAT82(SUB148(auVar17 << 0x40,6),
                                                                       auVar73._2_2_) -
                                                        auVar14._4_4_) + 1U);
                                      iVar76 = iVar76 + (~((int)uVar28 >> 0x10) &
                                                        (auVar12._8_4_ - auVar10._8_4_) + 1U);
                                      iVar77 = iVar77 + (~(auVar72._12_4_ >> 0x10) &
                                                        ((auVar8._10_4_ >> 0x10) -
                                                        (auVar6._10_4_ >> 0x10)) + 1);
                                      iVar37 = iVar37 + (~(int)(short)-(ushort)(auVar71._0_2_ <
                                                                               auVar68._0_2_) &
                                                        ((auVar70._0_4_ & 0xffff) - uVar38) + 1);
                                      iVar53 = iVar53 + (~(auVar21._0_4_ >> 0x10) &
                                                        (auVar13._4_4_ - auVar15._4_4_) + 1U);
                                      iVar54 = iVar54 + (~((int)((unkuint10)Var22 >> 0x10) >> 0x10)
                                                        & (auVar9._8_4_ - auVar11._8_4_) + 1U);
                                      iVar55 = iVar55 + (~(int)sVar58 &
                                                        ((auVar5._10_4_ >> 0x10) -
                                                        (auVar7._10_4_ >> 0x10)) + 1);
                                      pCVar40 = pCVar40 + 0x30;
                                      lVar42 = lVar42 + -8;
                                    } while (lVar42 != 0);
                                    pCVar40 = unaff_R14 + lVar52 * 6;
                                    uVar38 = iVar55 + iVar77 + iVar53 + iVar75 +
                                             iVar54 + iVar76 + iVar37 + iVar74;
                                  }
                                  pCVar40 = pCVar40 + 4;
                                  do {
                                    while( true ) {
                                      uVar24 = *(ushort *)(pCVar40 + 2) << 8 |
                                               *(ushort *)(pCVar40 + 2) >> 8;
                                      uVar25 = *(ushort *)pCVar40 << 8 | *(ushort *)pCVar40 >> 8;
                                      if (uVar24 < uVar25) break;
                                      uVar38 = uVar38 + ((uint)uVar24 - (uint)uVar25) + 1;
                                      pCVar40 = pCVar40 + 6;
                                      if (pCVar40 == unaff_R14 + uVar32 * 6 + 4) goto LAB_003d806e;
                                    }
                                    pCVar40 = pCVar40 + 6;
                                  } while (pCVar40 != unaff_R14 + uVar32 * 6 + 4);
                                }
                              }
LAB_003d806e:
                              uVar38 = uVar38 >> 1;
                              uVar44 = *puVar4;
                              if ((uVar44 < uVar38 || uVar44 - uVar38 == 0) || (int)uVar44 < 0) {
                                *puVar4 = 0xffffffff;
                              }
                              else {
                                *puVar4 = uVar44 - uVar38;
                              }
                              if ((-1 < (int)uVar44) && (uVar38 < uVar44))
                              goto switchD_003d71f8_caseD_7;
                              break;
                            }
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                unaff_R14 + (4 - *plVar1)) break;
                            uVar24 = *(ushort *)(unaff_R14 + 2);
                            if ((uVar24 == 0) ||
                               (uVar32 = hb_sanitize_context_t::
                                         _dispatch<OT::Layout::Common::Coverage>
                                                   (param_1,(ushort *)
                                                            (unaff_R14 +
                                                            (ushort)(uVar24 << 8 | uVar24 >> 8))),
                               auVar82 = _DAT_005de030, uVar81 = _UNK_005de02c,
                               uVar80 = _UNK_005de028, uVar79 = _UNK_005de024,
                               uVar78 = _DAT_005de020, (char)uVar32 != '\0')) {
LAB_003d7ef7:
                              if ((unaff_R14 + (6 - *plVar1) <=
                                   (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) &&
                                 (pCVar40 = unaff_R14 + 6,
                                 (ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)) {
                                uVar24 = *(ushort *)(unaff_R14 + 4);
LAB_003d7f2c:
                                uVar38 = (uint)(ushort)(uVar24 << 8 | uVar24 >> 8);
                                if ((uVar38 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40))
                                   && (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                      0 < (int)uVar38)) goto switchD_003d71f8_caseD_7;
                              }
                              break;
                            }
                            if (*(uint *)(param_1 + 0x2c) < 0x20) {
                              uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                              *(uint *)(param_1 + 0x2c) = uVar38;
                              if (*(char *)(param_1 + 0x28) != '\0') {
                                *(undefined2 *)(unaff_R14 + 2) = 0;
                                goto LAB_003d7ef7;
                              }
                              goto LAB_003d7fc4;
                            }
                            goto LAB_003d7040;
                          case 2:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)unaff_R14 != 0x100) goto switchD_003d71f8_caseD_7;
                              if (unaff_R14 + (4 - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if ((uVar24 != 0) &&
                                   (uVar32 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (unaff_R14 +
                                                                (ushort)(uVar24 << 8 | uVar24 >> 8))
                                                       ), auVar82 = _DAT_005de030,
                                   uVar81 = _UNK_005de02c, uVar80 = _UNK_005de028,
                                   uVar79 = _UNK_005de024, uVar78 = _DAT_005de020,
                                   (char)uVar32 == '\0')) {
                                  if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                  uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                  *(uint *)(param_1 + 0x2c) = uVar38;
                                  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                  *(undefined2 *)(unaff_R14 + 2) = 0;
                                }
                                pCVar40 = unaff_R14 + 6;
                                if ((((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2) &&
                                    ((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)) &&
                                   ((uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + 4) << 8 |
                                                            *(ushort *)(unaff_R14 + 4) >> 8),
                                    uVar38 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40) &&
                                    (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                    0 < (int)uVar38)))) {
                                  uVar24 = *(ushort *)(unaff_R14 + 4);
                                  if (uVar24 != 0) {
                                    uVar24 = uVar24 << 8 | uVar24 >> 8;
                                    uVar44 = 1;
                                    if (1 < uVar24) {
                                      uVar44 = (uint)uVar24;
                                    }
                                    lVar52 = 0;
                                    do {
                                      if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                          < unaff_R14 + ((lVar52 + 8) - *plVar1)) goto LAB_003d7fc0;
                                      uVar24 = *(ushort *)(unaff_R14 + lVar52 + 6);
                                      if (uVar24 != 0) {
                                        uVar32 = (ulong)(ushort)(uVar24 << 8 | uVar24 >> 8);
                                        pCVar40 = unaff_R14 + uVar32 + 2;
                                        if (((((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1)) ||
                                             ((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1))) ||
                                            (uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + uVar32)
                                                                     << 8 | *(ushort *)
                                                                             (unaff_R14 + uVar32) >>
                                                                            8),
                                            (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40) <
                                            uVar38 * 2)) ||
                                           (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                           (int)uVar38 < 1)) {
                                          if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                          uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                          *(uint *)(param_1 + 0x2c) = uVar38;
                                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                          *(undefined2 *)(unaff_R14 + lVar52 + 6) = 0;
                                        }
                                      }
                                      lVar52 = lVar52 + 2;
                                    } while ((ulong)uVar44 * 2 != lVar52);
                                  }
                                  goto switchD_003d71f8_caseD_7;
                                }
                              }
                            }
                            break;
                          case 3:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)unaff_R14 != 0x100) goto switchD_003d71f8_caseD_7;
                              if (unaff_R14 + (4 - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if ((uVar24 != 0) &&
                                   (uVar32 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (unaff_R14 +
                                                                (ushort)(uVar24 << 8 | uVar24 >> 8))
                                                       ), auVar82 = _DAT_005de030,
                                   uVar81 = _UNK_005de02c, uVar80 = _UNK_005de028,
                                   uVar79 = _UNK_005de024, uVar78 = _DAT_005de020,
                                   (char)uVar32 == '\0')) {
                                  if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                  uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                  *(uint *)(param_1 + 0x2c) = uVar38;
                                  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                  *(undefined2 *)(unaff_R14 + 2) = 0;
                                }
                                pCVar40 = unaff_R14 + 6;
                                if ((((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2) &&
                                    ((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)) &&
                                   ((uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + 4) << 8 |
                                                            *(ushort *)(unaff_R14 + 4) >> 8),
                                    uVar38 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40) &&
                                    (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                    0 < (int)uVar38)))) {
                                  uVar24 = *(ushort *)(unaff_R14 + 4);
                                  if (uVar24 != 0) {
                                    uVar24 = uVar24 << 8 | uVar24 >> 8;
                                    uVar44 = 1;
                                    if (1 < uVar24) {
                                      uVar44 = (uint)uVar24;
                                    }
                                    lVar52 = 0;
                                    do {
                                      if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                          < unaff_R14 + ((lVar52 + 8) - *plVar1)) goto LAB_003d7fc0;
                                      uVar24 = *(ushort *)(unaff_R14 + lVar52 + 6);
                                      if (uVar24 != 0) {
                                        uVar32 = (ulong)(ushort)(uVar24 << 8 | uVar24 >> 8);
                                        pCVar40 = unaff_R14 + uVar32 + 2;
                                        if (((((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1)) ||
                                             ((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1))) ||
                                            (uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + uVar32)
                                                                     << 8 | *(ushort *)
                                                                             (unaff_R14 + uVar32) >>
                                                                            8),
                                            (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40) <
                                            uVar38 * 2)) ||
                                           (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                           (int)uVar38 < 1)) {
                                          if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                          uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                          *(uint *)(param_1 + 0x2c) = uVar38;
                                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                          *(undefined2 *)(unaff_R14 + lVar52 + 6) = 0;
                                        }
                                      }
                                      lVar52 = lVar52 + 2;
                                    } while ((ulong)uVar44 * 2 != lVar52);
                                  }
                                  goto switchD_003d71f8_caseD_7;
                                }
                              }
                            }
                            break;
                          case 4:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)unaff_R14 != 0x100) goto switchD_003d71f8_caseD_7;
                              if (unaff_R14 + (4 - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if ((uVar24 != 0) &&
                                   (uVar32 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (unaff_R14 +
                                                                (ushort)(uVar24 << 8 | uVar24 >> 8))
                                                       ), auVar82 = _DAT_005de030,
                                   uVar81 = _UNK_005de02c, uVar80 = _UNK_005de028,
                                   uVar79 = _UNK_005de024, uVar78 = _DAT_005de020,
                                   (char)uVar32 == '\0')) {
                                  if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                  uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                  *(uint *)(param_1 + 0x2c) = uVar38;
                                  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                  *(undefined2 *)(unaff_R14 + 2) = 0;
                                }
                                pCVar40 = unaff_R14 + 6;
                                if (((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2) &&
                                   ((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)) {
                                  uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + 4) << 8 |
                                                         *(ushort *)(unaff_R14 + 4) >> 8);
                                  local_b0 = (int)pCVar40;
                                  if ((uVar38 * 2 <= (uint)(*(int *)(param_1 + 0x10) - local_b0)) &&
                                     (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                     0 < (int)uVar38)) {
                                    uVar24 = *(ushort *)(unaff_R14 + 4);
                                    if (uVar24 != 0) {
                                      uVar25 = uVar24 << 8 | uVar24 >> 8;
                                      uVar24 = 1;
                                      if (1 < uVar25) {
                                        uVar24 = uVar25;
                                      }
                                      uVar32 = 0;
                                      do {
                                        if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                            (ulong)*puVar2 < unaff_R14 + (uVar32 * 2 - *plVar1) + 8)
                                        goto LAB_003d7fc0;
                                        uVar25 = *(ushort *)(unaff_R14 + uVar32 * 2 + 6);
                                        if (uVar25 != 0) {
                                          uVar33 = (ulong)(ushort)(uVar25 << 8 | uVar25 >> 8);
                                          pCVar40 = unaff_R14 + uVar33 + 2;
                                          if (((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)
                                             && ((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)
                                             ) {
                                            pCVar48 = unaff_R14 + uVar33;
                                            uVar38 = (uint)(ushort)(*(ushort *)pCVar48 << 8 |
                                                                   *(ushort *)pCVar48 >> 8);
                                            if ((uVar38 * 2 <=
                                                 (uint)(*(int *)(param_1 + 0x10) - (int)pCVar40)) &&
                                               (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                               0 < (int)uVar38)) {
                                              uVar25 = *(ushort *)pCVar48;
                                              if (uVar25 != 0) {
                                                uVar36 = uVar25 << 8 | uVar25 >> 8;
                                                uVar25 = 1;
                                                if (1 < uVar36) {
                                                  uVar25 = uVar36;
                                                }
                                                lVar52 = 0;
                                                do {
                                                  if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                                      (ulong)*puVar2 <
                                                      unaff_R14 + ((lVar52 + uVar33 + 4) - *plVar1))
                                                  goto LAB_003d7a1b;
                                                  uVar36 = *(ushort *)
                                                            (unaff_R14 + lVar52 + uVar33 + 2);
                                                  if (uVar36 != 0) {
                                                    uVar50 = (ulong)(ushort)(uVar36 << 8 |
                                                                            uVar36 >> 8);
                                                    if ((((ulong)*puVar2 <
                                                          (ulong)((long)(pCVar48 + uVar50 + 2) -
                                                                 *plVar1)) ||
                                                        (pCVar40 = pCVar48 + uVar50 + 4,
                                                        (ulong)*puVar2 <
                                                        (ulong)((long)pCVar40 - *plVar1))) ||
                                                       ((uVar36 = *(ushort *)(pCVar48 + uVar50 + 2),
                                                        uVar36 != 0 &&
                                                        ((((ulong)*puVar2 <
                                                           (ulong)((long)pCVar40 - *plVar1) ||
                                                          (uVar38 = (uint)(ushort)(uVar36 << 8 |
                                                                                  uVar36 >> 8) * 2 -
                                                                    2,
                                                          (uint)(*(int *)(param_1 + 0x10) -
                                                                (int)pCVar40) < uVar38)) ||
                                                         (uVar38 = *puVar4 - uVar38,
                                                         *puVar4 = uVar38, (int)uVar38 < 1)))))) {
                                                      if (0x1f < *(uint *)(param_1 + 0x2c))
                                                      goto LAB_003d7040;
                                                      uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                                      *(uint *)(param_1 + 0x2c) = uVar38;
                                                      if (*(char *)(param_1 + 0x28) == '\0')
                                                      goto LAB_003d7a1f;
                                                      *(undefined2 *)
                                                       (unaff_R14 + lVar52 + uVar33 + 2) = 0;
                                                    }
                                                  }
                                                  lVar52 = lVar52 + 2;
                                                } while ((ulong)uVar25 * 2 != lVar52);
                                              }
                                              goto LAB_003d7860;
                                            }
                                          }
LAB_003d7a1b:
                                          uVar38 = *(uint *)(param_1 + 0x2c);
LAB_003d7a1f:
                                          if (0x1f < uVar38) goto LAB_003d7fc0;
                                          uVar38 = uVar38 + 1;
                                          *(uint *)(param_1 + 0x2c) = uVar38;
                                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                          *(undefined2 *)(unaff_R14 + uVar32 * 2 + 6) = 0;
                                        }
LAB_003d7860:
                                        uVar32 = uVar32 + 1;
                                      } while (uVar32 != uVar24);
                                    }
                                    goto switchD_003d71f8_caseD_7;
                                  }
                                }
                              }
                            }
                            break;
                          case 5:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar24 = *(ushort *)unaff_R14 << 8 | *(ushort *)unaff_R14 >> 8;
                              if (uVar24 == 3) {
                                uVar27 = ContextFormat3::sanitize
                                                   ((ContextFormat3 *)unaff_R14,param_1);
                                cVar23 = (char)uVar27;
                              }
                              else if (uVar24 == 2) {
                                uVar32 = ContextFormat2_5<OT::Layout::SmallTypes>::sanitize
                                                   ((ContextFormat2_5<OT::Layout::SmallTypes> *)
                                                    unaff_R14,param_1);
                                cVar23 = (char)uVar32;
                              }
                              else {
                                if (uVar24 != 1) goto switchD_003d71f8_caseD_7;
                                uVar32 = ContextFormat1_4<OT::Layout::SmallTypes>::sanitize
                                                   (unaff_R14,param_1);
                                cVar23 = (char)uVar32;
                              }
LAB_003d7f8a:
                              uVar78 = _DAT_005de020;
                              uVar79 = _UNK_005de024;
                              uVar80 = _UNK_005de028;
                              uVar81 = _UNK_005de02c;
                              auVar82 = _DAT_005de030;
                              if (cVar23 != '\0') goto switchD_003d71f8_caseD_7;
                            }
                            break;
                          case 6:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar24 = *(ushort *)unaff_R14 << 8 | *(ushort *)unaff_R14 >> 8;
                              if (uVar24 == 3) {
                                uVar27 = ChainContextFormat3::sanitize
                                                   ((ChainContextFormat3 *)unaff_R14,param_1);
                                cVar23 = (char)uVar27;
                              }
                              else if (uVar24 == 2) {
                                uVar28 = ChainContextFormat2_5<OT::Layout::SmallTypes>::sanitize
                                                   ((ChainContextFormat2_5<OT::Layout::SmallTypes> *
                                                    )unaff_R14,param_1);
                                cVar23 = (char)uVar28;
                              }
                              else {
                                if (uVar24 != 1) goto switchD_003d71f8_caseD_7;
                                uVar28 = ChainContextFormat1_4<OT::Layout::SmallTypes>::sanitize
                                                   ((ChainContextFormat1_4<OT::Layout::SmallTypes> *
                                                    )unaff_R14,param_1);
                                cVar23 = (char)uVar28;
                              }
                              goto LAB_003d7f8a;
                            }
                            break;
                          default:
                            goto switchD_003d71f8_caseD_7;
                          case 8:
                            if (unaff_R14 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)unaff_R14 != 0x100) goto switchD_003d71f8_caseD_7;
                              if (unaff_R14 + (4 - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                uVar24 = *(ushort *)(unaff_R14 + 2);
                                if ((uVar24 != 0) &&
                                   (uVar32 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (unaff_R14 +
                                                                (ushort)(uVar24 << 8 | uVar24 >> 8))
                                                       ), auVar82 = _DAT_005de030,
                                   uVar81 = _UNK_005de02c, uVar80 = _UNK_005de028,
                                   uVar79 = _UNK_005de024, uVar78 = _DAT_005de020,
                                   (char)uVar32 == '\0')) {
                                  if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                  uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                  *(uint *)(param_1 + 0x2c) = uVar38;
                                  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                  *(undefined2 *)(unaff_R14 + 2) = 0;
                                }
                                pCVar40 = unaff_R14 + 6;
                                if (((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2) &&
                                   ((ulong)((long)pCVar40 - *plVar1) <= (ulong)*puVar2)) {
                                  uVar38 = (uint)(ushort)(*(ushort *)(unaff_R14 + 4) << 8 |
                                                         *(ushort *)(unaff_R14 + 4) >> 8);
                                  local_a8 = (int)pCVar40;
                                  if ((uVar38 * 2 <= (uint)(*(int *)(param_1 + 0x10) - local_a8)) &&
                                     (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                     0 < (int)uVar38)) {
                                    uVar24 = *(ushort *)(unaff_R14 + 4);
                                    if (uVar24 != 0) {
                                      uVar25 = uVar24 << 8 | uVar24 >> 8;
                                      uVar24 = 1;
                                      if (1 < uVar25) {
                                        uVar24 = uVar25;
                                      }
                                      lVar52 = 0;
                                      do {
                                        if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                            (ulong)*puVar2 < unaff_R14 + ((lVar52 + 8) - *plVar1))
                                        goto LAB_003d7fc0;
                                        uVar25 = *(ushort *)(unaff_R14 + lVar52 + 6);
                                        if ((uVar25 != 0) &&
                                           (uVar32 = hb_sanitize_context_t::
                                                     _dispatch<OT::Layout::Common::Coverage>
                                                               (param_1,(ushort *)
                                                                        (unaff_R14 +
                                                                        (ushort)(uVar25 << 8 |
                                                                                uVar25 >> 8))),
                                           auVar82 = _DAT_005de030, uVar81 = _UNK_005de02c,
                                           uVar80 = _UNK_005de028, uVar79 = _UNK_005de024,
                                           uVar78 = _DAT_005de020, (char)uVar32 == '\0')) {
                                          if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                          uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                          *(uint *)(param_1 + 0x2c) = uVar38;
                                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                          *(undefined2 *)(unaff_R14 + lVar52 + 6) = 0;
                                        }
                                        lVar52 = lVar52 + 2;
                                      } while ((ulong)uVar24 * 2 != lVar52);
                                    }
                                    uVar32 = (ulong)(ushort)(*(ushort *)(unaff_R14 + 4) << 8 |
                                                            *(ushort *)(unaff_R14 + 4) >> 8);
                                    pCVar48 = unaff_R14 + uVar32 * 2 + 8;
                                    if (((ulong)*puVar2 < (ulong)((long)pCVar48 - *plVar1)) ||
                                       ((ulong)*puVar2 < (ulong)((long)pCVar48 - *plVar1))) break;
                                    pCVar41 = unaff_R14 + uVar32 * 2 + 6;
                                    uVar38 = (uint)(ushort)(*(ushort *)pCVar41 << 8 |
                                                           *(ushort *)pCVar41 >> 8);
                                    if (((uint)(*(int *)(param_1 + 0x10) - (int)pCVar48) <
                                         uVar38 * 2) ||
                                       (uVar38 = *puVar4 + uVar38 * -2, *puVar4 = uVar38,
                                       (int)uVar38 < 1)) break;
                                    uVar24 = *(ushort *)pCVar41;
                                    if (uVar24 != 0) {
                                      uVar25 = uVar24 << 8 | uVar24 >> 8;
                                      uVar24 = 1;
                                      if (1 < uVar25) {
                                        uVar24 = uVar25;
                                      }
                                      lVar52 = 0;
                                      do {
                                        if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                            (ulong)*puVar2 <
                                            pCVar40 + ((lVar52 + uVar32 * 2 + 4) - *plVar1))
                                        goto LAB_003d7fc0;
                                        uVar25 = *(ushort *)(pCVar48 + lVar52);
                                        if ((uVar25 != 0) &&
                                           (uVar33 = hb_sanitize_context_t::
                                                     _dispatch<OT::Layout::Common::Coverage>
                                                               (param_1,(ushort *)
                                                                        (unaff_R14 +
                                                                        (ushort)(uVar25 << 8 |
                                                                                uVar25 >> 8))),
                                           auVar82 = _DAT_005de030, uVar81 = _UNK_005de02c,
                                           uVar80 = _UNK_005de028, uVar79 = _UNK_005de024,
                                           uVar78 = _DAT_005de020, (char)uVar33 == '\0')) {
                                          if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d7040;
                                          uVar38 = *(uint *)(param_1 + 0x2c) + 1;
                                          *(uint *)(param_1 + 0x2c) = uVar38;
                                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7fc4;
                                          *(undefined2 *)(pCVar48 + lVar52) = 0;
                                        }
                                        lVar52 = lVar52 + 2;
                                      } while ((ulong)uVar24 * 2 != lVar52);
                                    }
                                    uVar32 = (ulong)(ushort)(*(ushort *)pCVar41 << 8 |
                                                            *(ushort *)pCVar41 >> 8);
                                    pCVar40 = pCVar41 + uVar32 * 2 + 4;
                                    if (((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1)) ||
                                       ((ulong)*puVar2 < (ulong)((long)pCVar40 - *plVar1))) break;
                                    uVar24 = *(ushort *)(pCVar41 + uVar32 * 2 + 2);
                                    goto LAB_003d7f2c;
                                  }
                                }
                              }
                            }
                          }
LAB_003d7fc0:
                          uVar38 = *(uint *)(param_1 + 0x2c);
LAB_003d7fc4:
                          if (0x1f < uVar38) goto LAB_003d7040;
                          uVar38 = uVar38 + 1;
                          *(uint *)(param_1 + 0x2c) = uVar38;
                          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d7044;
                          *(undefined2 *)(pGVar30 + uVar51 * 2 + 6) = 0;
                        }
switchD_003d71f8_caseD_7:
                        uVar51 = uVar51 + 1;
                      } while (uVar51 != uVar49);
                    }
                    if ((*(ushort *)pGVar30 == 0x700) && (*(int *)(param_1 + 0x2c) == 0)) {
                      pGVar34 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                      if (*(ushort *)pGVar31 != 0) {
                        pGVar34 = pGVar39;
                      }
                      uVar26 = *(ushort *)pGVar34;
                      pGVar39 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                      if (uVar26 != 0) {
                        pGVar39 = pGVar30 + (ushort)(uVar26 << 8 | uVar26 >> 8);
                      }
                      uVar26 = 0;
                      if (*(short *)pGVar39 == 0x100) {
                        uVar26 = *(ushort *)(pGVar39 + 2) << 8 | *(ushort *)(pGVar39 + 2) >> 8;
                      }
                      if (1 < uVar35) {
                        local_78 = this + uVar47 + uVar29 + 8;
                        uVar47 = 1;
                        do {
                          pGVar39 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                          if (uVar47 < (ushort)(*(ushort *)pGVar31 << 8 | *(ushort *)pGVar31 >> 8))
                          {
                            pGVar39 = local_78;
                          }
                          uVar49 = *(ushort *)pGVar39;
                          pGVar39 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                          if (uVar49 != 0) {
                            pGVar39 = pGVar30 + (ushort)(uVar49 << 8 | uVar49 >> 8);
                          }
                          uVar49 = 0;
                          if (*(short *)pGVar39 == 0x100) {
                            uVar49 = *(ushort *)(pGVar39 + 2) << 8 | *(ushort *)(pGVar39 + 2) >> 8;
                          }
                          if (uVar49 != uVar26) break;
                          lVar52 = (2 - (ulong)uVar35) + uVar47;
                          uVar47 = uVar47 + 1;
                          local_78 = local_78 + 2;
                        } while (lVar52 != 1);
                        if (uVar49 != uVar26) goto LAB_003d7040;
                      }
                    }
                  }
LAB_003d6f0c:
                  uVar46 = uVar46 + 1;
                } while (uVar46 != uVar43);
              }
              goto LAB_003d8401;
            }
          }
LAB_003d83dd:
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8461;
          *(ushort *)pGVar3 = 0;
        }
LAB_003d8401:
        uVar43 = *(uint *)this;
        uVar29 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
        if ((uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 | (uVar43 & 0xff00) << 8 | uVar43 << 0x18) <
            0x10001) goto LAB_003d8464;
        if (this + (0xe - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2)
        {
          uVar43 = *(uint *)(this + 10);
          if ((uVar43 == 0) ||
             (uVar28 = FeatureVariations::sanitize
                                 ((FeatureVariations *)
                                  (this + (uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 |
                                           (uVar43 & 0xff00) << 8 | uVar43 << 0x18)),param_1),
             (char)uVar28 != '\0')) goto LAB_003d8464;
          if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) != '\0')) {
            *(undefined4 *)(this + 10) = 0;
            goto LAB_003d8464;
          }
        }
      }
    }
  }
LAB_003d8461:
  uVar29 = 0;
LAB_003d8464:
  return uVar29 & 0xffffffff;
}


