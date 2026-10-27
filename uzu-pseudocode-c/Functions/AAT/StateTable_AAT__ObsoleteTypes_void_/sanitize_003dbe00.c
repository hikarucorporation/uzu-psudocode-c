// Function : sanitize
// Namespace: AAT:StateTable_AAT__ObsoleteTypes_void_
// Entry    : 003dbe00
// Prototype: undefined1[16] sanitize(StateTable<AAT::ObsoleteTypes,void> * this, long param_1, StateTable<AAT::ObsoleteTypes,void> * param_2)
// Body     : 003dbe00 - 003dc5bf


/* WARNING: Removing unreachable block (ram,0x003dc032) */
/* WARNING: Removing unreachable block (ram,0x003dc060) */
/* WARNING: Removing unreachable block (ram,0x003dc0f7) */
/* WARNING: Removing unreachable block (ram,0x003dc172) */
/* WARNING: Removing unreachable block (ram,0x003dc17b) */
/* WARNING: Removing unreachable block (ram,0x003dc5a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::StateTable<AAT::ObsoleteTypes, void>::sanitize(hb_sanitize_context_t*, unsigned int*) const
    */

undefined1  [16] __thiscall
AAT::StateTable<AAT::ObsoleteTypes,void>::sanitize
          (StateTable<AAT::ObsoleteTypes,void> *this,long param_1,
          StateTable<AAT::ObsoleteTypes,void> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  uint uVar22;
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  undefined1 auVar25 [13];
  undefined1 auVar26 [13];
  undefined1 auVar27 [13];
  undefined1 auVar28 [13];
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  int iVar35;
  uint uVar36;
  ushort uVar37;
  int iVar38;
  uint uVar39;
  ushort uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  StateTable<AAT::ObsoleteTypes,void> *pSVar44;
  StateTable<AAT::ObsoleteTypes,void> *pSVar45;
  StateTable<AAT::ObsoleteTypes,void> *pSVar46;
  ulong uVar47;
  StateTable<AAT::ObsoleteTypes,void> *pSVar48;
  StateTable<AAT::ObsoleteTypes,void> *pSVar49;
  StateTable<AAT::ObsoleteTypes,void> *pSVar50;
  ulong uVar51;
  StateTable<AAT::ObsoleteTypes,void> *pSVar52;
  ulong uVar53;
  StateTable<AAT::ObsoleteTypes,void> *pSVar54;
  undefined8 uVar55;
  int iVar56;
  uint uVar57;
  ulong uVar58;
  uint uVar59;
  long lVar60;
  ulong uVar61;
  uint uVar62;
  undefined1 uVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar67;
  uint uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  
  if (((this + (8 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (3 < (ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8))) &&
     (param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18),
     this + (4 - *(long *)(param_1 + 8)) <=
     (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18))) {
    param_2 = (StateTable<AAT::ObsoleteTypes,void> *)
              (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    pSVar48 = this + (long)param_2 + 4;
    if ((ulong)((long)pSVar48 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      lVar3 = *(long *)(param_1 + 8);
      pSVar45 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
      if (pSVar48 + -lVar3 <= pSVar45) {
        uVar37 = *(ushort *)(param_2 + (long)this + 2) << 8 |
                 *(ushort *)(param_2 + (long)this + 2) >> 8;
        iVar38 = (int)*(undefined8 *)(param_1 + 0x10);
        param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar37;
        if ((uint)uVar37 <= (uint)(iVar38 - (int)pSVar48)) {
          iVar56 = *(int *)(param_1 + 0x1c) - (uint)uVar37;
          *(int *)(param_1 + 0x1c) = iVar56;
          auVar82 = _DAT_006524b0;
          iVar33 = _UNK_005de04c;
          iVar32 = _UNK_005de048;
          iVar31 = _UNK_005de044;
          iVar30 = _DAT_005de040;
          uVar59 = 0;
          if (0 < iVar56) {
            uVar40 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
            uVar61 = (ulong)uVar40;
            pSVar48 = this + uVar61;
            pSVar46 = this + (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
            uVar37 = *(ushort *)this << 8 | *(ushort *)this >> 8;
            uVar58 = (ulong)uVar37;
            pSVar44 = pSVar48 + -lVar3;
            pSVar49 = pSVar46 + -lVar3;
            bVar34 = false;
            uVar22 = 0;
            uVar39 = 0;
            uVar62 = 0;
            uVar36 = 0;
            do {
              uVar57 = (uint)uVar37;
              uVar68 = uVar36;
              if (bVar34) {
                uVar41 = (uint)(uVar39 * uVar58 >> 0x20);
                param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar41;
                if (uVar41 != 0) goto LAB_003dc5a6;
                uVar42 = (uint)(-uVar39 * uVar58 >> 0x20);
                uVar41 = (uint)(-uVar39 * uVar58);
                param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar42;
                if (uVar42 != 0) goto LAB_003dc5a6;
                param_2 = pSVar48 + uVar39 * uVar57;
                uVar55 = 0;
                if ((pSVar45 < param_2 + -lVar3) || ((uint)(iVar38 - (int)param_2) < uVar41))
                goto LAB_003dc5a9;
                iVar56 = iVar56 - uVar41;
                *(int *)(param_1 + 0x1c) = iVar56;
                if (iVar56 < 1) goto LAB_003dc5a6;
                iVar56 = iVar56 + (uVar39 - uVar22);
                *(int *)(param_1 + 0x1c) = iVar56;
                uVar55 = 0;
                if ((iVar56 < 1) || (uVar39 * uVar57 != 0)) goto LAB_003dc5a9;
                uVar22 = uVar39;
                if (param_2 < pSVar48) {
                  pSVar52 = pSVar48;
                  do {
                    pSVar54 = pSVar52 + -1;
                    pSVar52 = pSVar52 + -1;
                    uVar41 = (byte)*pSVar54 + 1;
                    if ((byte)*pSVar54 + 1 <= uVar68) {
                      uVar41 = uVar68;
                    }
                    uVar68 = uVar41;
                  } while (param_2 < pSVar52);
                }
              }
              if ((int)uVar59 <= (int)uVar62) {
                uVar41 = uVar62 + 1;
                uVar55 = 0;
                uVar43 = (uint)(uVar41 * uVar58 >> 0x20);
                uVar42 = (uint)(uVar41 * uVar58);
                param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar43;
                if (((uVar43 != 0) || (param_2 = pSVar44, pSVar45 < pSVar44)) ||
                   ((uint)(iVar38 - (int)pSVar48) < uVar42)) goto LAB_003dc5a9;
                iVar56 = iVar56 - uVar42;
                *(int *)(param_1 + 0x1c) = iVar56;
                if (iVar56 < 1) goto LAB_003dc5a6;
                iVar56 = iVar56 + ~uVar62 + uVar59;
                *(int *)(param_1 + 0x1c) = iVar56;
                if (iVar56 < 1) goto LAB_003dc5a6;
                uVar42 = uVar41 * uVar57;
                if (uVar59 * uVar57 < uVar42) {
                  uVar47 = (ulong)(uVar59 * uVar57);
                  pSVar52 = pSVar48 + uVar47;
                  pSVar54 = this + uVar42 + uVar61;
                  if (this + uVar42 + uVar61 < this + uVar47 + uVar61 + 1) {
                    pSVar54 = this + uVar47 + uVar61 + 1;
                  }
                  pSVar54 = pSVar54 + (4 - (long)(this + uVar47 + uVar61 + 4));
                  if ((StateTable<AAT::ObsoleteTypes,void> *)0x7 < pSVar54) {
                    pSVar50 = (StateTable<AAT::ObsoleteTypes,void> *)
                              ((ulong)pSVar54 & 0xfffffffffffffff8);
                    auVar63._4_4_ = uVar68;
                    auVar63._0_4_ = uVar68;
                    auVar63._8_4_ = uVar68;
                    auVar63._12_4_ = uVar68;
                    uVar51 = ((ulong)(pSVar50 + -8) >> 3) + 1;
                    if (pSVar50 + -8 == (StateTable<AAT::ObsoleteTypes,void> *)0x0) {
                      lVar60 = 0;
                      auVar64 = auVar63;
LAB_003dc3c4:
                      uVar1 = *(undefined4 *)(pSVar52 + lVar60);
                      uVar2 = *(undefined4 *)(pSVar52 + lVar60 + 4);
                      uVar66 = (undefined1)((uint)uVar1 >> 8);
                      uVar47 = (ulong)CONCAT12(uVar66,(short)uVar1) & 0xffffffffffff00ff;
                      auVar16._8_4_ = 0;
                      auVar16._0_8_ = uVar47;
                      auVar16[0xc] = (char)((uint)uVar1 >> 0x18);
                      auVar17[8] = (char)((uint)uVar1 >> 0x10);
                      auVar17._0_8_ = uVar47;
                      auVar17[9] = 0;
                      auVar17._10_3_ = auVar16._10_3_;
                      auVar27._5_8_ = 0;
                      auVar27._0_5_ = auVar17._8_5_;
                      auVar18[4] = uVar66;
                      auVar18._0_4_ = (uint)uVar47;
                      auVar18[5] = 0;
                      auVar18._6_7_ = SUB137(auVar27 << 0x40,6);
                      uVar43 = (uint)uVar47 & 0xffff;
                      uVar66 = (undefined1)((uint)uVar2 >> 8);
                      uVar47 = (ulong)CONCAT12(uVar66,(short)uVar2) & 0xffffffffffff00ff;
                      auVar19._8_4_ = 0;
                      auVar19._0_8_ = uVar47;
                      auVar19[0xc] = (char)((uint)uVar2 >> 0x18);
                      auVar20[8] = (char)((uint)uVar2 >> 0x10);
                      auVar20._0_8_ = uVar47;
                      auVar20[9] = 0;
                      auVar20._10_3_ = auVar19._10_3_;
                      auVar28._5_8_ = 0;
                      auVar28._0_5_ = auVar20._8_5_;
                      auVar21[4] = uVar66;
                      auVar21._0_4_ = (uint)uVar47;
                      auVar21[5] = 0;
                      auVar21._6_7_ = SUB137(auVar28 << 0x40,6);
                      uVar67 = (uint)uVar47 & 0xffff;
                      auVar70._0_4_ = uVar43 + 1;
                      auVar70._4_4_ = auVar18._4_4_ + 1;
                      uVar59 = (uint)(uint3)(auVar16._10_3_ >> 0x10);
                      auVar70._8_4_ = auVar17._8_4_ + 1;
                      auVar70._12_4_ = uVar59 + 1;
                      auVar74._0_4_ = uVar67 + 1;
                      auVar74._4_4_ = auVar21._4_4_ + 1;
                      uVar68 = (uint)(uint3)(auVar19._10_3_ >> 0x10);
                      auVar74._8_4_ = auVar20._8_4_ + 1;
                      auVar74._12_4_ = uVar68 + 1;
                      auVar79 = auVar63 ^ auVar82;
                      auVar76._0_4_ = -(uint)((int)(uVar43 + iVar30) < auVar79._0_4_);
                      auVar76._4_4_ = -(uint)(auVar18._4_4_ + iVar31 < auVar79._4_4_);
                      auVar76._8_4_ = -(uint)(auVar17._8_4_ + iVar32 < auVar79._8_4_);
                      auVar76._12_4_ = -(uint)((int)(uVar59 + iVar33) < auVar79._12_4_);
                      auVar63 = auVar63 & auVar76 | ~auVar76 & auVar70;
                      auVar79 = auVar64 ^ auVar82;
                      auVar65._0_4_ = -(uint)((int)(uVar67 + iVar30) < auVar79._0_4_);
                      auVar65._4_4_ = -(uint)(auVar21._4_4_ + iVar31 < auVar79._4_4_);
                      auVar65._8_4_ = -(uint)(auVar20._8_4_ + iVar32 < auVar79._8_4_);
                      auVar65._12_4_ = -(uint)((int)(uVar68 + iVar33) < auVar79._12_4_);
                      auVar64 = auVar64 & auVar65 | ~auVar65 & auVar74;
                    }
                    else {
                      uVar53 = uVar51 & 0xfffffffffffffffe;
                      lVar29 = uVar47 + uVar61 + 0xc;
                      lVar60 = 0;
                      auVar64 = auVar63;
                      do {
                        uVar1 = *(undefined4 *)(this + lVar60 + lVar29 + -0xc);
                        uVar2 = *(undefined4 *)(this + lVar60 + lVar29 + -8);
                        uVar66 = (undefined1)((uint)uVar1 >> 8);
                        uVar47 = (ulong)CONCAT12(uVar66,(short)uVar1) & 0xffffffffffff00ff;
                        auVar4._8_4_ = 0;
                        auVar4._0_8_ = uVar47;
                        auVar4[0xc] = (char)((uint)uVar1 >> 0x18);
                        auVar5[8] = (char)((uint)uVar1 >> 0x10);
                        auVar5._0_8_ = uVar47;
                        auVar5[9] = 0;
                        auVar5._10_3_ = auVar4._10_3_;
                        auVar23._5_8_ = 0;
                        auVar23._0_5_ = auVar5._8_5_;
                        auVar6[4] = uVar66;
                        auVar6._0_4_ = (uint)uVar47;
                        auVar6[5] = 0;
                        auVar6._6_7_ = SUB137(auVar23 << 0x40,6);
                        uVar43 = (uint)uVar47 & 0xffff;
                        uVar66 = (undefined1)((uint)uVar2 >> 8);
                        uVar47 = (ulong)CONCAT12(uVar66,(short)uVar2) & 0xffffffffffff00ff;
                        auVar7._8_4_ = 0;
                        auVar7._0_8_ = uVar47;
                        auVar7[0xc] = (char)((uint)uVar2 >> 0x18);
                        auVar8[8] = (char)((uint)uVar2 >> 0x10);
                        auVar8._0_8_ = uVar47;
                        auVar8[9] = 0;
                        auVar8._10_3_ = auVar7._10_3_;
                        auVar24._5_8_ = 0;
                        auVar24._0_5_ = auVar8._8_5_;
                        auVar9[4] = uVar66;
                        auVar9._0_4_ = (uint)uVar47;
                        auVar9[5] = 0;
                        auVar9._6_7_ = SUB137(auVar24 << 0x40,6);
                        uVar67 = (uint)uVar47 & 0xffff;
                        auVar81._0_4_ = uVar43 + 1;
                        auVar81._4_4_ = auVar6._4_4_ + 1;
                        uVar59 = (uint)(uint3)(auVar4._10_3_ >> 0x10);
                        auVar81._8_4_ = auVar5._8_4_ + 1;
                        auVar81._12_4_ = uVar59 + 1;
                        auVar72._0_4_ = uVar67 + 1;
                        auVar72._4_4_ = auVar9._4_4_ + 1;
                        uVar68 = (uint)(uint3)(auVar7._10_3_ >> 0x10);
                        auVar72._8_4_ = auVar8._8_4_ + 1;
                        auVar72._12_4_ = uVar68 + 1;
                        auVar79 = auVar63 ^ auVar82;
                        auVar80._0_4_ = -(uint)((int)(uVar43 + iVar30) < auVar79._0_4_);
                        auVar80._4_4_ = -(uint)(auVar6._4_4_ + iVar31 < auVar79._4_4_);
                        auVar80._8_4_ = -(uint)(auVar5._8_4_ + iVar32 < auVar79._8_4_);
                        auVar80._12_4_ = -(uint)((int)(uVar59 + iVar33) < auVar79._12_4_);
                        auVar81 = ~auVar80 & auVar81 | auVar63 & auVar80;
                        auVar63 = auVar64 ^ auVar82;
                        auVar79._0_4_ = -(uint)((int)(uVar67 + iVar30) < auVar63._0_4_);
                        auVar79._4_4_ = -(uint)(auVar9._4_4_ + iVar31 < auVar63._4_4_);
                        auVar79._8_4_ = -(uint)(auVar8._8_4_ + iVar32 < auVar63._8_4_);
                        auVar79._12_4_ = -(uint)((int)(uVar68 + iVar33) < auVar63._12_4_);
                        auVar64 = ~auVar79 & auVar72 | auVar64 & auVar79;
                        uVar1 = *(undefined4 *)(this + lVar60 + lVar29 + -4);
                        uVar2 = *(undefined4 *)(this + lVar60 + lVar29);
                        uVar66 = (undefined1)((uint)uVar1 >> 8);
                        uVar47 = (ulong)CONCAT12(uVar66,(short)uVar1) & 0xffffffffffff00ff;
                        auVar10._8_4_ = 0;
                        auVar10._0_8_ = uVar47;
                        auVar10[0xc] = (char)((uint)uVar1 >> 0x18);
                        auVar11[8] = (char)((uint)uVar1 >> 0x10);
                        auVar11._0_8_ = uVar47;
                        auVar11[9] = 0;
                        auVar11._10_3_ = auVar10._10_3_;
                        auVar25._5_8_ = 0;
                        auVar25._0_5_ = auVar11._8_5_;
                        auVar12[4] = uVar66;
                        auVar12._0_4_ = (uint)uVar47;
                        auVar12[5] = 0;
                        auVar12._6_7_ = SUB137(auVar25 << 0x40,6);
                        uVar43 = (uint)uVar47 & 0xffff;
                        uVar66 = (undefined1)((uint)uVar2 >> 8);
                        uVar47 = (ulong)CONCAT12(uVar66,(short)uVar2) & 0xffffffffffff00ff;
                        auVar13._8_4_ = 0;
                        auVar13._0_8_ = uVar47;
                        auVar13[0xc] = (char)((uint)uVar2 >> 0x18);
                        auVar14[8] = (char)((uint)uVar2 >> 0x10);
                        auVar14._0_8_ = uVar47;
                        auVar14[9] = 0;
                        auVar14._10_3_ = auVar13._10_3_;
                        auVar26._5_8_ = 0;
                        auVar26._0_5_ = auVar14._8_5_;
                        auVar15[4] = uVar66;
                        auVar15._0_4_ = (uint)uVar47;
                        auVar15[5] = 0;
                        auVar15._6_7_ = SUB137(auVar26 << 0x40,6);
                        uVar67 = (uint)uVar47 & 0xffff;
                        auVar73._0_4_ = uVar43 + 1;
                        auVar73._4_4_ = auVar12._4_4_ + 1;
                        uVar59 = (uint)(uint3)(auVar10._10_3_ >> 0x10);
                        auVar73._8_4_ = auVar11._8_4_ + 1;
                        auVar73._12_4_ = uVar59 + 1;
                        auVar75._0_4_ = uVar67 + 1;
                        auVar75._4_4_ = auVar15._4_4_ + 1;
                        uVar68 = (uint)(uint3)(auVar13._10_3_ >> 0x10);
                        auVar75._8_4_ = auVar14._8_4_ + 1;
                        auVar75._12_4_ = uVar68 + 1;
                        auVar63 = auVar81 ^ auVar82;
                        auVar77._0_4_ = -(uint)((int)(uVar43 + iVar30) < auVar63._0_4_);
                        auVar77._4_4_ = -(uint)(auVar12._4_4_ + iVar31 < auVar63._4_4_);
                        auVar77._8_4_ = -(uint)(auVar11._8_4_ + iVar32 < auVar63._8_4_);
                        auVar77._12_4_ = -(uint)((int)(uVar59 + iVar33) < auVar63._12_4_);
                        auVar63 = ~auVar77 & auVar73 | auVar81 & auVar77;
                        auVar79 = auVar64 ^ auVar82;
                        auVar78._0_4_ = -(uint)((int)(uVar67 + iVar30) < auVar79._0_4_);
                        auVar78._4_4_ = -(uint)(auVar15._4_4_ + iVar31 < auVar79._4_4_);
                        auVar78._8_4_ = -(uint)(auVar14._8_4_ + iVar32 < auVar79._8_4_);
                        auVar78._12_4_ = -(uint)((int)(uVar68 + iVar33) < auVar79._12_4_);
                        auVar64 = ~auVar78 & auVar75 | auVar64 & auVar78;
                        lVar60 = lVar60 + 0x10;
                        uVar53 = uVar53 - 2;
                      } while (uVar53 != 0);
                      if ((uVar51 & 1) != 0) goto LAB_003dc3c4;
                    }
                    auVar79 = auVar64 ^ auVar82;
                    auVar81 = auVar63 ^ auVar82;
                    auVar69._0_4_ = -(uint)(auVar79._0_4_ < auVar81._0_4_);
                    auVar69._4_4_ = -(uint)(auVar79._4_4_ < auVar81._4_4_);
                    auVar69._8_4_ = -(uint)(auVar79._8_4_ < auVar81._8_4_);
                    auVar69._12_4_ = -(uint)(auVar79._12_4_ < auVar81._12_4_);
                    auVar63 = ~auVar69 & auVar64 | auVar63 & auVar69;
                    auVar64._0_8_ = auVar63._8_8_;
                    auVar64._8_4_ = auVar63._8_4_;
                    auVar64._12_4_ = auVar63._12_4_;
                    auVar79 = auVar63 ^ auVar82;
                    auVar81 = auVar64 ^ auVar82;
                    auVar71._0_4_ = -(uint)(auVar81._0_4_ < auVar79._0_4_);
                    auVar71._4_4_ = -(uint)(auVar81._4_4_ < auVar79._4_4_);
                    auVar71._8_4_ = -(uint)(auVar81._8_4_ < auVar79._8_4_);
                    auVar71._12_4_ = -(uint)(auVar81._12_4_ < auVar79._12_4_);
                    auVar63 = ~auVar71 & auVar64 | auVar63 & auVar71;
                    uVar43 = auVar63._4_4_;
                    uVar59 = auVar63._0_4_;
                    uVar68 = -(uint)((int)(uVar43 ^ auVar82._0_4_) < (int)(uVar59 ^ auVar82._0_4_));
                    uVar68 = ~uVar68 & uVar43 | uVar59 & uVar68;
                    if (pSVar54 == pSVar50) goto LAB_003dc4d6;
                    pSVar52 = pSVar52 + (long)pSVar50;
                  }
                  do {
                    uVar59 = (byte)*pSVar52 + 1;
                    if ((byte)*pSVar52 + 1 <= uVar68) {
                      uVar59 = uVar68;
                    }
                    uVar68 = uVar59;
                    pSVar52 = pSVar52 + 1;
                  } while (pSVar52 < pSVar48 + uVar42);
                }
LAB_003dc4d6:
                uVar59 = uVar41;
              }
              uVar55 = 0;
              uVar42 = (uint)((ulong)uVar68 * 4 >> 0x20);
              uVar41 = (uint)((ulong)uVar68 * 4);
              param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar42;
              if (((uVar42 != 0) || (param_2 = pSVar49, pSVar45 < pSVar49)) ||
                 ((uint)(iVar38 - (int)pSVar46) < uVar41)) goto LAB_003dc5a9;
              iVar56 = iVar56 - uVar41;
              *(int *)(param_1 + 0x1c) = iVar56;
              if (iVar56 < 1) goto LAB_003dc5a6;
              iVar56 = iVar56 + (uVar36 - uVar68);
              *(int *)(param_1 + 0x1c) = iVar56;
              if (iVar56 < 1) goto LAB_003dc5a6;
              if (uVar36 < uVar68) {
                pSVar52 = pSVar46 + (ulong)uVar36 * 4;
                do {
                  iVar35 = (uint)(ushort)(*(ushort *)pSVar52 << 8 | *(ushort *)pSVar52 >> 8) -
                           (uint)uVar40;
                  uVar36 = iVar35 / (int)uVar57;
                  param_2 = (StateTable<AAT::ObsoleteTypes,void> *)
                            ((long)iVar35 % (long)(int)uVar57 & 0xffffffff);
                  if ((int)uVar36 < (int)uVar39) {
                    uVar39 = uVar36;
                  }
                  if ((int)uVar62 < (int)uVar36) {
                    uVar62 = uVar36;
                  }
                  pSVar52 = pSVar52 + 4;
                } while (pSVar52 < pSVar46 + (ulong)uVar68 * 4);
              }
              bVar34 = (int)uVar39 < (int)uVar22;
              uVar36 = uVar68;
            } while (((int)uVar39 < (int)uVar22) || ((int)uVar59 <= (int)uVar62));
            uVar55 = 1;
            goto LAB_003dc5a9;
          }
        }
      }
    }
  }
LAB_003dc5a6:
  uVar55 = 0;
LAB_003dc5a9:
  auVar82._8_8_ = param_2;
  auVar82._0_8_ = uVar55;
  return auVar82;
}


