// Function : paint_glyph
// Namespace: OT:PaintTranslate
// Entry    : 00468c70
// Prototype: undefined paint_glyph(PaintTranslate * this, long param_1, uint param_2)
// Body     : 00468c70 - 00468f13


/* OT::PaintTranslate::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall OT::PaintTranslate::paint_glyph(PaintTranslate *this,long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  VarData *pVVar10;
  VarRegionList *pVVar11;
  Paint *this_00;
  float fVar12;
  float fVar13;
  
  uVar1 = *(ushort *)(this + 4);
  plVar4 = *(long **)(param_1 + 0x30);
  uVar8 = param_2;
  if ((DeltaSetIndexMap *)plVar4[1] != (DeltaSetIndexMap *)0x0) {
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],param_2);
  }
  fVar12 = 0.0;
  if ((int)plVar4[3] != 0) {
    lVar5 = *plVar4;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar5 + 6) << 8 | *(ushort *)(lVar5 + 6) >> 8)) {
      uVar3 = *(uint *)(lVar5 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar11 = (VarRegionList *)&_hb_NullPool;
      pVVar10 = (VarData *)&_hb_NullPool;
      if (uVar3 != 0) {
        pVVar10 = (VarData *)
                  ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18) + lVar5);
      }
      uVar3 = *(uint *)(lVar5 + 2);
      if (uVar3 != 0) {
        pVVar11 = (VarRegionList *)
                  (lVar5 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                  uVar3 << 0x18));
      }
      fVar12 = VarData::get_delta(pVVar10,uVar8 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar11,
                                  plVar4[4]);
    }
  }
  uVar2 = *(ushort *)(this + 6);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar4[1] == (DeltaSetIndexMap *)0x0) {
    uVar8 = param_2 + 1;
  }
  else {
    uVar8 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar8 = 0xffffffff;
    }
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar4[1],uVar8);
  }
  fVar13 = 0.0;
  if ((int)plVar4[3] != 0) {
    lVar5 = *plVar4;
    fVar13 = 0.0;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar5 + 6) << 8 | *(ushort *)(lVar5 + 6) >> 8)) {
      uVar3 = *(uint *)(lVar5 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar11 = (VarRegionList *)&_hb_NullPool;
      pVVar10 = (VarData *)&_hb_NullPool;
      if (uVar3 != 0) {
        pVVar10 = (VarData *)
                  ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18) + lVar5);
      }
      uVar3 = *(uint *)(lVar5 + 2);
      if (uVar3 != 0) {
        pVVar11 = (VarRegionList *)
                  (lVar5 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                  uVar3 << 0x18));
      }
      fVar13 = VarData::get_delta(pVVar10,uVar8 & 0xffff,plVar4[2],*(uint *)(plVar4 + 3),pVVar11,
                                  plVar4[4]);
    }
  }
  bVar6 = fVar12 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) != 0.0;
  bVar7 = fVar13 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) != 0.0;
  if (bVar7 || bVar6) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(undefined8 **)(lVar5 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar5 + 0x80);
    }
    (**(code **)(lVar5 + 0x10))
              (DAT_005d9038,0,0,DAT_005d9038,lVar5,*(undefined8 *)(param_1 + 0x18),uVar9);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintTranslate)0x0 && this[2] == (PaintTranslate)0x0) && (byte)this[3] == 0) {
      this_00 = (Paint *)&_hb_NullPool;
    }
    else {
      this_00 = (Paint *)(this + ((ulong)(uint)(byte)this[3] |
                                 (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8));
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    Paint::dispatch<OT::hb_paint_context_t>(this_00,(hb_paint_context_t *)param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar7 || bVar6) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00468efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x18))(lVar5,*(undefined8 *)(param_1 + 0x18),uVar9);
    return;
  }
  return;
}


