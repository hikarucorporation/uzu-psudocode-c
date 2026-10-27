// Function : sanitize
// Namespace: AAT:Lookup_OT__OffsetTo_OT__ArrayOf_AAT__Anchor_OT__IntType_unsigned_int_4u___OT__IntType_unsi~e6e8a1e5
// Entry    : 003f3110
// Prototype: ulong sanitize(Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>> * this, long param_1, long param_2)
// Body     : 003f3110 - 003f399f


/* AAT::Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor, OT::IntType<unsigned int, 4u> >,
   OT::IntType<unsigned short, 2u>, void, false> >::sanitize(hb_sanitize_context_t*, void const*)
   const */

ulong __thiscall
AAT::
Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
::sanitize(Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *this,long param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar16;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar17;
  long lVar18;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar19;
  ulong in_R10;
  ulong uVar20;
  
  pLVar19 = this + 2;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar19 - *(long *)(param_1 + 8)))
  goto LAB_003f312d;
  uVar3 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar3 < 0xb) {
    plVar1 = (long *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    in_R10 = 0;
    switch(uVar3) {
    case 0:
      uVar6 = *(uint *)(param_1 + 0x38);
      if (((!CARRY4(uVar6,uVar6)) && ((ulong)((long)pLVar19 - *plVar1) <= (ulong)*puVar2)) &&
         ((uVar6 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar19) &&
          (iVar10 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar10,
          0 < iVar10)))) {
        in_R10 = 1;
        if ((ulong)uVar6 != 0) {
          lVar15 = *plVar1;
          pLVar19 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                     *)(ulong)*puVar2;
          lVar18 = 0;
          do {
            if (pLVar19 < this + ((lVar18 + 4) - lVar15)) goto LAB_003f312d;
            uVar7 = (ulong)(ushort)(*(ushort *)(this + lVar18 + 2) << 8 |
                                   *(ushort *)(this + lVar18 + 2) >> 8);
            lVar11 = uVar7 + param_2 + 4;
            if ((ulong)*puVar2 < (ulong)(lVar11 - *plVar1)) goto LAB_003f312d;
            uVar5 = *(uint *)(uVar7 + param_2);
            lVar15 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18) * 4;
            uVar5 = (uint)lVar15;
            if ((int)((ulong)lVar15 >> 0x20) != 0) goto LAB_003f312d;
            lVar15 = *plVar1;
            pLVar19 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       *)(ulong)*puVar2;
            if (((pLVar19 < (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             *)(lVar11 - lVar15)) ||
                ((uint)(*(int *)(param_1 + 0x10) - (int)lVar11) < uVar5)) ||
               (iVar10 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar10,
               iVar10 < 1)) goto LAB_003f312d;
            lVar18 = lVar18 + 2;
          } while ((ulong)uVar6 * 2 != lVar18);
        }
        goto switchD_003f3170_caseD_a;
      }
      break;
    default:
      goto switchD_003f3170_caseD_1;
    case 2:
      if (((this + (0xc - *plVar1) <=
            (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
             *)(ulong)*puVar2) &&
          (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar3)) &&
         ((pLVar19 = this + 0xc, (ulong)((long)pLVar19 - *plVar1) <= (ulong)*puVar2 &&
          (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
                   (uint)uVar3, uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar19))))) {
        iVar10 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar10;
        in_R10 = 0;
        if (iVar10 < 1) goto switchD_003f3170_caseD_a;
        uVar3 = *(ushort *)(this + 4);
        uVar9 = uVar3 << 8 | uVar3 >> 8;
        if ((uVar3 != 0) &&
           (uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                           * (uVar9 - 1)), *(short *)(this + uVar7 + 0xc) == -1)) {
          in_R10 = (ulong)-(uint)(*(short *)(this + uVar7 + 0xe) == -1);
        }
        iVar10 = (int)in_R10;
        if (iVar10 + (uint)uVar9 != 0) {
          uVar6 = 0;
          while( true ) {
            uVar12 = uVar3 << 8 | uVar3 >> 8;
            iVar14 = 0;
            if (uVar3 != 0) {
              uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar12 - 1));
              iVar14 = 0;
              if (*(short *)(this + uVar7 + 0xc) == -1) {
                iVar14 = -(uint)(*(short *)(this + uVar7 + 0xe) == -1);
              }
            }
            pLVar8 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                      *)&_hb_NullPool;
            if (uVar6 < iVar14 + (uint)uVar12) {
              pLVar8 = pLVar19 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                                 uVar6;
            }
            in_R10 = 0;
            if (((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                  *)(ulong)*puVar2 < pLVar8 + (6 - *plVar1)) ||
               ((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                 *)(ulong)*puVar2 < pLVar8 + (6 - *plVar1))) goto switchD_003f3170_caseD_a;
            uVar7 = (ulong)(ushort)(*(ushort *)(pLVar8 + 4) << 8 | *(ushort *)(pLVar8 + 4) >> 8);
            lVar15 = uVar7 + param_2 + 4;
            if ((ulong)*puVar2 < (ulong)(lVar15 - *plVar1)) goto LAB_003f312d;
            uVar5 = *(uint *)(uVar7 + param_2);
            lVar18 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18) * 4;
            uVar5 = (uint)lVar18;
            if (((((int)((ulong)lVar18 >> 0x20) != 0) ||
                 ((ulong)*puVar2 < (ulong)(lVar15 - *plVar1))) ||
                ((uint)(*(int *)(param_1 + 0x10) - (int)lVar15) < uVar5)) ||
               (iVar14 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar14,
               iVar14 < 1)) goto LAB_003f312d;
            if ((iVar10 + (uint)uVar9) - 1 == uVar6) break;
            uVar3 = *(ushort *)(this + 4);
            uVar6 = uVar6 + 1;
          }
        }
        goto switchD_003f3170_caseD_1;
      }
      break;
    case 4:
      if (((this + (0xc - *plVar1) <=
            (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
             *)(ulong)*puVar2) &&
          (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 5 < uVar3)) &&
         ((pLVar8 = this + 0xc, (ulong)((long)pLVar8 - *plVar1) <= (ulong)*puVar2 &&
          (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
                   (uint)uVar3, uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar8))))) {
        iVar10 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar10;
        iVar14 = 0;
        if (0 < iVar10) {
          uVar3 = *(ushort *)(this + 4);
          uVar9 = uVar3 << 8 | uVar3 >> 8;
          if ((uVar3 != 0) &&
             (uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar9 - 1)), *(short *)(this + uVar7 + 0xc) == -1))
          {
            iVar14 = -(uint)(*(short *)(this + uVar7 + 0xe) == -1);
          }
          in_R10 = 1;
          uVar6 = iVar14 + (uint)uVar9;
          if (uVar6 != 0) {
            uVar5 = 0;
            while( true ) {
              pLVar16 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                         *)&_hb_NullPool;
              uVar9 = uVar3 << 8 | uVar3 >> 8;
              iVar10 = 0;
              if (uVar3 != 0) {
                uVar7 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                              *(ushort *)(this + 2) >> 8) * (uVar9 - 1));
                iVar10 = 0;
                if (*(short *)(this + uVar7 + 0xc) == -1) {
                  iVar10 = -(uint)(*(short *)(this + uVar7 + 0xe) == -1);
                }
              }
              if (uVar5 < iVar10 + (uint)uVar9) {
                pLVar16 = pLVar8 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                                   * uVar5;
              }
              if ((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                   *)(ulong)*puVar2 < pLVar16 + (6 - *plVar1)) goto LAB_003f312d;
              uVar3 = *(ushort *)(pLVar16 + 2) << 8 | *(ushort *)(pLVar16 + 2) >> 8;
              uVar9 = *(ushort *)pLVar16 << 8 | *(ushort *)pLVar16 >> 8;
              if ((uVar9 < uVar3) ||
                 ((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                   *)(ulong)*puVar2 < pLVar16 + (6 - *plVar1))) goto LAB_003f312d;
              uVar13 = ((uint)uVar9 - (uint)uVar3) + 1;
              if (CARRY4(uVar13,uVar13)) goto LAB_003f312d;
              uVar7 = (ulong)(ushort)(*(ushort *)(pLVar16 + 4) << 8 | *(ushort *)(pLVar16 + 4) >> 8)
              ;
              pLVar16 = this + uVar7;
              if ((((ulong)*puVar2 < (ulong)((long)pLVar16 - *plVar1)) ||
                  ((uint)(*(int *)(param_1 + 0x10) - (int)pLVar16) < uVar13 * 2)) ||
                 (iVar10 = *(int *)(param_1 + 0x1c) + uVar13 * -2, *(int *)(param_1 + 0x1c) = iVar10
                 , iVar10 < 1)) goto LAB_003f312d;
              if (uVar13 != 0) {
                lVar15 = *plVar1;
                pLVar17 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           *)(ulong)*puVar2;
                lVar18 = 0;
                do {
                  if (pLVar17 < pLVar19 + ((lVar18 + uVar7) - lVar15)) goto LAB_003f312d;
                  uVar20 = (ulong)(ushort)(*(ushort *)(pLVar16 + lVar18) << 8 |
                                          *(ushort *)(pLVar16 + lVar18) >> 8);
                  lVar11 = uVar20 + param_2 + 4;
                  if ((ulong)*puVar2 < (ulong)(lVar11 - *plVar1)) goto LAB_003f312d;
                  uVar4 = *(uint *)(uVar20 + param_2);
                  lVar15 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                  uVar4 << 0x18) * 4;
                  uVar4 = (uint)lVar15;
                  if ((int)((ulong)lVar15 >> 0x20) != 0) goto LAB_003f312d;
                  lVar15 = *plVar1;
                  pLVar17 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             *)(ulong)*puVar2;
                  if (((pLVar17 < (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)(lVar11 - lVar15)) ||
                      ((uint)(*(int *)(param_1 + 0x10) - (int)lVar11) < uVar4)) ||
                     (iVar10 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar10,
                     iVar10 < 1)) goto LAB_003f312d;
                  lVar18 = lVar18 + 2;
                } while ((ulong)uVar13 * 2 != lVar18);
              }
              uVar5 = uVar5 + 1;
              if (uVar5 == uVar6) break;
              uVar3 = *(ushort *)(this + 4);
            }
          }
          goto switchD_003f3170_caseD_a;
        }
      }
      break;
    case 6:
      if (((this + (0xc - *plVar1) <=
            (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
             *)(ulong)*puVar2) &&
          (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, 3 < uVar3)) &&
         ((pLVar19 = this + 0xc, (ulong)((long)pLVar19 - *plVar1) <= (ulong)*puVar2 &&
          (uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) *
                   (uint)uVar3, uVar6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pLVar19))))) {
        iVar10 = *(int *)(param_1 + 0x1c) - uVar6;
        *(int *)(param_1 + 0x1c) = iVar10;
        in_R10 = 0;
        if (iVar10 < 1) goto switchD_003f3170_caseD_a;
        uVar3 = *(ushort *)(this + 4);
        uVar9 = uVar3 << 8 | uVar3 >> 8;
        if (uVar3 != 0) {
          in_R10 = (ulong)-(uint)(*(short *)(this + (ulong)((uint)(ushort)(*(ushort *)(this + 2) <<
                                                                           8 | *(ushort *)(this + 2)
                                                                               >> 8) * (uVar9 - 1))
                                                    + 0xc) == -1);
        }
        iVar10 = (int)in_R10;
        if (iVar10 + (uint)uVar9 != 0) {
          uVar6 = 0;
          while( true ) {
            uVar12 = uVar3 << 8 | uVar3 >> 8;
            iVar14 = 0;
            if (uVar3 != 0) {
              iVar14 = -(uint)(*(short *)(this + (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 |
                                                                       *(ushort *)(this + 2) >> 8) *
                                                        (uVar12 - 1)) + 0xc) == -1);
            }
            pLVar8 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                      *)&_hb_NullPool;
            if (uVar6 < iVar14 + (uint)uVar12) {
              pLVar8 = pLVar19 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                                 uVar6;
            }
            in_R10 = 0;
            if (((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                  *)(ulong)*puVar2 < pLVar8 + (4 - *plVar1)) ||
               ((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                 *)(ulong)*puVar2 < pLVar8 + (4 - *plVar1))) goto switchD_003f3170_caseD_a;
            uVar7 = (ulong)(ushort)(*(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8);
            lVar15 = uVar7 + param_2 + 4;
            if ((ulong)*puVar2 < (ulong)(lVar15 - *plVar1)) goto LAB_003f312d;
            uVar5 = *(uint *)(uVar7 + param_2);
            lVar18 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18) * 4;
            uVar5 = (uint)lVar18;
            if (((((int)((ulong)lVar18 >> 0x20) != 0) ||
                 ((ulong)*puVar2 < (ulong)(lVar15 - *plVar1))) ||
                ((uint)(*(int *)(param_1 + 0x10) - (int)lVar15) < uVar5)) ||
               (iVar14 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar14,
               iVar14 < 1)) goto LAB_003f312d;
            if ((iVar10 + (uint)uVar9) - 1 == uVar6) break;
            uVar3 = *(ushort *)(this + 4);
            uVar6 = uVar6 + 1;
          }
        }
        goto switchD_003f3170_caseD_1;
      }
      break;
    case 8:
      if ((this + (6 - *plVar1) <=
           (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
            *)(ulong)*puVar2) &&
         (this + 6 + -*plVar1 <=
          (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *)(ulong)*puVar2)) {
        uVar3 = *(ushort *)(this + 4);
        uVar9 = uVar3 << 8 | uVar3 >> 8;
        if (((uint)uVar9 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)(this + 6))) &&
           (iVar10 = *(int *)(param_1 + 0x1c) + (uint)uVar9 * -2, *(int *)(param_1 + 0x1c) = iVar10,
           0 < iVar10)) {
          in_R10 = 1;
          if (uVar3 != 0) {
            lVar15 = *plVar1;
            uVar7 = (ulong)*puVar2;
            pLVar19 = this + 8;
            uVar20 = 0;
            do {
              if (uVar7 < (ulong)((long)pLVar19 - lVar15)) goto LAB_003f312d;
              uVar7 = (ulong)(ushort)(*(ushort *)(this + uVar20 * 2 + 6) << 8 |
                                     *(ushort *)(this + uVar20 * 2 + 6) >> 8);
              lVar18 = uVar7 + param_2 + 4;
              if ((ulong)*puVar2 < (ulong)(lVar18 - *plVar1)) goto LAB_003f312d;
              uVar6 = *(uint *)(uVar7 + param_2);
              lVar15 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                              uVar6 << 0x18) * 4;
              uVar6 = (uint)lVar15;
              if ((int)((ulong)lVar15 >> 0x20) != 0) goto LAB_003f312d;
              lVar15 = *plVar1;
              uVar7 = (ulong)*puVar2;
              if (((uVar7 < (ulong)(lVar18 - lVar15)) ||
                  ((uint)(*(int *)(param_1 + 0x10) - (int)lVar18) < uVar6)) ||
                 (iVar10 = *(int *)(param_1 + 0x1c) - uVar6, *(int *)(param_1 + 0x1c) = iVar10,
                 iVar10 < 1)) goto LAB_003f312d;
              uVar20 = uVar20 + 1;
              pLVar19 = pLVar19 + 2;
            } while (uVar9 != uVar20);
          }
          goto switchD_003f3170_caseD_a;
        }
      }
      break;
    case 10:
      goto switchD_003f3170_caseD_a;
    }
LAB_003f312d:
    in_R10 = 0;
  }
  else {
switchD_003f3170_caseD_1:
    in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
  }
switchD_003f3170_caseD_a:
  return in_R10 & 0xffffffff;
}


