// Function : sanitize
// Namespace: AAT:Lookup_OT__IntType_unsigned_int_4u__
// Entry    : 003f4fa0
// Prototype: ulong sanitize(Lookup<OT::IntType<unsigned_int,4u>> * this, long param_1)
// Body     : 003f4fa0 - 003f5333


/* AAT::Lookup<OT::IntType<unsigned int, 4u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
AAT::Lookup<OT::IntType<unsigned_int,4u>>::sanitize
          (Lookup<OT::IntType<unsigned_int,4u>> *this,long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar4;
  ushort uVar5;
  uint uVar6;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined8 in_R11;
  undefined7 uVar12;
  ulong uVar11;
  uint uVar13;
  
  if (this + (2 - *(long *)(param_1 + 8)) <=
      (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar12 = (undefined7)((ulong)in_R11 >> 8);
    uVar11 = CONCAT71(uVar12,1);
    switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
    case 0:
      lVar1 = (ulong)*(uint *)(param_1 + 0x38) * 4;
      uVar6 = (uint)lVar1;
      if ((((int)((ulong)lVar1 >> 0x20) == 0) &&
          ((ulong)((long)(this + 2) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
         && (uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 2)))) {
        iVar2 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar2;
LAB_003f528f:
        uVar11 = CONCAT71(uVar12,0 < iVar2);
        goto switchD_003f4fe8_caseD_1;
      }
      break;
    default:
      goto switchD_003f4fe8_caseD_1;
    case 2:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 7 < uVar5)) {
LAB_003f5250:
        pLVar4 = this + 0xc;
        if ((ulong)((long)pLVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar8 = *(ushort *)(this + 4);
          goto LAB_003f526e;
        }
      }
      break;
    case 4:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (((uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar5 &&
           (pLVar4 = this + 0xc,
           (ulong)((long)pLVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
                   (uint)uVar5, uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar4))))) {
        iVar9 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar9;
        iVar2 = 0;
        if (0 < iVar9) {
          uVar5 = *(ushort *)(this + 4);
          uVar6 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
          if ((uVar5 != 0) &&
             (uVar3 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar6 - 1)), *(short *)(this + uVar3 + 0xc) == -1))
          {
            iVar2 = -(uint)(*(short *)(this + uVar3 + 0xe) == -1);
          }
          if (iVar2 + uVar6 != 0) {
            uVar13 = 0;
            while( true ) {
              uVar10 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
              iVar9 = 0;
              if (uVar5 != 0) {
                uVar3 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                              *(ushort *)(this + 2) >> 8) * (uVar10 - 1));
                iVar9 = 0;
                if (*(short *)(this + uVar3 + 0xc) == -1) {
                  iVar9 = -(uint)(*(short *)(this + uVar3 + 0xe) == -1);
                }
              }
              pLVar7 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
              if (uVar13 < iVar9 + uVar10) {
                pLVar7 = pLVar4 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                                  * uVar13;
              }
              if ((Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
                  pLVar7 + (6 - *(long *)(param_1 + 8))) goto LAB_003f4fbb;
              uVar8 = *(ushort *)(pLVar7 + 2) << 8 | *(ushort *)(pLVar7 + 2) >> 8;
              uVar5 = *(ushort *)pLVar7 << 8 | *(ushort *)pLVar7 >> 8;
              if (((uVar5 < uVar8) ||
                  ((Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
                   pLVar7 + (6 - *(long *)(param_1 + 8)))) ||
                 ((lVar1 = (ulong)(((uint)uVar5 - (uint)uVar8) + 1) * 4, uVar10 = (uint)lVar1,
                  (int)((ulong)lVar1 >> 0x20) != 0 ||
                  ((((ulong)*(uint *)(param_1 + 0x18) <
                     (ulong)((long)(this + (ushort)(*(ushort *)(pLVar7 + 4) << 8 |
                                                   *(ushort *)(pLVar7 + 4) >> 8)) -
                            *(long *)(param_1 + 8)) ||
                    ((uint)(*(int *)(param_1 + 0x10) -
                           (int)(this + (ushort)(*(ushort *)(pLVar7 + 4) << 8 |
                                                *(ushort *)(pLVar7 + 4) >> 8))) < uVar10)) ||
                   (iVar9 = *(int *)(param_1 + 0x1c) - uVar10, *(int *)(param_1 + 0x1c) = iVar9,
                   iVar9 < 1)))))) goto LAB_003f4fbb;
              if ((iVar2 + uVar6) - 1 == uVar13) break;
              uVar5 = *(ushort *)(this + 4);
              uVar13 = uVar13 + 1;
            }
          }
          goto switchD_003f4fe8_caseD_1;
        }
      }
      break;
    case 6:
      if ((this + (0xc - *(long *)(param_1 + 8)) <=
           (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) &&
         (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar5))
      goto LAB_003f5250;
      break;
    case 8:
      if (((this + (6 - *(long *)(param_1 + 8)) <=
            (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) &&
          (this + 6 + -*(long *)(param_1 + 8) <=
           (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) * 4,
         uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 6)))) {
LAB_003f5285:
        iVar2 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar2;
        goto LAB_003f528f;
      }
      break;
    case 10:
      if (((this + (8 - *(long *)(param_1 + 8)) <=
            (Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18)) &&
          (uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar5 < 5)) &&
         (pLVar4 = this + 8,
         (ulong)((long)pLVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
        uVar8 = *(ushort *)(this + 6);
LAB_003f526e:
        uVar6 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8) * (uint)uVar5;
        if (uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar4)) goto LAB_003f5285;
      }
    }
  }
LAB_003f4fbb:
  uVar11 = 0;
switchD_003f4fe8_caseD_1:
  return uVar11 & 0xffffffff;
}


