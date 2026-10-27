// Function : dispatch<OT::hb_paint_context_t>
// Namespace: OT:Paint
// Entry    : 004656b0
// Prototype: return_t dispatch<OT::hb_paint_context_t>(Paint * this, hb_paint_context_t * param_1)
// Body     : 004656b0 - 00468232


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::hb_paint_context_t::return_t
   OT::Paint::dispatch<OT::hb_paint_context_t>(OT::hb_paint_context_t*) const */

void __thiscall OT::Paint::dispatch<OT::hb_paint_context_t>(Paint *this,hb_paint_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  short *psVar5;
  undefined8 *puVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ushort uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  ushort *puVar23;
  int iVar24;
  Affine2x3 *this_00;
  Paint *pPVar25;
  VarData *pVVar26;
  ClipList *this_01;
  VarRegionList *pVVar27;
  long lVar28;
  ushort uVar29;
  uint *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_f0;
  float local_ec;
  Paint *local_b8;
  code *pcStack_b0;
  hb_paint_context_t *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_48 [6];
  
  local_a8 = param_1;
  switch(*this) {
  case (Paint)0x1:
    uVar17 = *(uint *)(*(long *)(param_1 + 8) + 0x12);
    if (uVar17 == 0) {
      puVar30 = &_hb_NullPool;
    }
    else {
      puVar30 = (uint *)(*(long *)(param_1 + 8) +
                        (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                               uVar17 << 0x18));
    }
    uVar17 = *(uint *)(this + 2);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    local_b8 = (Paint *)CONCAT44(local_b8._4_4_,uVar17);
    if (uVar17 < (byte)this[1] + uVar17) {
      uVar19 = (ulong)uVar17;
      do {
        lVar16 = *(long *)(param_1 + 0x90);
        uVar17 = (int)uVar19 * -0x61c8864f;
        if (lVar16 == 0) {
LAB_004657cb:
          hb_hashmap_t<unsigned_int,unsigned_int,true>::
          set_with_hash<unsigned_int_const&,unsigned_int_const&>
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x68),
                     (int *)&local_b8,uVar17);
          uVar22 = *puVar30;
          puVar10 = &_hb_NullPool;
          if (uVar19 < (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                       uVar22 << 0x18)) {
            puVar10 = puVar30 + uVar19 + 1;
          }
          uVar22 = *puVar10;
          pPVar25 = (Paint *)&_hb_NullPool;
          if (uVar22 != 0) {
            pPVar25 = (Paint *)((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                        (uVar22 & 0xff00) << 8 | uVar22 << 0x18) + (long)puVar30);
          }
          lVar16 = *(long *)(param_1 + 0x10);
          if (*(long *)(lVar16 + 0x80) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x58);
          }
          (**(code **)(lVar16 + 0x68))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
          if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
            dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
          }
          lVar16 = *(long *)(param_1 + 0x10);
          if (*(long *)(lVar16 + 0x80) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x60);
          }
          (**(code **)(lVar16 + 0x70))(lVar16,*(undefined8 *)(param_1 + 0x18),3,uVar12);
          lVar16 = *(long *)(param_1 + 0x90);
          if (lVar16 != 0) {
            uVar18 = (ulong)(uVar17 & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x88);
            uVar17 = *(uint *)(lVar16 + 4 + uVar18 * 0xc);
            if ((uVar17 & 2) != 0) {
              if (uVar19 != *(uint *)(lVar16 + uVar18 * 0xc)) {
                iVar21 = 1;
                do {
                  uVar18 = (ulong)(*(uint *)(param_1 + 0x84) & (int)uVar18 + iVar21);
                  uVar17 = *(uint *)(lVar16 + 4 + uVar18 * 0xc);
                  if ((uVar17 & 2) == 0) goto LAB_00465730;
                  iVar21 = iVar21 + 1;
                } while (uVar19 != *(uint *)(lVar16 + uVar18 * 0xc));
              }
              if ((uVar17 & 1) != 0) {
                *(uint *)(lVar16 + 4 + uVar18 * 0xc) = uVar17 & 0xfffffffe;
                *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
              }
            }
          }
        }
        else {
          uVar18 = (ulong)(uVar17 & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x88);
          uVar22 = *(uint *)(lVar16 + 4 + uVar18 * 0xc);
          if ((uVar22 & 2) == 0) goto LAB_004657cb;
          if (uVar19 != *(uint *)(lVar16 + uVar18 * 0xc)) {
            iVar21 = 1;
            do {
              uVar18 = (ulong)(*(uint *)(param_1 + 0x84) & (int)uVar18 + iVar21);
              uVar22 = *(uint *)(lVar16 + 4 + uVar18 * 0xc);
              if ((uVar22 & 2) == 0) goto LAB_004657cb;
              iVar21 = iVar21 + 1;
            } while (uVar19 != *(uint *)(lVar16 + uVar18 * 0xc));
          }
          if ((uVar22 & 1) == 0) goto LAB_004657cb;
        }
