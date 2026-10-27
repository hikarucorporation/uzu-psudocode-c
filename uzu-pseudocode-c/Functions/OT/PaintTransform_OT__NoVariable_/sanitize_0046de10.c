// Function : sanitize
// Namespace: OT:PaintTransform_OT__NoVariable_
// Entry    : 0046de10
// Prototype: undefined8 sanitize(PaintTransform<OT::NoVariable> * this, long param_1)
// Body     : 0046de10 - 0046df3d


/* OT::PaintTransform<OT::NoVariable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintTransform<OT::NoVariable>::sanitize(PaintTransform<OT::NoVariable> *this,long param_1)

{
  PaintTransform<OT::NoVariable> PVar1;
  PaintTransform<OT::NoVariable> PVar2;
  PaintTransform<OT::NoVariable> PVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  PVar1 = this[1];
  PVar2 = this[2];
  PVar3 = this[3];
  if ((PVar2 != (PaintTransform<OT::NoVariable>)0x0 || PVar1 != (PaintTransform<OT::NoVariable>)0x0)
      || PVar3 != (PaintTransform<OT::NoVariable>)0x0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar7 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar7, iVar7 != 0)) {
      uVar4 = Paint::dispatch<hb_sanitize_context_t>
                        ((Paint *)(this + ((ulong)(byte)PVar2 << 8 | (ulong)(byte)PVar1 << 0x10 |
                                          (ulong)(byte)PVar3)),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if ((char)uVar4 != '\0') goto LAB_0046dead;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0x28) == '\0') {
      return 0;
    }
    *(undefined2 *)(this + 1) = 0;
    this[3] = (PaintTransform<OT::NoVariable>)0x0;
  }
LAB_0046dead:
  if (this + (7 - *(long *)(param_1 + 8)) <=
      (PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18)) {
    lVar5 = (ulong)(byte)this[4] << 0x10;
    uVar6 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
    if ((this[5] == (PaintTransform<OT::NoVariable>)0x0 && (int)lVar5 == 0) &&
        this[6] == (PaintTransform<OT::NoVariable>)0x0) {
      return uVar6;
    }
    if (this + (((ulong)(byte)this[5] << 8 | (ulong)(byte)this[4] << 0x10 | (ulong)(byte)this[6]) -
               *(long *)(param_1 + 8)) + 0x18 <=
        (PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18)) {
      return uVar6;
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *(undefined2 *)(this + 4) = 0;
      this[6] = (PaintTransform<OT::NoVariable>)0x0;
      return uVar6;
    }
  }
  return 0;
}


