// Function : get_y_delta
// Namespace: OT:Device
// Entry    : 0040eb90
// Prototype: ulong get_y_delta(Device * this, long param_1, long param_2, long param_3)
// Body     : 0040eb90 - 0040ecf7


/* OT::Device::get_y_delta(hb_font_t*, OT::ItemVariationStore const&, float*) const */

ulong __thiscall OT::Device::get_y_delta(Device *this,long param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  VarData *this_00;
  int iVar8;
  VarRegionList *pVVar9;
  float fVar10;
  
  uVar1 = *(ushort *)(this + 4);
  uVar7 = uVar1 << 8 | uVar1 >> 8;
  uVar4 = 0;
  if ((ushort)(uVar7 - 1) < 3) {
    uVar2 = *(uint *)(param_1 + 0x6c);
    if ((((ulong)uVar2 != 0) &&
        (uVar5 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8), uVar5 <= uVar2)) &&
       (uVar2 <= (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8))) {
      uVar5 = uVar2 - uVar5;
      bVar3 = (byte)(uVar1 >> 8);
      uVar6 = 0xffff >> ((char)(-1 << (bVar3 & 0x1f)) + 0x10U & 0x1f);
      uVar5 = (ushort)(*(ushort *)(this + (ulong)(uVar5 >> (4 - bVar3 & 0x1f)) * 2 + 6) << 8 |
                      *(ushort *)(this + (ulong)(uVar5 >> (4 - bVar3 & 0x1f)) * 2 + 6) >> 8) >>
              ((char)((~uVar5 | -1 << (4 - bVar3 & 0x1f)) << (bVar3 & 0x1f)) + 0x10U & 0x1f) & uVar6
      ;
      uVar6 = uVar6 + 1;
      uVar4 = 0;
      if (uVar5 < uVar6 >> 1) {
        uVar6 = 0;
      }
      iVar8 = uVar5 - uVar6;
      if (iVar8 != 0) {
        uVar4 = (long)iVar8 * (long)*(int *)(param_1 + 0x2c);
        if (uVar4 >> 0x20 == 0) {
          return (uVar4 & 0xffffffff) / (ulong)uVar2;
        }
        uVar4 = (long)uVar4 / (long)(ulong)uVar2;
      }
    }
  }
  else if (uVar7 == 0x8000) {
    uVar2 = *(uint *)this;
    uVar5 = ((uVar2 & 0xff00) << 8 | uVar2 << 0x18) >> 0x10;
    if (uVar5 < (ushort)(*(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8)) {
      uVar5 = *(uint *)(param_2 + 8 + (ulong)uVar5 * 4);
      pVVar9 = (VarRegionList *)&_hb_NullPool;
      this_00 = (VarData *)&_hb_NullPool;
      if (uVar5 != 0) {
        this_00 = (VarData *)
                  ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18) + param_2);
      }
      uVar5 = *(uint *)(param_2 + 2);
      if (uVar5 != 0) {
        pVVar9 = (VarRegionList *)
                 (param_2 +
                 (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18));
      }
      fVar10 = VarData::get_delta(this_00,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8,
                                  *(long *)(param_1 + 0x80),*(uint *)(param_1 + 0x78),pVVar9,param_3
                                 );
    }
    else {
      fVar10 = 0.0;
    }
    fVar10 = floorf(fVar10 * *(float *)(param_1 + 0x50) + DAT_005d9044);
    return (ulong)(uint)(int)fVar10;
  }
  return uVar4;
}


