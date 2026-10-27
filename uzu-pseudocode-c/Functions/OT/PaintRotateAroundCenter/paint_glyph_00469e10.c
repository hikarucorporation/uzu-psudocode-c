// Function : paint_glyph
// Namespace: OT:PaintRotateAroundCenter
// Entry    : 00469e10
// Prototype: undefined paint_glyph(PaintRotateAroundCenter * this, long param_1, uint param_2)
// Body     : 00469e10 - 0046a2f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintRotateAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintRotateAroundCenter::paint_glyph(PaintRotateAroundCenter *this,long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  VarData *pVVar12;
  VarRegionList *pVVar13;
  Paint *this_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  plVar5 = *(long **)(param_1 + 0x30);
  uVar8 = param_2;
  if ((DeltaSetIndexMap *)plVar5[1] != (DeltaSetIndexMap *)0x0) {
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],param_2);
  }
  fVar14 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar11 = *plVar5;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar12 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar12 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar11);
      }
      uVar4 = *(uint *)(lVar11 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      fVar14 = VarData::get_delta(pVVar12,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
                                  plVar5[4]);
    }
  }
  uVar1 = *(ushort *)(this + 4);
  uVar2 = *(ushort *)(this + 6);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar8 = param_2 + 1;
  }
  else {
    uVar8 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar8 = 0xffffffff;
    }
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar8);
  }
  fVar17 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar11 = *plVar5;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar12 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar12 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar11);
      }
      uVar4 = *(uint *)(lVar11 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      fVar17 = VarData::get_delta(pVVar12,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
                                  plVar5[4]);
    }
  }
  uVar3 = *(ushort *)(this + 8);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar8 = param_2 + 2;
  }
  else {
    uVar8 = param_2 + 2;
    if (param_2 == 0xffffffff) {
      uVar8 = 0xffffffff;
    }
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar8);
  }
  fVar17 = fVar17 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
  fVar18 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar11 = *plVar5;
    fVar18 = 0.0;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar11 + 6) << 8 | *(ushort *)(lVar11 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar11 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar12 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar12 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar11);
      }
      uVar4 = *(uint *)(lVar11 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar11 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      fVar18 = VarData::get_delta(pVVar12,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
                                  plVar5[4]);
    }
  }
  fVar14 = (fVar14 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8)) * DAT_005de5ac;
  fVar18 = fVar18 + (float)(int)(short)(uVar3 << 8 | uVar3 >> 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  bVar6 = fVar17 != 0.0;
  bVar7 = fVar18 != 0.0;
  if (bVar7 || bVar6) {
    if (*(undefined8 **)(lVar11 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar11 + 0x80);
    }
    (**(code **)(lVar11 + 0x10))(DAT_005d9038,0,0,DAT_005d9038,fVar17,fVar18,lVar11,uVar10,uVar9);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    fVar15 = DAT_00652ba0 * fVar14;
    fVar16 = cosf(fVar15);
    fVar15 = sinf(fVar15);
    if (*(undefined8 **)(lVar11 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar11 + 0x80);
    }
    (**(code **)(lVar11 + 0x10))
              (fVar16,fVar15,(uint)fVar15 ^ _DAT_006524b0,fVar16,0,0,lVar11,uVar10,uVar9);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  if (bVar7 || bVar6) {
    if (*(undefined8 **)(lVar11 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar11 + 0x80);
    }
    (**(code **)(lVar11 + 0x10))
              (DAT_005d9038,0,0,DAT_005d9038,(uint)fVar17 ^ _DAT_006524b0,
               (uint)fVar18 ^ _DAT_006524b0,lVar11,uVar10,uVar9);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintRotateAroundCenter)0x0 && this[2] == (PaintRotateAroundCenter)0x0) &&
        (byte)this[3] == 0) {
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
    lVar11 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar11 + 0x80) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x80) + 8);
    }
    (**(code **)(lVar11 + 0x18))(lVar11,*(undefined8 *)(param_1 + 0x18),uVar10);
  }
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    lVar11 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar11 + 0x80) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x80) + 8);
    }
    (**(code **)(lVar11 + 0x18))(lVar11,*(undefined8 *)(param_1 + 0x18),uVar10);
  }
  if (bVar7 || bVar6) {
    lVar11 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar11 + 0x80) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0046a2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 0x18))(lVar11,*(undefined8 *)(param_1 + 0x18),uVar10);
    return;
  }
  return;
}


