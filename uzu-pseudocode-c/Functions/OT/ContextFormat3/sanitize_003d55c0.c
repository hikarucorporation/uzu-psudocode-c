// Function : sanitize
// Namespace: OT:ContextFormat3
// Entry    : 003d55c0
// Prototype: undefined4 sanitize(ContextFormat3 * this, long param_1)
// Body     : 003d55c0 - 003d571b


/* OT::ContextFormat3::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall OT::ContextFormat3::sanitize(ContextFormat3 *this,long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if ((this + (6 - *(long *)(param_1 + 8)) <= (ContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18)) &&
     (uVar4 = *(ushort *)(this + 2), uVar4 != 0)) {
    if (this + 6 + -*(long *)(param_1 + 8) <= (ContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar4 = uVar4 << 8 | uVar4 >> 8;
      if (((uint)uVar4 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 6))) &&
         (iVar6 = *(int *)(param_1 + 0x1c) + (uint)uVar4 * -2, *(int *)(param_1 + 0x1c) = iVar6,
         0 < iVar6)) {
        uVar7 = 1;
        if (1 < uVar4) {
          uVar7 = (ulong)(uint)uVar4;
        }
        if (this + (8 - *(long *)(param_1 + 8)) <=
            (ContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar5 = 0;
          do {
            uVar4 = *(ushort *)(this + lVar5 + 6);
            if ((uVar4 != 0) &&
               (uVar3 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                                  (param_1,(ushort *)(this + (ushort)(uVar4 << 8 | uVar4 >> 8))),
               (char)uVar3 == '\0')) {
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (*(char *)(param_1 + 0x28) == '\0') {
                return 0;
              }
              *(undefined2 *)(this + lVar5 + 6) = 0;
            }
            if (uVar7 * 2 + -2 == lVar5) {
              if ((ulong)*(uint *)(param_1 + 0x18) <
                  (ulong)((long)(this + (ulong)(ushort)(*(ushort *)(this + 2) << 8 |
                                                       *(ushort *)(this + 2) >> 8) * 2 + 6) -
                         *(long *)(param_1 + 8))) {
                return 0;
              }
              uVar1 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8);
              if ((uint)(*(int *)(param_1 + 0x10) -
                        (int)(this + (ulong)(ushort)(*(ushort *)(this + 2) << 8 |
                                                    *(ushort *)(this + 2) >> 8) * 2 + 6)) <
                  uVar1 * 4) {
                return 0;
              }
              iVar6 = *(int *)(param_1 + 0x1c) + uVar1 * -4;
              *(int *)(param_1 + 0x1c) = iVar6;
              return CONCAT31((int3)((uint)iVar6 >> 8),0 < iVar6);
            }
            lVar2 = lVar5 - *(long *)(param_1 + 8);
            lVar5 = lVar5 + 2;
          } while (this + lVar2 + 10 <= (ContextFormat3 *)(ulong)*(uint *)(param_1 + 0x18));
        }
      }
    }
  }
  return 0;
}


