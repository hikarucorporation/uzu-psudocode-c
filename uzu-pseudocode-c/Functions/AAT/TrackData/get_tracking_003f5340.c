// Function : get_tracking
// Namespace: AAT:TrackData
// Entry    : 003f5340
// Prototype: int get_tracking(float param_1, TrackData * this, long param_3)
// Body     : 003f5340 - 003f5541


/* AAT::TrackData::get_tracking(void const*, float) const */

int __thiscall AAT::TrackData::get_tracking(float param_1,TrackData *this,long param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(ushort *)this;
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    uVar11 = 1;
    if (1 < uVar2) {
      uVar11 = (uint)uVar2;
    }
    uVar3 = 0;
    do {
      uVar12 = *(uint *)(this + uVar3 * 8 + 8);
      fVar14 = (float)(int)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18) * DAT_005de560;
      if ((fVar14 == 0.0) && (!NAN(fVar14))) {
        uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
        if (uVar2 == 0) {
          return 0;
        }
        if (uVar2 == 1) {
          uVar2 = *(ushort *)
                   (param_3 +
                   (ulong)(ushort)(*(ushort *)(this + uVar3 * 8 + 0xe) << 8 |
                                  *(ushort *)(this + uVar3 * 8 + 0xe) >> 8));
          return (int)(short)(uVar2 << 8 | uVar2 >> 8);
        }
        uVar11 = *(uint *)(this + 4);
        puVar10 = (uint *)((ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                   (uVar11 & 0xff00) << 8 | uVar11 << 0x18) + param_3);
        uVar11 = uVar2 - 1;
        if (uVar11 == 0) goto LAB_003f5439;
        uVar6 = 0;
        puVar7 = puVar10;
        goto LAB_003f5400;
      }
      uVar3 = uVar3 + 1;
    } while (uVar11 != uVar3);
  }
  return 0;
LAB_003f5400:
  puVar8 = puVar7;
  if ((uint)uVar2 <= uVar6) {
    puVar8 = &_hb_NullPool;
  }
  uVar12 = *puVar8;
  if (param_1 <=
      (float)(int)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18) * DAT_005de560) {
    uVar11 = (uint)uVar6;
    goto LAB_003f5433;
  }
  uVar6 = uVar6 + 1;
  puVar7 = puVar7 + 1;
  if (uVar11 == uVar6) {
LAB_003f5433:
    uVar12 = uVar11 - 1;
    if (uVar11 == 0) {
LAB_003f5439:
      uVar12 = 0;
    }
    uVar6 = (ulong)uVar12;
    uVar11 = (uint)uVar2;
    if (uVar12 < uVar11) {
      puVar7 = puVar10 + uVar6;
    }
    else {
      puVar7 = &_hb_NullPool;
    }
    uVar1 = *puVar7;
    fVar14 = (float)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18) * DAT_005de560;
    if (uVar12 + 1 < uVar11) {
      puVar10 = puVar10 + uVar6 + 1;
    }
    else {
      puVar10 = &_hb_NullPool;
    }
    uVar1 = *puVar10;
    fVar13 = (float)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18) * DAT_005de560;
    if ((fVar14 != fVar13) || (NAN(fVar14) || NAN(fVar13))) {
      fVar14 = (param_1 - fVar14) / (fVar13 - fVar14);
    }
    else {
      fVar14 = 0.0;
    }
    lVar9 = param_3 + (ulong)(ushort)(*(ushort *)(this + uVar3 * 8 + 0xe) << 8 |
                                     *(ushort *)(this + uVar3 * 8 + 0xe) >> 8);
    if ((uint)(uVar6 + 1) < uVar11) {
      puVar4 = (ushort *)(lVar9 + (uVar6 + 1) * 2);
    }
    else {
      puVar4 = (ushort *)&_hb_NullPool;
    }
    if (uVar12 < uVar11) {
      puVar5 = (ushort *)(lVar9 + uVar6 * 2);
    }
    else {
      puVar5 = (ushort *)&_hb_NullPool;
    }
    fVar14 = floorf(fVar14 * (float)(int)(short)(*puVar4 << 8 | *puVar4 >> 8) +
                    (DAT_005d9038 - fVar14) * (float)(int)(short)(*puVar5 << 8 | *puVar5 >> 8) +
                    DAT_005d9044);
    return (int)fVar14;
  }
  goto LAB_003f5400;
}


