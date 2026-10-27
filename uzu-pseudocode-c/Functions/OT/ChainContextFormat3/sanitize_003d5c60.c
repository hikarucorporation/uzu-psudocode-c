// Function : sanitize
// Namespace: OT:ChainContextFormat3
// Entry    : 003d5c60
// Prototype: undefined4 sanitize(ChainContextFormat3 * this, long param_1)
// Body     : 003d5c60 - 003d600e


/* OT::ChainContextFormat3::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall OT::ChainContextFormat3::sanitize(ChainContextFormat3 *this,long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ChainContextFormat3 *pCVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ChainContextFormat3 *pCVar9;
  long lVar10;
  long lVar11;
  
  pCVar4 = this + 4;
  if (((((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       ((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
      (uVar2 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      uVar2 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar4))) &&
     (iVar7 = *(int *)(param_1 + 0x1c) + uVar2 * -2, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)) {
    uVar6 = *(ushort *)(this + 2);
    if (uVar6 != 0) {
      uVar1 = uVar6 << 8 | uVar6 >> 8;
      uVar6 = 1;
      if (1 < uVar1) {
        uVar6 = uVar1;
      }
      lVar8 = 0;
      do {
        if ((ChainContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((lVar8 + 6) - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar1 = *(ushort *)(this + lVar8 + 4);
        if ((uVar1 != 0) &&
           (uVar3 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                              (param_1,(ushort *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8))),
           (char)uVar3 == '\0')) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (*(char *)(param_1 + 0x28) == '\0') {
            return 0;
          }
          *(undefined2 *)(this + lVar8 + 4) = 0;
        }
        lVar8 = lVar8 + 2;
      } while ((ulong)uVar6 * 2 != lVar8);
    }
    uVar3 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    pCVar4 = this + uVar3 * 2 + 6;
    if (((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       ((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
      pCVar9 = this + uVar3 * 2 + 4;
      uVar2 = (uint)(ushort)(*(ushort *)pCVar9 << 8 | *(ushort *)pCVar9 >> 8);
      if ((uVar2 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar4)) &&
         (iVar7 = *(int *)(param_1 + 0x1c) + uVar2 * -2, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7
         )) {
        lVar8 = uVar3 * 2;
        uVar6 = *(ushort *)pCVar9;
        if (uVar6 != 0) {
          uVar1 = uVar6 << 8 | uVar6 >> 8;
          uVar6 = 1;
          if (1 < uVar1) {
            uVar6 = uVar1;
          }
          lVar10 = 0;
          do {
            if ((ChainContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18) <
                this + ((lVar10 + lVar8 + 8) - *(long *)(param_1 + 8))) {
              return 0;
            }
            uVar1 = *(ushort *)(this + lVar10 + lVar8 + 6);
            if ((uVar1 != 0) &&
               (uVar3 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                                  (param_1,(ushort *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8))),
               (char)uVar3 == '\0')) {
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (*(char *)(param_1 + 0x28) == '\0') {
                return 0;
              }
              *(undefined2 *)(this + lVar10 + lVar8 + 6) = 0;
            }
            lVar10 = lVar10 + 2;
          } while ((ulong)uVar6 * 2 != lVar10);
        }
        uVar6 = *(ushort *)pCVar9;
        if (uVar6 != 0) {
          uVar3 = (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8);
          pCVar4 = pCVar9 + uVar3 * 2 + 4;
          if (((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             && ((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             ) {
            pCVar9 = pCVar9 + uVar3 * 2 + 2;
            uVar2 = (uint)(ushort)(*(ushort *)pCVar9 << 8 | *(ushort *)pCVar9 >> 8);
            if ((uVar2 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar4)) &&
               (iVar7 = *(int *)(param_1 + 0x1c) + uVar2 * -2, *(int *)(param_1 + 0x1c) = iVar7,
               0 < iVar7)) {
              uVar6 = *(ushort *)pCVar9;
              if (uVar6 != 0) {
                uVar1 = uVar6 << 8 | uVar6 >> 8;
                uVar6 = 1;
                if (1 < uVar1) {
                  uVar6 = uVar1;
                }
                lVar10 = lVar8 + uVar3 * 2 + 8;
                lVar11 = 0;
                do {
                  if ((ChainContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18) <
                      this + ((lVar11 + lVar8 + uVar3 * 2 + 10) - *(long *)(param_1 + 8))) {
                    return 0;
                  }
                  uVar1 = *(ushort *)(this + lVar11 + lVar10);
                  if ((uVar1 != 0) &&
                     (uVar5 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                                        (param_1,(ushort *)
                                                 (this + (ushort)(uVar1 << 8 | uVar1 >> 8))),
                     (char)uVar5 == '\0')) {
                    if (0x1f < *(uint *)(param_1 + 0x2c)) {
                      return 0;
                    }
                    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
                    if (*(char *)(param_1 + 0x28) == '\0') {
                      return 0;
                    }
                    *(undefined2 *)(this + lVar11 + lVar10) = 0;
                  }
                  lVar11 = lVar11 + 2;
                } while ((ulong)uVar6 * 2 != lVar11);
              }
              uVar3 = (ulong)(ushort)(*(ushort *)pCVar9 << 8 | *(ushort *)pCVar9 >> 8);
              pCVar4 = pCVar9 + uVar3 * 2 + 4;
              if ((((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <=
                    (ulong)*(uint *)(param_1 + 0x18)) &&
                  ((ulong)((long)pCVar4 - *(long *)(param_1 + 8)) <=
                   (ulong)*(uint *)(param_1 + 0x18))) &&
                 (uVar2 = (uint)(ushort)(*(ushort *)(pCVar9 + uVar3 * 2 + 2) << 8 |
                                        *(ushort *)(pCVar9 + uVar3 * 2 + 2) >> 8),
                 uVar2 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar4))) {
                iVar7 = *(int *)(param_1 + 0x1c) + uVar2 * -4;
                *(int *)(param_1 + 0x1c) = iVar7;
                return CONCAT31((int3)((uint)iVar7 >> 8),0 < iVar7);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


