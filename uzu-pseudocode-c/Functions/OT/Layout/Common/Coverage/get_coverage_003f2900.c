// Function : get_coverage
// Namespace: OT:Layout:Common:Coverage
// Entry    : 003f2900
// Prototype: uint get_coverage(Coverage * this, uint param_1)
// Body     : 003f2900 - 003f2a26


/* OT::Layout::Common::Coverage::get_coverage(unsigned int) const */

uint __thiscall OT::Layout::Common::Coverage::get_coverage(Coverage *this,uint param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Coverage *pCVar7;
  
  uVar2 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar2 == 2) {
    uVar2 = *(ushort *)(this + 2);
    pCVar7 = (Coverage *)&_hb_Null_OT_RangeRecord;
    if (uVar2 != 0) {
      iVar6 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
      iVar4 = 0;
      do {
        while( true ) {
          uVar3 = (uint)(iVar6 + iVar4) >> 1;
          lVar1 = (ulong)uVar3 * 6;
          if (param_1 < (ushort)(*(ushort *)(this + lVar1 + 4) << 8 |
                                *(ushort *)(this + lVar1 + 4) >> 8)) break;
          if (param_1 <=
              (ushort)(*(ushort *)(this + lVar1 + 6) << 8 | *(ushort *)(this + lVar1 + 6) >> 8)) {
            pCVar7 = this + (ulong)uVar3 * 6 + 4;
            goto LAB_003f29f7;
          }
          iVar4 = uVar3 + 1;
          if (iVar6 < iVar4) goto LAB_003f29f7;
        }
        iVar6 = uVar3 - 1;
      } while (iVar4 <= iVar6);
    }
LAB_003f29f7:
    uVar2 = *(ushort *)pCVar7 << 8 | *(ushort *)pCVar7 >> 8;
    if (uVar2 <= (ushort)(*(ushort *)(pCVar7 + 2) << 8 | *(ushort *)(pCVar7 + 2) >> 8)) {
      return (param_1 - uVar2) +
             (uint)(ushort)(*(ushort *)(pCVar7 + 4) << 8 | *(ushort *)(pCVar7 + 4) >> 8);
    }
  }
  else if ((uVar2 == 1) && (uVar2 = *(ushort *)(this + 2), uVar2 != 0)) {
    iVar6 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
    iVar4 = 0;
    do {
      while( true ) {
        uVar3 = (uint)(iVar6 + iVar4) >> 1;
        uVar5 = (uint)(ushort)(*(ushort *)(this + (ulong)(iVar6 + iVar4 & 0xfffffffe) + 4) << 8 |
                              *(ushort *)(this + (ulong)(iVar6 + iVar4 & 0xfffffffe) + 4) >> 8);
        if (param_1 < uVar5) break;
        if (uVar5 == param_1) {
          return uVar3;
        }
        iVar4 = uVar3 + 1;
        if (iVar6 < iVar4) {
          return 0xffffffff;
        }
      }
      iVar6 = uVar3 - 1;
    } while (iVar4 <= iVar6);
  }
  return 0xffffffff;
}


