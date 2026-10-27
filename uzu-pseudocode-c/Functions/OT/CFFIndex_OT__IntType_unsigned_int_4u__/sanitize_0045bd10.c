// Function : sanitize
// Namespace: OT:CFFIndex_OT__IntType_unsigned_int_4u__
// Entry    : 0045bd10
// Prototype: ulong sanitize(CFFIndex<OT::IntType<unsigned_int,4u>> * this, long param_1)
// Body     : 0045bd10 - 0045be3d


/* OT::CFFIndex<OT::IntType<unsigned int, 4u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize
          (CFFIndex<OT::IntType<unsigned_int,4u>> *this,long param_1)

{
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar1;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar2;
  CFFIndex<OT::IntType<unsigned_int,4u>> CVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar9;
  int iVar10;
  int iVar11;
  
  pCVar1 = this + 4;
  uVar7 = (long)pCVar1 - *(long *)(param_1 + 8);
  if (uVar7 <= *(uint *)(param_1 + 0x18)) {
    uVar6 = *(uint *)this;
    if (uVar6 == 0) {
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
    if (uVar6 != 0xffffffff) {
      lVar4 = *(long *)(param_1 + 8);
      pCVar9 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18);
      if ((pCVar1 + (1 - lVar4) <= pCVar9) && (CVar3 = *pCVar1, (byte)((char)CVar3 - 1U) < 4)) {
        uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        lVar5 = (ulong)(uint)(byte)CVar3 * (ulong)(uVar8 + 1);
        uVar6 = (uint)lVar5;
        if (((int)((ulong)lVar5 >> 0x20) == 0) &&
           ((pCVar2 = this + 5, pCVar2 + -lVar4 <= pCVar9 &&
            (iVar10 = (int)*(undefined8 *)(param_1 + 0x10), uVar6 <= (uint)(iVar10 - (int)pCVar2))))
           ) {
          iVar11 = *(int *)(param_1 + 0x1c) - uVar6;
          *(int *)(param_1 + 0x1c) = iVar11;
          uVar6 = 0;
          if (0 < iVar11) {
            switch(CVar3) {
            case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x1:
              uVar6 = (uint)(byte)this[(ulong)uVar8 + 5];
              break;
            case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2:
              uVar6 = (uint)(ushort)(*(ushort *)(pCVar2 + (ulong)uVar8 * 2) << 8 |
                                    *(ushort *)(pCVar2 + (ulong)uVar8 * 2) >> 8);
              break;
            case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3:
              lVar5 = (ulong)uVar8 * 3;
              uVar6 = (uint)(byte)this[lVar5 + 7] |
                      (uint)(byte)this[lVar5 + 6] << 8 | (uint)(byte)pCVar2[lVar5] << 0x10;
              break;
            case (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4:
              uVar6 = *(uint *)(pCVar2 + (ulong)uVar8 * 4);
              uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
            }
            if (pCVar9 < pCVar1 + (uVar8 + 1) * (uint)(byte)CVar3 + -lVar4) {
              return 0;
            }
            if ((uint)(iVar10 - (int)(pCVar1 + (uVar8 + 1) * (uint)(byte)CVar3)) < uVar6) {
              return 0;
            }
            *(uint *)(param_1 + 0x1c) = iVar11 - uVar6;
            return (ulong)(0 < (int)(iVar11 - uVar6));
          }
        }
      }
    }
  }
  return 0;
}


