// Function : sanitize
// Namespace: AAT:ltag
// Entry    : 003da940
// Prototype: undefined8 sanitize(ltag * this, long param_1)
// Body     : 003da940 - 003daa52


/* AAT::ltag::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall AAT::ltag::sanitize(ltag *this,long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ltag *plVar7;
  
  plVar7 = this + 0xc;
  if ((((ulong)((long)plVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(int *)this != 0)) &&
     (this + (0xc - *(long *)(param_1 + 8)) <= (ltag *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar3 = *(uint *)(this + 8);
    lVar1 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 4;
    if ((((int)((ulong)lVar1 >> 0x20) == 0) &&
        ((ulong)((long)plVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       (((uint)lVar1 <= (uint)(*(int *)(param_1 + 0x10) - (int)plVar7) &&
        (iVar2 = *(int *)(param_1 + 0x1c) - (uint)lVar1, *(int *)(param_1 + 0x1c) = iVar2, 0 < iVar2
        )))) {
      uVar3 = *(uint *)(this + 8);
      if (uVar3 != 0) {
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar5 = 1;
        if (1 < uVar3) {
          uVar5 = (ulong)uVar3;
        }
        lVar6 = *(long *)(param_1 + 8);
        plVar7 = (ltag *)(ulong)*(uint *)(param_1 + 0x18);
        lVar4 = 0;
        do {
          if (plVar7 < this + ((lVar4 + 0x10) - lVar6)) {
            return 0;
          }
          lVar6 = *(long *)(param_1 + 8);
          plVar7 = (ltag *)(ulong)*(uint *)(param_1 + 0x18);
          if (plVar7 < this + (ushort)(*(ushort *)(this + lVar4 + 0xc) << 8 |
                                      *(ushort *)(this + lVar4 + 0xc) >> 8) + -lVar6) {
            return 0;
          }
          uVar3 = (uint)(ushort)(*(ushort *)(this + lVar4 + 0xe) << 8 |
                                *(ushort *)(this + lVar4 + 0xe) >> 8);
          if ((uint)(*(int *)(param_1 + 0x10) -
                    (int)(this + (ushort)(*(ushort *)(this + lVar4 + 0xc) << 8 |
                                         *(ushort *)(this + lVar4 + 0xc) >> 8))) < uVar3) {
            return 0;
          }
          iVar2 = *(int *)(param_1 + 0x1c) - uVar3;
          *(int *)(param_1 + 0x1c) = iVar2;
          if (iVar2 < 1) {
            return 0;
          }
          lVar4 = lVar4 + 4;
        } while (uVar5 * 4 != lVar4);
      }
      return CONCAT71((uint7)((ulong)lVar1 >> 8) & 0xffffff,1);
    }
  }
  return 0;
}


