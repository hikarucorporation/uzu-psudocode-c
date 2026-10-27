// Function : sanitize
// Namespace: OT:fvar
// Entry    : 00441d30
// Prototype: bool sanitize(fvar * this, long param_1)
// Body     : 00441d30 - 00441e50


/* OT::fvar::sanitize(hb_sanitize_context_t*) const */

bool __thiscall OT::fvar::sanitize(fvar *this,long param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  fvar *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if ((((this + (4 - *(long *)(param_1 + 8)) <= (fvar *)(ulong)*(uint *)(param_1 + 0x18)) &&
       (*(short *)this == 0x100)) &&
      (this + (0x10 - *(long *)(param_1 + 8)) <= (fvar *)(ulong)*(uint *)(param_1 + 0x18))) &&
     (*(short *)(this + 10) == 0x1400)) {
    uVar5 = *(ushort *)(this + 0xe) << 8 | *(ushort *)(this + 0xe) >> 8;
    uVar4 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
    if ((uint)uVar4 * 4 + 4 <= (uint)uVar5) {
      uVar1 = *(ushort *)(this + 4);
      if (uVar1 == 0) {
        pfVar6 = (fvar *)&_hb_NullPool;
      }
      else {
        pfVar6 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
      }
      if ((ulong)((long)pfVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        uVar2 = (uint)uVar4 * 0x14;
        iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
        if (uVar2 <= (uint)(iVar8 - (int)pfVar6)) {
          iVar9 = *(int *)(param_1 + 0x1c) + (uint)uVar4 * -0x14;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (0 < iVar9) {
            uVar4 = *(ushort *)(this + 4);
            if (uVar4 == 0) {
              pfVar6 = (fvar *)&_hb_NullPool;
            }
            else {
              pfVar6 = this + (ushort)(uVar4 << 8 | uVar4 >> 8);
            }
            bVar3 = false;
            if (((ulong)((long)(pfVar6 + uVar2) - *(long *)(param_1 + 8)) <=
                 (ulong)*(uint *)(param_1 + 0x18)) &&
               (uVar7 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8)
                        * (uint)uVar5, uVar7 <= (uint)(iVar8 - (int)(pfVar6 + uVar2)))) {
              iVar9 = iVar9 - uVar7;
              *(int *)(param_1 + 0x1c) = iVar9;
              bVar3 = 0 < iVar9;
            }
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}


