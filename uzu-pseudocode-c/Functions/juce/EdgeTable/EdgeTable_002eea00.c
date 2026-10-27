// Function : EdgeTable
// Namespace: juce:EdgeTable
// Entry    : 002eea00
// Prototype: undefined EdgeTable(EdgeTable * this, undefined8 * param_1)
// Body     : 002eea00 - 002ef014


/* juce::EdgeTable::EdgeTable(juce::RectangleList<int> const&) */

void __thiscall juce::EdgeTable::EdgeTable(EdgeTable *this,undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined4 *__ptr;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  void *pvVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  void *pvVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  long lVar38;
  undefined4 *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar26 = *(uint *)((long)param_1 + 0xc);
  if ((ulong)uVar26 == 0) {
    uVar31 = 0;
    uVar43 = 0;
    uVar41 = 0;
  }
  else {
    puVar7 = (ulong *)*param_1;
    if (uVar26 == 1) {
      uVar31 = *puVar7;
      uVar41 = puVar7[1];
      uVar43 = uVar31 >> 0x20;
    }
    else {
      uVar31 = (ulong)(uint)*puVar7;
      uVar43 = (ulong)*(uint *)((long)puVar7 + 4);
      iVar34 = (uint)puVar7[1] + (uint)*puVar7;
      iVar32 = *(uint *)((long)puVar7 + 0xc) + *(uint *)((long)puVar7 + 4);
      if (1 < (int)uVar26) {
        uVar41 = (ulong)uVar26 + 1;
        do {
          uVar30 = (ulong)((int)uVar41 - 2);
          uVar26 = (uint)puVar7[uVar30 * 2];
          uVar19 = *(uint *)((long)puVar7 + uVar30 * 0x10 + 4);
          if ((int)uVar26 < (int)uVar31) {
            uVar31 = (ulong)uVar26;
          }
          if ((int)uVar19 < (int)uVar43) {
            uVar43 = (ulong)uVar19;
          }
          iVar22 = uVar26 + (uint)puVar7[uVar30 * 2 + 1];
          if (iVar22 <= iVar34) {
            iVar22 = iVar34;
          }
          iVar34 = iVar22;
          iVar22 = uVar19 + *(int *)((long)puVar7 + uVar30 * 0x10 + 0xc);
          if (iVar22 <= iVar32) {
            iVar22 = iVar32;
          }
          iVar32 = iVar22;
          uVar41 = uVar41 - 1;
        } while (2 < uVar41);
      }
      uVar41 = CONCAT44(iVar32 - (int)uVar43,iVar34 - (int)uVar31);
    }
  }
  *(ulong *)(this + 0x10) = uVar31 & 0xffffffff | uVar43 << 0x20;
  *(ulong *)(this + 0x18) = uVar41;
  *(undefined8 *)(this + 0x20) = 0x4100000020;
  this[0x28] = (EdgeTable)0x1;
  uVar26 = (uint)(uVar41 >> 0x20);
  lVar16 = 0x82;
  if (0 < (int)uVar26) {
    lVar16 = (long)((uVar41 >> 0x20) * 0x4100000000 + 0x8200000000) >> 0x20;
  }
  __ptr = malloc(lVar16 * 4);
  *(undefined4 **)this = __ptr;
  *(long *)(this + 8) = lVar16;
  if (0 < (int)uVar26) {
    uVar19 = uVar26 - 1;
    uVar23 = uVar26 & 7;
    puVar14 = __ptr;
    if ((uVar41 & 0x700000000) != 0) {
      do {
        *puVar14 = 0;
        puVar14 = puVar14 + 0x41;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      uVar26 = uVar26 & 0xfffffff8;
    }
    if (6 < uVar19) {
      uVar26 = uVar26 - 1;
      do {
        *puVar14 = 0;
        puVar14[0x41] = 0;
        puVar14[0x82] = 0;
        puVar14[0xc3] = 0;
        puVar14[0x104] = 0;
        puVar14[0x145] = 0;
        puVar14[0x186] = 0;
        puVar14[0x1c7] = 0;
        uVar26 = uVar26 - 8;
        puVar14 = puVar14 + 0x208;
      } while (uVar26 < 0xfffffffe);
    }
  }
  iVar34 = *(int *)((long)param_1 + 0xc);
  if ((long)iVar34 == 0) {
LAB_002eeff7:
    sanitiseLevels(this,'\x01');
    return;
  }
  piVar8 = (int *)*param_1;
  iVar32 = piVar8[3];
  piVar13 = piVar8;
  do {
    if (0 < iVar32) {
      iVar22 = *piVar13;
      iVar5 = piVar13[2];
      iVar29 = piVar13[1] - (int)uVar43;
      do {
        lVar33 = (long)*(int *)(this + 0x24);
        lVar16 = iVar29 * lVar33;
        iVar6 = __ptr[lVar16];
        lVar27 = (long)iVar6;
        iVar20 = (int)(lVar27 + 1);
        if ((*(int *)(this + 0x20) <= iVar20) &&
           (iVar20 = iVar20 * 2, *(int *)(this + 0x20) != iVar20)) {
          *(int *)(this + 0x20) = iVar20;
          lVar16 = (lVar27 + 1) * 4 + 1;
          lVar40 = (long)*(int *)(this + 0x1c);
          iVar20 = 0;
          if (0 < lVar40) {
            iVar20 = *(int *)(this + 0x1c);
          }
          iVar24 = (int)lVar16;
          lVar17 = (long)((iVar20 + 2) * iVar24);
          pvVar18 = malloc(lVar17 * 4);
          if (lVar40 != 0) {
            lVar3 = lVar16 * 4;
            lVar25 = (long)pvVar18 + 0x74;
            puVar14 = __ptr + 0x1d;
            lVar38 = (long)pvVar18 + 0x14;
            puVar39 = __ptr + 5;
            lVar44 = 0;
            do {
              lVar35 = lVar44 * lVar33;
              iVar20 = __ptr[lVar35];
              uVar31 = (long)iVar20 * 8 + 4;
              if (0 < (long)uVar31) {
                *(int *)((long)pvVar18 + lVar44 * lVar16 * 4) = iVar20;
                if (4 < uVar31) {
                  puVar37 = __ptr + lVar35;
                  pvVar28 = (void *)((long)pvVar18 + lVar44 * lVar16 * 4);
                  uVar31 = uVar31 >> 2;
                  uVar41 = uVar31 - (uVar31 != 1);
                  if (7 < uVar41) {
                    puVar36 = (undefined4 *)((long)pvVar18 + lVar3 * lVar44 + 4);
                    if ((__ptr + lVar35 + 1 + uVar41 <= puVar36) ||
                       (puVar36 + (ulong)(uVar31 == 1) + (long)iVar20 * 2 <= __ptr + lVar35 + 1)) {
                      uVar43 = uVar41 & 0xfffffffffffffff8;
                      uVar42 = (uVar43 - 8 >> 3) + 1;
                      uVar30 = (ulong)((uint)uVar42 & 3);
                      if (uVar43 - 8 < 0x18) {
                        lVar35 = 0;
                      }
                      else {
                        uVar42 = uVar42 & 0xfffffffffffffffc;
                        lVar35 = 0;
                        do {
                          uVar10 = *(undefined8 *)((long)(puVar14 + lVar35 + -0x1c) + 8);
                          uVar11 = *(undefined8 *)(puVar14 + lVar35 + -0x18);
                          uVar12 = *(undefined8 *)((long)(puVar14 + lVar35 + -0x18) + 8);
                          puVar2 = (undefined8 *)(lVar25 + -0x70 + lVar35 * 4);
                          *puVar2 = *(undefined8 *)(puVar14 + lVar35 + -0x1c);
                          puVar2[1] = uVar10;
                          puVar2 = (undefined8 *)(lVar25 + -0x60 + lVar35 * 4);
                          *puVar2 = uVar11;
                          puVar2[1] = uVar12;
                          uVar10 = *(undefined8 *)((long)(puVar14 + lVar35 + -0x14) + 8);
                          uVar11 = *(undefined8 *)(puVar14 + lVar35 + -0x10);
                          uVar12 = *(undefined8 *)((long)(puVar14 + lVar35 + -0x10) + 8);
                          puVar2 = (undefined8 *)(lVar25 + -0x50 + lVar35 * 4);
                          *puVar2 = *(undefined8 *)(puVar14 + lVar35 + -0x14);
                          puVar2[1] = uVar10;
                          puVar2 = (undefined8 *)(lVar25 + -0x40 + lVar35 * 4);
                          *puVar2 = uVar11;
                          puVar2[1] = uVar12;
                          uVar10 = *(undefined8 *)((long)(puVar14 + lVar35 + -0xc) + 8);
                          uVar11 = *(undefined8 *)(puVar14 + lVar35 + -8);
                          uVar12 = *(undefined8 *)((long)(puVar14 + lVar35 + -8) + 8);
                          puVar2 = (undefined8 *)(lVar25 + -0x30 + lVar35 * 4);
                          *puVar2 = *(undefined8 *)(puVar14 + lVar35 + -0xc);
                          puVar2[1] = uVar10;
                          puVar2 = (undefined8 *)(lVar25 + -0x20 + lVar35 * 4);
                          *puVar2 = uVar11;
                          puVar2[1] = uVar12;
                          uVar10 = *(undefined8 *)((long)(puVar14 + lVar35 + -4) + 8);
                          uVar11 = *(undefined8 *)(puVar14 + lVar35);
                          uVar12 = *(undefined8 *)((long)(puVar14 + lVar35) + 8);
                          puVar2 = (undefined8 *)(lVar25 + -0x10 + lVar35 * 4);
                          *puVar2 = *(undefined8 *)(puVar14 + lVar35 + -4);
                          puVar2[1] = uVar10;
                          puVar2 = (undefined8 *)(lVar25 + lVar35 * 4);
                          *puVar2 = uVar11;
                          puVar2[1] = uVar12;
                          lVar35 = lVar35 + 0x20;
                          uVar42 = uVar42 - 4;
                        } while (uVar42 != 0);
                      }
                      if (uVar30 != 0) {
                        lVar1 = lVar38 + lVar35 * 4;
                        lVar21 = 0;
                        do {
                          puVar4 = (undefined8 *)((long)puVar39 + lVar21 + lVar35 * 4 + -0x10);
                          uVar10 = puVar4[1];
                          puVar2 = (undefined8 *)((long)puVar39 + lVar21 + lVar35 * 4);
                          uVar11 = *puVar2;
                          uVar12 = puVar2[1];
                          puVar2 = (undefined8 *)(lVar1 + -0x10 + lVar21);
                          *puVar2 = *puVar4;
                          puVar2[1] = uVar10;
                          puVar2 = (undefined8 *)(lVar1 + lVar21);
                          *puVar2 = uVar11;
                          puVar2[1] = uVar12;
                          lVar21 = lVar21 + 0x20;
                        } while (uVar30 * 0x20 != lVar21);
                      }
                      if (uVar41 == uVar43) goto LAB_002eeda0;
                      puVar37 = puVar37 + uVar43;
                      pvVar28 = (void *)((long)pvVar28 + uVar43 * 4);
                      uVar31 = uVar31 - uVar43;
                    }
                  }
                  lVar35 = 4;
                  do {
                    uVar31 = uVar31 - 1;
                    *(undefined4 *)((long)pvVar28 + lVar35) =
                         *(undefined4 *)((long)puVar37 + lVar35);
                    lVar35 = lVar35 + 4;
                  } while (1 < uVar31);
                }
              }
LAB_002eeda0:
              lVar44 = lVar44 + 1;
              lVar25 = lVar25 + lVar3;
              puVar14 = puVar14 + lVar33;
              lVar38 = lVar38 + lVar3;
              puVar39 = puVar39 + lVar33;
            } while (lVar44 != lVar40);
          }
          *(void **)this = pvVar18;
          *(long *)(this + 8) = lVar17;
          free(__ptr);
          *(int *)(this + 0x24) = iVar24;
          __ptr = *(undefined4 **)this;
          lVar16 = (long)(iVar24 * iVar29);
        }
        piVar15 = __ptr + lVar16;
        iVar29 = iVar29 + 1;
        *piVar15 = iVar6 + 2;
        piVar15[lVar27 * 2 + 1] = iVar22 << 8;
        piVar15[lVar27 * 2 + 2] = 0xff;
        piVar15[lVar27 * 2 + 3] = (iVar22 + iVar5) * 0x100;
        piVar15[lVar27 * 2 + 4] = -0xff;
        bVar9 = 1 < iVar32;
        iVar32 = iVar32 + -1;
      } while (bVar9);
    }
    if (piVar13 + 4 == piVar8 + (long)iVar34 * 4) goto LAB_002eeff7;
    uVar43 = (ulong)*(uint *)(this + 0x14);
    iVar32 = piVar13[7];
    piVar13 = piVar13 + 4;
  } while( true );
}


