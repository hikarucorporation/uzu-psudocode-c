// Function : paint_glyph
// Namespace: OT:PaintSkewAroundCenter
// Entry    : 0046a5d0
// Prototype: undefined paint_glyph(PaintSkewAroundCenter * this, long param_1, uint param_2)
// Body     : 0046a5d0 - 0046abac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintSkewAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintSkewAroundCenter::paint_glyph(PaintSkewAroundCenter *this,long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  VarData *pVVar14;
  Paint *this_00;
  VarRegionList *pVVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  plVar7 = *(long **)(param_1 + 0x30);
  uVar10 = param_2;
  if ((DeltaSetIndexMap *)plVar7[1] != (DeltaSetIndexMap *)0x0) {
    uVar10 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],param_2);
  }
  fVar16 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar13 = *plVar7;
    if (uVar10 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar13 + 6) << 8 | *(ushort *)(lVar13 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar13 + 8 + (ulong)(uVar10 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar13);
      }
      uVar5 = *(uint *)(lVar13 + 2);
      if (uVar5 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar13 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar16 = VarData::get_delta(pVVar14,uVar10 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar15,
                                  plVar7[4]);
    }
  }
  uVar1 = *(ushort *)(this + 4);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar10 = param_2 + 1;
    iVar6 = (int)plVar7[3];
  }
  else {
    uVar10 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar10 = 0xffffffff;
    }
    uVar10 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar10);
    iVar6 = (int)plVar7[3];
  }
  fVar19 = 0.0;
  if (iVar6 != 0) {
    fVar19 = 0.0;
    lVar13 = *plVar7;
    if (uVar10 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar13 + 6) << 8 | *(ushort *)(lVar13 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar13 + 8 + (ulong)(uVar10 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar13);
      }
      uVar5 = *(uint *)(lVar13 + 2);
      if (uVar5 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar13 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar19 = VarData::get_delta(pVVar14,uVar10 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar15,
                                  plVar7[4]);
    }
  }
  uVar2 = *(ushort *)(this + 6);
  uVar3 = *(ushort *)(this + 8);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar10 = param_2 + 2;
  }
  else {
    uVar10 = param_2 + 2;
    if (param_2 == 0xffffffff) {
      uVar10 = 0xffffffff;
    }
    uVar10 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar10);
  }
  fVar20 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar13 = *plVar7;
    if (uVar10 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar13 + 6) << 8 | *(ushort *)(lVar13 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar13 + 8 + (ulong)(uVar10 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar13);
      }
      uVar5 = *(uint *)(lVar13 + 2);
      if (uVar5 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar13 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar20 = VarData::get_delta(pVVar14,uVar10 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar15,
                                  plVar7[4]);
    }
  }
  uVar4 = *(ushort *)(this + 10);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar10 = param_2 + 3;
  }
  else {
    uVar10 = param_2 + 3;
    if (param_2 == 0xffffffff) {
      uVar10 = 0xffffffff;
    }
    uVar10 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar10);
  }
  fVar20 = fVar20 + (float)(int)(short)(uVar3 << 8 | uVar3 >> 8);
  fVar21 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar13 = *plVar7;
    fVar21 = 0.0;
    if (uVar10 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar13 + 6) << 8 | *(ushort *)(lVar13 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar13 + 8 + (ulong)(uVar10 >> 0x10) * 4);
      pVVar15 = (VarRegionList *)&_hb_NullPool;
      pVVar14 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar14 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar13);
      }
      uVar5 = *(uint *)(lVar13 + 2);
      if (uVar5 != 0) {
        pVVar15 = (VarRegionList *)
                  (lVar13 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar21 = VarData::get_delta(pVVar14,uVar10 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar15,
                                  plVar7[4]);
    }
  }
  fVar16 = (fVar16 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8)) * DAT_005de5ac;
  fVar19 = (fVar19 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) * DAT_005de5ac;
  fVar21 = fVar21 + (float)(int)(short)(uVar4 << 8 | uVar4 >> 8);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  bVar8 = fVar20 != 0.0;
  bVar9 = fVar21 != 0.0;
  if (bVar9 || bVar8) {
    if (*(undefined8 **)(lVar13 + 0x80) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(lVar13 + 0x80);
    }
    (**(code **)(lVar13 + 0x10))(DAT_005d9038,0,0,DAT_005d9038,fVar20,fVar21,lVar13,uVar12,uVar11);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  if (fVar19 != 0.0 || fVar16 != 0.0) {
    fVar17 = tanf(fVar16 * DAT_00652ba4);
    fVar18 = tanf(fVar19 * DAT_00652ba0);
    if (*(undefined8 **)(lVar13 + 0x80) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(lVar13 + 0x80);
    }
    (**(code **)(lVar13 + 0x10))(DAT_005d9038,fVar18,fVar17,DAT_005d9038,0,0,lVar13,uVar12,uVar11);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  if (bVar9 || bVar8) {
    if (*(undefined8 **)(lVar13 + 0x80) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(lVar13 + 0x80);
    }
    (**(code **)(lVar13 + 0x10))
              (DAT_005d9038,0,0,DAT_005d9038,(uint)fVar20 ^ _DAT_006524b0,
               (uint)fVar21 ^ _DAT_006524b0,lVar13,uVar12,uVar11);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintSkewAroundCenter)0x0 && this[2] == (PaintSkewAroundCenter)0x0) &&
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
  if (bVar9 || bVar8) {
    lVar13 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar13 + 0x80) == 0) {
      (**(code **)(lVar13 + 0x18))(lVar13,*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      (**(code **)(lVar13 + 0x18))
                (lVar13,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar13 + 0x80) + 8));
    }
  }
  if (fVar19 != 0.0 || fVar16 != 0.0) {
    lVar13 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar13 + 0x80) == 0) {
      (**(code **)(lVar13 + 0x18))(lVar13,*(undefined8 *)(param_1 + 0x18),0);
      if (!bVar9 && !bVar8) {
        return;
      }
    }
    else {
      (**(code **)(lVar13 + 0x18))
                (lVar13,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar13 + 0x80) + 8));
      if (!bVar9 && !bVar8) {
        return;
      }
    }
  }
  else if (!bVar9 && !bVar8) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar13 + 0x80) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0046ab3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x18))(lVar13,*(undefined8 *)(param_1 + 0x18),uVar12);
  return;
}


