// Function : paint_glyph
// Namespace: OT:PaintSkew
// Entry    : 0046a300
// Prototype: undefined paint_glyph(PaintSkew * this, long param_1, uint param_2)
// Body     : 0046a300 - 0046a5cc


/* OT::PaintSkew::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall OT::PaintSkew::paint_glyph(PaintSkew *this,long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  VarData *pVVar8;
  VarRegionList *pVVar9;
  Paint *this_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  plVar3 = *(long **)(param_1 + 0x30);
  uVar5 = param_2;
  if ((DeltaSetIndexMap *)plVar3[1] != (DeltaSetIndexMap *)0x0) {
    uVar5 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar3[1],param_2);
  }
  fVar10 = 0.0;
  if ((int)plVar3[3] != 0) {
    lVar4 = *plVar3;
    if (uVar5 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar4 + 6) << 8 | *(ushort *)(lVar4 + 6) >> 8)) {
      uVar2 = *(uint *)(lVar4 + 8 + (ulong)(uVar5 >> 0x10) * 4);
      pVVar9 = (VarRegionList *)&_hb_NullPool;
      pVVar8 = (VarData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pVVar8 = (VarData *)
                 ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18) + lVar4);
      }
      uVar2 = *(uint *)(lVar4 + 2);
      if (uVar2 != 0) {
        pVVar9 = (VarRegionList *)
                 (lVar4 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18));
      }
      fVar10 = VarData::get_delta(pVVar8,uVar5 & 0xffff,plVar3[2],*(uint *)(plVar3 + 3),pVVar9,
                                  plVar3[4]);
    }
  }
  uVar1 = *(ushort *)(this + 4);
  plVar3 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar3[1] == (DeltaSetIndexMap *)0x0) {
    uVar5 = param_2 + 1;
  }
  else {
    uVar5 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
    uVar5 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar3[1],uVar5);
  }
  fVar13 = ((float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar10) * DAT_005de5ac;
  fVar10 = 0.0;
  if ((int)plVar3[3] != 0) {
    lVar4 = *plVar3;
    fVar10 = 0.0;
    if (uVar5 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar4 + 6) << 8 | *(ushort *)(lVar4 + 6) >> 8)) {
      uVar2 = *(uint *)(lVar4 + 8 + (ulong)(uVar5 >> 0x10) * 4);
      pVVar9 = (VarRegionList *)&_hb_NullPool;
      pVVar8 = (VarData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pVVar8 = (VarData *)
                 ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18) + lVar4);
      }
      uVar2 = *(uint *)(lVar4 + 2);
      if (uVar2 != 0) {
        pVVar9 = (VarRegionList *)
                 (lVar4 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18));
      }
      fVar10 = VarData::get_delta(pVVar8,uVar5 & 0xffff,plVar3[2],*(uint *)(plVar3 + 3),pVVar9,
                                  plVar3[4]);
    }
  }
  fVar10 = ((float)(int)(short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) + fVar10) *
           DAT_005de5ac;
  if (fVar10 != 0.0 || fVar13 != 0.0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    fVar11 = tanf(fVar13 * DAT_00652ba4);
    fVar12 = tanf(fVar10 * DAT_00652ba0);
    if (*(undefined8 **)(lVar4 + 0x80) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined8 **)(lVar4 + 0x80);
    }
    (**(code **)(lVar4 + 0x10))(DAT_005d9038,fVar12,fVar11,DAT_005d9038,0,0,lVar4,uVar7,uVar6);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintSkew)0x0 && this[2] == (PaintSkew)0x0) && (byte)this[3] == 0) {
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
  if (fVar10 != 0.0 || fVar13 != 0.0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar4 + 0x80) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0046a5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(lVar4,*(undefined8 *)(param_1 + 0x18),uVar7);
    return;
  }
  return;
}