LAB_00465730:
        uVar19 = uVar19 + 1;
        local_b8 = (Paint *)CONCAT44(local_b8._4_4_,(int)uVar19);
        uVar17 = *(uint *)(this + 2);
      } while (uVar19 < (uint)(byte)this[1] +
                        (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                        uVar17 << 0x18));
    }
    break;
  case (Paint)0x2:
    uVar17 = 0xffffffff;
    goto LAB_00465959;
  case (Paint)0x3:
    uVar17 = *(uint *)(this + 5);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_00465959:
    PaintSolid::paint_glyph((PaintSolid *)this,param_1,uVar17);
    return;
  case (Paint)0x4:
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    pcStack_b0 = ColorLine<OT::NoVariable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::NoVariable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    local_ec = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        local_ec = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),
                                      pVVar27,plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 1;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    local_f0 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        local_f0 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),
                                      pVVar27,plVar4[4]);
      }
    }
    uVar29 = *(ushort *)(this + 10);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 2;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar1 = *(ushort *)(this + 0xc);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 3;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar2 = *(ushort *)(this + 0xe);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 4;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    pcVar11 = *(code **)(lVar16 + 0x50);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x40);
    }
    uVar29 = uVar29 << 8 | uVar29 >> 8;
    fVar34 = fVar34 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
    fVar33 = fVar33 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8);
    uVar17 = (uint)(short)(uVar8 << 8 | uVar8 >> 8);
    goto LAB_00467cb7;
  case (Paint)0x5:
    uVar17 = *(uint *)(this + 0x10);
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    uVar22 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    pcStack_b0 = ColorLine<OT::Variable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::Variable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar9 = uVar22;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 1;
    }
    else {
      uVar9 = uVar22 + 1;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    local_ec = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        local_ec = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27
                                      ,plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 2;
    }
    else {
      uVar9 = uVar22 + 2;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    local_f0 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        local_f0 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27
                                      ,plVar4[4]);
      }
    }
    uVar29 = *(ushort *)(this + 10);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 3;
    }
    else {
      uVar9 = uVar22 + 3;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar1 = *(ushort *)(this + 0xc);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 4;
    }
    else {
      uVar9 = uVar22 + 4;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar2 = *(ushort *)(this + 0xe);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar22 = uVar22 + 5;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      if (uVar17 == 0xffffffff) {
        uVar22 = 0xffffffff;
      }
      uVar22 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar22 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar17 = *(uint *)(lVar28 + 8 + (ulong)(uVar22 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar17 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                            uVar17 << 0x18) + lVar28);
        }
        uVar17 = *(uint *)(lVar28 + 2);
        if (uVar17 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                      (uVar17 & 0xff00) << 8 | uVar17 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar22 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    pcVar11 = *(code **)(lVar16 + 0x50);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x40);
    }
    uVar29 = uVar29 << 8 | uVar29 >> 8;
    fVar34 = fVar34 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
    fVar33 = fVar33 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8);
    uVar17 = (uint)(short)(uVar8 << 8 | uVar8 >> 8);
    goto LAB_004679c8;
  case (Paint)0x6:
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    pcStack_b0 = ColorLine<OT::NoVariable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::NoVariable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    local_ec = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        local_ec = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),
                                      pVVar27,plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 1;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    local_f0 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        local_f0 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),
                                      pVVar27,plVar4[4]);
      }
    }
    uVar29 = *(ushort *)(this + 10);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 2;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar1 = *(ushort *)(this + 0xc);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 3;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar2 = *(ushort *)(this + 0xe);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 4;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    pcVar11 = *(code **)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x48);
    }
    uVar29 = uVar29 << 8 | uVar29 >> 8;
    fVar34 = fVar34 + (float)(ushort)(uVar2 << 8 | uVar2 >> 8);
    fVar33 = fVar33 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8);
    uVar17 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8);
