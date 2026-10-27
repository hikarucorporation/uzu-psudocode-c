// Function : paint_glyph
// Namespace: OT:Affine2x3
// Entry    : 0046abb0
// Prototype: undefined paint_glyph(Affine2x3 * this, long param_1, uint param_2)
// Body     : 0046abb0 - 0046b029


/* OT::Affine2x3::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall OT::Affine2x3::paint_glyph(Affine2x3 *this,long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  VarData *pVVar14;
  VarRegionList *pVVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x30);
  uVar7 = param_2;
  if ((DeltaSetIndexMap *)plVar5[1] != (DeltaSetIndexMap *)0x0) {
    uVar7 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],param_2);
  }
  fVar16 = 0.0;
  if ((int)plVar5[3] != 0) {
    lVar6 = *plVar5;
    if (uVar7 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8)) {
      uVar8 = *(uint *)(lVar6 + 8 + (ulong)(uVar7 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar8 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18) + lVar6);
      }
      uVar8 = *(uint *)(lVar6 + 2);
      if (uVar8 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                                  uVar8 << 0x18));
      }
      fVar16 = VarData::get_delta(pVVar14,uVar7 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar7 = *(uint *)this;
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar8 = param_2 + 1;
    iVar1 = (int)plVar5[3];
  }
  else {
    uVar8 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar8 = 0xffffffff;
    }
    uVar8 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar8);
    iVar1 = (int)plVar5[3];
  }
  fVar17 = 0.0;
  if (iVar1 != 0) {
    fVar17 = 0.0;
    lVar6 = *plVar5;
    if (uVar8 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8)) {
      uVar9 = *(uint *)(lVar6 + 8 + (ulong)(uVar8 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar9 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18) + lVar6);
      }
      uVar9 = *(uint *)(lVar6 + 2);
      if (uVar9 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                  uVar9 << 0x18));
      }
      fVar17 = VarData::get_delta(pVVar14,uVar8 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar8 = *(uint *)(this + 4);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar9 = param_2 + 2;
    iVar1 = (int)plVar5[3];
  }
  else {
    uVar9 = param_2 + 2;
    if (param_2 == 0xffffffff) {
      uVar9 = 0xffffffff;
    }
    uVar9 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar9);
    iVar1 = (int)plVar5[3];
  }
  fVar18 = 0.0;
  if (iVar1 != 0) {
    fVar18 = 0.0;
    lVar6 = *plVar5;
    if (uVar9 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8)) {
      uVar10 = *(uint *)(lVar6 + 8 + (ulong)(uVar9 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar10 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18) + lVar6);
      }
      uVar10 = *(uint *)(lVar6 + 2);
      if (uVar10 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                   (uVar10 & 0xff00) << 8 | uVar10 << 0x18));
      }
      fVar18 = VarData::get_delta(pVVar14,uVar9 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar9 = *(uint *)(this + 8);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar10 = param_2 + 3;
    iVar1 = (int)plVar5[3];
  }
  else {
    uVar10 = param_2 + 3;
    if (param_2 == 0xffffffff) {
      uVar10 = 0xffffffff;
    }
    uVar10 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar10);
    iVar1 = (int)plVar5[3];
  }
  fVar19 = 0.0;
  if (iVar1 != 0) {
    fVar19 = 0.0;
    lVar6 = *plVar5;
    if (uVar10 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8))
    {
      uVar11 = *(uint *)(lVar6 + 8 + (ulong)(uVar10 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar11 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18) + lVar6);
      }
      uVar11 = *(uint *)(lVar6 + 2);
      if (uVar11 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                   (uVar11 & 0xff00) << 8 | uVar11 << 0x18));
      }
      fVar19 = VarData::get_delta(pVVar14,uVar10 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar10 = *(uint *)(this + 0xc);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar11 = param_2 + 4;
    iVar1 = (int)plVar5[3];
  }
  else {
    uVar11 = param_2 + 4;
    if (param_2 == 0xffffffff) {
      uVar11 = 0xffffffff;
    }
    uVar11 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar11);
    iVar1 = (int)plVar5[3];
  }
  fVar20 = 0.0;
  if (iVar1 != 0) {
    fVar20 = 0.0;
    lVar6 = *plVar5;
    if (uVar11 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8))
    {
      uVar12 = *(uint *)(lVar6 + 8 + (ulong)(uVar11 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar12 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                          uVar12 << 0x18) + lVar6);
      }
      uVar12 = *(uint *)(lVar6 + 2);
      if (uVar12 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                   (uVar12 & 0xff00) << 8 | uVar12 << 0x18));
      }
      fVar20 = VarData::get_delta(pVVar14,uVar11 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar11 = *(uint *)(this + 0x10);
  plVar5 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar5[1] == (DeltaSetIndexMap *)0x0) {
    uVar12 = param_2 + 5;
    iVar1 = (int)plVar5[3];
  }
  else {
    uVar12 = param_2 + 5;
    if (param_2 == 0xffffffff) {
      uVar12 = 0xffffffff;
    }
    uVar12 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar5[1],uVar12);
    iVar1 = (int)plVar5[3];
  }
  fVar21 = 0.0;
  if (iVar1 != 0) {
    fVar21 = 0.0;
    lVar6 = *plVar5;
    if (uVar12 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8))
    {
      uVar2 = *(uint *)(lVar6 + 8 + (ulong)(uVar12 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18) + lVar6);
      }
      uVar2 = *(uint *)(lVar6 + 2);
      if (uVar2 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar6 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18));
      }
      fVar21 = VarData::get_delta(pVVar14,uVar12 & 0xffff,plVar5[2],*(uint *)(plVar5 + 3),pVVar15,
                                  plVar5[4]);
    }
  }
  uVar12 = *(uint *)(this + 0x14);
  if (*(undefined8 **)(lVar3 + 0x80) == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = **(undefined8 **)(lVar3 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x0046b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))
            ((fVar16 + (float)(int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                   | uVar7 << 0x18)) * DAT_005de560,
             (fVar17 + (float)(int)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                   | uVar8 << 0x18)) * DAT_005de560,
             (fVar18 + (float)(int)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                   | uVar9 << 0x18)) * DAT_005de560,
             (fVar19 + (float)(int)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                    (uVar10 & 0xff00) << 8 | uVar10 << 0x18)) * DAT_005de560,
             (fVar20 + (float)(int)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                    (uVar11 & 0xff00) << 8 | uVar11 << 0x18)) * DAT_005de560,
             (fVar21 + (float)(int)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                    (uVar12 & 0xff00) << 8 | uVar12 << 0x18)) * DAT_005de560,lVar3,
             uVar4,uVar13);
  return;
}


