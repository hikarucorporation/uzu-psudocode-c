// Function : would_apply
// Namespace: OT:ChainRuleSet_OT__Layout__SmallTypes_
// Entry    : 0042f3a0
// Prototype: undefined4 would_apply(ChainRuleSet<OT::Layout::SmallTypes> * this, long param_1, long param_2)
// Body     : 0042f3a0 - 0042f56a


/* OT::ChainRuleSet<OT::Layout::SmallTypes>::would_apply(OT::hb_would_apply_context_t*,
   OT::ChainContextApplyLookupContext const&) const */

undefined4 __thiscall
OT::ChainRuleSet<OT::Layout::SmallTypes>::would_apply
          (ChainRuleSet<OT::Layout::SmallTypes> *this,long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar12;
  ulong uVar13;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar14;
  undefined4 local_48 [6];
  
  uVar1 = *(ushort *)this;
  if (uVar1 != 0) {
    uVar11 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    pCVar14 = this;
    do {
      pCVar14 = pCVar14 + 2;
      uVar1 = *(ushort *)pCVar14;
      pCVar12 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
      if (uVar1 != 0) {
        pCVar12 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
      }
      pcVar3 = *(code **)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(ushort *)pCVar12;
      uVar9 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
      uVar2 = *(ushort *)(pCVar12 + uVar9 * 2 + 2);
      uVar7 = uVar2 << 8 | uVar2 >> 8;
      uVar13 = (ulong)uVar7;
      lVar8 = uVar13 * 2;
      if (uVar2 == 0) {
        lVar8 = 2;
      }
      if (((uVar1 == 0 && *(short *)(pCVar12 + lVar8 + 2 + uVar9 * 2) == 0) ||
          (*(char *)(param_1 + 0x1c) == '\0')) && (*(uint *)(param_1 + 0x18) == (uint)uVar7)) {
        uVar6 = (undefined4)CONCAT71((int7)((ulong)param_1 >> 8),1);
        if (uVar7 < 2) {
          return uVar6;
        }
        local_48[0] = *(undefined4 *)(*(long *)(param_1 + 0x10) + 4);
        cVar5 = (*pcVar3)(local_48,*(ushort *)(pCVar12 + uVar9 * 2 + 4) << 8 |
                                   *(ushort *)(pCVar12 + uVar9 * 2 + 4) >> 8,uVar4);
        if (cVar5 != '\0') {
          uVar10 = 1;
          do {
            if ((2 - uVar13) + uVar10 == 1) {
              return uVar6;
            }
            local_48[0] = *(undefined4 *)(*(long *)(param_1 + 0x10) + 4 + uVar10 * 4);
            cVar5 = (*pcVar3)(local_48,*(ushort *)(pCVar12 + uVar10 * 2 + uVar9 * 2 + 4) << 8 |
                                       *(ushort *)(pCVar12 + uVar10 * 2 + uVar9 * 2 + 4) >> 8,uVar4)
            ;
            uVar10 = uVar10 + 1;
          } while (cVar5 != '\0');
          if (uVar13 <= uVar10) {
            return uVar6;
          }
        }
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return 0;
}