LAB_00467cb7:
    (*pcVar11)(fVar31 + (float)(int)(short)(uVar7 << 8 | uVar7 >> 8),
               local_ec + (float)(int)(short)(uVar14 << 8 | uVar14 >> 8),
               local_f0 + (float)(int)uVar17,fVar32 + (float)(int)(short)uVar29,fVar33,fVar34,lVar16
               ,uVar12,&local_b8,uVar15);
    break;
  case (Paint)0x7:
    uVar17 = *(uint *)(this + 0x10);
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    uVar22 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    pcStack_b0 = ColorLine<OT::Variable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::Variable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar9 = uVar22;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 1;
    }
    else {
      uVar9 = uVar22 + 1;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    local_ec = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        local_ec = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27
                                      ,plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 2;
    }
    else {
      uVar9 = uVar22 + 2;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    local_f0 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        local_f0 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27
                                      ,plVar4[4]);
      }
    }
    uVar29 = *(ushort *)(this + 10);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 3;
    }
    else {
      uVar9 = uVar22 + 3;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar1 = *(ushort *)(this + 0xc);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 4;
    }
    else {
      uVar9 = uVar22 + 4;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar2 = *(ushort *)(this + 0xe);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar22 = uVar22 + 5;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      if (uVar17 == 0xffffffff) {
        uVar22 = 0xffffffff;
      }
      uVar22 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar22 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar17 = *(uint *)(lVar28 + 8 + (ulong)(uVar22 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar17 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                            uVar17 << 0x18) + lVar28);
        }
        uVar17 = *(uint *)(lVar28 + 2);
        if (uVar17 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                      (uVar17 & 0xff00) << 8 | uVar17 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar22 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    pcVar11 = *(code **)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x48);
    }
    uVar29 = uVar29 << 8 | uVar29 >> 8;
    fVar34 = fVar34 + (float)(ushort)(uVar2 << 8 | uVar2 >> 8);
    fVar33 = fVar33 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8);
    uVar17 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8);
