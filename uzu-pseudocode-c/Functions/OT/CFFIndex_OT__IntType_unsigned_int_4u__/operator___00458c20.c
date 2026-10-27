// Function : operator[]
// Namespace: OT:CFFIndex_OT__IntType_unsigned_int_4u__
// Entry    : 00458c20
// Prototype: undefined1[16] operator[](CFFIndex<OT::IntType<unsigned_int,4u>> * this, uint param_1)
// Body     : 00458c20 - 00458d74


/* OT::CFFIndex<OT::IntType<unsigned int, 4u> >::operator[](unsigned int) const */

undefined1  [16] __thiscall
OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
          (CFFIndex<OT::IntType<unsigned_int,4u>> *this,uint param_1)

{
  CFFIndex<OT::IntType<unsigned_int,4u>> CVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(uint *)this;
  uVar3 = 0;
  if ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) <= param_1)
  goto LAB_00458d72;
  CVar1 = this[4];
  uVar6 = 0;
  switch(CVar1) {
  case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x1:
    uVar6 = (uint)(byte)this[(ulong)param_1 + 5];
    uVar3 = (uint)(byte)this[(ulong)param_1 + 6];
    break;
  case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2:
    uVar6 = (uint)(ushort)(*(ushort *)(this + (ulong)param_1 * 2 + 5) << 8 |
                          *(ushort *)(this + (ulong)param_1 * 2 + 5) >> 8);
    uVar3 = (uint)(ushort)(*(ushort *)(this + (ulong)param_1 * 2 + 7) << 8 |
                          *(ushort *)(this + (ulong)param_1 * 2 + 7) >> 8);
    break;
  case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3:
    lVar2 = (ulong)param_1 * 3;
    uVar6 = (uint)(byte)this[lVar2 + 7] |
            (uint)(byte)this[lVar2 + 6] << 8 | (uint)(byte)this[lVar2 + 5] << 0x10;
    lVar2 = (ulong)(param_1 + 1) * 3;
    uVar3 = (uint)(byte)this[lVar2 + 7] |
            (uint)(byte)this[lVar2 + 6] << 8 | (uint)(byte)this[lVar2 + 5] << 0x10;
    break;
  case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4:
    uVar6 = *(uint *)(this + (ulong)param_1 * 4 + 5);
    uVar3 = *(uint *)(this + (ulong)param_1 * 4 + 9);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    break;
  default:
    goto switchD_00458c5b_default;
  }
  if (uVar6 <= uVar3) {
switchD_00458c5b_default:
    uVar5 = *(uint *)this;
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    switch(CVar1) {
    case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x1:
      uVar4 = (uint)(byte)this[(ulong)uVar5 + 5];
      break;
    case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2:
      uVar4 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar5 * 2 + 5) << 8 |
                            *(ushort *)(this + (ulong)uVar5 * 2 + 5) >> 8);
      break;
    case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3:
      lVar2 = (ulong)uVar5 * 3;
      uVar4 = (uint)(byte)this[lVar2 + 7] |
              (uint)(byte)this[lVar2 + 6] << 8 | (uint)(byte)this[lVar2 + 5] << 0x10;
      break;
    case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4:
      uVar4 = *(uint *)(this + (ulong)uVar5 * 4 + 5);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      break;
    default:
      uVar4 = 0;
    }
    if (uVar3 <= uVar4) {
      auVar7._0_8_ = this + (ulong)uVar6 + (ulong)((uVar5 + 1) * (uint)(byte)CVar1) + 4;
      auVar7._8_4_ = uVar3 - uVar6;
      auVar7._12_4_ = 0;
      return auVar7;
    }
  }
LAB_00458d72:
  return ZEXT816(0);
}


