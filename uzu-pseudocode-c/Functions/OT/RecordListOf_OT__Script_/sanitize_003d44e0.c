// Function : sanitize
// Namespace: OT:RecordListOf_OT__Script_
// Entry    : 003d44e0
// Prototype: undefined8 sanitize(RecordListOf<OT::Script> * this, long param_1)
// Body     : 003d44e0 - 003d47c8


/* OT::RecordListOf<OT::Script>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::RecordListOf<OT::Script>::sanitize(RecordListOf<OT::Script> *this,long param_1)

{
  RecordListOf<OT::Script> *pRVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  RecordListOf<OT::Script> *pRVar13;
  RecordListOf<OT::Script> *pRVar14;
  
  pRVar13 = this + 2;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar13 - *(long *)(param_1 + 8))) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar13 - *(long *)(param_1 + 8)))) ||
      (uVar3 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8),
      (uint)(*(int *)(param_1 + 0x10) - (int)pRVar13) < uVar3 * 6)) ||
     (iVar7 = *(int *)(param_1 + 0x1c) + uVar3 * -6, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)) {
LAB_003d47c5:
    uVar6 = 0;
  }
  else {
    uVar2 = *(ushort *)this;
    pRVar13 = (RecordListOf<OT::Script> *)(ulong)uVar2;
    if (uVar2 != 0) {
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      uVar3 = 1;
      if (1 < uVar2) {
        uVar3 = (uint)uVar2;
      }
      uVar8 = 0;
      do {
        if ((RecordListOf<OT::Script> *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (uVar8 * 6 - *(long *)(param_1 + 8)) + 8) {
          return 0;
        }
        if ((RecordListOf<OT::Script> *)(ulong)*(uint *)(param_1 + 0x18) <
            this + (uVar8 * 6 - *(long *)(param_1 + 8)) + 8) {
          return 0;
        }
        uVar2 = *(ushort *)(this + uVar8 * 6 + 6);
        pRVar13 = (RecordListOf<OT::Script> *)(ulong)uVar2;
        if (uVar2 != 0) {
          uVar12 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
          pRVar13 = this + uVar12 + 2;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pRVar13 - *(long *)(param_1 + 8))) {
LAB_003d478a:
            uVar11 = *(uint *)(param_1 + 0x2c);
          }
          else {
            pRVar1 = this + uVar12;
            uVar2 = *(ushort *)pRVar1;
            if (uVar2 == 0) {
LAB_003d4642:
              pRVar14 = pRVar1 + 4;
              if ((((ulong)((long)pRVar14 - *(long *)(param_1 + 8)) <=
                    (ulong)*(uint *)(param_1 + 0x18)) &&
                  ((ulong)((long)pRVar14 - *(long *)(param_1 + 8)) <=
                   (ulong)*(uint *)(param_1 + 0x18))) &&
                 ((uVar11 = (uint)(ushort)(*(ushort *)pRVar13 << 8 | *(ushort *)pRVar13 >> 8),
                  uVar11 * 6 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar14) &&
                  (iVar7 = *(int *)(param_1 + 0x1c) + uVar11 * -6, *(int *)(param_1 + 0x1c) = iVar7,
                  0 < iVar7)))) {
                uVar2 = *(ushort *)pRVar13;
                pRVar13 = (RecordListOf<OT::Script> *)(ulong)uVar2;
                if (uVar2 != 0) {
                  uVar2 = uVar2 << 8 | uVar2 >> 8;
                  uVar9 = 1;
                  if (1 < uVar2) {
                    uVar9 = (uint)uVar2;
                  }
                  pRVar14 = this + uVar12 + 8;
                  lVar10 = 0;
                  do {
                    if (((RecordListOf<OT::Script> *)(ulong)*(uint *)(param_1 + 0x18) <
                         this + ((lVar10 + uVar12 + 10) - *(long *)(param_1 + 8))) ||
                       ((RecordListOf<OT::Script> *)(ulong)*(uint *)(param_1 + 0x18) <
                        this + ((lVar10 + uVar12 + 10) - *(long *)(param_1 + 8))))
                    goto LAB_003d478a;
                    uVar2 = *(ushort *)(pRVar14 + lVar10);
                    pRVar13 = (RecordListOf<OT::Script> *)(ulong)uVar2;
                    if (uVar2 != 0) {
                      uVar5 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
                      pRVar13 = pRVar1 + uVar5 + 6;
                      if (((ulong)((long)pRVar13 - *(long *)(param_1 + 8)) <=
                           (ulong)*(uint *)(param_1 + 0x18)) &&
                         ((ulong)((long)pRVar13 - *(long *)(param_1 + 8)) <=
                          (ulong)*(uint *)(param_1 + 0x18))) {
                        uVar4 = (uint)(ushort)(*(ushort *)(pRVar1 + uVar5 + 4) << 8 |
                                              *(ushort *)(pRVar1 + uVar5 + 4) >> 8);
                        uVar11 = uVar4 * 2;
                        if ((uVar11 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar13)) &&
                           (iVar7 = *(int *)(param_1 + 0x1c) + uVar4 * -2,
                           *(int *)(param_1 + 0x1c) = iVar7,
                           pRVar13 = (RecordListOf<OT::Script> *)(ulong)uVar11, 0 < iVar7))
                        goto LAB_003d4778;
                      }
                      if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d47c5;
                      uVar11 = *(uint *)(param_1 + 0x2c) + 1;
                      *(uint *)(param_1 + 0x2c) = uVar11;
                      if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d478d;
                      *(undefined2 *)(pRVar14 + lVar10) = 0;
                      pRVar13 = pRVar14;
                    }
LAB_003d4778:
                    lVar10 = lVar10 + 6;
                  } while ((ulong)uVar9 * 6 != lVar10);
                }
                goto LAB_003d47ab;
              }
              goto LAB_003d478a;
            }
            uVar5 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
            pRVar14 = pRVar1 + uVar5 + 6;
            if ((((ulong)((long)pRVar14 - *(long *)(param_1 + 8)) <=
                  (ulong)*(uint *)(param_1 + 0x18)) &&
                ((ulong)((long)pRVar14 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)
                )) && ((uVar11 = (uint)(ushort)(*(ushort *)(pRVar1 + uVar5 + 4) << 8 |
                                               *(ushort *)(pRVar1 + uVar5 + 4) >> 8),
                       uVar11 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)pRVar14) &&
                       (iVar7 = *(int *)(param_1 + 0x1c) + uVar11 * -2,
                       *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)))) goto LAB_003d4642;
            if (0x1f < *(uint *)(param_1 + 0x2c)) goto LAB_003d47c5;
            uVar11 = *(uint *)(param_1 + 0x2c) + 1;
            *(uint *)(param_1 + 0x2c) = uVar11;
            if (*(char *)(param_1 + 0x28) != '\0') {
              *(ushort *)pRVar1 = 0;
              goto LAB_003d4642;
            }
          }
LAB_003d478d:
          if ((0x1f < uVar11) ||
             (*(uint *)(param_1 + 0x2c) = uVar11 + 1, *(char *)(param_1 + 0x28) == '\0'))
          goto LAB_003d47c5;
          pRVar13 = this + uVar8 * 6 + 6;
          *(undefined2 *)pRVar13 = 0;
        }
LAB_003d47ab:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
    }
    uVar6 = CONCAT71((int7)((ulong)pRVar13 >> 8),1);
  }
  return uVar6;
}


