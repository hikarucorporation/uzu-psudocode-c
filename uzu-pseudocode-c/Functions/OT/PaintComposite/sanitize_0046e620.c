// Function : sanitize
// Namespace: OT:PaintComposite
// Entry    : 0046e620
// Prototype: ulong sanitize(PaintComposite * this, long param_1)
// Body     : 0046e620 - 0046e77f


/* OT::PaintComposite::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::PaintComposite::sanitize(PaintComposite *this,long param_1)

{
  PaintComposite PVar1;
  PaintComposite PVar2;
  PaintComposite PVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 unaff_RBP;
  
  if (this + (8 - *(long *)(param_1 + 8)) <= (PaintComposite *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x1c) < 9) {
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -8;
      if (this + (4 - *(long *)(param_1 + 8)) <= (PaintComposite *)(ulong)*(uint *)(param_1 + 0x18))
      {
        PVar1 = this[1];
        PVar2 = this[2];
        PVar3 = this[3];
        if ((PVar2 != (PaintComposite)0x0 || PVar1 != (PaintComposite)0x0) ||
            PVar3 != (PaintComposite)0x0) {
          if ((*(int *)(param_1 + 0x24) < 0x40) &&
             (iVar6 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar6, iVar6 != 0)) {
            uVar4 = Paint::dispatch<hb_sanitize_context_t>
                              ((Paint *)(this + ((ulong)(byte)PVar2 << 8 |
                                                 (ulong)(byte)PVar1 << 0x10 | (ulong)(byte)PVar3)),
                               param_1);
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
            if ((char)uVar4 != '\0') goto LAB_0046e6e2;
          }
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046e650;
          *(undefined2 *)(this + 1) = 0;
          this[3] = (PaintComposite)0x0;
        }
LAB_0046e6e2:
        if (this + (8 - *(long *)(param_1 + 8)) <=
            (PaintComposite *)(ulong)*(uint *)(param_1 + 0x18)) {
          PVar1 = this[5];
          PVar2 = this[6];
          PVar3 = this[7];
          uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
          if ((PVar2 == (PaintComposite)0x0 && PVar1 == (PaintComposite)0x0) &&
              PVar3 == (PaintComposite)0x0) goto LAB_0046e652;
          if ((*(int *)(param_1 + 0x24) < 0x40) &&
             (iVar6 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar6, iVar6 != 0)) {
            uVar5 = Paint::dispatch<hb_sanitize_context_t>
                              ((Paint *)(this + ((ulong)(byte)PVar2 << 8 |
                                                 (ulong)(byte)PVar1 << 0x10 | (ulong)(byte)PVar3)),
                               param_1);
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
            if ((char)uVar5 != '\0') goto LAB_0046e652;
          }
          if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) != '\0')) {
            *(undefined2 *)(this + 5) = 0;
            this[7] = (PaintComposite)0x0;
            goto LAB_0046e652;
          }
        }
      }
    }
  }
LAB_0046e650:
  uVar4 = 0;
LAB_0046e652:
  return uVar4 & 0xffffffff;
}


