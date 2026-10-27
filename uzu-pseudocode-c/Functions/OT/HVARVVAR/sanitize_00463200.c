// Function : sanitize
// Namespace: OT:HVARVVAR
// Entry    : 00463200
// Prototype: ulong sanitize(HVARVVAR * this, long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00463200 - 0046337f


/* OT::HVARVVAR::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::HVARVVAR::sanitize
          (HVARVVAR *this,long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  
  if (((this + (4 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (*(short *)this == 0x100)) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar1 = *(uint *)(this + 4);
    if (uVar1 != 0) {
      uVar2 = ItemVariationStore::sanitize
                        ((short *)(this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                           (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1,param_2,
                         (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18),param_4);
      if ((char)uVar2 == '\0') {
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_00463217;
        *(undefined4 *)(this + 4) = 0;
      }
    }
    if (this + (0xc - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(uint *)(this + 8);
      if (uVar1 != 0) {
        uVar3 = DeltaSetIndexMap::sanitize
                          ((DeltaSetIndexMap *)
                           (this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                   | uVar1 << 0x18)),param_1);
        if ((char)uVar3 == '\0') {
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_00463217;
          *(undefined4 *)(this + 8) = 0;
        }
      }
      if (this + (0x10 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar1 = *(uint *)(this + 0xc);
        if (uVar1 != 0) {
          uVar3 = DeltaSetIndexMap::sanitize
                            ((DeltaSetIndexMap *)
                             (this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                      (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1);
          if ((char)uVar3 == '\0') {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_00463217;
            *(undefined4 *)(this + 0xc) = 0;
          }
        }
        if (this + (0x14 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18))
        {
          uVar1 = *(uint *)(this + 0x10);
          uVar2 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
          if (uVar1 == 0) goto LAB_00463219;
          uVar3 = DeltaSetIndexMap::sanitize
                            ((DeltaSetIndexMap *)
                             (this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                      (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1);
          if ((char)uVar3 != '\0') goto LAB_00463219;
          if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) != '\0')) {
            *(undefined4 *)(this + 0x10) = 0;
            goto LAB_00463219;
          }
        }
      }
    }
  }
LAB_00463217:
  uVar2 = 0;
LAB_00463219:
  return uVar2 & 0xffffffff;
}