LAB_004679c8:
    (*pcVar11)(fVar31 + (float)(int)(short)(uVar7 << 8 | uVar7 >> 8),
               local_ec + (float)(int)(short)(uVar14 << 8 | uVar14 >> 8),
               local_f0 + (float)(int)uVar17,fVar32 + (float)(int)(short)uVar29,fVar33,fVar34,lVar16
               ,uVar12,&local_b8,uVar15);
    break;
  case (Paint)0x8:
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    pcStack_b0 = ColorLine<OT::NoVariable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::NoVariable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 1;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 2;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar17 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar22 = *(uint *)(lVar28 + 8 + (ulong)(uVar17 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar28);
        }
        uVar22 = *(uint *)(lVar28 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar17 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x50);
    }
    (**(code **)(lVar16 + 0x60))
              (fVar31 + (float)(int)(short)(uVar7 << 8 | uVar7 >> 8),
               fVar32 + (float)(int)(short)(uVar14 << 8 | uVar14 >> 8),
               ((fVar33 + (float)(int)(short)(uVar8 << 8 | uVar8 >> 8)) * DAT_005de5ac +
               DAT_005d9038) * DAT_00652ba0,
               ((fVar34 + (float)(int)(short)(*(ushort *)(this + 10) << 8 |
                                             *(ushort *)(this + 10) >> 8)) * DAT_005de5ac +
               DAT_005d9038) * DAT_00652ba0,lVar16,uVar12,&local_b8,uVar15);
    break;
  case (Paint)0x9:
    uVar17 = *(uint *)(this + 0xc);
    if (this[3] == (Paint)0x0 && (this[2] == (Paint)0x0 && this[1] == (Paint)0x0)) {
      local_b8 = (Paint *)&_hb_NullPool;
    }
    else {
      local_b8 = this + ((ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 |
                        (ulong)(byte)this[3]);
    }
    uVar22 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    pcStack_b0 = ColorLine<OT::Variable>::static_get_color_stops;
    pcStack_a0 = ColorLine<OT::Variable>::static_get_extend;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ushort *)(this + 4);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar9 = uVar22;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar14 = *(ushort *)(this + 6);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 1;
    }
    else {
      uVar9 = uVar22 + 1;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar32 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar32 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar9 = uVar22 + 2;
    }
    else {
      uVar9 = uVar22 + 2;
      if (uVar17 == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar9);
    }
    fVar33 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar9 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar3 = *(uint *)(lVar28 + 8 + (ulong)(uVar9 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar3 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18) + lVar28);
        }
        uVar3 = *(uint *)(lVar28 + 2);
        if (uVar3 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                      (uVar3 & 0xff00) << 8 | uVar3 << 0x18));
        }
        fVar33 = VarData::get_delta(pVVar26,uVar9 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    uVar8 = *(ushort *)(this + 8);
    plVar4 = *(long **)(param_1 + 0x30);
    uVar22 = uVar22 + 3;
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      if (uVar17 == 0xffffffff) {
        uVar22 = 0xffffffff;
      }
      uVar22 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar22);
    }
    fVar34 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar28 = *plVar4;
      if (uVar22 >> 0x10 <
          (uint)(ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8)) {
        uVar17 = *(uint *)(lVar28 + 8 + (ulong)(uVar22 >> 0x10) * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar17 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                            uVar17 << 0x18) + lVar28);
        }
        uVar17 = *(uint *)(lVar28 + 2);
        if (uVar17 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar28 + (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                      (uVar17 & 0xff00) << 8 | uVar17 << 0x18));
        }
        fVar34 = VarData::get_delta(pVVar26,uVar22 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar27,
                                    plVar4[4]);
      }
    }
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x50);
    }
    (**(code **)(lVar16 + 0x60))
              (fVar31 + (float)(int)(short)(uVar7 << 8 | uVar7 >> 8),
               fVar32 + (float)(int)(short)(uVar14 << 8 | uVar14 >> 8),
               ((fVar33 + (float)(int)(short)(uVar8 << 8 | uVar8 >> 8)) * DAT_005de5ac +
               DAT_005d9038) * DAT_00652ba0,
               ((fVar34 + (float)(int)(short)(*(ushort *)(this + 10) << 8 |
                                             *(ushort *)(this + 10) >> 8)) * DAT_005de5ac +
               DAT_005d9038) * DAT_00652ba0,lVar16,uVar12,&local_b8,uVar15);
    break;
  case (Paint)0xa:
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    lVar28 = *(long *)(param_1 + 0x20);
    lVar20 = *(long *)(lVar28 + 0x20);
    uVar17 = *(uint *)(lVar20 + 0x14);
    if (uVar17 == 0) {
      puVar13 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)(lVar20 + 0x70));
      uVar7 = *(ushort *)((long)puVar13 + 0x12) << 8 | *(ushort *)((long)puVar13 + 0x12) >> 8;
      uVar17 = 1000;
      if (uVar7 - 0x10 < 0x3ff1) {
        uVar17 = (uint)uVar7;
      }
      *(uint *)(lVar20 + 0x14) = uVar17;
    }
    fVar32 = (float)uVar17;
    fVar31 = fVar32;
    if (*(int *)(lVar28 + 0x28) != 0) {
      fVar31 = (float)*(int *)(lVar28 + 0x28);
    }
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = **(undefined8 **)(lVar16 + 0x80);
    }
    fVar33 = fVar32;
    if (*(int *)(lVar28 + 0x2c) != 0) {
      fVar33 = (float)*(int *)(lVar28 + 0x2c);
    }
    (**(code **)(lVar16 + 0x10))
              (fVar32 / (float)(int)fVar31,0,
               ((float)(*(uint *)(lVar28 + 0x48) ^ _DAT_006524b0) * fVar32) / (float)(int)fVar31,
               fVar32 / (float)(int)fVar33,0,0,lVar16,uVar12,uVar15);
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x18);
    }
    (**(code **)(lVar16 + 0x28))
              (lVar16,*(undefined8 *)(param_1 + 0x18),
               *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8,
               *(undefined8 *)(param_1 + 0x20),uVar12);
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    lVar28 = *(long *)(param_1 + 0x20);
    lVar20 = *(long *)(lVar28 + 0x20);
    uVar17 = *(uint *)(lVar20 + 0x14);
    if (uVar17 == 0) {
      puVar13 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)(lVar20 + 0x70));
      uVar7 = *(ushort *)((long)puVar13 + 0x12) << 8 | *(ushort *)((long)puVar13 + 0x12) >> 8;
      uVar17 = 1000;
      if (uVar7 - 0x10 < 0x3ff1) {
        uVar17 = (uint)uVar7;
      }
      *(uint *)(lVar20 + 0x14) = uVar17;
    }
    fVar31 = (float)uVar17;
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = **(undefined8 **)(lVar16 + 0x80);
    }
    (**(code **)(lVar16 + 0x10))
              ((float)*(int *)(lVar28 + 0x28) / fVar31,0,
               (*(float *)(lVar28 + 0x48) * (float)*(int *)(lVar28 + 0x2c)) / fVar31,
               (float)*(int *)(lVar28 + 0x2c) / fVar31,0,0,lVar16,uVar12,uVar15);
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      if ((this[1] == (Paint)0x0 && this[2] == (Paint)0x0) && (byte)this[3] == 0) {
        pPVar25 = (Paint *)&_hb_NullPool;
      }
      else {
        pPVar25 = this + ((ulong)(uint)(byte)this[3] |
                         (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8);
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x28);
    }
    (**(code **)(lVar16 + 0x38))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
    goto LAB_00467ac7;
  case (Paint)0xb:
    uVar7 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
    lVar16 = *(long *)(param_1 + 0x60);
    uVar17 = (uint)uVar7 * -0x61c8864f;
    if (lVar16 != 0) {
      uVar19 = (ulong)(uVar17 & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x58);
      uVar22 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
      if ((uVar22 & 2) != 0) {
        if (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7) {
          iVar21 = 1;
          do {
            uVar19 = (ulong)((int)uVar19 + iVar21 & *(uint *)(param_1 + 0x54));
            uVar22 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
            if ((uVar22 & 2) == 0) goto LAB_0046607c;
            iVar21 = iVar21 + 1;
          } while (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7);
        }
        if ((uVar22 & 1) != 0) {
          return;
        }
      }
    }
