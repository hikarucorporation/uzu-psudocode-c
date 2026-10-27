// Function : sanitize
// Namespace: AAT:TrackData
// Entry    : 004059f0
// Prototype: undefined8 sanitize(TrackData * this, long param_1, long param_2)
// Body     : 004059f0 - 00405b45


/* AAT::TrackData::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall AAT::TrackData::sanitize(TrackData *this,long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  TrackData *pTVar9;
  ulong uVar10;
  ulong uVar11;
  
  pTVar9 = this + 8;
  if (((ulong)((long)pTVar9 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (TrackData *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar8 = *(uint *)(this + 4);
    lVar6 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18)
            + param_2;
    if ((ulong)(lVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
      iVar5 = (int)*(undefined8 *)(param_1 + 0x10);
      if (uVar8 * 4 <= (uint)(iVar5 - (int)lVar6)) {
        iVar4 = *(int *)(param_1 + 0x1c) + uVar8 * -4;
        *(int *)(param_1 + 0x1c) = iVar4;
        if (0 < iVar4) {
          uVar3 = 0;
          if ((ulong)((long)pTVar9 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
            uVar1 = *(ushort *)this;
            uVar7 = uVar1 << 8 | uVar1 >> 8;
            uVar8 = (uint)uVar7 * 8;
            if (uVar8 <= (uint)(iVar5 - (int)pTVar9)) {
              iVar5 = iVar4 + (uint)uVar7 * -8;
              *(int *)(param_1 + 0x1c) = iVar5;
              if (iVar5 == 0 || iVar4 < (int)uVar8) {
                return 0;
              }
              if (uVar1 == 0) {
                return 1;
              }
              lVar6 = *(long *)(param_1 + 8);
              uVar10 = (ulong)*(uint *)(param_1 + 0x18);
              pTVar9 = this + 0x10;
              uVar11 = 0;
              do {
                if (uVar10 < (ulong)((long)pTVar9 - lVar6)) {
                  return 0;
                }
                if (uVar10 < (ulong)((long)pTVar9 - lVar6)) {
                  return 0;
                }
                lVar2 = (ulong)(ushort)(*(ushort *)(this + uVar11 * 8 + 0xe) << 8 |
                                       *(ushort *)(this + uVar11 * 8 + 0xe) >> 8) + param_2;
                lVar6 = *(long *)(param_1 + 8);
                uVar10 = (ulong)*(uint *)(param_1 + 0x18);
                if (uVar10 < (ulong)(lVar2 - lVar6)) {
                  return 0;
                }
                uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
                if ((uint)(*(int *)(param_1 + 0x10) - (int)lVar2) < uVar8 * 2) {
                  return 0;
                }
                iVar5 = *(int *)(param_1 + 0x1c) + uVar8 * -2;
                *(int *)(param_1 + 0x1c) = iVar5;
                if (iVar5 < 1) {
                  return 0;
                }
                uVar11 = uVar11 + 1;
                pTVar9 = pTVar9 + 8;
              } while (uVar7 != uVar11);
              uVar3 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
            }
          }
          return uVar3;
        }
      }
    }
  }
  return 0;
}


