// Function : sanitize
// Namespace: OT:ClassDef
// Entry    : 003d60d0
// Prototype: ulong sanitize(ClassDef * this, long param_1)
// Body     : 003d60d0 - 003d618d


/* OT::ClassDef::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::ClassDef::sanitize(ClassDef *this,long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  if ((ClassDef *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar2 == 2) {
    if ((ClassDef *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 4) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * 6;
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 4)) < uVar3) {
      return 0;
    }
  }
  else {
    if (uVar2 != 1) {
      return CONCAT71((int7)((ulong)(this + (2 - *(long *)(param_1 + 8))) >> 8),1);
    }
    if ((ClassDef *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 6) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) * 2;
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 6)) < uVar3) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c) - uVar3;
  *(int *)(param_1 + 0x1c) = iVar1;
  return (ulong)CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}


