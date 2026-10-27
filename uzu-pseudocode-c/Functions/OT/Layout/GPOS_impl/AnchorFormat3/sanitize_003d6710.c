// Function : sanitize
// Namespace: OT:Layout:GPOS_impl:AnchorFormat3
// Entry    : 003d6710
// Prototype: undefined8 sanitize(AnchorFormat3 * this, long param_1)
// Body     : 003d6710 - 003d68cc


/* OT::Layout::GPOS_impl::AnchorFormat3::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Layout::GPOS_impl::AnchorFormat3::sanitize(AnchorFormat3 *this,long param_1)

{
  ushort uVar1;
  AnchorFormat3 *pAVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  
  if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18) < this + (10 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar1 = *(ushort *)(this + 6);
  if (uVar1 == 0) goto LAB_003d67ed;
  pAVar2 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
  uVar7 = (long)pAVar2 - *(long *)(param_1 + 8);
  if (uVar7 + 6 <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(pAVar2 + 4);
    if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) goto LAB_003d67ed;
    uVar8 = *(ushort *)pAVar2 << 8 | *(ushort *)pAVar2 >> 8;
    uVar4 = *(ushort *)(pAVar2 + 2) << 8 | *(ushort *)(pAVar2 + 2) >> 8;
    if (uVar4 < uVar8) {
      uVar5 = 6;
    }
    else {
      uVar5 = ((uint)uVar4 - (uint)uVar8 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
    }
    if (((uVar7 <= *(uint *)(param_1 + 0x18)) &&
        (uVar5 <= (uint)(*(int *)(param_1 + 0x10) - (int)pAVar2))) &&
       (iVar6 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6))
    goto LAB_003d67ed;
  }
  if (0x1f < *(uint *)(param_1 + 0x2c)) {
    return 0;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  *(undefined2 *)(this + 6) = 0;
LAB_003d67ed:
  if (this + (10 - *(long *)(param_1 + 8)) <= (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(this + 8);
    uVar3 = CONCAT71((int7)((ulong)(this + (10 - *(long *)(param_1 + 8))) >> 8),1);
    if (uVar1 == 0) {
      return uVar3;
    }
    pAVar2 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
    uVar7 = (long)pAVar2 - *(long *)(param_1 + 8);
    if (uVar7 + 6 <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(ushort *)(pAVar2 + 4);
      if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) {
        return uVar3;
      }
      uVar8 = *(ushort *)pAVar2 << 8 | *(ushort *)pAVar2 >> 8;
      uVar4 = *(ushort *)(pAVar2 + 2) << 8 | *(ushort *)(pAVar2 + 2) >> 8;
      if (uVar4 < uVar8) {
        uVar5 = 6;
      }
      else {
        uVar5 = ((uint)uVar4 - (uint)uVar8 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
      }
      if (((uVar7 <= *(uint *)(param_1 + 0x18)) &&
          (uVar5 <= (uint)(*(int *)(param_1 + 0x10) - (int)pAVar2))) &&
         (iVar6 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6)) {
        return uVar3;
      }
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 8) = 0;
      return uVar3;
    }
  }
  return 0;
}


