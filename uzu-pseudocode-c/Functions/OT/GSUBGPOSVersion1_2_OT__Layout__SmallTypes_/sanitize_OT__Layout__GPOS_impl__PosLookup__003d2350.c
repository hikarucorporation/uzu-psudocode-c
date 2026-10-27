// Function : sanitize<OT::Layout::GPOS_impl::PosLookup>
// Namespace: OT:GSUBGPOSVersion1_2_OT__Layout__SmallTypes_
// Entry    : 003d2350
// Prototype: ulong sanitize<OT::Layout::GPOS_impl::PosLookup>(GSUBGPOSVersion1_2<OT::Layout::SmallTypes> * this, long param_1)
// Body     : 003d2350 - 003d44de


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   OT::GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::sanitize<OT::Layout::GPOS_impl::PosLookup>(hb_sanitize_context_t*)
   const */

ulong __thiscall
OT::GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::sanitize<OT::Layout::GPOS_impl::PosLookup>
          (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *this,long param_1)

{
  long *plVar1;
  uint *puVar2;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  ValueFormat *this_00;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar7;
  undefined1 auVar8 [15];
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
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  ContextFormat1_4<OT::Layout::SmallTypes> *this_01;
  undefined6 uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar34;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar35;
  ulong uVar36;
  ulong uVar37;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar38;
  ushort uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar43;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar44;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar45;
  ContextFormat1_4<OT::Layout::SmallTypes> *pCVar46;
  long lVar47;
  ushort uVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ValueFormat *pVVar53;
  ushort uVar54;
  AnchorFormat3 *pAVar55;
  uint uVar56;
  long lVar57;
  ulong unaff_R14;
  bool bVar58;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  int iVar63;
  int iVar64;
  undefined1 auVar62 [16];
  int iVar65;
  char cVar66;
  undefined1 auVar67 [12];
  byte bVar73;
  char cVar74;
  short sVar75;
  short sVar77;
  short sVar78;
  char cVar79;
  byte bVar80;
  char cVar81;
  char cVar83;
  undefined1 auVar68 [14];
  char cVar85;
  undefined1 auVar69 [16];
  byte bVar76;
  byte bVar82;
  byte bVar84;
  byte bVar86;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  undefined1 auVar107 [16];
  int local_e0;
  uint local_98;
  int local_90;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *local_88;
  
  if (this + (6 - *(long *)(param_1 + 8)) <=
      (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar39 = *(ushort *)(this + 4);
    if ((uVar39 != 0) &&
       (uVar32 = RecordListOf<OT::Script>::sanitize
                           ((RecordListOf<OT::Script> *)(this + (ushort)(uVar39 << 8 | uVar39 >> 8))
                            ,param_1), (char)uVar32 == '\0')) {
      if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
         *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d44c7;
      *(undefined2 *)(this + 4) = 0;
    }
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    if (this + (8 - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
      uVar39 = *(ushort *)(this + 6);
      if ((uVar39 != 0) &&
         (uVar32 = RecordListOf<OT::Feature>::sanitize
                             ((RecordListOf<OT::Feature> *)
                              (this + (ushort)(uVar39 << 8 | uVar39 >> 8)),param_1),
         (char)uVar32 == '\0')) {
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d44c7;
        *(undefined2 *)(this + 6) = 0;
      }
      pGVar3 = this + 8;
      if (pGVar3 + (2 - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
        uVar39 = *(ushort *)pGVar3;
        if (uVar39 != 0) {
          uVar33 = (ulong)(ushort)(uVar39 << 8 | uVar39 >> 8);
          pGVar43 = this + uVar33 + 2;
          if (((ulong)((long)pGVar43 - *plVar1) <= (ulong)*puVar2) &&
             ((ulong)((long)pGVar43 - *plVar1) <= (ulong)*puVar2)) {
            pGVar7 = this + uVar33;
            uVar49 = (uint)(ushort)(*(ushort *)pGVar7 << 8 | *(ushort *)pGVar7 >> 8);
            if ((uVar49 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pGVar43)) &&
               (iVar40 = *(int *)(param_1 + 0x1c) + uVar49 * -2, *(int *)(param_1 + 0x1c) = iVar40,
               0 < iVar40)) {
              uVar39 = *(ushort *)pGVar7;
              if (uVar39 != 0) {
                puVar4 = (uint *)(param_1 + 0x1c);
                uVar39 = uVar39 << 8 | uVar39 >> 8;
                puVar5 = (uint *)(param_1 + 0x2c);
                pcVar6 = (char *)(param_1 + 0x28);
                uVar49 = 1;
                if (1 < uVar39) {
                  uVar49 = (uint)uVar39;
                }
                uVar50 = 0;
                uVar103 = _DAT_005de020;
                uVar104 = _UNK_005de024;
                uVar105 = _UNK_005de028;
                uVar106 = _UNK_005de02c;
                auVar107 = _DAT_005de030;
                do {
                  if ((GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                      pGVar7 + (uVar50 * 2 - *plVar1) + 4) goto LAB_003d4441;
                  uVar39 = *(ushort *)(pGVar7 + uVar50 * 2 + 2);
                  if (uVar39 == 0) goto LAB_003d2560;
                  uVar51 = (ulong)(ushort)(uVar39 << 8 | uVar39 >> 8);
                  pGVar43 = pGVar7 + uVar51 + 6;
                  if ((ulong)*puVar2 < (ulong)((long)pGVar43 - *plVar1)) {
LAB_003d2690:
                    uVar41 = *puVar5;
LAB_003d2693:
                    if ((0x1f < uVar41) || (*puVar5 = uVar41 + 1, *pcVar6 == '\0'))
                    goto LAB_003d4441;
                    *(undefined2 *)(pGVar7 + uVar50 * 2 + 2) = 0;
                  }
                  else {
                    if ((ulong)*puVar2 < (ulong)((long)pGVar43 - *plVar1)) goto LAB_003d2690;
                    pGVar34 = pGVar7 + uVar51;
                    uVar41 = (uint)(ushort)(*(ushort *)(pGVar34 + 4) << 8 |
                                           *(ushort *)(pGVar34 + 4) >> 8);
                    local_90 = (int)pGVar43;
                    if ((uint)(*(int *)(param_1 + 0x10) - local_90) < uVar41 * 2) goto LAB_003d2690;
                    uVar41 = *puVar4 + uVar41 * -2;
                    *puVar4 = uVar41;
                    if ((int)uVar41 < 1) goto LAB_003d2690;
                    pGVar35 = pGVar34 + 4;
                    uVar39 = *(ushort *)pGVar35 << 8 | *(ushort *)pGVar35 >> 8;
                    iVar40 = *(int *)(param_1 + 0x20) + (uint)uVar39;
                    *(int *)(param_1 + 0x20) = iVar40;
                    if (0x3fff < iVar40) goto LAB_003d2690;
                    if (((byte)pGVar34[3] & 0x10) == 0) {
                      lVar57 = *plVar1;
                      pGVar38 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                    }
                    else {
                      lVar57 = *plVar1;
                      pGVar38 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2;
                      if (pGVar38 < pGVar34 + ((ulong)uVar39 * 2 - lVar57) + 8) goto LAB_003d2690;
                    }
                    if (pGVar38 < pGVar43 + -lVar57) goto LAB_003d2690;
                    uVar30 = *(ushort *)pGVar34;
                    if ((ulong)*puVar2 < (ulong)((long)pGVar43 - *plVar1)) goto LAB_003d2690;
                    uVar41 = (uint)(ushort)(*(ushort *)pGVar35 << 8 | *(ushort *)pGVar35 >> 8);
                    if ((uint)(*(int *)(param_1 + 0x10) - local_90) < uVar41 * 2) goto LAB_003d2690;
                    uVar41 = *puVar4 + uVar41 * -2;
                    *puVar4 = uVar41;
                    if ((int)uVar41 < 1) goto LAB_003d2690;
                    uVar54 = *(ushort *)pGVar35;
                    if (uVar54 != 0) {
                      uVar28 = uVar54 << 8 | uVar54 >> 8;
                      uVar54 = 1;
                      if (1 < uVar28) {
                        uVar54 = uVar28;
                      }
                      unaff_R14 = 0;
                      do {
                        if ((GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                            pGVar35 + (unaff_R14 * 2 - *plVar1) + 4) goto LAB_003d2690;
                        uVar28 = *(ushort *)(pGVar34 + unaff_R14 * 2 + 6);
                        if (uVar28 != 0) {
                          pCVar44 = (ContextFormat1_4<OT::Layout::SmallTypes> *)
                                    (pGVar35 + unaff_R14 * 2 + 2);
                          uVar29 = uVar30 << 8 | uVar30 >> 8;
                          this_01 = (ContextFormat1_4<OT::Layout::SmallTypes> *)
                                    (pGVar34 + (ushort)(uVar28 << 8 | uVar28 >> 8));
                          while (uVar29 == 9) {
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (2 - *plVar1)) goto LAB_003d3d10;
                            if (*(short *)this_01 != 0x100) goto switchD_003d2870_default;
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (8 - *plVar1)) goto LAB_003d3d10;
                            if (*(short *)(this_01 + 2) == 0x900) goto LAB_003d3d10;
                            uVar41 = *(uint *)(this_01 + 4);
                            pCVar45 = (ContextFormat1_4<OT::Layout::SmallTypes> *)&_hb_NullPool;
                            if (uVar41 != 0) {
                              pCVar45 = this_01 + (uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 |
                                                   (uVar41 & 0xff00) << 8 | uVar41 << 0x18);
                            }
                            uVar29 = *(ushort *)(this_01 + 2) << 8 | *(ushort *)(this_01 + 2) >> 8;
                            this_01 = pCVar45;
                          }
                          switch(uVar29) {
                          case 1:
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (2 - *plVar1)) break;
                            uVar28 = *(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8;
                            if (uVar28 == 2) {
                              if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                  this_01 + (8 - *plVar1)) break;
                              if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                  this_01 + (4 - *plVar1)) break;
                              uVar28 = *(ushort *)(this_01 + 2);
                              if (uVar28 == 0) {
LAB_003d381c:
                                pCVar45 = this_01 + 8;
                                if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                  uVar28 = *(ushort *)(this_01 + 6);
                                  uVar41 = (uint)*(ushort *)(this_01 + 4) -
                                           (*(ushort *)(this_01 + 4) >> 1 & 0x5555);
                                  uVar41 = (uVar41 >> 2 & 0x3333) + (uVar41 & 0x3333);
                                  uVar41 = ((uVar41 >> 4) + uVar41 & 0xf0f) * 0x101 >> 7 & 0xff;
                                  uVar42 = (uint)(ushort)(uVar28 << 8 | uVar28 >> 8);
                                  uVar52 = uVar41 * uVar42;
                                  if (uVar52 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar45)) {
                                    uVar52 = *puVar4 - uVar52;
                                    *puVar4 = uVar52;
                                    if (0 < (int)uVar52) {
                                      if (((*(char *)(param_1 + 0x3d) == '\0') && (uVar28 != 0)) &&
                                         (0xfff < *(ushort *)(this_01 + 4))) {
                                        do {
                                          uVar42 = uVar42 - 1;
                                          uVar32 = Layout::GPOS_impl::ValueFormat::
                                                   sanitize_value_devices
                                                             ((ValueFormat *)(this_01 + 4),param_1,
                                                              (long)this_01,(long)pCVar45);
                                          cVar66 = (char)uVar32;
                                          if (cVar66 == '\0') break;
                                          pCVar45 = pCVar45 + uVar41;
                                        } while (uVar42 != 0);
                                        goto LAB_003d42c6;
                                      }
                                      goto switchD_003d2870_default;
                                    }
                                  }
                                }
                                break;
                              }
                              uVar36 = hb_sanitize_context_t::
                                       _dispatch<OT::Layout::Common::Coverage>
                                                 (param_1,(ushort *)
                                                          (this_01 +
                                                          (ushort)(uVar28 << 8 | uVar28 >> 8)));
                              auVar107 = _DAT_005de030;
                              uVar106 = _UNK_005de02c;
                              uVar105 = _UNK_005de028;
                              uVar104 = _UNK_005de024;
                              uVar103 = _DAT_005de020;
                              if ((char)uVar36 != '\0') goto LAB_003d381c;
                              if (*puVar5 < 0x20) {
                                uVar41 = *puVar5 + 1;
                                *puVar5 = uVar41;
                                if (*pcVar6 != '\0') {
                                  *(undefined2 *)(this_01 + 2) = 0;
                                  goto LAB_003d381c;
                                }
                                goto LAB_003d3d13;
                              }
                              goto LAB_003d2690;
                            }
                            if (uVar28 != 1) goto switchD_003d2870_default;
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (6 - *plVar1)) break;
                            if (this_01 + (4 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar28 = *(ushort *)(this_01 + 2);
                              if (uVar28 != 0) {
                                uVar36 = hb_sanitize_context_t::
                                         _dispatch<OT::Layout::Common::Coverage>
                                                   (param_1,(ushort *)
                                                            (this_01 +
                                                            (ushort)(uVar28 << 8 | uVar28 >> 8)));
                                auVar107 = _DAT_005de030;
                                uVar106 = _UNK_005de02c;
                                uVar105 = _UNK_005de028;
                                uVar104 = _UNK_005de024;
                                uVar103 = _DAT_005de020;
                                if ((char)uVar36 == '\0') {
                                  if (0x1f < *puVar5) goto LAB_003d2690;
                                  uVar41 = *puVar5 + 1;
                                  *puVar5 = uVar41;
                                  if (*pcVar6 == '\0') goto LAB_003d3d13;
                                  *(undefined2 *)(this_01 + 2) = 0;
                                }
                              }
                              uVar28 = *(ushort *)(this_01 + 2);
                              pCVar45 = (ContextFormat1_4<OT::Layout::SmallTypes> *)&_hb_NullPool;
                              if (uVar28 != 0) {
                                pCVar45 = this_01 + (ushort)(uVar28 << 8 | uVar28 >> 8);
                              }
                              uVar28 = *(ushort *)pCVar45 << 8 | *(ushort *)pCVar45 >> 8;
                              if (uVar28 == 2) {
                                uVar28 = *(ushort *)(pCVar45 + 2);
                                if (uVar28 == 0) {
                                  uVar41 = 0;
                                }
                                else {
                                  uVar36 = (ulong)(ushort)(uVar28 << 8 | uVar28 >> 8);
                                  uVar37 = uVar36 * 6 - 6;
                                  if (uVar37 < 0x30) {
                                    uVar41 = 0;
                                    pCVar46 = pCVar45;
                                  }
                                  else {
                                    lVar57 = uVar37 / 6 + 1;
                                    uVar37 = (ulong)((uint)lVar57 & 7);
                                    if (uVar37 == 0) {
                                      uVar37 = 8;
                                    }
                                    lVar57 = lVar57 - uVar37;
                                    pCVar46 = pCVar45 + 0x1c;
                                    iVar99 = 0;
                                    iVar100 = 0;
                                    iVar101 = 0;
                                    iVar102 = 0;
                                    iVar40 = 0;
                                    iVar63 = 0;
                                    iVar64 = 0;
                                    iVar65 = 0;
                                    lVar47 = lVar57;
                                    do {
                                      auVar93._4_4_ =
                                           (uint)((ulong)*(undefined8 *)(pCVar46 + -8) >> 0x20);
                                      auVar93._0_4_ = *(uint *)(pCVar46 + -0x18);
                                      auVar93._8_4_ = *(uint *)(pCVar46 + -0x10);
                                      auVar93._12_4_ = *(uint *)(pCVar46 + -0xc);
                                      auVar87._12_4_ = *(uint *)(pCVar46 + -0xc) & uVar106;
                                      auVar87._0_4_ =
                                           *(uint *)(pCVar46 + -0x18) & uVar103 |
                                           ~uVar103 & (uint)*(undefined8 *)(pCVar46 + -8);
                                      auVar87._4_4_ = *(uint *)(pCVar46 + -0x10) & uVar105;
                                      auVar87._8_4_ =
                                           *(uint *)(pCVar46 + -0x14) & uVar104 |
                                           ~uVar104 & auVar93._4_4_;
                                      auVar62 = pshufhw(auVar87,auVar87,0xe6);
                                      auVar88._0_4_ = auVar62._0_4_;
                                      auVar88._8_4_ = auVar62._8_4_;
                                      auVar88._12_4_ = auVar62._12_4_;
                                      auVar88._4_4_ = auVar88._8_4_;
                                      auVar70 = pshuflw(auVar88,auVar88,0x6c);
                                      auVar89._4_4_ =
                                           (uint)((ulong)*(undefined8 *)(pCVar46 + 0x10) >> 0x20);
                                      auVar89._0_4_ = *(uint *)pCVar46;
                                      auVar89._8_4_ = *(uint *)(pCVar46 + 8);
                                      auVar89._12_4_ = *(uint *)(pCVar46 + 0xc);
                                      auVar95._12_4_ = *(uint *)(pCVar46 + 0xc) & uVar106;
                                      auVar95._0_4_ =
                                           *(uint *)pCVar46 & uVar103 |
                                           ~uVar103 & (uint)*(undefined8 *)(pCVar46 + 0x10);
                                      auVar95._4_4_ = *(uint *)(pCVar46 + 8) & uVar105;
                                      auVar95._8_4_ =
                                           *(uint *)(pCVar46 + 4) & uVar104 |
                                           ~uVar104 & auVar89._4_4_;
                                      auVar62 = pshufhw(auVar95,auVar95,0xe6);
                                      auVar98._0_4_ = auVar62._0_4_;
                                      auVar98._8_4_ = auVar62._8_4_;
                                      auVar98._12_4_ = auVar62._12_4_;
                                      auVar98._4_4_ = auVar98._8_4_;
                                      auVar62 = pshuflw(auVar98,auVar98,0x6c);
                                      auVar69 = pshuflw(auVar93,auVar93,0xe6);
                                      auVar69 = pshufhw(auVar69,auVar69,0xec);
                                      auVar94._0_4_ = auVar69._0_4_;
                                      auVar94._8_4_ = auVar69._8_4_;
                                      auVar94._12_4_ = auVar69._12_4_;
                                      auVar94._4_4_ = auVar94._8_4_;
                                      auVar97 = pshuflw(in_XMM7,auVar94,0x39);
                                      auVar69 = pshuflw(auVar89,auVar89,0xe6);
                                      auVar69 = pshufhw(auVar69,auVar69,0xec);
                                      auVar90._0_4_ = auVar69._0_4_;
                                      auVar90._8_4_ = auVar69._8_4_;
                                      auVar90._12_4_ = auVar69._12_4_;
                                      auVar90._4_4_ = auVar90._8_4_;
                                      auVar69 = pshuflw(auVar94,auVar90,0x39);
                                      auVar91._0_2_ = auVar97._0_2_ >> 8;
                                      auVar91._2_2_ = auVar97._2_2_ >> 8;
                                      auVar91._4_2_ = auVar97._4_2_ >> 8;
                                      auVar91._6_2_ = auVar97._6_2_ >> 8;
                                      auVar91._8_2_ = auVar97._8_2_ >> 8;
                                      auVar91._10_2_ = auVar97._10_2_ >> 8;
                                      auVar91._12_2_ = auVar97._12_2_ >> 8;
                                      auVar91._14_2_ = auVar97._14_2_ >> 8;
                                      auVar98 = psllw(auVar97,8);
                                      auVar98 = auVar98 | auVar91;
                                      auVar92._0_2_ = auVar69._0_2_ >> 8;
                                      auVar92._2_2_ = auVar69._2_2_ >> 8;
                                      auVar92._4_2_ = auVar69._4_2_ >> 8;
                                      auVar92._6_2_ = auVar69._6_2_ >> 8;
                                      auVar92._8_2_ = auVar69._8_2_ >> 8;
                                      auVar92._10_2_ = auVar69._10_2_ >> 8;
                                      auVar92._12_2_ = auVar69._12_2_ >> 8;
                                      auVar92._14_2_ = auVar69._14_2_ >> 8;
                                      auVar95 = psllw(auVar69,8);
                                      auVar95 = auVar95 | auVar92;
                                      auVar12._10_2_ = 0;
                                      auVar12._0_10_ = auVar98._0_10_;
                                      auVar12._12_2_ = auVar98._6_2_;
                                      auVar16._8_2_ = auVar98._4_2_;
                                      auVar16._0_8_ = auVar98._0_8_;
                                      auVar16._10_4_ = auVar12._10_4_;
                                      auVar21._6_8_ = 0;
                                      auVar21._0_6_ = auVar16._8_6_;
                                      auVar9._10_2_ = 0;
                                      auVar9._0_10_ = auVar95._0_10_;
                                      auVar9._12_2_ = auVar95._6_2_;
                                      auVar13._8_2_ = auVar95._4_2_;
                                      auVar13._0_8_ = auVar95._0_8_;
                                      auVar13._10_4_ = auVar9._10_4_;
                                      auVar22._6_8_ = 0;
                                      auVar22._0_6_ = auVar13._8_6_;
                                      auVar17._4_2_ = auVar95._2_2_;
                                      auVar17._0_4_ = auVar95._0_4_;
                                      auVar17._6_8_ = SUB148(auVar22 << 0x40,6);
                                      auVar96._0_2_ = auVar70._0_2_ >> 8;
                                      auVar96._2_2_ = auVar70._2_2_ >> 8;
                                      auVar96._4_2_ = auVar70._4_2_ >> 8;
                                      auVar96._6_2_ = auVar70._6_2_ >> 8;
                                      auVar96._8_2_ = auVar70._8_2_ >> 8;
                                      auVar96._10_2_ = auVar70._10_2_ >> 8;
                                      auVar96._12_2_ = auVar70._12_2_ >> 8;
                                      auVar96._14_2_ = auVar70._14_2_ >> 8;
                                      auVar70 = psllw(auVar70,8);
                                      auVar70 = auVar70 | auVar96;
                                      auVar59._0_2_ = auVar62._0_2_ >> 8;
                                      auVar59._2_2_ = auVar62._2_2_ >> 8;
                                      auVar59._4_2_ = auVar62._4_2_ >> 8;
                                      auVar59._6_2_ = auVar62._6_2_ >> 8;
                                      auVar59._8_2_ = auVar62._8_2_ >> 8;
                                      auVar59._10_2_ = auVar62._10_2_ >> 8;
                                      auVar59._12_2_ = auVar62._12_2_ >> 8;
                                      auVar59._14_2_ = auVar62._14_2_ >> 8;
                                      auVar62 = psllw(auVar62,8);
                                      auVar62 = auVar62 | auVar59;
                                      auVar10._10_2_ = 0;
                                      auVar10._0_10_ = auVar70._0_10_;
                                      auVar10._12_2_ = auVar70._6_2_;
                                      auVar14._8_2_ = auVar70._4_2_;
                                      auVar14._0_8_ = auVar70._0_8_;
                                      auVar14._10_4_ = auVar10._10_4_;
                                      auVar23._6_8_ = 0;
                                      auVar23._0_6_ = auVar14._8_6_;
                                      auVar18._4_2_ = auVar70._2_2_;
                                      auVar18._0_4_ = auVar70._0_4_;
                                      auVar18._6_8_ = SUB148(auVar23 << 0x40,6);
                                      auVar11._10_2_ = 0;
                                      auVar11._0_10_ = auVar62._0_10_;
                                      auVar11._12_2_ = auVar62._6_2_;
                                      auVar15._8_2_ = auVar62._4_2_;
                                      auVar15._0_8_ = auVar62._0_8_;
                                      auVar15._10_4_ = auVar11._10_4_;
                                      auVar24._6_8_ = 0;
                                      auVar24._0_6_ = auVar15._8_6_;
                                      auVar19._4_2_ = auVar62._2_2_;
                                      auVar19._0_4_ = auVar62._0_4_;
                                      auVar19._6_8_ = SUB148(auVar24 << 0x40,6);
                                      uVar41 = auVar62._0_4_ & 0xffff;
                                      auVar20._4_10_ = auVar19._4_10_;
                                      auVar20._0_4_ = uVar41;
                                      auVar69 = auVar70 ^ auVar107;
                                      in_XMM7 = auVar98 ^ auVar107;
                                      auVar61._0_12_ = auVar20._0_12_;
                                      auVar61._12_2_ = 0;
                                      auVar61._14_2_ = -(ushort)(in_XMM7._6_2_ < auVar69._6_2_);
                                      auVar60._12_4_ = auVar61._12_4_;
                                      auVar60._0_10_ = auVar20._0_10_;
                                      auVar60._10_2_ = -(ushort)(in_XMM7._4_2_ < auVar69._4_2_);
                                      uVar32 = CONCAT62(auVar60._10_6_,auVar62._2_2_);
                                      auVar97._2_8_ = uVar32;
                                      auVar97._0_2_ = -(ushort)(in_XMM7._2_2_ < auVar69._2_2_);
                                      auVar97._10_6_ = 0;
                                      auVar62 = auVar62 ^ auVar107;
                                      auVar96 = auVar95 ^ auVar107;
                                      sVar75 = -(ushort)(auVar96._2_2_ < auVar62._2_2_);
                                      sVar77 = -(ushort)(auVar96._4_2_ < auVar62._4_2_);
                                      sVar78 = -(ushort)(auVar96._6_2_ < auVar62._6_2_);
                                      Var26 = CONCAT64(CONCAT42(CONCAT22(sVar78,sVar78),sVar77),
                                                       CONCAT22(sVar77,sVar78));
                                      auVar25._4_8_ = (long)((unkuint10)Var26 >> 0x10);
                                      auVar25._2_2_ = sVar75;
                                      auVar25._0_2_ = sVar75;
                                      auVar71._0_4_ =
                                           (int)(short)-(ushort)(auVar96._0_2_ < auVar62._0_2_);
                                      auVar71._4_4_ = auVar25._0_4_ >> 0x10;
                                      auVar71._8_4_ = (int)((unkuint10)Var26 >> 0x10) >> 0x10;
                                      auVar71._12_4_ = (int)sVar78;
                                      iVar99 = iVar99 + (~(int)(short)-(ushort)(in_XMM7._0_2_ <
                                                                               auVar69._0_2_) &
                                                        ((uint)auVar98._0_2_ -
                                                        (auVar70._0_4_ & 0xffff)) + 1);
                                      iVar100 = iVar100 + (~(SUB164(auVar97 << 0x30,4) >> 0x10) &
                                                          ((int)CONCAT82(SUB148(auVar21 << 0x40,6),
                                                                         auVar98._2_2_) -
                                                          auVar18._4_4_) + 1U);
                                      iVar101 = iVar101 + (~((int)uVar32 >> 0x10) &
                                                          (auVar16._8_4_ - auVar14._8_4_) + 1U);
                                      iVar102 = iVar102 + (~(auVar60._12_4_ >> 0x10) &
                                                          ((auVar12._10_4_ >> 0x10) -
                                                          (auVar10._10_4_ >> 0x10)) + 1);
                                      auVar72._0_4_ = ((auVar95._0_4_ & 0xffff) - uVar41) + 1;
                                      auVar72._4_4_ = (auVar17._4_4_ - auVar19._4_4_) + 1;
                                      auVar72._8_4_ = (auVar13._8_4_ - auVar15._8_4_) + 1;
                                      auVar72._12_4_ =
                                           ((auVar9._10_4_ >> 0x10) - (auVar11._10_4_ >> 0x10)) + 1;
                                      auVar72 = ~auVar71 & auVar72;
                                      iVar40 = iVar40 + auVar72._0_4_;
                                      iVar63 = iVar63 + auVar72._4_4_;
                                      iVar64 = iVar64 + auVar72._8_4_;
                                      iVar65 = iVar65 + auVar72._12_4_;
                                      pCVar46 = pCVar46 + 0x30;
                                      lVar47 = lVar47 + -8;
                                    } while (lVar47 != 0);
                                    pCVar46 = pCVar45 + lVar57 * 6;
                                    uVar41 = iVar65 + iVar102 + iVar63 + iVar100 +
                                             iVar64 + iVar101 + iVar40 + iVar99;
                                  }
                                  pCVar46 = pCVar46 + 4;
                                  do {
                                    while( true ) {
                                      uVar28 = *(ushort *)(pCVar46 + 2) << 8 |
                                               *(ushort *)(pCVar46 + 2) >> 8;
                                      uVar29 = *(ushort *)pCVar46 << 8 | *(ushort *)pCVar46 >> 8;
                                      if (uVar28 < uVar29) break;
                                      uVar41 = uVar41 + ((uint)uVar28 - (uint)uVar29) + 1;
                                      pCVar46 = pCVar46 + 6;
                                      if (pCVar46 == pCVar45 + uVar36 * 6 + 4) goto LAB_003d3fe5;
                                    }
                                    pCVar46 = pCVar46 + 6;
                                  } while (pCVar46 != pCVar45 + uVar36 * 6 + 4);
                                }
                              }
                              else {
                                uVar41 = 0xffffffff;
                                if (uVar28 == 1) {
                                  uVar41 = (uint)(ushort)(*(ushort *)(pCVar45 + 2) << 8 |
                                                         *(ushort *)(pCVar45 + 2) >> 8);
                                }
                              }
LAB_003d3fe5:
                              uVar41 = uVar41 >> 1;
                              uVar52 = *puVar4;
                              uVar42 = uVar52 - uVar41;
                              bVar58 = uVar42 == 0;
                              if ((uVar52 < uVar41 || bVar58) || (int)uVar52 < 0) {
                                uVar42 = 0xffffffff;
                              }
                              *puVar4 = uVar42;
                              if ((uVar52 >= uVar41 && !bVar58) && (int)uVar52 >= 0) {
                                pCVar45 = this_01 + 6;
                                if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                  uVar28 = *(ushort *)(this_01 + 4);
                                  uVar41 = (uint)uVar28 - (uVar28 >> 1 & 0x5555);
                                  uVar41 = (uVar41 >> 2 & 0x3333) + (uVar41 & 0x3333);
                                  uVar41 = ((uVar41 >> 4) + uVar41 & 0xf0f) * 0x101 >> 7 & 0xff;
                                  if (uVar41 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar45)) {
                                    uVar42 = uVar42 - uVar41;
                                    *puVar4 = uVar42;
                                    if (0 < (int)uVar42) {
                                      if ((*(char *)(param_1 + 0x3d) == '\0') && (0xfff < uVar28)) {
                                        uVar32 = Layout::GPOS_impl::ValueFormat::
                                                 sanitize_value_devices
                                                           ((ValueFormat *)(this_01 + 4),param_1,
                                                            (long)this_01,(long)pCVar45);
                                        cVar66 = (char)uVar32;
                                        goto LAB_003d3ccd;
                                      }
                                      goto switchD_003d2870_default;
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          case 2:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar28 = *(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8;
                              if (uVar28 == 2) {
                                if (this_01 + (0x10 - *plVar1) <=
                                    (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                  if (this_01 + (4 - *plVar1) <=
                                      (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                    uVar28 = *(ushort *)(this_01 + 2);
                                    if (uVar28 != 0) {
                                      uVar36 = hb_sanitize_context_t::
                                               _dispatch<OT::Layout::Common::Coverage>
                                                         (param_1,(ushort *)
                                                                  (this_01 +
                                                                  (ushort)(uVar28 << 8 | uVar28 >> 8
                                                                          )));
                                      auVar107 = _DAT_005de030;
                                      uVar106 = _UNK_005de02c;
                                      uVar105 = _UNK_005de028;
                                      uVar104 = _UNK_005de024;
                                      uVar103 = _DAT_005de020;
                                      if ((char)uVar36 == '\0') {
                                        if (0x1f < *puVar5) goto LAB_003d2690;
                                        uVar41 = *puVar5 + 1;
                                        *puVar5 = uVar41;
                                        if (*pcVar6 == '\0') goto LAB_003d3d13;
                                        *(undefined2 *)(this_01 + 2) = 0;
                                      }
                                    }
                                    if (this_01 + (10 - *plVar1) <=
                                        (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2)
                                    {
                                      uVar28 = *(ushort *)(this_01 + 8);
                                      if (uVar28 != 0) {
                                        uVar36 = ClassDef::sanitize((ClassDef *)
                                                                    (this_01 +
                                                                    (ushort)(uVar28 << 8 |
                                                                            uVar28 >> 8)),param_1);
                                        auVar107 = _DAT_005de030;
                                        uVar106 = _UNK_005de02c;
                                        uVar105 = _UNK_005de028;
                                        uVar104 = _UNK_005de024;
                                        uVar103 = _DAT_005de020;
                                        if ((char)uVar36 == '\0') {
                                          if (0x1f < *puVar5) goto LAB_003d2690;
                                          uVar41 = *puVar5 + 1;
                                          *puVar5 = uVar41;
                                          if (*pcVar6 == '\0') goto LAB_003d3d13;
                                          *(undefined2 *)(this_01 + 8) = 0;
                                        }
                                      }
                                      if (this_01 + (0xc - *plVar1) <=
                                          (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                         ) {
                                        uVar28 = *(ushort *)(this_01 + 10);
                                        if (uVar28 != 0) {
                                          uVar36 = ClassDef::sanitize((ClassDef *)
                                                                      (this_01 +
                                                                      (ushort)(uVar28 << 8 |
                                                                              uVar28 >> 8)),param_1)
                                          ;
                                          auVar107 = _DAT_005de030;
                                          uVar106 = _UNK_005de02c;
                                          uVar105 = _UNK_005de028;
                                          uVar104 = _UNK_005de024;
                                          uVar103 = _DAT_005de020;
                                          if ((char)uVar36 == '\0') {
                                            if (0x1f < *puVar5) goto LAB_003d2690;
                                            uVar41 = *puVar5 + 1;
                                            *puVar5 = uVar41;
                                            if (*pcVar6 == '\0') goto LAB_003d3d13;
                                            *(undefined2 *)(this_01 + 10) = 0;
                                          }
                                        }
                                        uVar41 = *(uint *)(this_01 + 4);
                                        uVar28 = (ushort)(uVar41 >> 0x10);
                                        auVar62 = ZEXT416(CONCAT22(uVar28 >> 1,(ushort)uVar41 >> 1))
                                                  & _DAT_005ddbd0;
                                        uVar29 = CONCAT11((char)(uVar41 >> 8) - auVar62[1],
                                                          (char)uVar41 - auVar62[0]);
                                        uVar52 = CONCAT13((char)(uVar41 >> 0x18) - auVar62[3],
                                                          CONCAT12((char)(uVar41 >> 0x10) -
                                                                   auVar62[2],uVar29));
                                        auVar67._0_10_ =
                                             CONCAT19(-auVar62[9],
                                                      CONCAT18(-auVar62[8],(ulong)uVar52));
                                        auVar67[10] = -auVar62[10];
                                        auVar67[0xb] = -auVar62[0xb];
                                        auVar68[0xc] = -auVar62[0xc];
                                        auVar68._0_12_ = auVar67;
                                        auVar68[0xd] = -auVar62[0xd];
                                        auVar70[0xe] = -auVar62[0xe];
                                        auVar70._0_14_ = auVar68;
                                        auVar70[0xf] = -auVar62[0xf];
                                        auVar62 = auVar70 & _DAT_005de010;
                                        auVar69._0_2_ = uVar29 >> 2;
                                        auVar69._2_2_ = (ushort)(uVar52 >> 0x12);
                                        auVar69._4_4_ = 0;
                                        auVar69._8_2_ = (ushort)((unkuint10)auVar67._0_10_ >> 0x42);
                                        auVar69._10_2_ = auVar67._10_2_ >> 2;
                                        auVar69._12_2_ = auVar68._12_2_ >> 2;
                                        auVar69._14_2_ = auVar70._14_2_ >> 2;
                                        auVar69 = auVar69 & _DAT_005de010;
                                        cVar66 = auVar69[0] + auVar62[0];
                                        bVar73 = auVar69[1] + auVar62[1];
                                        uVar48 = CONCAT11(bVar73,cVar66);
                                        cVar74 = auVar69[2] + auVar62[2];
                                        bVar76 = auVar69[3] + auVar62[3];
                                        cVar79 = auVar69[8] + auVar62[8];
                                        bVar80 = auVar69[9] + auVar62[9];
                                        uVar29 = CONCAT11(bVar80,cVar79);
                                        cVar81 = auVar69[10] + auVar62[10];
                                        bVar82 = auVar69[0xb] + auVar62[0xb];
                                        uVar31 = CONCAT13(bVar82,CONCAT12(cVar81,uVar29));
                                        cVar83 = auVar69[0xc] + auVar62[0xc];
                                        bVar84 = auVar69[0xd] + auVar62[0xd];
                                        uVar27 = CONCAT15(bVar84,CONCAT14(cVar83,uVar31));
                                        cVar85 = auVar69[0xe] + auVar62[0xe];
                                        bVar86 = auVar69[0xf] + auVar62[0xf];
                                        auVar62[0] = (char)(uVar48 >> 4) + cVar66;
                                        auVar62[1] = (bVar73 >> 4) + bVar73;
                                        auVar62[2] = (char)(CONCAT13(bVar76,CONCAT12(cVar74,uVar48))
                                                           >> 0x14) + cVar74;
                                        auVar62[3] = (bVar76 >> 4) + bVar76;
                                        auVar62._4_4_ = 0;
                                        auVar62[8] = (char)(uVar29 >> 4) + cVar79;
                                        auVar62[9] = (bVar80 >> 4) + bVar80;
                                        auVar62[10] = (char)((uint)uVar31 >> 0x14) + cVar81;
                                        auVar62[0xb] = (bVar82 >> 4) + bVar82;
                                        auVar62[0xc] = (char)((uint6)uVar27 >> 0x24) + cVar83;
                                        auVar62[0xd] = (bVar84 >> 4) + bVar84;
                                        auVar62[0xe] = (char)(CONCAT17(bVar86,CONCAT16(cVar85,uVar27
                                                                                      )) >> 0x34) +
                                                       cVar85;
                                        auVar62[0xf] = (bVar86 >> 4) + bVar86;
                                        auVar62 = auVar62 & _DAT_005d9980;
                                        auVar70 = psllw(auVar62,8);
                                        auVar8._1_14_ = auVar70._2_14_;
                                        auVar8[0] = auVar70[1] + auVar62[1];
                                        uVar29 = (ushort)(((uint)(byte)(auVar70[3] + auVar62[3]) <<
                                                          0x18) >> 0x18);
                                        uVar52 = CONCAT22(uVar29,auVar8._0_2_);
                                        uVar36 = (ulong)(((uint)uVar29 + (uVar52 & 0xffff00ff)) * 2
                                                        & 0xffff);
                                        uVar56 = (uint)(ushort)(*(ushort *)(this_01 + 0xe) << 8 |
                                                               *(ushort *)(this_01 + 0xe) >> 8) *
                                                 (uint)(ushort)(*(ushort *)(this_01 + 0xc) << 8 |
                                                               *(ushort *)(this_01 + 0xc) >> 8);
                                        uVar42 = (uint)(uVar56 * uVar36);
                                        if ((int)(uVar56 * uVar36 >> 0x20) != 0) break;
                                        pCVar45 = this_01 + 0x10;
                                        if ((ulong)*puVar2 < (ulong)((long)pCVar45 - *plVar1))
                                        break;
                                        if ((uint)(*(int *)(param_1 + 0x10) - (int)pCVar45) < uVar42
                                           ) break;
                                        uVar42 = *puVar4 - uVar42;
                                        *puVar4 = uVar42;
                                        if ((int)uVar42 < 1) break;
                                        if (*(char *)(param_1 + 0x3d) != '\0')
                                        goto switchD_003d2870_default;
                                        if (0xfff < (uVar41 & 0xffff)) {
                                          if (uVar56 != 0) {
                                            uVar41 = uVar56;
                                            do {
                                              uVar32 = Layout::GPOS_impl::ValueFormat::
                                                       sanitize_value_devices
                                                                 ((ValueFormat *)(this_01 + 4),
                                                                  param_1,(long)this_01,
                                                                  (long)pCVar45);
                                              uVar103 = _DAT_005de020;
                                              uVar104 = _UNK_005de024;
                                              uVar105 = _UNK_005de028;
                                              uVar106 = _UNK_005de02c;
                                              auVar107 = _DAT_005de030;
                                              if ((char)uVar32 == '\0') goto LAB_003d3d10;
                                              pCVar45 = pCVar45 + uVar36;
                                              uVar41 = uVar41 - 1;
                                            } while (uVar41 != 0);
                                            uVar28 = *(ushort *)(this_01 + 6);
                                          }
                                        }
                                        if (uVar56 == 0) goto switchD_003d2870_default;
                                        if (uVar28 < 0x1000) goto switchD_003d2870_default;
                                        pCVar45 = this_01 + ((ulong)uVar52 & 0xff) * 2 + 0x10;
                                        do {
                                          uVar56 = uVar56 - 1;
                                          uVar32 = Layout::GPOS_impl::ValueFormat::
                                                   sanitize_value_devices
                                                             ((ValueFormat *)(this_01 + 6),param_1,
                                                              (long)this_01,(long)pCVar45);
                                          cVar66 = (char)uVar32;
                                          if (cVar66 == '\0') break;
                                          pCVar45 = pCVar45 + uVar36;
                                        } while (uVar56 != 0);
LAB_003d42c6:
                                        uVar103 = _DAT_005de020;
                                        uVar104 = _UNK_005de024;
                                        uVar105 = _UNK_005de028;
                                        uVar106 = _UNK_005de02c;
                                        auVar107 = _DAT_005de030;
                                        if (cVar66 != '\0') goto switchD_003d2870_default;
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                if (uVar28 != 1) goto switchD_003d2870_default;
                                pCVar45 = this_01 + 10;
                                if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                  this_00 = (ValueFormat *)(this_01 + 4);
                                  if ((ulong)((long)this_00 - *plVar1) <= (ulong)*puVar2) {
                                    uVar28 = *(ushort *)(this_01 + 4);
                                    uVar29 = *(ushort *)(this_01 + 6);
                                    uVar48 = *(ushort *)(this_01 + 2);
                                    if (uVar48 != 0) {
                                      uVar36 = hb_sanitize_context_t::
                                               _dispatch<OT::Layout::Common::Coverage>
                                                         (param_1,(ushort *)
                                                                  (this_01 +
                                                                  (ushort)(uVar48 << 8 | uVar48 >> 8
                                                                          )));
                                      auVar107 = _DAT_005de030;
                                      uVar106 = _UNK_005de02c;
                                      uVar105 = _UNK_005de028;
                                      uVar104 = _UNK_005de024;
                                      uVar103 = _DAT_005de020;
                                      if ((char)uVar36 == '\0') {
                                        if (*puVar5 < 0x20) {
                                          *puVar5 = *puVar5 + 1;
                                          if (*pcVar6 != '\0') {
                                            *(undefined2 *)(this_01 + 2) = 0;
                                            goto LAB_003d2a68;
                                          }
                                        }
                                        break;
                                      }
                                    }
LAB_003d2a68:
                                    if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                      if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                        uVar41 = (uint)(ushort)(*(ushort *)(this_01 + 8) << 8 |
                                                               *(ushort *)(this_01 + 8) >> 8);
                                        if (uVar41 * 2 <=
                                            (uint)(*(int *)(param_1 + 0x10) - (int)pCVar45)) {
                                          uVar41 = *puVar4 + uVar41 * -2;
                                          *puVar4 = uVar41;
                                          if (0 < (int)uVar41) {
                                            uVar48 = *(ushort *)(this_01 + 8);
                                            if (uVar48 != 0) {
                                              uVar41 = (uint)uVar28 - (uVar28 >> 1 & 0x5555);
                                              uVar41 = (uVar41 >> 2 & 0x3333) + (uVar41 & 0x3333);
                                              uVar41 = ((uVar41 >> 4) + uVar41 & 0xf0f) * 0x101 >> 8
                                                       & 0xff;
                                              uVar52 = (uint)uVar29 - (uVar29 >> 1 & 0x5555);
                                              uVar52 = (uVar52 >> 2 & 0x3333) + (uVar52 & 0x3333);
                                              uVar52 = ((((uVar52 >> 4) + uVar52 & 0xf0f) * 0x101 >>
                                                         8 & 0xff) + uVar41) * 2 + 2;
                                              uVar29 = uVar48 << 8 | uVar48 >> 8;
                                              uVar28 = 1;
                                              if (1 < uVar29) {
                                                uVar28 = uVar29;
                                              }
                                              uVar36 = 0;
                                              do {
                                                if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                                    (ulong)*puVar2 <
                                                    this_01 + (uVar36 * 2 - *plVar1) + 0xc)
                                                goto LAB_003d3d10;
                                                uVar29 = *(ushort *)(this_01 + uVar36 * 2 + 10);
                                                if (uVar29 == 0) goto LAB_003d2b80;
                                                uVar37 = (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
                                                pCVar45 = this_01 + uVar37 + 2;
                                                if ((ulong)*puVar2 <
                                                    (ulong)((long)pCVar45 - *plVar1)) {
LAB_003d2dc0:
                                                  if (0x1f < *puVar5) goto LAB_003d3d10;
                                                  *puVar5 = *puVar5 + 1;
                                                  if (*pcVar6 == '\0') goto LAB_003d3d10;
                                                  *(undefined2 *)(this_01 + uVar36 * 2 + 10) = 0;
                                                }
                                                else {
                                                  if ((ulong)*puVar2 <
                                                      (ulong)((long)pCVar45 - *plVar1))
                                                  goto LAB_003d2dc0;
                                                  pCVar46 = this_01 + uVar37;
                                                  uVar42 = (ushort)(*(ushort *)pCVar46 << 8 |
                                                                   *(ushort *)pCVar46 >> 8) * uVar52
                                                  ;
                                                  if ((uint)(*(int *)(param_1 + 0x10) - (int)pCVar45
                                                            ) < uVar42) goto LAB_003d2dc0;
                                                  uVar42 = *puVar4 - uVar42;
                                                  *puVar4 = uVar42;
                                                  if ((int)uVar42 < 1) goto LAB_003d2dc0;
                                                  if (*(char *)(param_1 + 0x3d) == '\0') {
                                                    uVar29 = *(ushort *)pCVar46;
                                                    local_98 = (uint)(ushort)(uVar29 << 8 |
                                                                             uVar29 >> 8);
                                                    if (uVar29 != 0) {
                                                      if (0xfff < *(ushort *)this_00) {
                                                        pVVar53 = this_00 + uVar37;
                                                        uVar42 = local_98;
                                                        do {
                                                          uVar32 = Layout::GPOS_impl::ValueFormat::
                                                                   sanitize_value_devices
                                                                             (this_00,param_1,
                                                                              (long)pCVar46,
                                                                              (long)pVVar53);
                                                          uVar103 = _DAT_005de020;
                                                          uVar104 = _UNK_005de024;
                                                          uVar105 = _UNK_005de028;
                                                          uVar106 = _UNK_005de02c;
                                                          auVar107 = _DAT_005de030;
                                                          if ((char)uVar32 == '\0')
                                                          goto LAB_003d2dc0;
                                                          pVVar53 = pVVar53 + uVar52;
                                                          uVar42 = uVar42 - 1;
                                                        } while (uVar42 != 0);
                                                      }
                                                    }
                                                    if (uVar29 != 0) {
                                                      if (0xfff < *(ushort *)(this_01 + 6)) {
                                                        pCVar45 = this_01 + uVar37 + (ulong)uVar41 *
                                                                                     2 + 4;
                                                        do {
                                                          local_98 = local_98 - 1;
                                                          uVar32 = Layout::GPOS_impl::ValueFormat::
                                                                   sanitize_value_devices
                                                                             ((ValueFormat *)
                                                                              (this_01 + 6),param_1,
                                                                              (long)pCVar46,
                                                                              (long)pCVar45);
                                                          if ((char)uVar32 == '\0') break;
                                                          pCVar45 = pCVar45 + uVar52;
                                                        } while (local_98 != 0);
                                                        uVar103 = _DAT_005de020;
                                                        uVar104 = _UNK_005de024;
                                                        uVar105 = _UNK_005de028;
                                                        uVar106 = _UNK_005de02c;
                                                        auVar107 = _DAT_005de030;
                                                        if ((char)uVar32 == '\0') goto LAB_003d2dc0;
                                                      }
                                                    }
                                                  }
                                                }
LAB_003d2b80:
                                                uVar36 = uVar36 + 1;
                                              } while (uVar36 != uVar28);
                                            }
                                            goto switchD_003d2870_default;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          case 3:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)this_01 != 0x100) goto switchD_003d2870_default;
                              if (this_01 + (4 - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                uVar28 = *(ushort *)(this_01 + 2);
                                if (uVar28 != 0) {
                                  uVar36 = hb_sanitize_context_t::
                                           _dispatch<OT::Layout::Common::Coverage>
                                                     (param_1,(ushort *)
                                                              (this_01 +
                                                              (ushort)(uVar28 << 8 | uVar28 >> 8)));
                                  auVar107 = _DAT_005de030;
                                  uVar106 = _UNK_005de02c;
                                  uVar105 = _UNK_005de028;
                                  uVar104 = _UNK_005de024;
                                  uVar103 = _DAT_005de020;
                                  if ((char)uVar36 == '\0') {
                                    if (0x1f < *puVar5) goto LAB_003d2690;
                                    uVar41 = *puVar5 + 1;
                                    *puVar5 = uVar41;
                                    if (*pcVar6 == '\0') goto LAB_003d3d13;
                                    *(undefined2 *)(this_01 + 2) = 0;
                                  }
                                }
                                pCVar45 = this_01 + 6;
                                uVar36 = (long)pCVar45 - *(long *)(param_1 + 8);
                                if (*(char *)(param_1 + 0x3d) == '\0') {
                                  if (uVar36 <= *(uint *)(param_1 + 0x18)) {
                                    if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                      uVar41 = (uint)(ushort)(*(ushort *)(this_01 + 4) << 8 |
                                                             *(ushort *)(this_01 + 4) >> 8);
                                      if (uVar41 * 4 <=
                                          (uint)(*(int *)(param_1 + 0x10) - (int)pCVar45)) {
                                        uVar41 = *puVar4 + uVar41 * -4;
                                        *puVar4 = uVar41;
                                        if (0 < (int)uVar41) {
                                          uVar28 = *(ushort *)(this_01 + 4);
                                          if (uVar28 != 0) {
                                            uVar29 = uVar28 << 8 | uVar28 >> 8;
                                            uVar28 = 1;
                                            if (1 < uVar29) {
                                              uVar28 = uVar29;
                                            }
                                            pCVar45 = this_01 + 10;
                                            uVar36 = 0;
                                            do {
                                              if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                                  (ulong)*puVar2 < pCVar45 + (-2 - *plVar1))
                                              goto LAB_003d3d10;
                                              uVar29 = *(ushort *)(this_01 + uVar36 * 4 + 6);
                                              if (uVar29 == 0) goto LAB_003d3e96;
                                              pAVar55 = (AnchorFormat3 *)
                                                        (this_01 +
                                                        (ushort)(uVar29 << 8 | uVar29 >> 8));
                                              if ((AnchorFormat3 *)(ulong)*puVar2 <
                                                  pAVar55 + (2 - *plVar1)) {
LAB_003d3e6f:
                                                if (0x1f < *puVar5) goto LAB_003d2690;
                                                uVar41 = *puVar5 + 1;
                                                *puVar5 = uVar41;
                                                if (*pcVar6 == '\0') goto LAB_003d3d13;
                                                *(undefined2 *)(this_01 + uVar36 * 4 + 6) = 0;
                                              }
                                              else {
                                                uVar29 = *(ushort *)pAVar55 << 8 |
                                                         *(ushort *)pAVar55 >> 8;
                                                if (uVar29 == 1) {
                                                  lVar57 = 6 - *plVar1;
LAB_003d3e15:
                                                  if ((AnchorFormat3 *)(ulong)*puVar2 <
                                                      pAVar55 + lVar57) goto LAB_003d3e6f;
                                                }
                                                else if (uVar29 == 3) {
                                                  uVar32 = Layout::GPOS_impl::AnchorFormat3::
                                                           sanitize(pAVar55,param_1);
                                                  uVar103 = _DAT_005de020;
                                                  uVar104 = _UNK_005de024;
                                                  uVar105 = _UNK_005de028;
                                                  uVar106 = _UNK_005de02c;
                                                  auVar107 = _DAT_005de030;
                                                  if ((char)uVar32 == '\0') goto LAB_003d3e6f;
                                                }
                                                else if (uVar29 == 2) {
                                                  lVar57 = 8 - *plVar1;
                                                  goto LAB_003d3e15;
                                                }
                                              }
LAB_003d3e96:
                                              if ((ulong)*puVar2 < (ulong)((long)pCVar45 - *plVar1))
                                              goto LAB_003d3d10;
                                              uVar29 = *(ushort *)(this_01 + uVar36 * 4 + 8);
                                              if (uVar29 == 0) goto LAB_003d3efc;
                                              pAVar55 = (AnchorFormat3 *)
                                                        (this_01 +
                                                        (ushort)(uVar29 << 8 | uVar29 >> 8));
                                              if ((AnchorFormat3 *)(ulong)*puVar2 <
                                                  pAVar55 + (2 - *plVar1)) {
LAB_003d3ed5:
                                                if (0x1f < *puVar5) goto LAB_003d2690;
                                                uVar41 = *puVar5 + 1;
                                                *puVar5 = uVar41;
                                                if (*pcVar6 == '\0') goto LAB_003d3d13;
                                                *(undefined2 *)(this_01 + uVar36 * 4 + 8) = 0;
                                              }
                                              else {
                                                uVar29 = *(ushort *)pAVar55 << 8 |
                                                         *(ushort *)pAVar55 >> 8;
                                                if (uVar29 == 1) {
                                                  lVar57 = 6 - *plVar1;
LAB_003d3f3f:
                                                  if ((AnchorFormat3 *)(ulong)*puVar2 <
                                                      pAVar55 + lVar57) goto LAB_003d3ed5;
                                                }
                                                else if (uVar29 == 3) {
                                                  uVar32 = Layout::GPOS_impl::AnchorFormat3::
                                                           sanitize(pAVar55,param_1);
                                                  uVar103 = _DAT_005de020;
                                                  uVar104 = _UNK_005de024;
                                                  uVar105 = _UNK_005de028;
                                                  uVar106 = _UNK_005de02c;
                                                  auVar107 = _DAT_005de030;
                                                  if ((char)uVar32 == '\0') goto LAB_003d3ed5;
                                                }
                                                else if (uVar29 == 2) {
                                                  lVar57 = 8 - *plVar1;
                                                  goto LAB_003d3f3f;
                                                }
                                              }
LAB_003d3efc:
                                              uVar36 = uVar36 + 1;
                                              pCVar45 = pCVar45 + 4;
                                            } while (uVar28 != uVar36);
                                          }
                                          goto switchD_003d2870_default;
                                        }
                                      }
                                    }
                                  }
                                }
                                else if (uVar36 <= *(uint *)(param_1 + 0x18)) {
                                  if ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) {
                                    uVar41 = (uint)(ushort)(*(ushort *)(this_01 + 4) << 8 |
                                                           *(ushort *)(this_01 + 4) >> 8);
                                    if (uVar41 * 4 <=
                                        (uint)(*(int *)(param_1 + 0x10) - (int)pCVar45)) {
                                      uVar41 = *puVar4 + uVar41 * -4;
                                      *puVar4 = uVar41;
                                      if (0 < (int)uVar41) goto switchD_003d2870_default;
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          case 4:
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (2 - *plVar1)) break;
                            if (*(short *)this_01 != 0x100) goto switchD_003d2870_default;
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (0xc - *plVar1)) break;
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (4 - *plVar1)) break;
                            uVar28 = *(ushort *)(this_01 + 2);
                            if (uVar28 != 0) {
                              uVar36 = hb_sanitize_context_t::
                                       _dispatch<OT::Layout::Common::Coverage>
                                                 (param_1,(ushort *)
                                                          (this_01 +
                                                          (ushort)(uVar28 << 8 | uVar28 >> 8)));
                              auVar107 = _DAT_005de030;
                              uVar106 = _UNK_005de02c;
                              uVar105 = _UNK_005de028;
                              uVar104 = _UNK_005de024;
                              uVar103 = _DAT_005de020;
                              if ((char)uVar36 == '\0') {
                                if (0x1f < *puVar5) goto LAB_003d2690;
                                uVar41 = *puVar5 + 1;
                                *puVar5 = uVar41;
                                if (*pcVar6 == '\0') goto LAB_003d3d13;
                                *(undefined2 *)(this_01 + 2) = 0;
                              }
                            }
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (6 - *plVar1)) break;
                            uVar28 = *(ushort *)(this_01 + 4);
                            if (uVar28 != 0) {
                              uVar36 = hb_sanitize_context_t::
                                       _dispatch<OT::Layout::Common::Coverage>
                                                 (param_1,(ushort *)
                                                          (this_01 +
                                                          (ushort)(uVar28 << 8 | uVar28 >> 8)));
                              auVar107 = _DAT_005de030;
                              uVar106 = _UNK_005de02c;
                              uVar105 = _UNK_005de028;
                              uVar104 = _UNK_005de024;
                              uVar103 = _DAT_005de020;
                              if ((char)uVar36 == '\0') {
                                if (0x1f < *puVar5) goto LAB_003d2690;
                                uVar41 = *puVar5 + 1;
                                *puVar5 = uVar41;
                                if (*pcVar6 == '\0') goto LAB_003d3d13;
                                *(undefined2 *)(this_01 + 4) = 0;
                              }
                            }
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (10 - *plVar1)) break;
                            uVar28 = *(ushort *)(this_01 + 8);
                            if (uVar28 != 0) {
                              uVar32 = Layout::GPOS_impl::MarkArray::sanitize
                                                 ((MarkArray *)
                                                  (this_01 + (ushort)(uVar28 << 8 | uVar28 >> 8)),
                                                  param_1);
                              auVar107 = _DAT_005de030;
                              uVar106 = _UNK_005de02c;
                              uVar105 = _UNK_005de028;
                              uVar104 = _UNK_005de024;
                              uVar103 = _DAT_005de020;
                              if ((char)uVar32 == '\0') {
                                if (0x1f < *puVar5) goto LAB_003d2690;
                                uVar41 = *puVar5 + 1;
                                *puVar5 = uVar41;
                                if (*pcVar6 == '\0') goto LAB_003d3d13;
                                *(undefined2 *)(this_01 + 8) = 0;
                              }
                            }
                            if ((ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2 <
                                this_01 + (0xc - *plVar1)) break;
                            uVar28 = *(ushort *)(this_01 + 6);
                            uVar29 = *(ushort *)(this_01 + 10);
                            if (uVar29 == 0) goto switchD_003d2870_default;
LAB_003d35c0:
                            uVar36 = Layout::GPOS_impl::AnchorMatrix::sanitize
                                               ((AnchorMatrix *)
                                                (this_01 + (ushort)(uVar29 << 8 | uVar29 >> 8)),
                                                param_1,(uint)(ushort)(uVar28 << 8 | uVar28 >> 8));
                            auVar107 = _DAT_005de030;
                            uVar106 = _UNK_005de02c;
                            uVar105 = _UNK_005de028;
                            uVar104 = _UNK_005de024;
                            uVar103 = _DAT_005de020;
                            if ((char)uVar36 != '\0') goto switchD_003d2870_default;
                            if (*puVar5 < 0x20) {
                              uVar41 = *puVar5 + 1;
                              *puVar5 = uVar41;
                              if (*pcVar6 == '\0') goto LAB_003d3d13;
LAB_003d2763:
                              pCVar44 = this_01 + 10;
                              goto LAB_003d2770;
                            }
                            goto LAB_003d2690;
                          case 5:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)this_01 != 0x100) goto switchD_003d2870_default;
                              if (this_01 + (0xc - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                if (this_01 + (4 - *plVar1) <=
                                    (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                  uVar28 = *(ushort *)(this_01 + 2);
                                  if (uVar28 != 0) {
                                    uVar36 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (this_01 +
                                                                (ushort)(uVar28 << 8 | uVar28 >> 8))
                                                       );
                                    auVar107 = _DAT_005de030;
                                    uVar106 = _UNK_005de02c;
                                    uVar105 = _UNK_005de028;
                                    uVar104 = _UNK_005de024;
                                    uVar103 = _DAT_005de020;
                                    if ((char)uVar36 == '\0') {
                                      if (*puVar5 < 0x20) {
                                        *puVar5 = *puVar5 + 1;
                                        if (*pcVar6 != '\0') {
                                          *(undefined2 *)(this_01 + 2) = 0;
                                          goto LAB_003d31cb;
                                        }
                                      }
                                      break;
                                    }
                                  }
LAB_003d31cb:
                                  if (this_01 + (6 - *plVar1) <=
                                      (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                    uVar28 = *(ushort *)(this_01 + 4);
                                    if (uVar28 != 0) {
                                      uVar36 = hb_sanitize_context_t::
                                               _dispatch<OT::Layout::Common::Coverage>
                                                         (param_1,(ushort *)
                                                                  (this_01 +
                                                                  (ushort)(uVar28 << 8 | uVar28 >> 8
                                                                          )));
                                      auVar107 = _DAT_005de030;
                                      uVar106 = _UNK_005de02c;
                                      uVar105 = _UNK_005de028;
                                      uVar104 = _UNK_005de024;
                                      uVar103 = _DAT_005de020;
                                      if ((char)uVar36 == '\0') {
                                        if (*puVar5 < 0x20) {
                                          *puVar5 = *puVar5 + 1;
                                          if (*pcVar6 != '\0') {
                                            *(undefined2 *)(this_01 + 4) = 0;
                                            goto LAB_003d3256;
                                          }
                                        }
                                        break;
                                      }
                                    }
LAB_003d3256:
                                    if (this_01 + (10 - *plVar1) <=
                                        (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2)
                                    {
                                      uVar28 = *(ushort *)(this_01 + 8);
                                      if (uVar28 != 0) {
                                        uVar32 = Layout::GPOS_impl::MarkArray::sanitize
                                                           ((MarkArray *)
                                                            (this_01 +
                                                            (ushort)(uVar28 << 8 | uVar28 >> 8)),
                                                            param_1);
                                        auVar107 = _DAT_005de030;
                                        uVar106 = _UNK_005de02c;
                                        uVar105 = _UNK_005de028;
                                        uVar104 = _UNK_005de024;
                                        uVar103 = _DAT_005de020;
                                        if ((char)uVar32 == '\0') {
                                          if (*puVar5 < 0x20) {
                                            *puVar5 = *puVar5 + 1;
                                            if (*pcVar6 != '\0') {
                                              *(undefined2 *)(this_01 + 8) = 0;
                                              goto LAB_003d32e1;
                                            }
                                          }
                                          break;
                                        }
                                      }
LAB_003d32e1:
                                      if (this_01 + (0xc - *plVar1) <=
                                          (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                         ) {
                                        uVar28 = *(ushort *)(this_01 + 6);
                                        uVar29 = *(ushort *)(this_01 + 10);
                                        if (uVar29 == 0) goto switchD_003d2870_default;
                                        uVar36 = (ulong)(ushort)(uVar29 << 8 | uVar29 >> 8);
                                        pCVar45 = this_01 + uVar36 + 2;
                                        if (((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2) &&
                                           ((ulong)((long)pCVar45 - *plVar1) <= (ulong)*puVar2)) {
                                          pCVar46 = this_01 + uVar36;
                                          uVar41 = (uint)(ushort)(*(ushort *)pCVar46 << 8 |
                                                                 *(ushort *)pCVar46 >> 8);
                                          local_e0 = (int)pCVar45;
                                          if ((uVar41 * 2 <=
                                               (uint)(*(int *)(param_1 + 0x10) - local_e0)) &&
                                             (uVar41 = *puVar4 + uVar41 * -2, *puVar4 = uVar41,
                                             0 < (int)uVar41)) {
                                            uVar29 = *(ushort *)pCVar46;
                                            if (uVar29 != 0) {
                                              uVar48 = uVar29 << 8 | uVar29 >> 8;
                                              uVar29 = 1;
                                              if (1 < uVar48) {
                                                uVar29 = uVar48;
                                              }
                                              lVar57 = 0;
                                              do {
                                                if ((ContextFormat1_4<OT::Layout::SmallTypes> *)
                                                    (ulong)*puVar2 <
                                                    this_01 + ((lVar57 + uVar36 + 4) - *plVar1))
                                                goto LAB_003d4301;
                                                uVar48 = *(ushort *)(pCVar45 + lVar57);
                                                if (uVar48 != 0) {
                                                  uVar37 = Layout::GPOS_impl::AnchorMatrix::sanitize
                                                                     ((AnchorMatrix *)
                                                                      (pCVar46 +
                                                                      (ushort)(uVar48 << 8 |
                                                                              uVar48 >> 8)),param_1,
                                                                      (uint)(ushort)(uVar28 << 8 |
                                                                                    uVar28 >> 8));
                                                  auVar107 = _DAT_005de030;
                                                  uVar106 = _UNK_005de02c;
                                                  uVar105 = _UNK_005de028;
                                                  uVar104 = _UNK_005de024;
                                                  uVar103 = _DAT_005de020;
                                                  if ((char)uVar37 == '\0') {
                                                    if (0x1f < *puVar5) goto LAB_003d3d10;
                                                    uVar41 = *puVar5 + 1;
                                                    *puVar5 = uVar41;
                                                    if (*pcVar6 == '\0') goto LAB_003d4304;
                                                    *(undefined2 *)(pCVar45 + lVar57) = 0;
                                                  }
                                                }
                                                lVar57 = lVar57 + 2;
                                              } while ((ulong)uVar29 * 2 != lVar57);
                                            }
                                            goto switchD_003d2870_default;
                                          }
                                        }
LAB_003d4301:
                                        uVar41 = *puVar5;
LAB_003d4304:
                                        if (uVar41 < 0x20) {
                                          *puVar5 = uVar41 + 1;
                                          if (*pcVar6 != '\0') goto LAB_003d2763;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          case 6:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              if (*(short *)this_01 != 0x100) goto switchD_003d2870_default;
                              if (this_01 + (0xc - *plVar1) <=
                                  (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                if (this_01 + (4 - *plVar1) <=
                                    (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                  uVar28 = *(ushort *)(this_01 + 2);
                                  if (uVar28 != 0) {
                                    uVar36 = hb_sanitize_context_t::
                                             _dispatch<OT::Layout::Common::Coverage>
                                                       (param_1,(ushort *)
                                                                (this_01 +
                                                                (ushort)(uVar28 << 8 | uVar28 >> 8))
                                                       );
                                    auVar107 = _DAT_005de030;
                                    uVar106 = _UNK_005de02c;
                                    uVar105 = _UNK_005de028;
                                    uVar104 = _UNK_005de024;
                                    uVar103 = _DAT_005de020;
                                    if ((char)uVar36 == '\0') {
                                      if (0x1f < *puVar5) goto LAB_003d2690;
                                      uVar41 = *puVar5 + 1;
                                      *puVar5 = uVar41;
                                      if (*pcVar6 == '\0') goto LAB_003d3d13;
                                      *(undefined2 *)(this_01 + 2) = 0;
                                    }
                                  }
                                  if (this_01 + (6 - *plVar1) <=
                                      (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                                    uVar28 = *(ushort *)(this_01 + 4);
                                    if (uVar28 != 0) {
                                      uVar36 = hb_sanitize_context_t::
                                               _dispatch<OT::Layout::Common::Coverage>
                                                         (param_1,(ushort *)
                                                                  (this_01 +
                                                                  (ushort)(uVar28 << 8 | uVar28 >> 8
                                                                          )));
                                      auVar107 = _DAT_005de030;
                                      uVar106 = _UNK_005de02c;
                                      uVar105 = _UNK_005de028;
                                      uVar104 = _UNK_005de024;
                                      uVar103 = _DAT_005de020;
                                      if ((char)uVar36 == '\0') {
                                        if (0x1f < *puVar5) goto LAB_003d2690;
                                        uVar41 = *puVar5 + 1;
                                        *puVar5 = uVar41;
                                        if (*pcVar6 == '\0') goto LAB_003d3d13;
                                        *(undefined2 *)(this_01 + 4) = 0;
                                      }
                                    }
                                    if (this_01 + (10 - *plVar1) <=
                                        (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2)
                                    {
                                      uVar28 = *(ushort *)(this_01 + 8);
                                      if (uVar28 != 0) {
                                        uVar32 = Layout::GPOS_impl::MarkArray::sanitize
                                                           ((MarkArray *)
                                                            (this_01 +
                                                            (ushort)(uVar28 << 8 | uVar28 >> 8)),
                                                            param_1);
                                        auVar107 = _DAT_005de030;
                                        uVar106 = _UNK_005de02c;
                                        uVar105 = _UNK_005de028;
                                        uVar104 = _UNK_005de024;
                                        uVar103 = _DAT_005de020;
                                        if ((char)uVar32 == '\0') {
                                          if (0x1f < *puVar5) goto LAB_003d2690;
                                          uVar41 = *puVar5 + 1;
                                          *puVar5 = uVar41;
                                          if (*pcVar6 == '\0') goto LAB_003d3d13;
                                          *(undefined2 *)(this_01 + 8) = 0;
                                        }
                                      }
                                      if (this_01 + (0xc - *plVar1) <=
                                          (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2
                                         ) {
                                        uVar28 = *(ushort *)(this_01 + 6);
                                        uVar29 = *(ushort *)(this_01 + 10);
                                        if (uVar29 != 0) goto LAB_003d35c0;
                                        goto switchD_003d2870_default;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          case 7:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar28 = *(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8;
                              if (uVar28 == 3) {
                                uVar31 = ContextFormat3::sanitize((ContextFormat3 *)this_01,param_1)
                                ;
                                cVar66 = (char)uVar31;
                              }
                              else if (uVar28 == 2) {
                                uVar36 = ContextFormat2_5<OT::Layout::SmallTypes>::sanitize
                                                   ((ContextFormat2_5<OT::Layout::SmallTypes> *)
                                                    this_01,param_1);
                                cVar66 = (char)uVar36;
                              }
                              else {
                                if (uVar28 != 1) goto switchD_003d2870_default;
                                uVar36 = ContextFormat1_4<OT::Layout::SmallTypes>::sanitize
                                                   (this_01,param_1);
                                cVar66 = (char)uVar36;
                              }
LAB_003d3ccd:
                              uVar103 = _DAT_005de020;
                              uVar104 = _UNK_005de024;
                              uVar105 = _UNK_005de028;
                              uVar106 = _UNK_005de02c;
                              auVar107 = _DAT_005de030;
                              if (cVar66 != '\0') goto switchD_003d2870_default;
                            }
                            break;
                          case 8:
                            if (this_01 + (2 - *plVar1) <=
                                (ContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*puVar2) {
                              uVar28 = *(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8;
                              if (uVar28 == 3) {
                                uVar31 = ChainContextFormat3::sanitize
                                                   ((ChainContextFormat3 *)this_01,param_1);
                                cVar66 = (char)uVar31;
                              }
                              else if (uVar28 == 2) {
                                uVar32 = ChainContextFormat2_5<OT::Layout::SmallTypes>::sanitize
                                                   ((ChainContextFormat2_5<OT::Layout::SmallTypes> *
                                                    )this_01,param_1);
                                cVar66 = (char)uVar32;
                              }
                              else {
                                if (uVar28 != 1) goto switchD_003d2870_default;
                                uVar32 = ChainContextFormat1_4<OT::Layout::SmallTypes>::sanitize
                                                   ((ChainContextFormat1_4<OT::Layout::SmallTypes> *
                                                    )this_01,param_1);
                                cVar66 = (char)uVar32;
                              }
                              goto LAB_003d3ccd;
                            }
                            break;
                          default:
                            goto switchD_003d2870_default;
                          }
LAB_003d3d10:
                          uVar41 = *puVar5;
LAB_003d3d13:
                          if (0x1f < uVar41) goto LAB_003d2690;
                          uVar41 = uVar41 + 1;
                          *puVar5 = uVar41;
                          if (*pcVar6 == '\0') goto LAB_003d2693;
LAB_003d2770:
                          *(undefined2 *)pCVar44 = 0;
                        }
switchD_003d2870_default:
                        unaff_R14 = unaff_R14 + 1;
                      } while (unaff_R14 != uVar54);
                    }
                    if ((*(ushort *)pGVar34 == 0x900) && (*puVar5 == 0)) {
                      pGVar38 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                      if (*(ushort *)pGVar35 != 0) {
                        pGVar38 = pGVar43;
                      }
                      uVar30 = *(ushort *)pGVar38;
                      pGVar43 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                      if (uVar30 != 0) {
                        pGVar43 = pGVar34 + (ushort)(uVar30 << 8 | uVar30 >> 8);
                      }
                      uVar30 = 0;
                      if (*(short *)pGVar43 == 0x100) {
                        uVar30 = *(ushort *)(pGVar43 + 2) << 8 | *(ushort *)(pGVar43 + 2) >> 8;
                      }
                      if (1 < uVar39) {
                        local_88 = this + uVar51 + uVar33 + 8;
                        uVar51 = 1;
                        do {
                          pGVar43 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                          if (uVar51 < (ushort)(*(ushort *)pGVar35 << 8 | *(ushort *)pGVar35 >> 8))
                          {
                            pGVar43 = local_88;
                          }
                          uVar54 = *(ushort *)pGVar43;
                          pGVar43 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
                          if (uVar54 != 0) {
                            pGVar43 = pGVar34 + (ushort)(uVar54 << 8 | uVar54 >> 8);
                          }
                          uVar54 = 0;
                          if (*(short *)pGVar43 == 0x100) {
                            uVar54 = *(ushort *)(pGVar43 + 2) << 8 | *(ushort *)(pGVar43 + 2) >> 8;
                          }
                          if (uVar54 != uVar30) break;
                          lVar57 = (2 - (ulong)uVar39) + uVar51;
                          uVar51 = uVar51 + 1;
                          local_88 = local_88 + 2;
                        } while (lVar57 != 1);
                        if (uVar54 != uVar30) goto LAB_003d2690;
                      }
                    }
                  }
LAB_003d2560:
                  uVar50 = uVar50 + 1;
                } while (uVar50 != uVar49);
              }
              goto LAB_003d4465;
            }
          }
LAB_003d4441:
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d44c7;
          *(ushort *)pGVar3 = 0;
        }
LAB_003d4465:
        uVar49 = *(uint *)this;
        uVar33 = CONCAT71((int7)(unaff_R14 >> 8),1);
        if ((uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 | (uVar49 & 0xff00) << 8 | uVar49 << 0x18) <
            0x10001) goto LAB_003d44ca;
        if (this + (0xe - *plVar1) <= (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar2)
        {
          uVar49 = *(uint *)(this + 10);
          if ((uVar49 == 0) ||
             (uVar32 = FeatureVariations::sanitize
                                 ((FeatureVariations *)
                                  (this + (uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 |
                                           (uVar49 & 0xff00) << 8 | uVar49 << 0x18)),param_1),
             (char)uVar32 != '\0')) goto LAB_003d44ca;
          if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) != '\0')) {
            *(undefined4 *)(this + 10) = 0;
            goto LAB_003d44ca;
          }
        }
      }
    }
  }
LAB_003d44c7:
  uVar33 = 0;
LAB_003d44ca:
  return uVar33 & 0xffffffff;
}


