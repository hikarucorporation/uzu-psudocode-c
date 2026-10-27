// Function : sanitize
// Namespace: OT:PaintScaleUniform
// Entry    : 0046e260
// Prototype: ulong sanitize(PaintScaleUniform * this, long param_1)
// Body     : 0046e260 - 0046e2ff


/* OT::PaintScaleUniform::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::PaintScaleUniform::sanitize(PaintScaleUniform *this,long param_1)

{
  PaintScaleUniform PVar1;
  PaintScaleUniform PVar2;
  PaintScaleUniform PVar3;
  ulong uVar4;
  int iVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  
  if ((this + (6 - *(long *)(param_1 + 8)) <= (PaintScaleUniform *)(ulong)*(uint *)(param_1 + 0x18))
     && (this + (4 - *(long *)(param_1 + 8)) <=
         (PaintScaleUniform *)(ulong)*(uint *)(param_1 + 0x18))) {
    PVar1 = this[1];
    PVar2 = this[2];
    PVar3 = this[3];
    uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((PVar2 == (PaintScaleUniform)0x0 && PVar1 == (PaintScaleUniform)0x0) &&
        PVar3 == (PaintScaleUniform)0x0) goto LAB_0046e2f8;
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
      uVar4 = Paint::dispatch<hb_sanitize_context_t>
                        ((Paint *)(this + ((ulong)(byte)PVar2 << 8 | (ulong)(byte)PVar1 << 0x10 |
                                          (ulong)(byte)PVar3)),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if ((char)uVar4 != '\0') goto LAB_0046e2f8;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 1) = 0;
      this[3] = (PaintScaleUniform)0x0;
      goto LAB_0046e2f8;
    }
  }
  uVar6 = 0;
LAB_0046e2f8:
  return uVar6 & 0xffffffff;
}


