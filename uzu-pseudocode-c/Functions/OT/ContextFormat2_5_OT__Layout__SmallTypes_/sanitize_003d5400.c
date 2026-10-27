// Function : sanitize
// Namespace: OT:ContextFormat2_5_OT__Layout__SmallTypes_
// Entry    : 003d5400
// Prototype: ulong sanitize(ContextFormat2_5<OT::Layout::SmallTypes> * this, long param_1)
// Body     : 003d5400 - 003d55bc


/* OT::ContextFormat2_5<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::ContextFormat2_5<OT::Layout::SmallTypes>::sanitize
          (ContextFormat2_5<OT::Layout::SmallTypes> *this,long param_1)

{
  ContextFormat2_5<OT::Layout::SmallTypes> *pCVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined8 unaff_R15;
  
  if (this + (4 - *(long *)(param_1 + 8)) <=
      (ContextFormat2_5<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar6 = *(ushort *)(this + 2);
    if (uVar6 != 0) {
      uVar4 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                        (param_1,(ushort *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8)));
      if ((char)uVar4 == '\0') {
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d55a8;
        *(undefined2 *)(this + 2) = 0;
      }
    }
    if (this + (6 - *(long *)(param_1 + 8)) <=
        (ContextFormat2_5<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar6 = *(ushort *)(this + 4);
      if (uVar6 != 0) {
        uVar4 = ClassDef::sanitize((ClassDef *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8)),param_1);
        if ((char)uVar4 == '\0') {
          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
             *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d55a8;
          *(undefined2 *)(this + 4) = 0;
        }
      }
      pCVar1 = this + 8;
      if (((((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
           ((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8),
          uVar3 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar1))) &&
         (iVar7 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7
         )) {
        uVar6 = *(ushort *)(this + 6);
        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
        if (uVar6 != 0) {
          uVar2 = uVar6 << 8 | uVar6 >> 8;
          uVar6 = 1;
          if (1 < uVar2) {
            uVar6 = uVar2;
          }
          lVar8 = 0;
          do {
            if ((ContextFormat2_5<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
                this + ((lVar8 + 10) - *(long *)(param_1 + 8))) goto LAB_003d55a8;
            uVar2 = *(ushort *)(this + lVar8 + 8);
            if (uVar2 != 0) {
              uVar5 = RuleSet<OT::Layout::SmallTypes>::sanitize
                                ((RuleSet<OT::Layout::SmallTypes> *)
                                 (this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1);
              if ((char)uVar5 == '\0') {
                if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                   (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                   *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d55a8;
                *(undefined2 *)(this + lVar8 + 8) = 0;
              }
            }
            lVar8 = lVar8 + 2;
          } while ((ulong)uVar6 * 2 != lVar8);
        }
        goto LAB_003d55ab;
      }
    }
  }
LAB_003d55a8:
  uVar4 = 0;
LAB_003d55ab:
  return uVar4 & 0xffffffff;
}


