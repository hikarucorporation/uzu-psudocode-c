// Function : paint_glyph
// Namespace: OT:PaintScaleUniformAroundCenter
// Entry    : 00469930
// Prototype: undefined paint_glyph(PaintScaleUniformAroundCenter * this, long param_1, uint param_2)
// Body     : 00469930 - 00469e0f


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintScaleUniformAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScaleUniformAroundCenter::paint_glyph
          (PaintScaleUniformAroundCenter *this,long param_1,uint param_2)

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
  VarData *pVVar11;
  long lVar12;
  VarRegionList *pVVar13;
  Paint *this_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_6c;
  
  plVar5 = *(long **)(param_1 + 0x30);
  uVar8 = param_2;
  if ((DeltaSetIndexMap *)plVar5[1] != (DeltaSetIndexMap *)0x0) {
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],param_2);
  }
  local_6c = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar12 = *plVar5;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar12 + 6) << 8 | *(ushort *)(lVar12 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar12 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar11 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar11 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar12);
      }
      uVar4 = *(uint *)(lVar12 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar12 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      local_6c = VarData::get_delta(pVVar11,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
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
  fVar15 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar12 = *plVar5;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar12 + 6) << 8 | *(ushort *)(lVar12 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar12 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar11 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar11 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar12);
      }
      uVar4 = *(uint *)(lVar12 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar12 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      fVar15 = VarData::get_delta(pVVar11,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
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
  fVar15 = fVar15 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
  fVar16 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar12 = *plVar5;
    fVar16 = 0.0;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar12 + 6) << 8 | *(ushort *)(lVar12 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar12 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar13 = (VarRegionList *)&_hb_NullPool;
      pVVar11 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        pVVar11 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar12);
      }
      uVar4 = *(uint *)(lVar12 + 2);
      if (uVar4 != 0) {
        pVVar13 = (VarRegionList *)
                  (lVar12 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8
                                   | uVar4 << 0x18));
      }
      fVar16 = VarData::get_delta(pVVar11,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar13,
                                  plVar5[4]);
    }
  }
  fVar14 = (local_6c + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8)) * DAT_005de5ac;
  fVar16 = fVar16 + (float)(int)(short)(uVar3 << 8 | uVar3 >> 8);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  bVar6 = fVar15 != 0.0;
  bVar7 = fVar16 != 0.0;
  if (bVar7 || bVar6) {
    if (*(undefined8 **)(lVar12 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar12 + 0x80);
    }
    (**(code **)(lVar12 + 0x10))(DAT_005d9038,0,0,DAT_005d9038,fVar15,fVar16,lVar12,uVar10,uVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) goto LAB_00469c2d;
  }
  else if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) {
LAB_00469c2d:
    if (*(undefined8 **)(lVar12 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar12 + 0x80);
    }
    (**(code **)(lVar12 + 0x10))(fVar14,0,0,fVar14,0,0,lVar12,uVar10,uVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  if (bVar7 || bVar6) {
    if (*(undefined8 **)(lVar12 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar12 + 0x80);
    }
    (**(code **)(lVar12 + 0x10))
              (DAT_005d9038,0,0,DAT_005d9038,(uint)fVar15 ^ _DAT_006524b0,
               (uint)fVar16 ^ _DAT_006524b0,lVar12,uVar10,uVar9);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintScaleUniformAroundCenter)0x0 &&
        this[2] == (PaintScaleUniformAroundCenter)0x0) && (byte)this[3] == 0) {
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
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
    }
    (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),uVar10);
    if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) goto LAB_00469db0;
  }
  else if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) {
LAB_00469db0:
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),0);
      if (!bVar7 && !bVar6) {
        return;
      }
    }
    else {
      (**(code **)(lVar12 + 0x18))
                (lVar12,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8));
      if (!bVar7 && !bVar6) {
        return;
      }
    }
    goto LAB_00469d4d;
  }
  if (!bVar7 && !bVar6) {
    return;
  }
LAB_00469d4d:
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar12 + 0x80) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00469d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),uVar10);
  return;
}


