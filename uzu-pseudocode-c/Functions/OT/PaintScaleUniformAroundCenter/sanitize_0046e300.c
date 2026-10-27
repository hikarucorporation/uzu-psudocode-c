// Function : sanitize
// Namespace: OT:PaintScaleUniformAroundCenter
// Entry    : 0046e300
// Prototype: ulong sanitize(PaintScaleUniformAroundCenter * this, long param_1)
// Body     : 0046e300 - 0046e39f


/* OT::PaintScaleUniformAroundCenter::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::PaintScaleUniformAroundCenter::sanitize(PaintScaleUniformAroundCenter *this,long param_1)

{
  PaintScaleUniformAroundCenter PVar1;
  PaintScaleUniformAroundCenter PVar2;
  PaintScaleUniformAroundCenter PVar3;
  ulong uVar4;
  int iVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  
  if ((this + (10 - *(long *)(param_1 + 8)) <=
       (PaintScaleUniformAroundCenter *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (4 - *(long *)(param_1 + 8)) <=
      (PaintScaleUniformAroundCenter *)(ulong)*(uint *)(param_1 + 0x18))) {
    PVar1 = this[1];
    PVar2 = this[2];
    PVar3 = this[3];
    uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((PVar2 == (PaintScaleUniformAroundCenter)0x0 && PVar1 == (PaintScaleUniformAroundCenter)0x0)
        && PVar3 == (PaintScaleUniformAroundCenter)0x0) goto LAB_0046e398;
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
      uVar4 = Paint::dispatch<hb_sanitize_context_t>
                        ((Paint *)(this + ((ulong)(byte)PVar2 << 8 | (ulong)(byte)PVar1 << 0x10 |
                                          (ulong)(byte)PVar3)),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if ((char)uVar4 != '\0') goto LAB_0046e398;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 1) = 0;
      this[3] = (PaintScaleUniformAroundCenter)0x0;
      goto LAB_0046e398;
    }
  }
  uVar6 = 0;
LAB_0046e398:
  return uVar6 & 0xffffffff;
}


