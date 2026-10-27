// Function : enableAllBuses
// Namespace: juce:AudioProcessor
// Entry    : 004cc670
// Prototype: ulong enableAllBuses(AudioProcessor * this)
// Body     : 004cc670 - 004ccbcd


/* juce::AudioProcessor::enableAllBuses() */

ulong __thiscall juce::AudioProcessor::enableAllBuses(AudioProcessor *this)

{
  long *plVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  ulong local_80;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  AudioProcessor *local_40;
  ulong local_38;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_40 = this;
  if ((long)*(int *)(this + 0xcc) == 0) {
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    iVar5 = *(int *)(this + 0xdc);
  }
  else {
    plVar14 = *(long **)(this + 0xc0);
    plVar1 = plVar14 + *(int *)(this + 0xcc);
    local_88 = (undefined8 *)0x0;
    local_94 = 0;
    uVar11 = 0;
    puVar9 = (undefined8 *)0x0;
    do {
      lVar18 = *plVar14;
      local_80 = uVar11 + 1;
      puVar10 = puVar9;
      if ((long)uVar11 < (long)(int)local_94) {
      }
      else {
        uVar13 = (int)uVar11 + ((uint)(local_80 >> 1) & 0x7fffffff) + 9 & 0xfffffff8;
        if (local_94 != uVar13) {
          if ((int)uVar13 < 1) {
            free(puVar9);
            local_68 = (undefined8 *)0x0;
            local_88 = (undefined8 *)0x0;
            puVar10 = (undefined8 *)0x0;
          }
          else {
            puVar10 = malloc((ulong)uVar13 * 0x28);
            if (uVar11 != 0) {
              lVar17 = 0;
              uVar16 = uVar11;
              do {
                *(undefined8 *)((long)puVar10 + lVar17) = *(undefined8 *)((long)puVar9 + lVar17);
                *(undefined8 *)((long)puVar9 + lVar17) = 0;
                *(undefined8 *)((long)puVar10 + lVar17 + 0x18) =
                     *(undefined8 *)((long)puVar9 + lVar17 + 0x18);
                *(undefined4 *)((long)puVar10 + lVar17 + 0x20) =
                     *(undefined4 *)((long)puVar9 + lVar17 + 0x20);
                *(undefined1 *)((long)puVar10 + lVar17 + 0x24) =
                     *(undefined1 *)((long)puVar9 + lVar17 + 0x24);
                puVar21 = (undefined8 *)((long)puVar9 + lVar17 + 8);
                uVar8 = puVar21[1];
                puVar3 = (undefined8 *)((long)puVar10 + lVar17 + 8);
                *puVar3 = *puVar21;
                puVar3[1] = uVar8;
                free(*(void **)((long)puVar9 + lVar17));
                lVar17 = lVar17 + 0x28;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            local_68 = puVar10;
            free(puVar9);
            local_88 = puVar10;
          }
        }
        uStack_60 = (ulong)uVar13;
        local_94 = uVar13;
      }
      uStack_60 = CONCAT44((int)local_80,(undefined4)uStack_60);
      puVar10[uVar11 * 5] = 0;
      uVar16 = *(ulong *)(lVar18 + 0x78);
      puVar10[uVar11 * 5 + 3] = uVar16;
      pvVar12 = *(void **)(lVar18 + 0x60);
      pvVar19 = pvVar12;
      if (pvVar12 == (void *)0x0) {
        pvVar19 = (void *)(lVar18 + 0x68);
      }
      uVar13 = 0xffffffff;
      if (-1 < (int)*(uint *)(lVar18 + 0x80)) {
        uVar15 = *(uint *)(lVar18 + 0x80) >> 5;
        uVar20 = uVar15 << 5;
LAB_004cc860:
        uVar4 = *(uint *)((long)pvVar19 + (ulong)uVar15 * 4);
        if (uVar4 == 0) goto code_r0x004cc869;
        uVar13 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar13 == 0; uVar13 = uVar13 - 1) {
          }
        }
        uVar13 = (uVar13 ^ 0x1f | uVar20) ^ 0x1f;
      }
LAB_004cc88b:
      *(uint *)(puVar10 + uVar11 * 5 + 4) = uVar13;
      *(undefined1 *)((long)puVar10 + uVar11 * 0x28 + 0x24) = *(undefined1 *)(lVar18 + 0x84);
      sVar2 = uVar16 * 4;
      if (uVar16 < 5) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        if (sVar2 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = malloc(sVar2);
        }
        puVar10[uVar11 * 5] = puVar9;
        pvVar12 = *(void **)(lVar18 + 0x60);
      }
      puVar21 = puVar10 + uVar11 * 5 + 1;
      if (puVar9 != (undefined8 *)0x0) {
        puVar21 = puVar9;
      }
      pvVar19 = (void *)(lVar18 + 0x68);
      if (pvVar12 != (void *)0x0) {
        pvVar19 = pvVar12;
      }
      memcpy(puVar21,pvVar19,sVar2);
      plVar14 = plVar14 + 1;
      uVar11 = local_80;
      puVar9 = puVar10;
    } while (plVar14 != plVar1);
    iVar5 = *(int *)(local_40 + 0xdc);
  }
  if ((long)iVar5 == 0) {
    local_90 = (undefined8 *)0x0;
    uVar16 = 0;
  }
  else {
    plVar14 = *(long **)(local_40 + 0xd0);
    plVar1 = plVar14 + iVar5;
    local_90 = (undefined8 *)0x0;
    local_94 = 0;
    puVar9 = (undefined8 *)0x0;
    uVar11 = 0;
    do {
      lVar18 = *plVar14;
      uVar16 = uVar11 + 1;
      puVar10 = puVar9;
      if ((long)uVar11 < (long)(int)local_94) {
      }
      else {
        uVar13 = (int)uVar11 + ((uint)(uVar16 >> 1) & 0x7fffffff) + 9 & 0xfffffff8;
        if (local_94 != uVar13) {
          if ((int)uVar13 < 1) {
            free(puVar9);
            local_58 = (undefined8 *)0x0;
            local_90 = (undefined8 *)0x0;
            puVar10 = (undefined8 *)0x0;
          }
          else {
            local_38 = uVar16;
            puVar10 = malloc((ulong)uVar13 * 0x28);
            if (uVar11 != 0) {
              lVar17 = 0;
              uVar16 = uVar11;
              do {
                *(undefined8 *)((long)puVar10 + lVar17) = *(undefined8 *)((long)puVar9 + lVar17);
                *(undefined8 *)((long)puVar9 + lVar17) = 0;
                *(undefined8 *)((long)puVar10 + lVar17 + 0x18) =
                     *(undefined8 *)((long)puVar9 + lVar17 + 0x18);
                *(undefined4 *)((long)puVar10 + lVar17 + 0x20) =
                     *(undefined4 *)((long)puVar9 + lVar17 + 0x20);
                *(undefined1 *)((long)puVar10 + lVar17 + 0x24) =
                     *(undefined1 *)((long)puVar9 + lVar17 + 0x24);
                puVar21 = (undefined8 *)((long)puVar9 + lVar17 + 8);
                uVar8 = puVar21[1];
                puVar3 = (undefined8 *)((long)puVar10 + lVar17 + 8);
                *puVar3 = *puVar21;
                puVar3[1] = uVar8;
                free(*(void **)((long)puVar9 + lVar17));
                lVar17 = lVar17 + 0x28;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            local_58 = puVar10;
            free(puVar9);
            uVar16 = local_38;
            local_90 = puVar10;
          }
        }
        uStack_50 = (ulong)uVar13;
        local_94 = uVar13;
      }
      uStack_50 = CONCAT44((int)uVar16,(undefined4)uStack_50);
      puVar10[uVar11 * 5] = 0;
      uVar6 = *(ulong *)(lVar18 + 0x78);
      puVar10[uVar11 * 5 + 3] = uVar6;
      pvVar12 = *(void **)(lVar18 + 0x60);
      pvVar19 = pvVar12;
      if (pvVar12 == (void *)0x0) {
        pvVar19 = (void *)(lVar18 + 0x68);
      }
      uVar13 = 0xffffffff;
      if (-1 < (int)*(uint *)(lVar18 + 0x80)) {
        uVar15 = *(uint *)(lVar18 + 0x80) >> 5;
        uVar20 = uVar15 << 5;
LAB_004ccab0:
        uVar4 = *(uint *)((long)pvVar19 + (ulong)uVar15 * 4);
        if (uVar4 == 0) goto code_r0x004ccab9;
        uVar13 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar13 == 0; uVar13 = uVar13 - 1) {
          }
        }
        uVar13 = (uVar13 ^ 0x1f | uVar20) ^ 0x1f;
      }
LAB_004ccade:
      *(uint *)(puVar10 + uVar11 * 5 + 4) = uVar13;
      *(undefined1 *)((long)puVar10 + uVar11 * 0x28 + 0x24) = *(undefined1 *)(lVar18 + 0x84);
      sVar2 = uVar6 * 4;
      if (uVar6 < 5) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        if (sVar2 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = malloc(sVar2);
        }
        puVar10[uVar11 * 5] = puVar9;
        pvVar12 = *(void **)(lVar18 + 0x60);
      }
      puVar21 = puVar10 + uVar11 * 5 + 1;
      if (puVar9 != (undefined8 *)0x0) {
        puVar21 = puVar9;
      }
      pvVar19 = (void *)(lVar18 + 0x68);
      if (pvVar12 != (void *)0x0) {
        pvVar19 = pvVar12;
      }
      memcpy(puVar21,pvVar19,sVar2);
      plVar14 = plVar14 + 1;
      puVar9 = puVar10;
      uVar11 = uVar16;
    } while (plVar14 != plVar1);
  }
                    /* try { // try from 004ccb55 to 004ccb5e has its CatchHandler @ 004ccbce */
  uVar11 = setBusesLayout(local_40,&local_68);
  if (0 < (int)uVar16) {
    lVar18 = (long)(int)uVar16;
    puVar9 = local_90;
    do {
      free((void *)*puVar9);
      puVar9 = puVar9 + 5;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  free(local_90);
  if (0 < (int)local_80) {
    lVar18 = (long)(int)local_80;
    puVar9 = local_88;
    do {
      free((void *)*puVar9);
      puVar9 = puVar9 + 5;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  free(local_88);
  return uVar11 & 0xffffffff;
code_r0x004cc869:
  uVar20 = uVar20 - 0x20;
  bVar7 = (int)uVar15 < 1;
  uVar15 = uVar15 - 1;
  if (bVar7) goto LAB_004cc88b;
  goto LAB_004cc860;
code_r0x004ccab9:
  uVar20 = uVar20 - 0x20;
  bVar7 = (int)uVar15 < 1;
  uVar15 = uVar15 - 1;
  if (bVar7) goto LAB_004ccade;
  goto LAB_004ccab0;
}


