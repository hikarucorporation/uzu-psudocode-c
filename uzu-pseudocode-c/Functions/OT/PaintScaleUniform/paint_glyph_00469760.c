// Function : paint_glyph
// Namespace: OT:PaintScaleUniform
// Entry    : 00469760
// Prototype: undefined paint_glyph(PaintScaleUniform * this, long param_1, ulong param_2)
// Body     : 00469760 - 00469926


/* OT::PaintScaleUniform::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScaleUniform::paint_glyph(PaintScaleUniform *this,long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  VarData *this_00;
  VarRegionList *pVVar6;
  Paint *this_01;
  float fVar7;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar1[1] != (DeltaSetIndexMap *)0x0) {
    uVar3 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar1[1],(uint)param_2);
    param_2 = (ulong)uVar3;
  }
  fVar7 = 0.0;
  if ((int)plVar1[3] != 0) {
    lVar2 = *plVar1;
    uVar5 = param_2 >> 0x10 & 0xffff;
    if ((uint)uVar5 < (uint)(ushort)(*(ushort *)(lVar2 + 6) << 8 | *(ushort *)(lVar2 + 6) >> 8)) {
      uVar3 = *(uint *)(lVar2 + 8 + uVar5 * 4);
      pVVar6 = (VarRegionList *)&_hb_NullPool;
      this_00 = (VarData *)&_hb_NullPool;
      if (uVar3 != 0) {
        this_00 = (VarData *)
                  ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18) + lVar2);
      }
      uVar3 = *(uint *)(lVar2 + 2);
      if (uVar3 != 0) {
        pVVar6 = (VarRegionList *)
                 (lVar2 + (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                 uVar3 << 0x18));
      }
      fVar7 = VarData::get_delta(this_00,(uint)param_2 & 0xffff,plVar1[2],*(uint *)(plVar1 + 3),
                                 pVVar6,plVar1[4]);
    }
  }
  fVar7 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar7) *
          DAT_005de5ac;
  if ((fVar7 != DAT_005d9038) || (NAN(fVar7) || NAN(DAT_005d9038))) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(undefined8 **)(lVar2 + 0x80) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(lVar2 + 0x80);
    }
    (**(code **)(lVar2 + 0x10))(fVar7,0,0,fVar7,0,0,lVar2,*(undefined8 *)(param_1 + 0x18),uVar4);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintScaleUniform)0x0 && this[2] == (PaintScaleUniform)0x0) &&
        (byte)this[3] == 0) {
      this_01 = (Paint *)&_hb_NullPool;
    }
    else {
      this_01 = (Paint *)(this + ((ulong)(uint)(byte)this[3] |
                                 (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[2] << 8));
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    Paint::dispatch<OT::hb_paint_context_t>(this_01,(hb_paint_context_t *)param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if ((fVar7 == DAT_005d9038) && (!NAN(fVar7) && !NAN(DAT_005d9038))) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar2 + 0x80) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0046990d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_1 + 0x18),uVar4);
  return;
}


