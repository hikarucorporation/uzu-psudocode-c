// Function : sanitize
// Namespace: OT:PaintSweepGradient_OT__Variable_
// Entry    : 0046dca0
// Prototype: undefined8 sanitize(PaintSweepGradient<OT::Variable> * this, long param_1)
// Body     : 0046dca0 - 0046dd69


/* OT::PaintSweepGradient<OT::Variable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintSweepGradient<OT::Variable>::sanitize(PaintSweepGradient<OT::Variable> *this,long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  PaintSweepGradient<OT::Variable> *pPVar6;
  
  if ((this + (0xc - *(long *)(param_1 + 8)) <=
       (PaintSweepGradient<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (4 - *(long *)(param_1 + 8)) <=
      (PaintSweepGradient<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18))) {
    lVar1 = (ulong)(byte)this[1] << 0x10;
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
    if ((this[2] == (PaintSweepGradient<OT::Variable>)0x0 && (int)lVar1 == 0) &&
        this[3] == (PaintSweepGradient<OT::Variable>)0x0) {
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
      this[3] = (PaintSweepGradient<OT::Variable>)0x0;
      return uVar2;
    }
  }
  return 0;
}


