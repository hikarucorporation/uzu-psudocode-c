// Function : sanitize
// Namespace: OT:avar
// Entry    : 004423f0
// Prototype: ulong sanitize(avar * this, long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 004423f0 - 004425c8


/* OT::avar::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::avar::sanitize(avar *this,long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  avar *paVar4;
  ushort uVar5;
  uint uVar6;
  ulong extraout_RDX;
  ushort uVar7;
  int iVar8;
  avar *paVar9;
  undefined8 unaff_R15;
  ulong uVar10;
  
  if ((this + (4 - *(long *)(param_1 + 8)) <= (avar *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (uVar5 = *(ushort *)this << 8 | *(ushort *)this >> 8, uVar5 - 1 < 2)) {
    lVar1 = *(long *)(param_1 + 8);
    paVar4 = (avar *)(ulong)*(uint *)(param_1 + 0x18);
    if (this + (8 - lVar1) <= paVar4) {
      paVar9 = this + 8;
      uVar7 = *(ushort *)(this + 6);
      if (uVar7 != 0) {
        uVar7 = uVar7 << 8 | uVar7 >> 8;
        uVar5 = 1;
        if (1 < uVar7) {
          uVar5 = uVar7;
        }
        uVar6 = (uint)uVar5;
        do {
          if (paVar4 < paVar9 + (2 - lVar1)) goto LAB_0044243e;
          lVar1 = *(long *)(param_1 + 8);
          paVar4 = (avar *)(ulong)*(uint *)(param_1 + 0x18);
          if (paVar4 < paVar9 + 2 + -lVar1) goto LAB_0044243e;
          uVar5 = *(ushort *)paVar9 << 8 | *(ushort *)paVar9 >> 8;
          if (((uint)(*(int *)(param_1 + 0x10) - (int)(paVar9 + 2)) < (uint)uVar5 * 4) ||
             (iVar8 = *(int *)(param_1 + 0x1c) + (uint)uVar5 * -4, *(int *)(param_1 + 0x1c) = iVar8,
             iVar8 < 1)) goto LAB_0044243e;
          paVar9 = paVar9 + (ulong)uVar5 * 4 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar5 = *(ushort *)this << 8 | *(ushort *)this >> 8;
      }
      uVar3 = (ulong)uVar5;
      uVar10 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      if (uVar5 < 2) goto LAB_00442441;
      if (paVar9 + (4 - *(long *)(param_1 + 8)) <= (avar *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar6 = *(uint *)paVar9;
        if (uVar6 != 0) {
          uVar2 = DeltaSetIndexMap::sanitize
                            ((DeltaSetIndexMap *)
                             (this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                      (uVar6 & 0xff00) << 8 | uVar6 << 0x18)),param_1);
          uVar3 = extraout_RDX;
          if ((char)uVar2 == '\0') {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_0044243e;
            *(uint *)paVar9 = 0;
          }
        }
        if (paVar9 + (8 - *(long *)(param_1 + 8)) <= (avar *)(ulong)*(uint *)(param_1 + 0x18)) {
          uVar6 = *(uint *)(paVar9 + 4);
          if (uVar6 == 0) goto LAB_00442441;
          uVar3 = ItemVariationStore::sanitize
                            ((short *)(this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                               (uVar6 & 0xff00) << 8 | uVar6 << 0x18)),param_1,uVar3
                             ,(avar *)(ulong)*(uint *)(param_1 + 0x18),param_4);
          if ((char)uVar3 != '\0') goto LAB_00442441;
          if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) != '\0')) {
            *(uint *)(paVar9 + 4) = 0;
            goto LAB_00442441;
          }
        }
      }
    }
  }
LAB_0044243e:
  uVar10 = 0;
LAB_00442441:
  return uVar10 & 0xffffffff;
}


