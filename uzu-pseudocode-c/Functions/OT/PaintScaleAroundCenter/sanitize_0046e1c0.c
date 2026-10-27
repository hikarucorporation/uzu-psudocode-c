// Function : sanitize
// Namespace: OT:PaintScaleAroundCenter
// Entry    : 0046e1c0
// Prototype: ulong sanitize(PaintScaleAroundCenter * this, long param_1)
// Body     : 0046e1c0 - 0046e25f


/* OT::PaintScaleAroundCenter::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::PaintScaleAroundCenter::sanitize(PaintScaleAroundCenter *this,long param_1)

{
  PaintScaleAroundCenter PVar1;
  PaintScaleAroundCenter PVar2;
  PaintScaleAroundCenter PVar3;
  ulong uVar4;
  int iVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  
  if ((this + (0xc - *(long *)(param_1 + 8)) <=
       (PaintScaleAroundCenter *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (4 - *(long *)(param_1 + 8)) <=
      (PaintScaleAroundCenter *)(ulong)*(uint *)(param_1 + 0x18))) {
    PVar1 = this[1];
    PVar2 = this[2];
    PVar3 = this[3];
    uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((PVar2 == (PaintScaleAroundCenter)0x0 && PVar1 == (PaintScaleAroundCenter)0x0) &&
        PVar3 == (PaintScaleAroundCenter)0x0) goto LAB_0046e258;
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
      uVar4 = Paint::dispatch<hb_sanitize_context_t>
                        ((Paint *)(this + ((ulong)(byte)PVar2 << 8 | (ulong)(byte)PVar1 << 0x10 |
                                          (ulong)(byte)PVar3)),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if ((char)uVar4 != '\0') goto LAB_0046e258;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 1) = 0;
      this[3] = (PaintScaleAroundCenter)0x0;
      goto LAB_0046e258;
    }
  }
  uVar6 = 0;
LAB_0046e258:
  return uVar6 & 0xffffffff;
}


