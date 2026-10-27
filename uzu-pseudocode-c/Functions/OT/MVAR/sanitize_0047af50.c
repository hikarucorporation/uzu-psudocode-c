// Function : sanitize
// Namespace: OT:MVAR
// Entry    : 0047af50
// Prototype: undefined4 sanitize(MVAR * this, long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 0047af50 - 0047b04c


/* OT::MVAR::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall
OT::MVAR::sanitize(MVAR *this,long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((((this + (4 - *(long *)(param_1 + 8)) <= (MVAR *)(ulong)*(uint *)(param_1 + 0x18)) &&
       (*(short *)this == 0x100)) &&
      (this + (0xc - *(long *)(param_1 + 8)) <= (MVAR *)(ulong)*(uint *)(param_1 + 0x18))) &&
     ((7 < (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) &&
      (this + (0xc - *(long *)(param_1 + 8)) <= (MVAR *)(ulong)*(uint *)(param_1 + 0x18))))) {
    uVar1 = *(ushort *)(this + 10);
    if ((uVar1 != 0) &&
       (uVar3 = ItemVariationStore::sanitize
                          ((short *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1,param_2,
                           (MVAR *)(ulong)*(uint *)(param_1 + 0x18),param_4), (char)uVar3 == '\0'))
    {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return 0;
      }
      *(undefined2 *)(this + 10) = 0;
    }
    if (((ulong)((long)(this + 0xc) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
       && (uVar4 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) *
                   (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8),
          uVar4 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 0xc)))) {
      iVar2 = *(int *)(param_1 + 0x1c) - uVar4;
      *(int *)(param_1 + 0x1c) = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),0 < iVar2);
    }
  }
  return 0;
}


