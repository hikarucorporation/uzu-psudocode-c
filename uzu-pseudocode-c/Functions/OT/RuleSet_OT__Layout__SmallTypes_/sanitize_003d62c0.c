// Function : sanitize
// Namespace: OT:RuleSet_OT__Layout__SmallTypes_
// Entry    : 003d62c0
// Prototype: undefined8 sanitize(RuleSet<OT::Layout::SmallTypes> * this, long param_1)
// Body     : 003d62c0 - 003d6427


/* OT::RuleSet<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::RuleSet<OT::Layout::SmallTypes>::sanitize(RuleSet<OT::Layout::SmallTypes> *this,long param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  RuleSet<OT::Layout::SmallTypes> *pRVar7;
  ulong uVar8;
  
  pRVar7 = this + 2;
  if (((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     ((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar6 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
    uVar5 = uVar6 * 2;
    if ((uVar5 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar7)) &&
       (iVar3 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3))
    {
      uVar2 = *(ushort *)this;
      uVar1 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      if (uVar2 == 0) {
        return uVar1;
      }
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      uVar5 = 1;
      if (1 < uVar2) {
        uVar5 = (uint)uVar2;
      }
      lVar4 = 0;
      while (this + ((lVar4 + 4) - *(long *)(param_1 + 8)) <=
             (RuleSet<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar2 = *(ushort *)(this + lVar4 + 2);
        if (uVar2 != 0) {
          uVar8 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
          pRVar7 = this + uVar8 + 4;
          if ((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
            uVar2 = *(ushort *)(this + uVar8);
            iVar3 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2 + -2;
            if (uVar2 == 0) {
              iVar3 = 0;
            }
            if ((((ulong)((long)pRVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)
                 ) && (uVar2 = *(ushort *)(this + uVar8 + 2),
                      uVar6 = iVar3 + (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * 4,
                      uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar7))) &&
               (iVar3 = *(int *)(param_1 + 0x1c) - uVar6, *(int *)(param_1 + 0x1c) = iVar3,
               0 < iVar3)) goto LAB_003d6360;
          }
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (*(char *)(param_1 + 0x28) == '\0') {
            return 0;
          }
          *(undefined2 *)(this + lVar4 + 2) = 0;
        }
LAB_003d6360:
        lVar4 = lVar4 + 2;
        if ((ulong)uVar5 * 2 == lVar4) {
          return uVar1;
        }
      }
    }
  }
  return 0;
}


