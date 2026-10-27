// Function : operator[]
// Namespace: OT:CFFIndex_OT__IntType_unsigned_short_2u__
// Entry    : 0044a6a0
// Prototype: undefined1[16] operator[](CFFIndex<OT::IntType<unsigned_short,2u>> * this, uint param_1)
// Body     : 0044a6a0 - 0044a7f9


/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::operator[](unsigned int) const */

undefined1  [16] __thiscall
OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
          (CFFIndex<OT::IntType<unsigned_short,2u>> *this,uint param_1)

{
  CFFIndex<OT::IntType<unsigned_short,2u>> CVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = 0;
  if ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) <= param_1) goto LAB_0044a7f7;
  CVar1 = this[2];
  uVar6 = 0;
  switch(CVar1) {
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1:
    uVar6 = (uint)(byte)this[(ulong)param_1 + 3];
    uVar3 = (uint)(byte)this[(ulong)param_1 + 4];
    break;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2:
    uVar6 = (uint)(ushort)(*(ushort *)(this + (ulong)param_1 * 2 + 3) << 8 |
                          *(ushort *)(this + (ulong)param_1 * 2 + 3) >> 8);
    uVar3 = (uint)(ushort)(*(ushort *)(this + (ulong)param_1 * 2 + 5) << 8 |
                          *(ushort *)(this + (ulong)param_1 * 2 + 5) >> 8);
    break;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3:
    lVar2 = (ulong)param_1 * 3;
    uVar6 = (uint)(byte)this[lVar2 + 5] |
            (uint)(byte)this[lVar2 + 4] << 8 | (uint)(byte)this[lVar2 + 3] << 0x10;
    lVar2 = (ulong)(param_1 + 1) * 3;
    uVar3 = (uint)(byte)this[lVar2 + 5] |
            (uint)(byte)this[lVar2 + 4] << 8 | (uint)(byte)this[lVar2 + 3] << 0x10;
    break;
  case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4:
    uVar3 = *(uint *)(this + (ulong)param_1 * 4 + 3);
    uVar4 = *(uint *)(this + (ulong)param_1 * 4 + 7);
    uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    break;
  default:
    goto switchD_0044a6e1_default;
  }
  if (uVar6 <= uVar3) {
switchD_0044a6e1_default:
    uVar5 = (ulong)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
    switch(CVar1) {
    case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1:
      uVar4 = (uint)(byte)this[uVar5 + 3];
      break;
    case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2:
      uVar4 = (uint)(ushort)(*(ushort *)(this + uVar5 * 2 + 3) << 8 |
                            *(ushort *)(this + uVar5 * 2 + 3) >> 8);
      break;
    case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3:
      lVar2 = uVar5 * 3;
      uVar4 = (uint)(byte)this[lVar2 + 5] |
              (uint)(byte)this[lVar2 + 4] << 8 | (uint)(byte)this[lVar2 + 3] << 0x10;
      break;
    case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4:
      uVar4 = *(uint *)(this + uVar5 * 4 + 3);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      break;
    default:
      uVar4 = 0;
    }
    if (uVar3 <= uVar4) {
      auVar7._0_8_ = this + (ulong)uVar6 + (uVar5 + 1) * (ulong)(byte)CVar1 + 2;
      auVar7._8_4_ = uVar3 - uVar6;
      auVar7._12_4_ = 0;
      return auVar7;
    }
  }
LAB_0044a7f7:
  return ZEXT816(0);
}


