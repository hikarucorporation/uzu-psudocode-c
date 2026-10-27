// Function : sanitize
// Namespace: OT:PaintLinearGradient_OT__Variable_
// Entry    : 0046d960
// Prototype: undefined8 sanitize(PaintLinearGradient<OT::Variable> * this, long param_1)
// Body     : 0046d960 - 0046da29


/* OT::PaintLinearGradient<OT::Variable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintLinearGradient<OT::Variable>::sanitize
          (PaintLinearGradient<OT::Variable> *this,long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  PaintLinearGradient<OT::Variable> *pPVar6;
  
  if ((this + (0x10 - *(long *)(param_1 + 8)) <=
       (PaintLinearGradient<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (4 - *(long *)(param_1 + 8)) <=
      (PaintLinearGradient<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18))) {
    lVar1 = (ulong)(byte)this[1] << 0x10;
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
    if ((this[2] == (PaintLinearGradient<OT::Variable>)0x0 && (int)lVar1 == 0) &&
        this[3] == (PaintLinearGradient<OT::Variable>)0x0) {
      return uVar2;
    }
    uVar4 = (ulong)(byte)this[2] << 8 | (ulong)(byte)this[1] << 0x10 | (ulong)(byte)this[3];
    pPVar6 = this + uVar4 + 3;
    if (((((ulong)((long)pPVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
         ((ulong)((long)pPVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
        (uVar3 = (uint)(ushort)(*(ushort *)(this + uVar4 + 1) << 8 |
                               *(ushort *)(this + uVar4 + 1) >> 8),
        uVar3 * 10 <= (uint)(*(int *)(param_1 + 0x10) - (int)pPVar6))) &&
       (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -10, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5)
       ) {
      return uVar2;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 1) = 0;
      this[3] = (PaintLinearGradient<OT::Variable>)0x0;
      return uVar2;
    }
  }
  return 0;
}


