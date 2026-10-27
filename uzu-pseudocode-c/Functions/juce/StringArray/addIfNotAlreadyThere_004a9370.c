// Function : addIfNotAlreadyThere
// Namespace: juce:StringArray
// Entry    : 004a9370
// Prototype: undefined addIfNotAlreadyThere(ulong * param_1, undefined8 * param_2)
// Body     : 004a9370 - 004a95eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::StringArray::addIfNotAlreadyThere(juce::String const&, bool) */

void __cdecl juce::StringArray::addIfNotAlreadyThere(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  
  pbVar5 = (byte *)*param_2;
  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    uVar13 = *param_1;
    uVar12 = 0;
    do {
      uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar5,*(byte **)(uVar13 + uVar12 * 8));
      if (uVar10 == 0) {
        if ((uVar12 & 0x80000000) == 0) {
          return;
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar16 != uVar12);
  }
  pbVar3 = pbVar5 + -0x10;
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar3 = *(int *)pbVar3 + 1;
    UNLOCK();
    uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
  }
  uVar10 = (uint)uVar16;
  if ((int)uVar10 < (int)(uint)param_1[1]) goto LAB_004a95cb;
  uVar17 = ((int)((uVar10 - ((int)(uVar10 + 1) >> 0x1f)) + 1) >> 1) + uVar10 + 9 & 0xfffffff8;
  if ((uint)param_1[1] != uVar17) {
    if ((int)uVar17 < 1) {
      free((void *)*param_1);
      *param_1 = 0;
    }
    else {
      pvVar11 = malloc((ulong)uVar17 << 3);
      if (0 < (int)uVar10) {
        pvVar6 = (void *)*param_1;
        if ((uVar10 < 4) ||
           ((pvVar11 < (void *)((long)pvVar6 + uVar16 * 8) &&
            (pvVar6 < (void *)((long)pvVar11 + uVar16 * 8))))) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)(uVar10 & 0xfffffffc);
          uVar12 = (uVar13 - 4 >> 2) + 1;
          if (uVar13 - 4 == 0) {
            lVar14 = 0;
          }
          else {
            uVar15 = uVar12 & 0xfffffffffffffffe;
            lVar14 = 0;
            do {
              puVar1 = (undefined8 *)((long)pvVar6 + lVar14 * 8);
              uVar7 = puVar1[1];
              puVar4 = (undefined8 *)((long)pvVar6 + lVar14 * 8 + 0x10);
              uVar8 = *puVar4;
              uVar9 = puVar4[1];
              puVar4 = (undefined8 *)((long)pvVar11 + lVar14 * 8);
              *puVar4 = *puVar1;
              puVar4[1] = uVar7;
              puVar1 = (undefined8 *)((long)pvVar11 + lVar14 * 8 + 0x10);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8 + 0x10);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar1 = (undefined8 *)((long)pvVar6 + lVar14 * 8 + 0x20);
              uVar7 = puVar1[1];
              puVar4 = (undefined8 *)((long)pvVar6 + lVar14 * 8 + 0x30);
              uVar8 = *puVar4;
              uVar9 = puVar4[1];
              puVar4 = (undefined8 *)((long)pvVar11 + lVar14 * 8 + 0x20);
              *puVar4 = *puVar1;
              puVar4[1] = uVar7;
              puVar1 = (undefined8 *)((long)pvVar11 + lVar14 * 8 + 0x30);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8 + 0x20);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8 + 0x30);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              lVar14 = lVar14 + 8;
              uVar15 = uVar15 - 2;
            } while (uVar15 != 0);
          }
          if ((uVar12 & 1) != 0) {
            puVar1 = (undefined8 *)((long)pvVar6 + lVar14 * 8);
            uVar7 = puVar1[1];
            puVar4 = (undefined8 *)((long)pvVar6 + lVar14 * 8 + 0x10);
            uVar8 = *puVar4;
            uVar9 = puVar4[1];
            puVar4 = (undefined8 *)((long)pvVar11 + lVar14 * 8);
            *puVar4 = *puVar1;
            puVar4[1] = uVar7;
            puVar1 = (undefined8 *)((long)pvVar11 + lVar14 * 8 + 0x10);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
            puVar2 = (undefined4 *)((long)pvVar6 + lVar14 * 8 + 0x10);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
          }
          if (uVar13 == uVar16) goto LAB_004a95b8;
        }
        uVar15 = ~uVar13;
        for (uVar12 = uVar16 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined8 *)((long)pvVar11 + uVar13 * 8) = *(undefined8 *)((long)pvVar6 + uVar13 * 8);
          *(undefined1 **)((long)pvVar6 + uVar13 * 8) = &DAT_0061ac58;
          uVar13 = uVar13 + 1;
        }
        if (2 < uVar15 + uVar16) {
          do {
            *(undefined8 *)((long)pvVar11 + uVar13 * 8) = *(undefined8 *)((long)pvVar6 + uVar13 * 8)
            ;
            *(undefined1 **)((long)pvVar6 + uVar13 * 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar11 + uVar13 * 8 + 8) =
                 *(undefined8 *)((long)pvVar6 + uVar13 * 8 + 8);
            *(undefined1 **)((long)pvVar6 + uVar13 * 8 + 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar11 + uVar13 * 8 + 0x10) =
                 *(undefined8 *)((long)pvVar6 + uVar13 * 8 + 0x10);
            *(undefined1 **)((long)pvVar6 + uVar13 * 8 + 0x10) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar11 + uVar13 * 8 + 0x18) =
                 *(undefined8 *)((long)pvVar6 + uVar13 * 8 + 0x18);
            *(undefined1 **)((long)pvVar6 + uVar13 * 8 + 0x18) = &DAT_0061ac58;
            uVar13 = uVar13 + 4;
          } while (uVar16 != uVar13);
        }
      }
LAB_004a95b8:
      pvVar6 = (void *)*param_1;
      *param_1 = (ulong)pvVar11;
      free(pvVar6);
    }
  }
  *(uint *)(param_1 + 1) = uVar17;
  uVar10 = *(uint *)((long)param_1 + 0xc);
LAB_004a95cb:
  *(uint *)((long)param_1 + 0xc) = uVar10 + 1;
  *(byte **)(*param_1 + (long)(int)uVar10 * 8) = pbVar5;
  return;
}


