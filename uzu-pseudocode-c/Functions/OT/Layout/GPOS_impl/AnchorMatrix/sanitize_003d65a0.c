// Function : sanitize
// Namespace: OT:Layout:GPOS_impl:AnchorMatrix
// Entry    : 003d65a0
// Prototype: ulong sanitize(AnchorMatrix * this, long param_1, uint param_2)
// Body     : 003d65a0 - 003d6705


/* OT::Layout::GPOS_impl::AnchorMatrix::sanitize(hb_sanitize_context_t*, unsigned int) const */

ulong __thiscall
OT::Layout::GPOS_impl::AnchorMatrix::sanitize(AnchorMatrix *this,long param_1,uint param_2)

{
  AnchorMatrix *pAVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  AnchorFormat3 *this_00;
  undefined8 unaff_R13;
  ulong uVar8;
  
  pAVar1 = this + 2;
  if (((ulong)((long)pAVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     (uVar3 = *(ushort *)this << 8 | *(ushort *)this >> 8,
     (int)((ulong)uVar3 * (ulong)param_2 >> 0x20) == 0)) {
    uVar5 = uVar3 * param_2;
    if ((!CARRY4(uVar5,uVar5)) &&
       ((((ulong)((long)pAVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18) &&
         (uVar5 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pAVar1))) &&
        (iVar6 = *(int *)(param_1 + 0x1c) + uVar5 * -2, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6)
        ))) {
      uVar8 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
      if ((*(char *)(param_1 + 0x3d) == '\0') && (uVar5 != 0)) {
        lVar7 = 0;
        do {
          if ((AnchorMatrix *)(ulong)*(uint *)(param_1 + 0x18) <
              this + ((lVar7 + 4) - *(long *)(param_1 + 8))) goto LAB_003d66f1;
          uVar3 = *(ushort *)(this + lVar7 + 2);
          if (uVar3 == 0) goto LAB_003d6647;
          this_00 = (AnchorFormat3 *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
          if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18) <
              this_00 + (2 - *(long *)(param_1 + 8))) {
LAB_003d6690:
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d66f1;
            *(undefined2 *)(this + lVar7 + 2) = 0;
          }
          else {
            uVar3 = *(ushort *)this_00 << 8 | *(ushort *)this_00 >> 8;
            if (uVar3 == 1) {
              lVar2 = 6 - *(long *)(param_1 + 8);
LAB_003d66d1:
              if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0x18) < this_00 + lVar2)
              goto LAB_003d6690;
            }
            else if (uVar3 == 3) {
              uVar4 = AnchorFormat3::sanitize(this_00,param_1);
              if ((char)uVar4 == '\0') goto LAB_003d6690;
            }
            else if (uVar3 == 2) {
              lVar2 = 8 - *(long *)(param_1 + 8);
              goto LAB_003d66d1;
            }
          }
LAB_003d6647:
          lVar7 = lVar7 + 2;
        } while ((ulong)uVar5 * 2 != lVar7);
      }
      goto LAB_003d66f4;
    }
  }
LAB_003d66f1:
  uVar8 = 0;
LAB_003d66f4:
  return uVar8 & 0xffffffff;
}


