// Function : createInsertSpace
// Namespace: juce:ArrayBase_juce__String_juce__DummyCriticalSection_
// Entry    : 0048a780
// Prototype: void * createInsertSpace(uint param_1)
// Body     : 0048a780 - 0048abdd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ArrayBase<juce::String, juce::DummyCriticalSection>::createInsertSpace(int, int) */

void * __cdecl
juce::ArrayBase<juce::String,juce::DummyCriticalSection>::createInsertSpace(uint param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  
  uVar12 = DAT_0071d1cc;
  uVar25 = (ulong)DAT_0071d1cc;
  if ((int)DAT_0071d1c8 <= (int)DAT_0071d1cc) {
    uVar17 = DAT_0071d1cc + ((int)((DAT_0071d1cc - ((int)(DAT_0071d1cc + 1) >> 0x1f)) + 1) >> 1) + 9
             & 0xfffffff8;
    if (DAT_0071d1c8 != uVar17) {
      if ((int)uVar17 < 1) {
        free(StringPool::getGlobalPool()::pool);
        StringPool::getGlobalPool()::pool = (void *)0x0;
      }
      else {
        pvVar13 = malloc((ulong)uVar17 << 3);
        pvVar14 = StringPool::getGlobalPool()::pool;
        if (0 < (int)uVar12) {
          if ((uVar12 < 4) ||
             ((pvVar13 < (void *)((long)StringPool::getGlobalPool()::pool + uVar25 * 8) &&
              (StringPool::getGlobalPool()::pool < (void *)((long)pvVar13 + uVar25 * 8))))) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulong)(uVar12 & 0xfffffffc);
            uVar22 = (uVar16 - 4 >> 2) + 1;
            if (uVar16 - 4 == 0) {
              lVar18 = 0;
            }
            else {
              uVar24 = uVar22 & 0xfffffffffffffffe;
              lVar18 = 0;
              do {
                puVar20 = (undefined8 *)((long)pvVar14 + lVar18 * 8);
                uVar4 = puVar20[1];
                puVar2 = (undefined8 *)((long)pvVar14 + lVar18 * 8 + 0x10);
                uVar5 = *puVar2;
                uVar6 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar13 + lVar18 * 8);
                *puVar2 = *puVar20;
                puVar2[1] = uVar4;
                puVar20 = (undefined8 *)((long)pvVar13 + lVar18 * 8 + 0x10);
                *puVar20 = uVar5;
                puVar20[1] = uVar6;
                puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8);
                *puVar3 = 0x61ac58;
                puVar3[1] = 0;
                puVar3[2] = 0x61ac58;
                puVar3[3] = 0;
                puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8 + 0x10);
                *puVar3 = 0x61ac58;
                puVar3[1] = 0;
                puVar3[2] = 0x61ac58;
                puVar3[3] = 0;
                puVar20 = (undefined8 *)((long)pvVar14 + lVar18 * 8 + 0x20);
                uVar4 = puVar20[1];
                puVar2 = (undefined8 *)((long)pvVar14 + lVar18 * 8 + 0x30);
                uVar5 = *puVar2;
                uVar6 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar13 + lVar18 * 8 + 0x20);
                *puVar2 = *puVar20;
                puVar2[1] = uVar4;
                puVar20 = (undefined8 *)((long)pvVar13 + lVar18 * 8 + 0x30);
                *puVar20 = uVar5;
                puVar20[1] = uVar6;
                puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8 + 0x20);
                *puVar3 = 0x61ac58;
                puVar3[1] = 0;
                puVar3[2] = 0x61ac58;
                puVar3[3] = 0;
                puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8 + 0x30);
                *puVar3 = 0x61ac58;
                puVar3[1] = 0;
                puVar3[2] = 0x61ac58;
                puVar3[3] = 0;
                lVar18 = lVar18 + 8;
                uVar24 = uVar24 - 2;
              } while (uVar24 != 0);
            }
            if ((uVar22 & 1) != 0) {
              puVar20 = (undefined8 *)((long)pvVar14 + lVar18 * 8);
              uVar4 = puVar20[1];
              puVar2 = (undefined8 *)((long)pvVar14 + lVar18 * 8 + 0x10);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar13 + lVar18 * 8);
              *puVar2 = *puVar20;
              puVar2[1] = uVar4;
              puVar20 = (undefined8 *)((long)pvVar13 + lVar18 * 8 + 0x10);
              *puVar20 = uVar5;
              puVar20[1] = uVar6;
              puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8);
              *puVar3 = 0x61ac58;
              puVar3[1] = 0;
              puVar3[2] = 0x61ac58;
              puVar3[3] = 0;
              puVar3 = (undefined4 *)((long)pvVar14 + lVar18 * 8 + 0x10);
              *puVar3 = 0x61ac58;
              puVar3[1] = 0;
              puVar3[2] = 0x61ac58;
              puVar3[3] = 0;
            }
            if (uVar16 == uVar25) goto LAB_0048a978;
          }
          uVar24 = ~uVar16;
          uVar22 = uVar25 & 3;
          if ((uVar12 & 3) != 0) {
            do {
              *(undefined8 *)((long)pvVar13 + uVar16 * 8) =
                   *(undefined8 *)((long)pvVar14 + uVar16 * 8);
              *(undefined1 **)((long)pvVar14 + uVar16 * 8) = &DAT_0061ac58;
              uVar16 = uVar16 + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          if (2 < uVar24 + uVar25) {
            do {
              *(undefined8 *)((long)pvVar13 + uVar16 * 8) =
                   *(undefined8 *)((long)pvVar14 + uVar16 * 8);
              *(undefined1 **)((long)pvVar14 + uVar16 * 8) = &DAT_0061ac58;
              *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 8) =
                   *(undefined8 *)((long)pvVar14 + uVar16 * 8 + 8);
              *(undefined1 **)((long)pvVar14 + uVar16 * 8 + 8) = &DAT_0061ac58;
              *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 0x10) =
                   *(undefined8 *)((long)pvVar14 + uVar16 * 8 + 0x10);
              *(undefined1 **)((long)pvVar14 + uVar16 * 8 + 0x10) = &DAT_0061ac58;
              *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 0x18) =
                   *(undefined8 *)((long)pvVar14 + uVar16 * 8 + 0x18);
              *(undefined1 **)((long)pvVar14 + uVar16 * 8 + 0x18) = &DAT_0061ac58;
              uVar16 = uVar16 + 4;
            } while (uVar25 != uVar16);
          }
        }
