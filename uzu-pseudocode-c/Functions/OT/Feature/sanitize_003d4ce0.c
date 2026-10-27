// Function : sanitize
// Namespace: OT:Feature
// Entry    : 003d4ce0
// Prototype: undefined8 sanitize(Feature * this, long param_1, uint * param_2)
// Body     : 003d4ce0 - 003d4e91


/* OT::Feature::sanitize(hb_sanitize_context_t*, OT::Record_sanitize_closure_t const*) const */

undefined8 __thiscall OT::Feature::sanitize(Feature *this,long param_1,uint *param_2)

{
  ushort uVar1;
  Feature *pFVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  if ((Feature *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((Feature *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((((ulong)((long)(this + 4) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar6 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      uVar6 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 4)))) &&
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5)) {
    uVar4 = *(ushort *)this;
    if (uVar4 == 0) {
      return 1;
    }
    if (param_2 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *param_2;
    }
    if (this + (2 - *(long *)(param_1 + 8)) <= (Feature *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(ushort *)this;
      if ((uVar1 != 0) &&
         (bVar3 = FeatureParams::sanitize
                            ((FeatureParams *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1,
                             uVar6), !bVar3)) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        *(undefined2 *)this = 0;
      }
      if (param_2 == (uint *)0x0) {
        return 1;
      }
      if (*(short *)this != 0) {
        return 1;
      }
      if (*param_2 != 0x73697a65) {
        return 1;
      }
      pFVar2 = *(Feature **)(param_2 + 2);
      if (pFVar2 == (Feature *)0x0) {
        return 1;
      }
      if (this <= pFVar2) {
        return 1;
      }
      uVar6 = ((int)pFVar2 - (int)this) + (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
      if (0xffff < uVar6) {
        return 1;
      }
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 1;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return 1;
      }
      uVar4 = (ushort)uVar6;
      *(ushort *)this = uVar4 << 8 | uVar4 >> 8;
      if (this + (2 - *(long *)(param_1 + 8)) <= (Feature *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar4 = *(ushort *)this;
        if (uVar4 == 0) {
          return 1;
        }
        bVar3 = FeatureParams::sanitize
                          ((FeatureParams *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8)),param_1,
                           *param_2);
        if (bVar3) {
          return 1;
        }
        if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) != '\0')) {
          *(undefined2 *)this = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}


