// Function : sanitize
// Namespace: OT:RecordListOf_OT__Feature_
// Entry    : 003d47d0
// Prototype: undefined8 sanitize(RecordListOf<OT::Feature> * this, long param_1)
// Body     : 003d47d0 - 003d48ee


/* OT::RecordListOf<OT::Feature>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::RecordListOf<OT::Feature>::sanitize(RecordListOf<OT::Feature> *this,long param_1)

{
  RecordListOf<OT::Feature> *pRVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  uint local_40 [2];
  RecordListOf<OT::Feature> *local_38;
  
  pRVar1 = this + 2;
  if (((ulong)((long)pRVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     ((ulong)((long)pRVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar2 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
    uVar3 = uVar2 * 6;
    if ((uVar3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar1)) &&
       (iVar6 = *(int *)(param_1 + 0x1c) + uVar2 * -6, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6))
    {
      uVar5 = *(ushort *)this;
      if (uVar5 == 0) {
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
      uVar7 = uVar5 << 8 | uVar5 >> 8;
      uVar5 = 1;
      if (1 < uVar7) {
        uVar5 = uVar7;
      }
      lVar8 = 0;
      do {
        uVar3 = *(uint *)(this + lVar8 + 2);
        local_40[0] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18;
        if ((RecordListOf<OT::Feature> *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((lVar8 + 8) - *(long *)(param_1 + 8))) {
          return 0;
        }
        if ((RecordListOf<OT::Feature> *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((lVar8 + 8) - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar7 = *(ushort *)(this + lVar8 + 6);
        uVar4 = (ulong)uVar7;
        if ((uVar7 != 0) &&
           (local_38 = this,
           uVar4 = Feature::sanitize((Feature *)(this + (ushort)(uVar7 << 8 | uVar7 >> 8)),param_1,
                                     local_40), (char)uVar4 == '\0')) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          uVar3 = *(uint *)(param_1 + 0x2c) + 1;
          uVar4 = (ulong)uVar3;
          *(uint *)(param_1 + 0x2c) = uVar3;
          if (*(char *)(param_1 + 0x28) == '\0') {
            return 0;
          }
          *(undefined2 *)(this + lVar8 + 6) = 0;
        }
        lVar8 = lVar8 + 6;
        if ((ulong)uVar5 * 6 == lVar8) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      } while( true );
    }
  }
  return 0;
}