LAB_0048a978:
        pvVar14 = StringPool::getGlobalPool()::pool;
        StringPool::getGlobalPool()::pool = pvVar13;
        free(pvVar14);
      }
    }
    DAT_0071d1c8 = uVar17;
  }
  uVar12 = DAT_0071d1cc;
  pvVar13 = StringPool::getGlobalPool()::pool;
  lVar18 = (long)(int)DAT_0071d1cc;
  pvVar14 = (void *)((long)StringPool::getGlobalPool()::pool + lVar18 * 8);
  if (DAT_0071d1cc <= param_1) {
    return pvVar14;
  }
  if (0 < (int)(DAT_0071d1cc - param_1)) {
    pvVar15 = (void *)((long)pvVar14 + 8);
    uVar25 = (ulong)(~param_1 + DAT_0071d1cc);
    uVar16 = 0;
    if ((((2 < ~param_1 + DAT_0071d1cc) && ((void *)((long)pvVar14 + uVar25 * -8) <= pvVar14)) &&
        (uVar22 = (long)StringPool::getGlobalPool()::pool + lVar18 * 8 + -8,
        uVar22 + uVar25 * -8 <= uVar22)) &&
       ((pvVar1 = (void *)((long)StringPool::getGlobalPool()::pool + (~uVar25 + lVar18) * 8),
        pvVar14 <= (void *)((long)StringPool::getGlobalPool()::pool + (lVar18 - uVar25) * 8) ||
        pvVar15 <= pvVar1 && (pvVar14 <= pvVar1)))) {
      uVar16 = uVar25 + 1 & 0xfffffffffffffffc;
      uVar22 = (uVar16 - 4 >> 2) + 1;
      if (uVar16 - 4 == 0) {
        lVar23 = 0;
      }
      else {
        uVar24 = uVar22 & 0xfffffffffffffffe;
        lVar11 = lVar18 * 8 + -0x40;
        lVar23 = 0;
        do {
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar11);
          uVar4 = *puVar20;
          uVar5 = puVar20[1];
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x30);
          uVar6 = *puVar20;
          uVar7 = puVar20[1];
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x20);
          uVar8 = *puVar20;
          uVar9 = puVar20[1];
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x10);
          uVar10 = puVar20[1];
          puVar2 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -8);
          *puVar2 = *puVar20;
          puVar2[1] = uVar10;
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x18);
          *puVar20 = uVar8;
          puVar20[1] = uVar9;
          puVar3 = (undefined4 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x10);
          *puVar3 = 0x61ac58;
          puVar3[1] = 0;
          puVar3[2] = 0x61ac58;
          puVar3[3] = 0;
          puVar3 = (undefined4 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x20);
          *puVar3 = 0x61ac58;
          puVar3[1] = 0;
          puVar3[2] = 0x61ac58;
          puVar3[3] = 0;
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x28);
          *puVar20 = uVar6;
          puVar20[1] = uVar7;
          puVar20 = (undefined8 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x38);
          *puVar20 = uVar4;
          puVar20[1] = uVar5;
          puVar3 = (undefined4 *)((long)pvVar13 + lVar23 * 8 + lVar18 * 8 + -0x30);
          *puVar3 = 0x61ac58;
          puVar3[1] = 0;
          puVar3[2] = 0x61ac58;
          puVar3[3] = 0;
          puVar3 = (undefined4 *)((long)pvVar13 + lVar23 * 8 + lVar11);
          *puVar3 = 0x61ac58;
          puVar3[1] = 0;
          puVar3[2] = 0x61ac58;
          puVar3[3] = 0;
          lVar23 = lVar23 + -8;
          uVar24 = uVar24 - 2;
        } while (uVar24 != 0);
        lVar23 = -lVar23;
      }
      if ((uVar22 & 1) != 0) {
        puVar20 = (undefined8 *)((long)pvVar14 + lVar23 * -8);
        uVar4 = puVar20[-3];
        uVar5 = puVar20[-1];
        puVar20[-1] = puVar20[-2];
        *puVar20 = uVar5;
        puVar20[-3] = puVar20[-4];
        puVar20[-2] = uVar4;
        *(undefined4 *)(puVar20 + -2) = 0x61ac58;
        *(undefined4 *)((long)puVar20 + -0xc) = 0;
        *(undefined4 *)(puVar20 + -1) = 0x61ac58;
        *(undefined4 *)((long)puVar20 + -4) = 0;
        *(undefined4 *)(puVar20 + -4) = 0x61ac58;
        *(undefined4 *)((long)puVar20 + -0x1c) = 0;
        *(undefined4 *)(puVar20 + -3) = 0x61ac58;
        *(undefined4 *)((long)puVar20 + -0x14) = 0;
      }
      if (uVar25 + 1 == uVar16) goto LAB_0048abcc;
      pvVar14 = (void *)((long)pvVar14 + uVar16 * -8);
      pvVar15 = (void *)((long)pvVar15 + uVar16 * -8);
    }
    uVar26 = (uint)uVar16;
    uVar19 = ~uVar26;
    uVar17 = uVar12 - param_1 & 3;
    if (uVar17 != 0) {
      uVar21 = uVar17;
      do {
        *(undefined8 *)((long)pvVar15 - 8) = *(undefined8 *)((long)pvVar14 - 8);
        *(undefined1 **)((long)pvVar14 - 8) = &DAT_0061ac58;
        pvVar14 = (void *)((long)pvVar14 - 8);
        pvVar15 = (void *)((long)pvVar15 - 8);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      uVar26 = uVar26 + uVar17;
    }
    if (2 < (uVar19 + uVar12) - param_1) {
      lVar18 = 0;
      do {
        *(undefined8 *)((long)pvVar15 + lVar18 * 8 + -8) =
             *(undefined8 *)((long)pvVar14 + lVar18 * 8 + -8);
        *(undefined1 **)((long)pvVar14 + lVar18 * 8 + -8) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar15 + lVar18 * 8 + -0x10) =
             *(undefined8 *)((long)pvVar14 + lVar18 * 8 + -0x10);
        *(undefined1 **)((long)pvVar14 + lVar18 * 8 + -0x10) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar15 + lVar18 * 8 + -0x18) =
             *(undefined8 *)((long)pvVar14 + lVar18 * 8 + -0x18);
        *(undefined1 **)((long)pvVar14 + lVar18 * 8 + -0x18) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar15 + lVar18 * 8 + -0x20) =
             *(undefined8 *)((long)pvVar14 + lVar18 * 8 + -0x20);
        *(undefined1 **)((long)pvVar14 + lVar18 * 8 + -0x20) = &DAT_0061ac58;
        lVar18 = lVar18 + -4;
      } while ((uVar26 + param_1) - uVar12 != (int)lVar18);
    }
  }
LAB_0048abcc:
  return (void *)((long)StringPool::getGlobalPool()::pool + (long)(int)param_1 * 8);
}


