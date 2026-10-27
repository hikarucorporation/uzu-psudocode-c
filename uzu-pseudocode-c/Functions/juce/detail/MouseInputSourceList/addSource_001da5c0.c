// Function : addSource
// Namespace: juce:detail:MouseInputSourceList
// Entry    : 001da5c0
// Prototype: undefined addSource(long param_1)
// Body     : 001da5c0 - 001da918


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::MouseInputSourceList::addSource(int, juce::MouseInputSource::InputSourceType) */

void __cdecl juce::detail::MouseInputSourceList::addSource(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  void *__ptr;
  uint uVar16;
  ulong uVar17;
  
  puVar7 = operator_new(0x100);
  *puVar7 = &PTR__AsyncUpdater_00712b58;
  puVar7[1] = 0;
                    /* try { // try from 001da5ea to 001da5f3 has its CatchHandler @ 001da919 */
  puVar8 = operator_new(0x20);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar8[2] = puVar7;
  *(undefined4 *)(puVar8 + 3) = 0;
  LOCK();
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  UNLOCK();
  pvVar9 = (void *)puVar7[1];
  puVar7[1] = puVar8;
  if (pvVar9 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar9 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar9);
    }
  }
  *puVar7 = &PTR__MouseInputSourceImpl_0070dd80;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  *(undefined8 *)((long)puVar7 + 0x79) = 0;
  *(undefined8 *)((long)puVar7 + 0x81) = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  *(undefined8 *)((long)puVar7 + 0x99) = 0;
  *(undefined8 *)((long)puVar7 + 0xa1) = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  *(undefined8 *)((long)puVar7 + 0xb9) = 0;
  *(undefined8 *)((long)puVar7 + 0xc1) = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  *(undefined8 *)((long)puVar7 + 0xd9) = 0;
  *(undefined8 *)((long)puVar7 + 0xe1) = 0;
  puVar7[0x1e] = 0;
  *(undefined1 *)(puVar7 + 0x1f) = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xd) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(undefined2 *)(puVar7 + 8) = 0;
  iVar6 = *(int *)(param_1 + 0x34);
  if ((int)*(uint *)(param_1 + 0x30) <= iVar6) {
    uVar13 = iVar6 + ((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(param_1 + 0x30) != uVar13) {
      if ((int)uVar13 < 1) {
        free(*(void **)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        pvVar9 = realloc(*(void **)(param_1 + 0x28),(ulong)uVar13 << 3);
        *(void **)(param_1 + 0x28) = pvVar9;
      }
    }
    *(uint *)(param_1 + 0x30) = uVar13;
    iVar6 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x34) = iVar6 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)iVar6 * 8) = puVar7;
  uVar13 = *(uint *)(param_1 + 0x44);
  uVar17 = (ulong)uVar13;
  if ((int)uVar13 < (int)*(uint *)(param_1 + 0x40)) goto LAB_001da819;
  uVar16 = uVar13 + ((int)((uVar13 - ((int)(uVar13 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
  if (*(uint *)(param_1 + 0x40) != uVar16) {
    if ((int)uVar16 < 1) {
      free(*(void **)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      pvVar9 = malloc((ulong)uVar16 << 3);
      if ((int)uVar13 < 1) {
        __ptr = *(void **)(param_1 + 0x38);
      }
      else {
        __ptr = *(void **)(param_1 + 0x38);
        if ((uVar13 < 4) ||
           ((pvVar9 < (void *)((long)__ptr + uVar17 * 8) &&
            (__ptr < (void *)((long)pvVar9 + uVar17 * 8))))) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)(uVar13 & 0xfffffffc);
          uVar11 = (uVar10 - 4 >> 2) + 1;
          uVar15 = (ulong)((uint)uVar11 & 3);
          if (uVar10 - 4 < 0xc) {
            lVar12 = 0;
          }
          else {
            uVar11 = uVar11 & 0xfffffffffffffffc;
            lVar12 = 0;
            do {
              puVar8 = (undefined8 *)((long)__ptr + lVar12 * 8);
              uVar3 = puVar8[1];
              puVar2 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x10);
              uVar4 = *puVar2;
              uVar5 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar9 + lVar12 * 8);
              *puVar2 = *puVar8;
              puVar2[1] = uVar3;
              puVar8 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x10);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              puVar8 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x20);
              uVar3 = puVar8[1];
              puVar2 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x30);
              uVar4 = *puVar2;
              uVar5 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x20);
              *puVar2 = *puVar8;
              puVar2[1] = uVar3;
              puVar8 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x30);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              puVar8 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x40);
              uVar3 = puVar8[1];
              puVar2 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x50);
              uVar4 = *puVar2;
              uVar5 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x40);
              *puVar2 = *puVar8;
              puVar2[1] = uVar3;
              puVar8 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x50);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              puVar8 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x60);
              uVar3 = puVar8[1];
              puVar2 = (undefined8 *)((long)__ptr + lVar12 * 8 + 0x70);
              uVar4 = *puVar2;
              uVar5 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x60);
              *puVar2 = *puVar8;
              puVar2[1] = uVar3;
              puVar8 = (undefined8 *)((long)pvVar9 + lVar12 * 8 + 0x70);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              lVar12 = lVar12 + 0x10;
              uVar11 = uVar11 - 4;
            } while (uVar11 != 0);
          }
          if (uVar15 != 0) {
            lVar14 = 0;
            do {
              puVar2 = (undefined8 *)((long)__ptr + lVar14 + lVar12 * 8);
              uVar3 = puVar2[1];
              puVar8 = (undefined8 *)((long)__ptr + lVar14 + lVar12 * 8 + 0x10);
              uVar4 = *puVar8;
              uVar5 = puVar8[1];
              puVar8 = (undefined8 *)((long)pvVar9 + lVar14 + lVar12 * 8);
              *puVar8 = *puVar2;
              puVar8[1] = uVar3;
              puVar8 = (undefined8 *)((long)pvVar9 + lVar14 + lVar12 * 8 + 0x10);
              *puVar8 = uVar4;
              puVar8[1] = uVar5;
              lVar14 = lVar14 + 0x20;
            } while (uVar15 * 0x20 != lVar14);
          }
          if (uVar10 == uVar17) goto LAB_001da808;
        }
        uVar11 = ~uVar10;
        uVar15 = uVar17 & 3;
        if ((uVar13 & 3) != 0) {
          do {
            *(undefined8 *)((long)pvVar9 + uVar10 * 8) = *(undefined8 *)((long)__ptr + uVar10 * 8);
            uVar10 = uVar10 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (2 < uVar11 + uVar17) {
          do {
            *(undefined8 *)((long)pvVar9 + uVar10 * 8) = *(undefined8 *)((long)__ptr + uVar10 * 8);
            *(undefined8 *)((long)pvVar9 + uVar10 * 8 + 8) =
                 *(undefined8 *)((long)__ptr + uVar10 * 8 + 8);
            *(undefined8 *)((long)pvVar9 + uVar10 * 8 + 0x10) =
                 *(undefined8 *)((long)__ptr + uVar10 * 8 + 0x10);
            *(undefined8 *)((long)pvVar9 + uVar10 * 8 + 0x18) =
                 *(undefined8 *)((long)__ptr + uVar10 * 8 + 0x18);
            uVar10 = uVar10 + 4;
          } while (uVar17 != uVar10);
        }
      }
LAB_001da808:
      *(void **)(param_1 + 0x38) = pvVar9;
      free(__ptr);
    }
  }
  *(uint *)(param_1 + 0x40) = uVar16;
  uVar13 = *(uint *)(param_1 + 0x44);
LAB_001da819:
  *(uint *)(param_1 + 0x44) = uVar13 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar13 * 8) = puVar7;
  return;
}


