// Function : get_size
// Namespace: OT:CFFIndex_OT__IntType_unsigned_short_2u__
// Entry    : 0044c820
// Prototype: int get_size(CFFIndex<OT::IntType<unsigned_short,2u>> * this)
// Body     : 0044c820 - 0044c8b5


/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::get_size() const */

int __thiscall
OT::CFFIndex<OT::IntType<unsigned_short,2u>>::get_size
          (CFFIndex<OT::IntType<unsigned_short,2u>> *this)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = *(ushort *)this;
  if (uVar3 == 0) {
    return 2;
  }
  uVar3 = uVar3 << 8 | uVar3 >> 8;
  uVar5 = (ulong)uVar3;
  iVar4 = (uVar3 + 1) * (uint)(byte)this[2];
  switch(this[2]) {
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1:
    return iVar4 + (uint)(byte)this[uVar5 + 3] + 2;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2:
    return iVar4 + (uint)(ushort)(*(ushort *)(this + uVar5 * 2 + 3) << 8 |
                                 *(ushort *)(this + uVar5 * 2 + 3) >> 8) + 2;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3:
    lVar2 = uVar5 * 3;
    return iVar4 + ((uint)(byte)this[lVar2 + 5] |
                   (uint)(byte)this[lVar2 + 4] << 8 | (uint)(byte)this[lVar2 + 3] << 0x10) + 2;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4:
    uVar1 = *(uint *)(this + uVar5 * 4 + 3);
    return iVar4 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
           + 2;
  default:
    return iVar4 + 2;
  }
}


