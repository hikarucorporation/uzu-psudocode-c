// Function : get_value
// Namespace: AAT:Lookup_OT__IntType_unsigned_short_2u__
// Entry    : 003eae10
// Prototype: Lookup<OT::IntType<unsigned_short,2u>> * get_value(Lookup<OT::IntType<unsigned_short,2u>> * this, uint param_1, uint param_2)
// Body     : 003eae10 - 003eb16c


/* AAT::Lookup<OT::IntType<unsigned short, 2u> >::get_value(unsigned int, unsigned int) const */

Lookup<OT::IntType<unsigned_short,2u>> * __thiscall
AAT::Lookup<OT::IntType<unsigned_short,2u>>::get_value
          (Lookup<OT::IntType<unsigned_short,2u>> *this,uint param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar10;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    if (param_1 < param_2) {
      return this + (ulong)param_1 * 2 + 2;
    }
    break;
  default:
    goto switchD_003eae35_caseD_1;
  case 2:
    uVar7 = *(ushort *)(this + 4);
    uVar4 = uVar7 << 8 | uVar7 >> 8;
    uVar9 = (uint)uVar4;
    if (uVar7 == 0) {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      if (uVar9 == 0) goto LAB_003eb0af;
    }
    else {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      uVar6 = (ulong)((uVar4 - 1) * (uint)uVar7);
      iVar1 = 0;
      if (*(short *)(this + uVar6 + 0xc) == -1) {
        iVar1 = -(uint)(*(short *)(this + uVar6 + 0xe) == -1);
      }
      pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      uVar9 = iVar1 + uVar9;
      if (uVar9 == 0 || SCARRY4(iVar1,(uint)uVar4) != (int)uVar9 < 0) goto LAB_003eb0af;
    }
    pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
    iVar1 = uVar9 - 1;
    iVar5 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar1 + iVar5) >> 1;
        if (param_1 < (ushort)(*(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xe) << 8 |
                              *(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xe) >> 8)) break;
        if (param_1 <=
            (ushort)(*(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xc) << 8 |
                    *(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xc) >> 8)) {
          pLVar10 = this + (ulong)(uVar9 * uVar7) + 0xc;
          goto LAB_003eb0af;
        }
        iVar5 = uVar9 + 1;
        if (iVar1 < iVar5) goto LAB_003eb0af;
      }
      iVar1 = uVar9 - 1;
    } while (iVar5 <= iVar1);
LAB_003eb0af:
    pLVar3 = pLVar10 + 4;
    if (pLVar10 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
      pLVar3 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
    }
    return pLVar3;
  case 4:
    uVar7 = *(ushort *)(this + 4);
    uVar4 = uVar7 << 8 | uVar7 >> 8;
    uVar9 = (uint)uVar4;
    if (uVar7 == 0) {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      uVar6 = (ulong)uVar7;
joined_r0x003eb143:
      if (uVar9 == 0) {
        return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      }
    }
    else {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      uVar6 = (ulong)uVar7;
      uVar2 = (ulong)((uVar4 - 1) * (uint)uVar7);
      if (*(short *)(this + uVar2 + 0xc) != -1) goto joined_r0x003eb143;
      uVar9 = -(uint)(*(short *)(this + uVar2 + 0xe) == -1) + (uint)uVar4;
      if (uVar9 == 0 ||
          SCARRY4(-(uint)(*(short *)(this + uVar2 + 0xe) == -1),(uint)uVar4) != (int)uVar9 < 0) {
        return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      }
    }
    iVar1 = uVar9 - 1;
    iVar5 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar1 + iVar5) >> 1;
        if (param_1 < (ushort)(*(ushort *)(this + uVar6 * uVar9 + 0xe) << 8 |
                              *(ushort *)(this + uVar6 * uVar9 + 0xe) >> 8)) break;
        if (param_1 <=
            (ushort)(*(ushort *)(this + uVar6 * uVar9 + 0xc) << 8 |
                    *(ushort *)(this + uVar6 * uVar9 + 0xc) >> 8)) {
          uVar6 = (ulong)(uVar9 * uVar7);
          uVar9 = (uint)(ushort)(*(ushort *)(this + uVar6 + 0xe) << 8 |
                                *(ushort *)(this + uVar6 + 0xe) >> 8);
          if (param_1 < uVar9) {
            return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
          }
          if ((ushort)(*(ushort *)(this + uVar6 + 0xc) << 8 | *(ushort *)(this + uVar6 + 0xc) >> 8)
              < param_1) {
            return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
          }
          return this + (ulong)(param_1 - uVar9) * 2 +
                        (ulong)(ushort)(*(ushort *)(this + uVar6 + 0x10) << 8 |
                                       *(ushort *)(this + uVar6 + 0x10) >> 8);
        }
        iVar5 = uVar9 + 1;
        if (iVar1 < iVar5) {
          return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
        }
      }
      iVar1 = uVar9 - 1;
    } while (iVar5 <= iVar1);
switchD_003eae35_caseD_1:
    return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
  case 6:
    uVar7 = *(ushort *)(this + 4);
    uVar4 = uVar7 << 8 | uVar7 >> 8;
    uVar9 = (uint)uVar4;
    if (uVar7 == 0) {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      if (uVar9 == 0) goto LAB_003eb0c6;
    }
    else {
      uVar7 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      uVar9 = -(uint)(*(short *)(this + (ulong)((uVar4 - 1) * (uint)uVar7) + 0xc) == -1) + uVar9;
      if (uVar9 == 0 ||
          SCARRY4(-(uint)(*(short *)(this + (ulong)((uVar4 - 1) * (uint)uVar7) + 0xc) == -1),
                  (uint)uVar4) != (int)uVar9 < 0) goto LAB_003eb0c6;
    }
    pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
    iVar1 = uVar9 - 1;
    iVar5 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar1 + iVar5) >> 1;
        uVar8 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xc) << 8 |
                              *(ushort *)(this + (ulong)uVar7 * (ulong)uVar9 + 0xc) >> 8);
        if (param_1 < uVar8) break;
        if (uVar8 == param_1) {
          pLVar10 = this + (ulong)(uVar9 * uVar7) + 0xc;
          goto LAB_003eb0c6;
        }
        iVar5 = uVar9 + 1;
        if (iVar1 < iVar5) goto LAB_003eb0c6;
      }
      iVar1 = uVar9 - 1;
    } while (iVar5 <= iVar1);
LAB_003eb0c6:
    pLVar3 = pLVar10 + 2;
    if (pLVar10 == (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
      pLVar3 = (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
    }
    return pLVar3;
  case 8:
    uVar9 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uVar9 <= param_1) &&
       (uVar9 = param_1 - uVar9,
       uVar9 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8))) {
      return this + (ulong)uVar9 * 2 + 6;
    }
  }
  return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
}


