// Function : get_extents
// Namespace: OT:ClipList
// Entry    : 00463d80
// Prototype: undefined8 get_extents(ClipList * this, uint param_1, int * param_2, long * param_3)
// Body     : 00463d80 - 004641d7


/* OT::ClipList::get_extents(unsigned int, hb_glyph_extents_t*, OT::ItemVarStoreInstancer const&)
   const */

undefined8 __thiscall
OT::ClipList::get_extents(ClipList *this,uint param_1,int *param_2,long *param_3)

{
  ClipList CVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined7 uVar8;
  VarData *pVVar9;
  VarRegionList *pVVar10;
  long lVar11;
  ClipList *pCVar12;
  float fVar13;
  int iVar14;
  int iVar33;
  undefined1 auVar15 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  int iVar34;
  undefined1 auVar24 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  
  uVar4 = *(uint *)(this + 1);
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar7 = 0;
  if (0 < (int)uVar4) {
    iVar5 = uVar4 - 1;
    do {
      while( true ) {
        uVar4 = (uint)(iVar5 + (int)uVar7) >> 1;
        lVar11 = (ulong)uVar4 * 7;
        if (param_1 < (ushort)(*(ushort *)(this + lVar11 + 5) << 8 |
                              *(ushort *)(this + lVar11 + 5) >> 8)) break;
        if (param_1 <=
            (ushort)(*(ushort *)(this + lVar11 + 7) << 8 | *(ushort *)(this + lVar11 + 7) >> 8)) {
          uVar8 = (undefined7)(uVar7 >> 8);
          if (this[lVar11 + 0xb] == (ClipList)0x0 &&
              (this[lVar11 + 10] == (ClipList)0x0 && this[lVar11 + 9] == (ClipList)0x0)) {
            pCVar12 = (ClipList *)&_hb_NullPool;
            CVar1 = _hb_NullPool._0_1_;
          }
          else {
            pCVar12 = this + ((ulong)(byte)this[lVar11 + 10] << 8 |
                              (ulong)(byte)this[lVar11 + 9] << 0x10 |
                             (ulong)(byte)this[lVar11 + 0xb]);
            CVar1 = *pCVar12;
          }
          if (CVar1 != (ClipList)0x2) {
            if (CVar1 != (ClipList)0x1) {
              return CONCAT71(uVar8,1);
            }
            uVar7 = *(ulong *)(pCVar12 + 1);
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar7;
            auVar15 = psllw(auVar15,8);
            auVar23._8_6_ = 0;
            auVar23._0_8_ = uVar7;
            auVar23[0xe] = (char)(uVar7 >> 0x38);
            auVar23[0xf] = auVar15[7];
            auVar22._14_2_ = auVar23._14_2_;
            auVar22._8_5_ = 0;
            auVar22._0_8_ = uVar7;
            auVar22[0xd] = auVar15[6];
            auVar21._13_3_ = auVar22._13_3_;
            auVar21._8_4_ = 0;
            auVar21._0_8_ = uVar7;
            auVar21[0xc] = (char)(uVar7 >> 0x30);
            auVar20._12_4_ = auVar21._12_4_;
            auVar20._8_3_ = 0;
            auVar20._0_8_ = uVar7;
            auVar20[0xb] = auVar15[5];
            auVar19._11_5_ = auVar20._11_5_;
            auVar19._8_2_ = 0;
            auVar19._0_8_ = uVar7;
            auVar19[10] = (char)(uVar7 >> 0x28);
            auVar18._10_6_ = auVar19._10_6_;
            auVar18[8] = 0;
            auVar18._0_8_ = uVar7;
            auVar18[9] = auVar15[4];
            auVar17._9_7_ = auVar18._9_7_;
            auVar17[8] = (char)(uVar7 >> 0x20);
            auVar17._0_8_ = uVar7;
            auVar2._4_8_ = auVar17._8_8_;
            auVar2[3] = auVar15[3];
            auVar2[2] = (char)(uVar7 >> 0x18);
            auVar2[1] = auVar15[2];
            auVar2[0] = (char)(uVar7 >> 0x10);
            auVar16._4_12_ = auVar2;
            auVar16[3] = auVar15[1];
            auVar16[2] = (char)(uVar7 >> 8);
            auVar16[0] = (undefined1)uVar7;
            auVar16[1] = auVar15[0];
            iVar14 = auVar16._0_4_ >> 0x10;
            iVar5 = auVar2._0_4_ >> 0x10;
            iVar33 = auVar17._8_4_ >> 0x10;
            iVar34 = auVar20._12_4_ >> 0x10;
            goto LAB_00464197;
          }
          uVar7 = *(ulong *)(pCVar12 + 1);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar7;
          auVar15 = psllw(auVar24,8);
          auVar32._8_6_ = 0;
          auVar32._0_8_ = uVar7;
          auVar32[0xe] = (char)(uVar7 >> 0x38);
          auVar32[0xf] = auVar15[7];
          auVar31._14_2_ = auVar32._14_2_;
          auVar31._8_5_ = 0;
          auVar31._0_8_ = uVar7;
          auVar31[0xd] = auVar15[6];
          auVar30._13_3_ = auVar31._13_3_;
          auVar30._8_4_ = 0;
          auVar30._0_8_ = uVar7;
          auVar30[0xc] = (char)(uVar7 >> 0x30);
          auVar29._12_4_ = auVar30._12_4_;
          auVar29._8_3_ = 0;
          auVar29._0_8_ = uVar7;
          auVar29[0xb] = auVar15[5];
          auVar28._11_5_ = auVar29._11_5_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar7;
          auVar28[10] = (char)(uVar7 >> 0x28);
          auVar27._10_6_ = auVar28._10_6_;
          auVar27[8] = 0;
          auVar27._0_8_ = uVar7;
          auVar27[9] = auVar15[4];
          auVar26._9_7_ = auVar27._9_7_;
          auVar26[8] = (char)(uVar7 >> 0x20);
          auVar26._0_8_ = uVar7;
          auVar3._4_8_ = auVar26._8_8_;
          auVar3[3] = auVar15[3];
          auVar3[2] = (char)(uVar7 >> 0x18);
          auVar3[1] = auVar15[2];
          auVar3[0] = (char)(uVar7 >> 0x10);
          auVar25._4_12_ = auVar3;
          auVar25[3] = auVar15[1];
          auVar25[2] = (char)(uVar7 >> 8);
          auVar25[0] = (undefined1)uVar7;
          auVar25[1] = auVar15[0];
          iVar14 = auVar25._0_4_ >> 0x10;
          iVar5 = auVar3._0_4_ >> 0x10;
          iVar33 = auVar26._8_4_ >> 0x10;
          iVar34 = auVar29._12_4_ >> 0x10;
          lVar11 = *param_3;
          if ((lVar11 == 0) || ((int)param_3[3] == 0)) goto LAB_00464197;
          uVar4 = *(uint *)(pCVar12 + 9);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          if ((DeltaSetIndexMap *)param_3[1] == (DeltaSetIndexMap *)0x0) {
LAB_00463ec8:
            if ((uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8) <=
                uVar4 >> 0x10) goto LAB_00463f28;
            uVar6 = *(uint *)(lVar11 + 8 + (ulong)(uVar4 >> 0x10) * 4);
            pVVar10 = (VarRegionList *)&_hb_NullPool;
            pVVar9 = (VarData *)&_hb_NullPool;
            if (uVar6 != 0) {
              pVVar9 = (VarData *)
                       ((ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18) + lVar11);
            }
            uVar6 = *(uint *)(lVar11 + 2);
            if (uVar6 != 0) {
              pVVar10 = (VarRegionList *)
                        (lVar11 + (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                          (uVar6 & 0xff00) << 8 | uVar6 << 0x18));
            }
            fVar13 = VarData::get_delta(pVVar9,uVar4 & 0xffff,param_3[2],*(uint *)(param_3 + 3),
                                        pVVar10,param_3[4]);
            fVar13 = fVar13 + DAT_005d9044;
          }
          else {
            uVar4 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_3[1],uVar4);
            if ((int)param_3[3] != 0) {
              lVar11 = *param_3;
              goto LAB_00463ec8;
            }
LAB_00463f28:
            fVar13 = DAT_005d9044;
          }
          fVar13 = floorf(fVar13);
          iVar14 = (int)((float)iVar14 + fVar13);
          uVar4 = *(uint *)(pCVar12 + 9);
          uVar6 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                  + 1;
          if ((DeltaSetIndexMap *)param_3[1] != (DeltaSetIndexMap *)0x0) {
            if (uVar4 == 0xffffffff) {
              uVar6 = 0xffffffff;
            }
            uVar6 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_3[1],uVar6);
          }
          fVar13 = DAT_005d9044;
          if ((int)param_3[3] != 0) {
            lVar11 = *param_3;
            if (uVar6 >> 0x10 <
                (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8)) {
              uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar6 >> 0x10) * 4);
              pVVar10 = (VarRegionList *)&_hb_NullPool;
              pVVar9 = (VarData *)&_hb_NullPool;
              if (uVar4 != 0) {
                pVVar9 = (VarData *)
                         ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18) + lVar11);
              }
              uVar4 = *(uint *)(lVar11 + 2);
              if (uVar4 != 0) {
                pVVar10 = (VarRegionList *)
                          (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                            (uVar4 & 0xff00) << 8 | uVar4 << 0x18));
              }
              fVar13 = VarData::get_delta(pVVar9,uVar6 & 0xffff,param_3[2],*(uint *)(param_3 + 3),
                                          pVVar10,param_3[4]);
              fVar13 = fVar13 + DAT_005d9044;
            }
          }
          fVar13 = floorf(fVar13);
          iVar5 = (int)((float)iVar5 + fVar13);
          uVar4 = *(uint *)(pCVar12 + 9);
          uVar6 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                  + 2;
          if ((DeltaSetIndexMap *)param_3[1] != (DeltaSetIndexMap *)0x0) {
            if (uVar4 == 0xffffffff) {
              uVar6 = 0xffffffff;
            }
            uVar6 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_3[1],uVar6);
          }
          fVar13 = DAT_005d9044;
          if ((int)param_3[3] != 0) {
            lVar11 = *param_3;
            if (uVar6 >> 0x10 <
                (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8)) {
              uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar6 >> 0x10) * 4);
              pVVar10 = (VarRegionList *)&_hb_NullPool;
              pVVar9 = (VarData *)&_hb_NullPool;
              if (uVar4 != 0) {
                pVVar9 = (VarData *)
                         ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18) + lVar11);
              }
              uVar4 = *(uint *)(lVar11 + 2);
              if (uVar4 != 0) {
                pVVar10 = (VarRegionList *)
                          (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                            (uVar4 & 0xff00) << 8 | uVar4 << 0x18));
              }
              fVar13 = VarData::get_delta(pVVar9,uVar6 & 0xffff,param_3[2],*(uint *)(param_3 + 3),
                                          pVVar10,param_3[4]);
              fVar13 = fVar13 + DAT_005d9044;
            }
          }
          fVar13 = floorf(fVar13);
          iVar33 = (int)((float)iVar33 + fVar13);
          uVar4 = *(uint *)(pCVar12 + 9);
          uVar6 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
                  + 3;
          if ((DeltaSetIndexMap *)param_3[1] != (DeltaSetIndexMap *)0x0) {
            if (uVar4 == 0xffffffff) {
              uVar6 = 0xffffffff;
            }
            uVar6 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_3[1],uVar6);
          }
          fVar13 = DAT_005d9044;
          if ((int)param_3[3] != 0) {
            lVar11 = *param_3;
            if (uVar6 >> 0x10 <
                (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8)) {
              uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar6 >> 0x10) * 4);
              pVVar10 = (VarRegionList *)&_hb_NullPool;
              pVVar9 = (VarData *)&_hb_NullPool;
              if (uVar4 != 0) {
                pVVar9 = (VarData *)
                         ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18) + lVar11);
              }
              uVar4 = *(uint *)(lVar11 + 2);
              if (uVar4 != 0) {
                pVVar10 = (VarRegionList *)
                          (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                            (uVar4 & 0xff00) << 8 | uVar4 << 0x18));
              }
              fVar13 = VarData::get_delta(pVVar9,uVar6 & 0xffff,param_3[2],*(uint *)(param_3 + 3),
                                          pVVar10,param_3[4]);
              fVar13 = fVar13 + DAT_005d9044;
            }
          }
          fVar13 = floorf(fVar13);
          iVar34 = (int)((float)iVar34 + fVar13);
LAB_00464197:
          *param_2 = iVar14;
          param_2[1] = iVar34;
          param_2[2] = iVar33 - iVar14;
          param_2[3] = iVar5 - iVar34;
          return CONCAT71(uVar8,1);
        }
        uVar7 = (ulong)(uVar4 + 1);
        if (iVar5 < (int)(uVar4 + 1)) {
          return 0;
        }
      }
      iVar5 = uVar4 - 1;
    } while ((int)uVar7 <= iVar5);
  }
  return 0;
}


