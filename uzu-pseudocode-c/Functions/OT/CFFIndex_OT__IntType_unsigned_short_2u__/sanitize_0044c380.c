// Function : sanitize
// Namespace: OT:CFFIndex_OT__IntType_unsigned_short_2u__
// Entry    : 0044c380
// Prototype: ulong sanitize(CFFIndex<OT::IntType<unsigned_short,2u>> * this, long param_1)
// Body     : 0044c380 - 0044c4a4


/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
          (CFFIndex<OT::IntType<unsigned_short,2u>> *this,long param_1)

{
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar1;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar2;
  CFFIndex<OT::IntType<unsigned_short,2u>> CVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  pCVar1 = this + 2;
  uVar6 = (long)pCVar1 - *(long *)(param_1 + 8);
  if (uVar6 <= *(uint *)(param_1 + 0x18)) {
    uVar8 = *(ushort *)this;
    if (uVar8 == 0) {
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    lVar4 = *(long *)(param_1 + 8);
    pCVar7 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18);
    if (pCVar1 + (1 - lVar4) <= pCVar7) {
      CVar3 = *pCVar1;
      if (((byte)((char)CVar3 - 1U) < 4) && (pCVar2 = this + 3, pCVar2 + -lVar4 <= pCVar7)) {
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        uVar6 = (ulong)uVar8;
        uVar9 = (uVar8 + 1) * (uint)(byte)CVar3;
        iVar10 = (int)*(undefined8 *)(param_1 + 0x10);
        if (uVar9 <= (uint)(iVar10 - (int)pCVar2)) {
          iVar11 = *(int *)(param_1 + 0x1c) - uVar9;
          *(int *)(param_1 + 0x1c) = iVar11;
          uVar9 = 0;
          if (0 < iVar11) {
            switch(CVar3) {
            case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1:
              uVar9 = (uint)(byte)this[uVar6 + 3];
              break;
            case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2:
              uVar9 = (uint)(ushort)(*(ushort *)(pCVar2 + uVar6 * 2) << 8 |
                                    *(ushort *)(pCVar2 + uVar6 * 2) >> 8);
              break;
            case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3:
              lVar5 = uVar6 * 3;
              uVar9 = (uint)(byte)this[lVar5 + 5] |
                      (uint)(byte)this[lVar5 + 4] << 8 | (uint)(byte)pCVar2[lVar5] << 0x10;
              break;
            case (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4:
              uVar9 = *(uint *)(pCVar2 + uVar6 * 4);
              uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
            }
            if ((pCVar1 + (uVar6 + 1) * (ulong)(byte)CVar3 + -lVar4 <= pCVar7) &&
               (uVar9 <= (uint)(iVar10 - (int)(pCVar1 + (uVar6 + 1) * (ulong)(byte)CVar3)))) {
              *(uint *)(param_1 + 0x1c) = iVar11 - uVar9;
              return (ulong)(0 < (int)(iVar11 - uVar9));
            }
          }
        }
      }
    }
  }
  return 0;
}


