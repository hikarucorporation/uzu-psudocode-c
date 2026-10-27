// Function : sanitize
// Namespace: OT:Layout:GPOS_impl:MarkArray
// Entry    : 003d6430
// Prototype: undefined8 sanitize(MarkArray * this, long param_1)
// Body     : 003d6430 - 003d659c


/* OT::Layout::GPOS_impl::MarkArray::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::Layout::GPOS_impl::MarkArray::sanitize(MarkArray *this,long param_1)

{
  MarkArray *pMVar1;
  ushort uVar2;
  uint uVar3;
  AnchorFormat3 *pAVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  AnchorFormat3 *this_00;
  long lVar8;
  
  pMVar1 = this + 2;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar1 - *(long *)(param_1 + 8))) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar1 - *(long *)(param_1 + 8)))) ||
      (uVar7 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8),
      (uint)(*(int *)(param_1 + 0x10) - (int)pMVar1) < uVar7 * 4)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -4, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
LAB_003d6599:
    uVar5 = 0;
  }
  else {
    uVar2 = *(ushort *)this;
    pAVar4 = (AnchorFormat3 *)(ulong)uVar2;
    if (uVar2 != 0) {
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      uVar7 = 1;
      if (1 < uVar2) {
        uVar7 = (uint)uVar2;
      }
      lVar8 = 0;
      do {
        while( true ) {
          if ((MarkArray *)(ulong)*(uint *)(param_1 + 0x18) <
              this + ((lVar8 + 6) - *(long *)(param_1 + 8))) {
            return 0;
          }
          if ((MarkArray *)(ulong)*(uint *)(param_1 + 0x18) <
              this + ((lVar8 + 6) - *(long *)(param_1 + 8))) {
            return 0;
          }
          uVar2 = *(ushort *)(this + lVar8 + 4);
          pAVar4 = (AnchorFormat3 *)(ulong)uVar2;
          if (uVar2 == 0) goto LAB_003d6580;
          this_00 = (AnchorFormat3 *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8));
          if (this_00 + (2 - *(long *)(param_1 + 8)) <=
              (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18)) break;
LAB_003d6508:
          if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d6599;
          uVar3 = *(uint *)(param_1 + 0x2c) + 1;
          pAVar4 = (AnchorFormat3 *)(ulong)uVar3;
          *(uint *)(param_1 + 0x2c) = uVar3;
          if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d6599;
          *(undefined2 *)(this + lVar8 + 4) = 0;
          lVar8 = lVar8 + 4;
          if ((ulong)uVar7 * 4 == lVar8) goto LAB_003d658d;
        }
        uVar2 = *(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8;
        pAVar4 = (AnchorFormat3 *)(ulong)uVar2;
        if (uVar2 == 1) {
          pAVar4 = (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18);
          if (this_00 + (6 - *(long *)(param_1 + 8)) <= pAVar4) goto LAB_003d6580;
          goto LAB_003d6508;
        }
        if (uVar2 == 3) {
          pAVar4 = (AnchorFormat3 *)AnchorFormat3::sanitize(this_00,param_1);
          if ((char)pAVar4 != '\0') goto LAB_003d6580;
          goto LAB_003d6508;
        }
        if ((uVar2 == 2) &&
           (pAVar4 = (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18),
           pAVar4 < this_00 + (8 - *(long *)(param_1 + 8)))) goto LAB_003d6508;
LAB_003d6580:
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar7 * 4 != lVar8);
    }
LAB_003d658d:
    uVar5 = CONCAT71((int7)((ulong)pAVar4 >> 8),1);
  }
  return uVar5;
}


