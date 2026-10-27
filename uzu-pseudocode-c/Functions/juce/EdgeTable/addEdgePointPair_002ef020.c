// Function : addEdgePointPair
// Namespace: juce:EdgeTable
// Entry    : 002ef020
// Prototype: undefined addEdgePointPair(EdgeTable * this, int param_1, int param_2, int param_3, int param_4)
// Body     : 002ef020 - 002ef3a0


/* juce::EdgeTable::addEdgePointPair(int, int, int, int) */

void __thiscall
juce::EdgeTable::addEdgePointPair(EdgeTable *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  void *pvVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  void *__ptr;
  long lVar29;
  ulong uVar30;
  long lVar31;
  
  __ptr = *(void **)this;
  lVar29 = (long)*(int *)(this + 0x24);
  lVar9 = param_3 * lVar29;
  iVar5 = *(int *)((long)__ptr + lVar9 * 4);
  lVar17 = (long)iVar5;
  iVar25 = (int)(lVar17 + 1);
  if ((*(int *)(this + 0x20) <= iVar25) && (iVar25 = iVar25 * 2, *(int *)(this + 0x20) != iVar25)) {
    *(int *)(this + 0x20) = iVar25;
    lVar9 = (lVar17 + 1) * 4 + 1;
    lVar18 = (long)*(int *)(this + 0x1c);
    iVar25 = 0;
    if (0 < lVar18) {
      iVar25 = *(int *)(this + 0x1c);
    }
    iVar15 = (int)lVar9;
    lVar10 = (long)((iVar25 + 2) * iVar15);
    pvVar11 = malloc(lVar10 * 4);
    if (lVar18 != 0) {
      lVar3 = lVar9 * 4;
      lVar16 = (long)pvVar11 + 0x74;
      lVar21 = (long)__ptr + 0x74;
      lVar26 = (long)pvVar11 + 0x14;
      lVar27 = (long)__ptr + 0x14;
      lVar31 = 0;
      do {
        lVar22 = lVar31 * lVar29;
        iVar25 = *(int *)((long)__ptr + lVar22 * 4);
        uVar12 = (long)iVar25 * 8 + 4;
        if (0 < (long)uVar12) {
          *(int *)((long)pvVar11 + lVar31 * lVar9 * 4) = iVar25;
          if (4 < uVar12) {
            pvVar24 = (void *)(lVar22 * 4 + (long)__ptr);
            pvVar19 = (void *)((long)pvVar11 + lVar31 * lVar9 * 4);
            uVar20 = uVar12 >> 2;
            uVar30 = uVar20 - (uVar20 != 1);
            if (7 < uVar30) {
              uVar28 = (long)pvVar11 + lVar3 * lVar31 + 4;
              uVar23 = (long)__ptr + lVar22 * 4 + 4;
              if ((uVar23 + uVar30 * 4 <= uVar28) ||
                 ((uVar12 + (ulong)(uVar20 == 1) * 4 + uVar28) - 4 <= uVar23)) {
                uVar12 = uVar30 & 0xfffffffffffffff8;
                uVar23 = (uVar12 - 8 >> 3) + 1;
                uVar28 = (ulong)((uint)uVar23 & 3);
                if (uVar12 - 8 < 0x18) {
                  lVar22 = 0;
                }
                else {
                  uVar23 = uVar23 & 0xfffffffffffffffc;
                  lVar22 = 0;
                  do {
                    puVar2 = (undefined8 *)(lVar21 + -0x70 + lVar22 * 4);
                    uVar6 = puVar2[1];
                    puVar4 = (undefined8 *)(lVar21 + -0x60 + lVar22 * 4);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    puVar4 = (undefined8 *)(lVar16 + -0x70 + lVar22 * 4);
                    *puVar4 = *puVar2;
                    puVar4[1] = uVar6;
                    puVar2 = (undefined8 *)(lVar16 + -0x60 + lVar22 * 4);
                    *puVar2 = uVar7;
                    puVar2[1] = uVar8;
                    puVar2 = (undefined8 *)(lVar21 + -0x50 + lVar22 * 4);
                    uVar6 = puVar2[1];
                    puVar4 = (undefined8 *)(lVar21 + -0x40 + lVar22 * 4);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    puVar4 = (undefined8 *)(lVar16 + -0x50 + lVar22 * 4);
                    *puVar4 = *puVar2;
                    puVar4[1] = uVar6;
                    puVar2 = (undefined8 *)(lVar16 + -0x40 + lVar22 * 4);
                    *puVar2 = uVar7;
                    puVar2[1] = uVar8;
                    puVar2 = (undefined8 *)(lVar21 + -0x30 + lVar22 * 4);
                    uVar6 = puVar2[1];
                    puVar4 = (undefined8 *)(lVar21 + -0x20 + lVar22 * 4);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    puVar4 = (undefined8 *)(lVar16 + -0x30 + lVar22 * 4);
                    *puVar4 = *puVar2;
                    puVar4[1] = uVar6;
                    puVar2 = (undefined8 *)(lVar16 + -0x20 + lVar22 * 4);
                    *puVar2 = uVar7;
                    puVar2[1] = uVar8;
                    puVar4 = (undefined8 *)(lVar21 + -0x10 + lVar22 * 4);
                    uVar6 = puVar4[1];
                    puVar2 = (undefined8 *)(lVar21 + lVar22 * 4);
                    uVar7 = *puVar2;
                    uVar8 = puVar2[1];
                    puVar2 = (undefined8 *)(lVar16 + -0x10 + lVar22 * 4);
                    *puVar2 = *puVar4;
                    puVar2[1] = uVar6;
                    puVar2 = (undefined8 *)(lVar16 + lVar22 * 4);
                    *puVar2 = uVar7;
                    puVar2[1] = uVar8;
                    lVar22 = lVar22 + 0x20;
                    uVar23 = uVar23 - 4;
                  } while (uVar23 != 0);
                }
                if (uVar28 != 0) {
                  lVar1 = lVar26 + lVar22 * 4;
                  lVar22 = lVar27 + lVar22 * 4;
                  lVar13 = 0;
                  do {
                    puVar4 = (undefined8 *)(lVar22 + -0x10 + lVar13);
                    uVar6 = puVar4[1];
                    puVar2 = (undefined8 *)(lVar22 + lVar13);
                    uVar7 = *puVar2;
                    uVar8 = puVar2[1];
                    puVar2 = (undefined8 *)(lVar1 + -0x10 + lVar13);
                    *puVar2 = *puVar4;
                    puVar2[1] = uVar6;
                    puVar2 = (undefined8 *)(lVar1 + lVar13);
                    *puVar2 = uVar7;
                    puVar2[1] = uVar8;
                    lVar13 = lVar13 + 0x20;
                  } while (uVar28 * 0x20 != lVar13);
                }
                if (uVar30 == uVar12) goto LAB_002ef110;
                pvVar24 = (void *)((long)pvVar24 + uVar12 * 4);
                pvVar19 = (void *)((long)pvVar19 + uVar12 * 4);
                uVar20 = uVar20 - uVar12;
              }
            }
            lVar22 = 4;
            do {
              uVar20 = uVar20 - 1;
              *(undefined4 *)((long)pvVar19 + lVar22) = *(undefined4 *)((long)pvVar24 + lVar22);
              lVar22 = lVar22 + 4;
            } while (1 < uVar20);
          }
        }
LAB_002ef110:
        lVar31 = lVar31 + 1;
        lVar16 = lVar16 + lVar3;
        lVar21 = lVar21 + lVar29 * 4;
        lVar26 = lVar26 + lVar3;
        lVar27 = lVar27 + lVar29 * 4;
      } while (lVar31 != lVar18);
    }
    *(void **)this = pvVar11;
    *(long *)(this + 8) = lVar10;
    free(__ptr);
    *(int *)(this + 0x24) = iVar15;
    __ptr = *(void **)this;
    lVar9 = (long)(param_3 * iVar15);
  }
  piVar14 = (int *)(lVar9 * 4 + (long)__ptr);
  *piVar14 = iVar5 + 2;
  piVar14[lVar17 * 2 + 1] = param_1;
  piVar14[lVar17 * 2 + 2] = param_4;
  piVar14[lVar17 * 2 + 3] = param_2;
  piVar14[lVar17 * 2 + 4] = -param_4;
  return;
}


