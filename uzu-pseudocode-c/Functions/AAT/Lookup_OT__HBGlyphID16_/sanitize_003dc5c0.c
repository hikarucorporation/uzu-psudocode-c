// Function : sanitize
// Namespace: AAT:Lookup_OT__HBGlyphID16_
// Entry    : 003dc5c0
// Prototype: ulong sanitize(Lookup<OT::HBGlyphID16> * this, long param_1)
// Body     : 003dc5c0 - 003dc93f


/* AAT::Lookup<OT::HBGlyphID16>::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall AAT::Lookup<OT::HBGlyphID16>::sanitize(Lookup<OT::HBGlyphID16> *this,long param_1)

{
  ulong uVar1;
  Lookup<OT::HBGlyphID16> *pLVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  Lookup<OT::HBGlyphID16> *pLVar11;
  
  if (this + (2 - *(long *)(param_1 + 8)) <=
      (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = CONCAT71((int7)((ulong)(this + (2 - *(long *)(param_1 + 8))) >> 8),1);
    switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
    case 0:
      uVar6 = *(uint *)(param_1 + 0x38);
      uVar9 = uVar6 * 2;
      if (((!CARRY4(uVar6,uVar6)) &&
          ((ulong)((long)(this + 2) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
         && (uVar9 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 2)))) {
        uVar6 = *(int *)(param_1 + 0x1c) + uVar6 * -2;
        *(uint *)(param_1 + 0x1c) = uVar6;
        goto LAB_003dc8a2;
      }
      break;
    default:
      goto switchD_003dc604_caseD_1;
    case 2:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar5)) {
LAB_003dc863:
        pLVar2 = this + 0xc;
        if ((ulong)((long)pLVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar3 = *(ushort *)(this + 4);
          goto LAB_003dc881;
        }
      }
      break;
    case 4:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (((uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar5 &&
           (pLVar2 = this + 0xc,
           (ulong)((long)pLVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
                   (uint)uVar5, uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar2))))) {
        iVar10 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar10;
        iVar8 = 0;
        if (0 < iVar10) {
          uVar5 = *(ushort *)(this + 4);
          uVar3 = uVar5 << 8 | uVar5 >> 8;
          if ((uVar5 != 0) &&
             (uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar3 - 1)), *(short *)(this + uVar7 + 0xc) == -1))
          {
            iVar8 = -(uint)(*(short *)(this + uVar7 + 0xe) == -1);
          }
          if (iVar8 + (uint)uVar3 == 0) {
            return uVar1;
          }
          uVar6 = 0;
          while( true ) {
            uVar4 = uVar5 << 8 | uVar5 >> 8;
            iVar10 = 0;
            if (uVar5 != 0) {
              uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar4 - 1));
              iVar10 = 0;
              if (*(short *)(this + uVar7 + 0xc) == -1) {
                iVar10 = -(uint)(*(short *)(this + uVar7 + 0xe) == -1);
              }
            }
            pLVar11 = (Lookup<OT::HBGlyphID16> *)&_hb_NullPool;
            if (uVar6 < iVar10 + (uint)uVar4) {
              pLVar11 = pLVar2 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                                 uVar6;
            }
            if ((Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
                pLVar11 + (6 - *(long *)(param_1 + 8))) break;
            uVar4 = *(ushort *)(pLVar11 + 2) << 8 | *(ushort *)(pLVar11 + 2) >> 8;
            uVar5 = *(ushort *)pLVar11 << 8 | *(ushort *)pLVar11 >> 8;
            if ((uVar5 < uVar4) ||
               ((Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
                pLVar11 + (6 - *(long *)(param_1 + 8)))) break;
            uVar9 = ((uint)uVar5 - (uint)uVar4) + 1;
            if ((CARRY4(uVar9,uVar9)) ||
               ((((ulong)*(uint *)(param_1 + 0x18) <
                  (ulong)((long)(this + (ushort)(*(ushort *)(pLVar11 + 4) << 8 |
                                                *(ushort *)(pLVar11 + 4) >> 8)) -
                         *(long *)(param_1 + 8)) ||
                 ((uint)(*(int *)(param_1 + 0x10) -
                        (int)(this + (ushort)(*(ushort *)(pLVar11 + 4) << 8 |
                                             *(ushort *)(pLVar11 + 4) >> 8))) < uVar9 * 2)) ||
                (iVar10 = *(int *)(param_1 + 0x1c) + uVar9 * -2, *(int *)(param_1 + 0x1c) = iVar10,
                iVar10 < 1)))) break;
            if (((uint)uVar3 + iVar8) - 1 == uVar6) {
              return uVar1;
            }
            uVar5 = *(ushort *)(this + 4);
            uVar6 = uVar6 + 1;
          }
        }
      }
      break;
    case 6:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 3 < uVar5))
      goto LAB_003dc863;
      break;
    case 8:
      if (((this + (6 - *(long *)(param_1 + 8)) <=
            (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) &&
          (this + 6 + -*(long *)(param_1 + 8) <=
           (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) * 2,
         uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 6)))) {
LAB_003dc898:
        uVar6 = *(int *)(param_1 + 0x1c) - uVar6;
        *(uint *)(param_1 + 0x1c) = uVar6;
        uVar9 = uVar6;
LAB_003dc8a2:
        return (ulong)CONCAT31((int3)(uVar9 >> 8),0 < (int)uVar6);
      }
      break;
    case 10:
      if (((this + (8 - *(long *)(param_1 + 8)) <=
            (Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18)) &&
          (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar5 < 5)) &&
         (pLVar2 = this + 8,
         (ulong)((long)pLVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
        uVar3 = *(ushort *)(this + 6);
LAB_003dc881:
        uVar6 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * (uint)uVar5;
        if (uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar2)) goto LAB_003dc898;
      }
    }
  }
  uVar1 = 0;
switchD_003dc604_caseD_1:
  return uVar1;
}


