// Function : paint_glyph
// Namespace: OT:PaintScaleAroundCenter
// Entry    : 004691c0
// Prototype: undefined paint_glyph(PaintScaleAroundCenter * this, long param_1, uint param_2)
// Body     : 004691c0 - 00469757


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintScaleAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScaleAroundCenter::paint_glyph(PaintScaleAroundCenter *this,long param_1,uint param_2)

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
  bool bVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  VarData *pVVar15;
  long lVar16;
  Paint *this_00;
  VarRegionList *pVVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  plVar7 = *(long **)(param_1 + 0x30);
  uVar12 = param_2;
  if ((DeltaSetIndexMap *)plVar7[1] != (DeltaSetIndexMap *)0x0) {
    uVar12 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],param_2);
  }
  fVar18 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar16 = *plVar7;
    if (uVar12 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar16 + 8 + (ulong)(uVar12 >> 0x10) * 4);
      pVVar17 = (VarRegionList *)&_hb_NullPool;
      pVVar15 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar15 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar16);
      }
      uVar5 = *(uint *)(lVar16 + 2);
      if (uVar5 != 0) {
        pVVar17 = (VarRegionList *)
                  (lVar16 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar18 = VarData::get_delta(pVVar15,uVar12 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar17,
                                  plVar7[4]);
    }
  }
  uVar1 = *(ushort *)(this + 4);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar12 = param_2 + 1;
    iVar6 = (int)plVar7[3];
  }
  else {
    uVar12 = param_2 + 1;
    if (param_2 == 0xffffffff) {
      uVar12 = 0xffffffff;
    }
    uVar12 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar12);
    iVar6 = (int)plVar7[3];
  }
  fVar19 = 0.0;
  if (iVar6 != 0) {
    fVar19 = 0.0;
    lVar16 = *plVar7;
    if (uVar12 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar16 + 8 + (ulong)(uVar12 >> 0x10) * 4);
      pVVar17 = (VarRegionList *)&_hb_NullPool;
      pVVar15 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar15 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar16);
      }
      uVar5 = *(uint *)(lVar16 + 2);
      if (uVar5 != 0) {
        pVVar17 = (VarRegionList *)
                  (lVar16 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar19 = VarData::get_delta(pVVar15,uVar12 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar17,
                                  plVar7[4]);
    }
  }
  uVar2 = *(ushort *)(this + 6);
  uVar3 = *(ushort *)(this + 8);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar12 = param_2 + 2;
  }
  else {
    uVar12 = param_2 + 2;
    if (param_2 == 0xffffffff) {
      uVar12 = 0xffffffff;
    }
    uVar12 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar12);
  }
  fVar20 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar16 = *plVar7;
    if (uVar12 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar16 + 8 + (ulong)(uVar12 >> 0x10) * 4);
      pVVar17 = (VarRegionList *)&_hb_NullPool;
      pVVar15 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar15 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar16);
      }
      uVar5 = *(uint *)(lVar16 + 2);
      if (uVar5 != 0) {
        pVVar17 = (VarRegionList *)
                  (lVar16 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar20 = VarData::get_delta(pVVar15,uVar12 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar17,
                                  plVar7[4]);
    }
  }
  uVar4 = *(ushort *)(this + 10);
  plVar7 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar7[1] == (DeltaSetIndexMap *)0x0) {
    uVar12 = param_2 + 3;
  }
  else {
    uVar12 = param_2 + 3;
    if (param_2 == 0xffffffff) {
      uVar12 = 0xffffffff;
    }
    uVar12 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar7[1],uVar12);
  }
  fVar20 = fVar20 + (float)(int)(short)(uVar3 << 8 | uVar3 >> 8);
  fVar21 = 0.0;
  if ((int)plVar7[3] != 0) {
    lVar16 = *plVar7;
    fVar21 = 0.0;
    if (uVar12 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8)
       ) {
      uVar5 = *(uint *)(lVar16 + 8 + (ulong)(uVar12 >> 0x10) * 4);
      pVVar17 = (VarRegionList *)&_hb_NullPool;
      pVVar15 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        pVVar15 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + lVar16);
      }
      uVar5 = *(uint *)(lVar16 + 2);
      if (uVar5 != 0) {
        pVVar17 = (VarRegionList *)
                  (lVar16 + (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
      }
      fVar21 = VarData::get_delta(pVVar15,uVar12 & 0xffff,plVar7[2],*(uint *)(plVar7 + 3),pVVar17,
                                  plVar7[4]);
    }
  }
  fVar18 = (fVar18 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8)) * DAT_005de5ac;
  fVar19 = (fVar19 + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8)) * DAT_005de5ac;
  fVar21 = fVar21 + (float)(int)(short)(uVar4 << 8 | uVar4 >> 8);
  lVar16 = *(long *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  bVar8 = fVar20 != 0.0;
  bVar9 = fVar21 != 0.0;
  if (bVar9 || bVar8) {
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar16 + 0x80);
    }
    (**(code **)(lVar16 + 0x10))(DAT_005d9038,0,0,DAT_005d9038,fVar20,fVar21,lVar16,uVar14,uVar13);
    lVar16 = *(long *)(param_1 + 0x10);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
  }
  bVar10 = fVar18 != DAT_005d9038;
  bVar11 = fVar19 != DAT_005d9038;
  if (bVar11 || bVar10) {
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar16 + 0x80);
    }
    (**(code **)(lVar16 + 0x10))(fVar18,0,0,fVar19,0,0,lVar16,uVar14,uVar13);
    lVar16 = *(long *)(param_1 + 0x10);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
  }
  if (bVar9 || bVar8) {
    if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar16 + 0x80);
    }
    (**(code **)(lVar16 + 0x10))
              (DAT_005d9038,0,0,DAT_005d9038,(uint)fVar20 ^ _DAT_006524b0,
               (uint)fVar21 ^ _DAT_006524b0,lVar16,uVar14,uVar13);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    if ((this[1] == (PaintScaleAroundCenter)0x0 && this[2] == (PaintScaleAroundCenter)0x0) &&
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
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      (**(code **)(lVar16 + 0x18))
                (lVar16,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8));
    }
  }
  if (bVar11 || bVar10) {
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),0);
      if (!bVar9 && !bVar8) {
        return;
      }
    }
    else {
      (**(code **)(lVar16 + 0x18))
                (lVar16,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8));
      if (!bVar9 && !bVar8) {
        return;
      }
    }
  }
  else if (!bVar9 && !bVar8) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar16 + 0x80) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x004696ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_1 + 0x18),uVar14);
  return;
}


