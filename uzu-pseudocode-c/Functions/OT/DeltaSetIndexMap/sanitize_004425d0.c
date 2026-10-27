// Function : sanitize
// Namespace: OT:DeltaSetIndexMap
// Entry    : 004425d0
// Prototype: undefined8 sanitize(DeltaSetIndexMap * this, long param_1)
// Body     : 004425d0 - 004426b4


/* OT::DeltaSetIndexMap::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::DeltaSetIndexMap::sanitize(DeltaSetIndexMap *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((DeltaSetIndexMap *)(ulong)*(uint *)(param_1 + 0x18) < this + (1 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*this == (DeltaSetIndexMap)0x1) {
    if ((DeltaSetIndexMap *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8)))
    {
      return 0;
    }
    uVar3 = *(uint *)(this + 2);
    uVar1 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * (ulong)(((byte)this[1] >> 4 & 3) + 1);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)(uVar1 >> 0x20) != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 6) - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 6)) < (uint)uVar1) {
      return 0;
    }
    uVar3 = *(int *)(param_1 + 0x1c) - (uint)uVar1;
    *(uint *)(param_1 + 0x1c) = uVar3;
  }
  else {
    if (*this != (DeltaSetIndexMap)0x0) {
      return CONCAT71((int7)((ulong)(this + (1 - *(long *)(param_1 + 8))) >> 8),1);
    }
    if ((DeltaSetIndexMap *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8)))
    {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 4) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (((byte)this[1] >> 4 & 3) + 1) *
            (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 4)) < uVar3) {
      return 0;
    }
    uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
    uVar2 = (ulong)uVar3;
    *(uint *)(param_1 + 0x1c) = uVar3;
  }
  return CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar3);
}


