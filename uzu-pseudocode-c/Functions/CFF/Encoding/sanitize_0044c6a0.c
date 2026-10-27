// Function : sanitize
// Namespace: CFF:Encoding
// Entry    : 0044c6a0
// Prototype: ulong sanitize(Encoding * this, long param_1)
// Body     : 0044c6a0 - 0044c812


/* CFF::Encoding::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall CFF::Encoding::sanitize(Encoding *this,long param_1)

{
  int iVar1;
  Encoding *pEVar2;
  byte bVar3;
  uint uVar4;
  
  if (this + (1 - *(long *)(param_1 + 8)) <= (Encoding *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (((byte)*this & 0x7f) == 1) {
      if ((Encoding *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 2) - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar4 = (uint)(byte)this[1] * 2;
      if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 2)) < uVar4) {
        return 0;
      }
    }
    else {
      if (((byte)*this & 0x7f) != 0) {
        return 0;
      }
      if ((Encoding *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 2) - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar4 = (uint)(byte)this[1];
      if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 2)) < (uint)(byte)this[1]) {
        return 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x1c) - uVar4;
    *(int *)(param_1 + 0x1c) = iVar1;
    if (0 < iVar1) {
      if (-1 < (char)*this) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      bVar3 = (byte)*this & 0x7f;
      if (bVar3 == 1) {
        if (this[1] == (Encoding)0x0) {
          pEVar2 = (Encoding *)&_hb_NullPool;
        }
        else {
          pEVar2 = this + (ulong)((byte)this[1] - 1) * 2 + 2;
        }
        pEVar2 = pEVar2 + 2;
      }
      else if (bVar3 == 0) {
        if (this[1] == (Encoding)0x0) {
          pEVar2 = (Encoding *)((long)&_hb_NullPool + 1);
        }
        else {
          pEVar2 = this + (ulong)((byte)this[1] - 1) + 3;
        }
      }
      else {
        pEVar2 = (Encoding *)&_hb_NullPool;
      }
      if ((pEVar2 + (1 - *(long *)(param_1 + 8)) <= (Encoding *)(ulong)*(uint *)(param_1 + 0x18)) &&
         ((ulong)((long)(pEVar2 + 1) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
      {
        uVar4 = (uint)(byte)*pEVar2 * 3;
        if (uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)(pEVar2 + 1))) {
          iVar1 = *(int *)(param_1 + 0x1c) + (uint)(byte)*pEVar2 * -3;
          *(int *)(param_1 + 0x1c) = iVar1;
          return (ulong)CONCAT31((int3)(uVar4 >> 8),0 < iVar1);
        }
      }
    }
  }
  return 0;
}


