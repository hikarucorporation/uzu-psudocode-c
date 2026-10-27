// Function : sanitize
// Namespace: OT:FeatureParams
// Entry    : 003d4ea0
// Prototype: bool sanitize(FeatureParams * this, long param_1, uint param_2)
// Body     : 003d4ea0 - 003d4f99


/* OT::FeatureParams::sanitize(hb_sanitize_context_t*, unsigned int) const */

bool __thiscall OT::FeatureParams::sanitize(FeatureParams *this,long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  
  if (param_2 == 0x73697a65) {
    if (((FeatureParams *)(ulong)*(uint *)(param_1 + 0x18) < this + (10 - *(long *)(param_1 + 8)))
       || (uVar2 = *(ushort *)this, uVar2 == 0)) {
      return false;
    }
    lVar1 = *(long *)(this + 2);
    if (lVar1 == 0) {
      return true;
    }
    uVar6 = uVar2 << 8 | uVar2 >> 8;
    uVar2 = (ushort)((ulong)lVar1 >> 0x20);
    bVar4 = false;
    if (((ushort)(uVar2 << 8 | uVar2 >> 8) <= uVar6) &&
       (uVar2 = (ushort)((ulong)lVar1 >> 0x30), uVar6 <= (ushort)(uVar2 << 8 | uVar2 >> 8))) {
      uVar2 = (ushort)((ulong)lVar1 >> 0x10);
      return 0xff < (short)(uVar2 << 8 | uVar2 >> 8);
    }
  }
  else if ((param_2 & 0xffff0000) == 0x63760000) {
    bVar4 = false;
    if ((this + (0xe - *(long *)(param_1 + 8)) <= (FeatureParams *)(ulong)*(uint *)(param_1 + 0x18))
       && (this + (0xe - *(long *)(param_1 + 8)) <=
           (FeatureParams *)(ulong)*(uint *)(param_1 + 0x18))) {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 0xe) - *(long *)(param_1 + 8))) {
        return false;
      }
      uVar3 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
      if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 0xe)) < uVar3 * 3) {
        return false;
      }
      iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -3;
      *(int *)(param_1 + 0x1c) = iVar5;
      bVar4 = 0 < iVar5;
    }
  }
  else {
    bVar4 = true;
    if ((param_2 & 0xffff0000) == 0x73730000) {
      return this + (4 - *(long *)(param_1 + 8)) <=
             (FeatureParams *)(ulong)*(uint *)(param_1 + 0x18);
    }
  }
  return bVar4;
}