LAB_0046607c:
    local_b8 = (Paint *)CONCAT44(local_b8._4_4_,(uint)uVar7);
    hb_hashmap_t<unsigned_int,unsigned_int,true>::
    set_with_hash<unsigned_int_const&,unsigned_int_const&>
              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x38),(int *)&local_b8,
               uVar17);
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    lVar28 = *(long *)(param_1 + 0x20);
    lVar20 = *(long *)(lVar28 + 0x20);
    uVar17 = *(uint *)(lVar20 + 0x14);
    if (uVar17 == 0) {
      puVar13 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)(lVar20 + 0x70));
      uVar7 = *(ushort *)((long)puVar13 + 0x12) << 8 | *(ushort *)((long)puVar13 + 0x12) >> 8;
      uVar17 = 1000;
      if (uVar7 - 0x10 < 0x3ff1) {
        uVar17 = (uint)uVar7;
      }
      *(uint *)(lVar20 + 0x14) = uVar17;
    }
    fVar32 = (float)uVar17;
    fVar31 = fVar32;
    if (*(int *)(lVar28 + 0x28) != 0) {
      fVar31 = (float)*(int *)(lVar28 + 0x28);
    }
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = **(undefined8 **)(lVar16 + 0x80);
    }
    fVar33 = fVar32;
    if (*(int *)(lVar28 + 0x2c) != 0) {
      fVar33 = (float)*(int *)(lVar28 + 0x2c);
    }
    (**(code **)(lVar16 + 0x10))
              (fVar32 / (float)(int)fVar31,0,
               ((float)(*(uint *)(lVar28 + 0x48) ^ _DAT_006524b0) * fVar32) / (float)(int)fVar31,
               fVar32 / (float)(int)fVar33,0,0,lVar16,uVar12,uVar15);
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x18);
    }
    iVar21 = (**(code **)(lVar16 + 0x20))
                       (lVar16,*(undefined8 *)(param_1 + 0x18),
                        *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8,
                        *(undefined8 *)(param_1 + 0x20),uVar12);
    lVar16 = *(long *)(param_1 + 0x10);
    lVar28 = *(long *)(lVar16 + 0x80);
    if (iVar21 == 0) {
      if (lVar28 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar28 + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
      uVar7 = *(ushort *)(this + 1);
      uVar14 = uVar7 << 8 | uVar7 >> 8;
      psVar5 = *(short **)(param_1 + 8);
      uVar17 = *(uint *)(psVar5 + 7);
      puVar30 = (uint *)((ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                | uVar17 << 0x18) + (long)psVar5);
      puVar23 = (ushort *)&_hb_NullPool;
      if (uVar17 == 0) {
        puVar30 = &_hb_NullPool;
      }
      uVar17 = *puVar30;
      uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
      if (0 < (int)uVar17) {
        iVar21 = uVar17 - 1;
        iVar24 = 0;
        do {
          while( true ) {
            uVar17 = (uint)(iVar21 + iVar24) >> 1;
            uVar8 = *(ushort *)((long)puVar30 + (ulong)uVar17 * 6 + 4);
            uVar8 = uVar8 << 8 | uVar8 >> 8;
            if (uVar14 < uVar8) break;
            if (uVar14 <= uVar8) {
              puVar23 = (ushort *)((long)puVar30 + (ulong)uVar17 * 6 + 4);
              goto LAB_00467eb7;
            }
            iVar24 = uVar17 + 1;
            if (iVar21 < iVar24) goto LAB_00467eb7;
          }
          iVar21 = uVar17 - 1;
        } while (iVar24 <= iVar21);
      }
LAB_00467eb7:
      if (*puVar23 == uVar7) {
        uVar17 = *(uint *)(puVar23 + 1);
        if (uVar17 == 0) {
          pPVar25 = (Paint *)&_hb_NullPool;
        }
        else {
          pPVar25 = (Paint *)((long)puVar30 +
                             (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                     (uVar17 & 0xff00) << 8 | uVar17 << 0x18));
        }
      }
      else {
        pPVar25 = (Paint *)0x0;
      }
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      puVar6 = *(undefined8 **)(param_1 + 0x30);
      local_98 = puVar6[4];
      local_b8 = (Paint *)*puVar6;
      pcStack_b0 = (code *)puVar6[1];
      local_a8 = (hb_paint_context_t *)puVar6[2];
      pcStack_a0 = (code *)puVar6[3];
      this_01 = (ClipList *)&_hb_NullPool;
      if ((*psVar5 != 0) && (*(int *)(psVar5 + 0xb) != 0)) {
        uVar17 = *(uint *)(psVar5 + 0xb);
        if (uVar17 == 0) {
          this_01 = (ClipList *)&_hb_NullPool;
        }
        else {
          this_01 = (ClipList *)
                    ((long)psVar5 +
                    (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                           uVar17 << 0x18));
        }
      }
      uVar12 = ClipList::get_extents(this_01,(uint)uVar14,local_48,(long *)&local_b8);
      if ((char)uVar12 != '\0') {
        lVar16 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar16 + 0x80) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x20);
        }
        (**(code **)(lVar16 + 0x30))
                  ((float)local_48[0],(float)(local_48[1] + local_48[3]),
                   (float)(local_48[0] + local_48[2]),(float)local_48[1],lVar16,
                   *(undefined8 *)(param_1 + 0x18),uVar15);
      }
      if (pPVar25 != (Paint *)0x0) {
        if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
          dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        }
      }
      if ((char)uVar12 != '\0') {
        lVar16 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar16 + 0x80) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x28);
        }
        (**(code **)(lVar16 + 0x38))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
      }
      lVar16 = *(long *)(param_1 + 0x60);
      if (lVar16 == 0) {
        return;
      }
      uVar7 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
      uVar19 = (ulong)((uint)uVar7 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x58);
      uVar17 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
      if ((uVar17 & 2) == 0) {
        return;
      }
      if (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7) {
        iVar21 = 1;
        do {
          uVar19 = (ulong)((int)uVar19 + iVar21 & *(uint *)(param_1 + 0x54));
          uVar17 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
          if ((uVar17 & 2) == 0) {
            return;
          }
          iVar21 = iVar21 + 1;
        } while (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7);
      }
    }
    else {
      if (lVar28 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar28 + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
      lVar16 = *(long *)(param_1 + 0x60);
      if (lVar16 == 0) {
        return;
      }
      uVar7 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
      uVar19 = (ulong)((uint)uVar7 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x58);
      uVar17 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
      if ((uVar17 & 2) == 0) {
        return;
      }
      if (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7) {
        iVar21 = 1;
        do {
          uVar19 = (ulong)((int)uVar19 + iVar21 & *(uint *)(param_1 + 0x54));
          uVar17 = *(uint *)(lVar16 + 4 + uVar19 * 0xc);
          if ((uVar17 & 2) == 0) {
            return;
          }
          iVar21 = iVar21 + 1;
        } while (*(uint *)(lVar16 + uVar19 * 0xc) != (uint)uVar7);
      }
    }
    if ((uVar17 & 1) != 0) {
      *(uint *)(lVar16 + 4 + uVar19 * 0xc) = uVar17 & 0xfffffffe;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
    break;
  case (Paint)0xc:
    if (this[6] == (Paint)0x0 && (this[5] == (Paint)0x0 && this[4] == (Paint)0x0)) {
      this_00 = (Affine2x3 *)&_hb_NullPool;
    }
    else {
      this_00 = (Affine2x3 *)
                (this + ((ulong)(byte)this[5] << 8 | (ulong)(byte)this[4] << 0x10 |
                        (ulong)(byte)this[6]));
    }
    uVar17 = 0xffffffff;
    goto LAB_0046616b;
  case (Paint)0xd:
    if (this[6] == (Paint)0x0 && (this[5] == (Paint)0x0 && this[4] == (Paint)0x0)) {
      this_00 = (Affine2x3 *)&_hb_NullPool;
    }
    else {
      this_00 = (Affine2x3 *)
                (this + ((ulong)(byte)this[5] << 8 | (ulong)(byte)this[4] << 0x10 |
                        (ulong)(byte)this[6]));
    }
    uVar17 = *(uint *)(this_00 + 0x18);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_0046616b:
    Affine2x3::paint_glyph(this_00,(long)param_1,uVar17);
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      if ((this[1] == (Paint)0x0 && this[2] == (Paint)0x0) && (byte)this[3] == 0) {
        pPVar25 = (Paint *)&_hb_NullPool;
      }
      else {
        pPVar25 = this + ((ulong)(uint)(byte)this[3] |
                         (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8);
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
LAB_00467ac7:
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00467afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
    return;
  case (Paint)0xe:
    uVar17 = 0xffffffff;
    goto LAB_00466217;
  case (Paint)0xf:
    uVar17 = *(uint *)(this + 8);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_00466217:
    PaintTranslate::paint_glyph((PaintTranslate *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x10:
    uVar17 = 0xffffffff;
    goto LAB_00466246;
  case (Paint)0x11:
    uVar17 = *(uint *)(this + 8);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_00466246:
    PaintScale::paint_glyph((PaintScale *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x12:
    uVar17 = 0xffffffff;
    goto LAB_00466275;
  case (Paint)0x13:
    uVar17 = *(uint *)(this + 0xc);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_00466275:
    PaintScaleAroundCenter::paint_glyph((PaintScaleAroundCenter *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x14:
    uVar19 = 0xffffffff;
    goto LAB_004662a4;
  case (Paint)0x15:
    uVar17 = *(uint *)(this + 6);
    uVar19 = (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                    uVar17 << 0x18);
LAB_004662a4:
    PaintScaleUniform::paint_glyph((PaintScaleUniform *)this,(long)param_1,uVar19);
    return;
  case (Paint)0x16:
    uVar17 = 0xffffffff;
    goto LAB_004662d3;
  case (Paint)0x17:
    uVar17 = *(uint *)(this + 10);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_004662d3:
    PaintScaleUniformAroundCenter::paint_glyph
              ((PaintScaleUniformAroundCenter *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x18:
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],0xffffffff);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar16 = *plVar4;
      uVar22 = uVar17 >> 0x10;
      fVar31 = 0.0;
      if (uVar22 < (ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)) {
        lVar28 = plVar4[4];
        uVar9 = *(uint *)(plVar4 + 3);
        lVar20 = plVar4[2];
LAB_004668dc:
        uVar22 = *(uint *)(lVar16 + 8 + (ulong)uVar22 * 4);
        pVVar27 = (VarRegionList *)&_hb_NullPool;
        pVVar26 = (VarData *)&_hb_NullPool;
        if (uVar22 != 0) {
          pVVar26 = (VarData *)
                    ((ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18) + lVar16);
        }
        uVar22 = *(uint *)(lVar16 + 2);
        if (uVar22 != 0) {
          pVVar27 = (VarRegionList *)
                    (lVar16 + (ulong)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 |
                                      (uVar22 & 0xff00) << 8 | uVar22 << 0x18));
        }
        fVar31 = VarData::get_delta(pVVar26,uVar17 & 0xffff,lVar20,uVar9,pVVar27,lVar28);
      }
    }
    goto LAB_00466912;
  case (Paint)0x19:
    uVar17 = *(uint *)(this + 6);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    plVar4 = *(long **)(param_1 + 0x30);
    if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
      uVar17 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar17);
    }
    fVar31 = 0.0;
    if ((int)plVar4[3] != 0) {
      lVar16 = *plVar4;
      uVar22 = uVar17 >> 0x10;
      fVar31 = 0.0;
      if (uVar22 < (ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)) {
        lVar28 = plVar4[4];
        uVar9 = *(uint *)(plVar4 + 3);
        lVar20 = plVar4[2];
        goto LAB_004668dc;
      }
    }
LAB_00466912:
    fVar31 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar31)
             * DAT_005de5ac;
    if ((fVar31 != 0.0) || (NAN(fVar31))) {
      lVar16 = *(long *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      fVar32 = DAT_00652ba0 * fVar31;
      fVar33 = cosf(fVar32);
      fVar32 = sinf(fVar32);
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))
                (fVar33,fVar32,(uint)fVar32 ^ _DAT_006524b0,fVar33,0,0,lVar16,uVar12,uVar15);
    }
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      if ((this[1] == (Paint)0x0 && this[2] == (Paint)0x0) && (byte)this[3] == 0) {
        pPVar25 = (Paint *)&_hb_NullPool;
      }
      else {
        pPVar25 = this + ((ulong)(uint)(byte)this[3] |
                         (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8);
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    if ((fVar31 == 0.0) && (!NAN(fVar31))) {
      return;
    }
    goto LAB_00467ac7;
  case (Paint)0x1a:
    uVar17 = 0xffffffff;
    goto LAB_0046637c;
  case (Paint)0x1b:
    uVar17 = *(uint *)(this + 10);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_0046637c:
    PaintRotateAroundCenter::paint_glyph((PaintRotateAroundCenter *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x1c:
    uVar17 = 0xffffffff;
    goto LAB_004663ab;
  case (Paint)0x1d:
    uVar17 = *(uint *)(this + 8);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_004663ab:
    PaintSkew::paint_glyph((PaintSkew *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x1e:
    uVar17 = 0xffffffff;
    goto LAB_004663da;
  case (Paint)0x1f:
    uVar17 = *(uint *)(this + 0xc);
    uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
LAB_004663da:
    PaintSkewAroundCenter::paint_glyph((PaintSkewAroundCenter *)this,(long)param_1,uVar17);
    return;
  case (Paint)0x20:
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      if ((this[5] == (Paint)0x0 && this[6] == (Paint)0x0) && (byte)this[7] == 0) {
        pPVar25 = (Paint *)&_hb_NullPool;
      }
      else {
        pPVar25 = this + ((ulong)(uint)(byte)this[7] |
                         (ulong)(byte)this[5] << 0x10 | (ulong)(byte)this[6] << 8);
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x58);
    }
    (**(code **)(lVar16 + 0x68))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar12);
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      if ((this[1] == (Paint)0x0 && this[2] == (Paint)0x0) && (byte)this[3] == 0) {
        pPVar25 = (Paint *)&_hb_NullPool;
      }
      else {
        pPVar25 = this + ((ulong)(uint)(byte)this[3] |
                         (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8);
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      dispatch<OT::hb_paint_context_t>(pPVar25,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00466f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x70))(lVar16,*(undefined8 *)(param_1 + 0x18),this[4],uVar12);
    return;
  }
  return;
}


