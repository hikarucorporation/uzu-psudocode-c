// Function : get_class
// Namespace: OT:ClassDef
// Entry    : 0040a580
// Prototype: ushort get_class(ClassDef * this, uint param_1)
// Body     : 0040a580 - 0040a65a


/* OT::ClassDef::get_class(unsigned int) const */

ushort __thiscall OT::ClassDef::get_class(ClassDef *this,uint param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ClassDef *pCVar5;
  int iVar6;
  
  uVar2 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar2 == 2) {
    uVar2 = *(ushort *)(this + 2);
    pCVar5 = (ClassDef *)&_hb_Null_OT_RangeRecord;
    if (uVar2 != 0) {
      iVar6 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
      iVar3 = 0;
      do {
        while( true ) {
          uVar4 = (uint)(iVar6 + iVar3) >> 1;
          lVar1 = (ulong)uVar4 * 6;
          if (param_1 < (ushort)(*(ushort *)(this + lVar1 + 4) << 8 |
                                *(ushort *)(this + lVar1 + 4) >> 8)) break;
          if (param_1 <=
              (ushort)(*(ushort *)(this + lVar1 + 6) << 8 | *(ushort *)(this + lVar1 + 6) >> 8)) {
            pCVar5 = this + (ulong)uVar4 * 6 + 4;
            goto LAB_0040a642;
          }
          iVar3 = uVar4 + 1;
          if (iVar6 < iVar3) goto LAB_0040a642;
        }
        iVar6 = uVar4 - 1;
      } while (iVar3 <= iVar6);
    }
LAB_0040a642:
    pCVar5 = pCVar5 + 4;
  }
  else {
    if (uVar2 != 1) {
      return 0;
    }
    uVar4 = param_1 - (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if (uVar4 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)) {
      pCVar5 = this + (ulong)uVar4 * 2 + 6;
    }
    else {
      pCVar5 = (ClassDef *)&_hb_NullPool;
    }
  }
  return *(ushort *)pCVar5 << 8 | *(ushort *)pCVar5 >> 8;
}


