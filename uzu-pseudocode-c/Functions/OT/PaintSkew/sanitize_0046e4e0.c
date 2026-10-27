// Function : sanitize
// Namespace: OT:PaintSkew
// Entry    : 0046e4e0
// Prototype: ulong sanitize(PaintSkew * this, long param_1)
// Body     : 0046e4e0 - 0046e57f


/* OT::PaintSkew::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::PaintSkew::sanitize(PaintSkew *this,long param_1)

{
  PaintSkew PVar1;
  PaintSkew PVar2;
  PaintSkew PVar3;
  ulong uVar4;
  int iVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  
  if ((this + (8 - *(long *)(param_1 + 8)) <= (PaintSkew *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (4 - *(long *)(param_1 + 8)) <= (PaintSkew *)(ulong)*(uint *)(param_1 + 0x18))) {
    PVar1 = this[1];
    PVar2 = this[2];
    PVar3 = this[3];
    uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((PVar2 == (PaintSkew)0x0 && PVar1 == (PaintSkew)0x0) && PVar3 == (PaintSkew)0x0)
    goto LAB_0046e578;
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
      uVar4 = Paint::dispatch<hb_sanitize_context_t>
                        ((Paint *)(this + ((ulong)(byte)PVar2 << 8 | (ulong)(byte)PVar1 << 0x10 |
                                          (ulong)(byte)PVar3)),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if ((char)uVar4 != '\0') goto LAB_0046e578;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 1) = 0;
      this[3] = (PaintSkew)0x0;
      goto LAB_0046e578;
    }
  }
  uVar6 = 0;
LAB_0046e578:
  return uVar6 & 0xffffffff;
}


