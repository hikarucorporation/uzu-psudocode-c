// Function : sanitize
// Namespace: OT:ChainContextFormat1_4_OT__Layout__SmallTypes_
// Entry    : 003d5720
// Prototype: undefined8 sanitize(ChainContextFormat1_4<OT::Layout::SmallTypes> * this, long param_1)
// Body     : 003d5720 - 003d5930


/* OT::ChainContextFormat1_4<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::ChainContextFormat1_4<OT::Layout::SmallTypes>::sanitize
          (ChainContextFormat1_4<OT::Layout::SmallTypes> *this,long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ChainContextFormat1_4<OT::Layout::SmallTypes> *pCVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  ChainContextFormat1_4<OT::Layout::SmallTypes> *local_38;
  
  if (this + (4 - *(long *)(param_1 + 8)) <=
      (ChainContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar6 = *(ushort *)(this + 2);
    if ((uVar6 != 0) &&
       (uVar4 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                          (param_1,(ushort *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8))),
       (char)uVar4 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return 0;
      }
      *(undefined2 *)(this + 2) = 0;
    }
    if (((this + (6 - *(long *)(param_1 + 8)) <=
          (ChainContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) &&
        ((ulong)((long)(this + 6) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       (uVar3 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8),
       uVar3 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 6)))) {
      iVar2 = *(int *)(param_1 + 0x1c) + uVar3 * -2;
      *(int *)(param_1 + 0x1c) = iVar2;
      if (0 < iVar2) {
        uVar6 = *(ushort *)(this + 4);
        if (uVar6 == 0) {
          return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
        }
        uVar8 = uVar6 << 8 | uVar6 >> 8;
        uVar6 = 1;
        if (1 < uVar8) {
          uVar6 = uVar8;
        }
        uVar4 = 0;
        while (this + (uVar4 * 2 - *(long *)(param_1 + 8)) + 8 <=
               (ChainContextFormat1_4<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
          uVar8 = *(ushort *)(this + uVar4 * 2 + 6);
          uVar5 = (ulong)uVar8;
          if (uVar8 != 0) {
            uVar9 = (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8);
            local_38 = this + uVar9;
            pCVar7 = this + uVar9 + 2;
            if ((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8)))
                || ((ulong)*(uint *)(param_1 + 0x18) <
                    (ulong)((long)pCVar7 - *(long *)(param_1 + 8)))) ||
               ((uVar3 = (uint)(ushort)(*(ushort *)local_38 << 8 | *(ushort *)local_38 >> 8),
                (uint)(*(int *)(param_1 + 0x10) - (int)pCVar7) < uVar3 * 2 ||
                (iVar2 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar2,
                iVar2 < 1)))) {
LAB_003d58fe:
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              uVar3 = *(uint *)(param_1 + 0x2c) + 1;
              uVar5 = (ulong)uVar3;
              *(uint *)(param_1 + 0x2c) = uVar3;
              if (*(char *)(param_1 + 0x28) == '\0') {
                return 0;
              }
              *(undefined2 *)(this + uVar4 * 2 + 6) = 0;
            }
            else {
              uVar8 = *(ushort *)local_38;
              uVar5 = (ulong)uVar8;
              if (uVar8 != 0) {
                uVar1 = uVar8 << 8 | uVar8 >> 8;
                uVar8 = 1;
                if (1 < uVar1) {
                  uVar8 = uVar1;
                }
                uVar10 = (ulong)uVar8;
                pCVar7 = this + uVar9 + 2;
                do {
                  uVar5 = hb_sanitize_context_t::
                          _dispatch<OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>,OT::IntType<unsigned_short,2u>,void,true>,OT::ChainRuleSet<OT::Layout::SmallTypes>const*>
                                    (param_1,(ushort *)pCVar7,(long *)&local_38);
                  if ((char)uVar5 == '\0') goto LAB_003d58fe;
                  pCVar7 = pCVar7 + 2;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
            }
          }
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar6) {
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}


