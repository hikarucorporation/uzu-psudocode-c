// Function : createBus
// Namespace: juce:AudioProcessor
// Entry    : 004c8130
// Prototype: undefined createBus(AudioProcessor * this, byte param_1, long * param_2)
// Body     : 004c8130 - 004c8452


/* juce::AudioProcessor::createBus(bool, juce::AudioProcessor::BusProperties const&) */

void __thiscall juce::AudioProcessor::createBus(AudioProcessor *this,byte param_1,long *param_2)

{
  size_t sVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  long *plVar13;
  AudioProcessor *pAVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  
  puVar7 = operator_new(0x90);
  lVar5 = param_2[6];
  *puVar7 = this;
  lVar10 = *param_2;
  puVar7[1] = lVar10;
  piVar8 = (int *)(lVar10 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  if ((char)lVar5 == '\0') {
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[6] = 0;
    puVar7[5] = 4;
    *(undefined4 *)(puVar7 + 6) = 0xffffffff;
    puVar7[3] = 0;
    puVar7[4] = 0;
  }
  else {
    puVar7[2] = 0;
    uVar3 = param_2[4];
    puVar7[5] = uVar3;
    plVar13 = param_2 + 2;
    if ((long *)param_2[1] != (long *)0x0) {
      plVar13 = (long *)param_2[1];
    }
    uVar15 = 0xffffffff;
    if (-1 < (int)*(uint *)(param_2 + 5)) {
      uVar16 = *(uint *)(param_2 + 5) >> 5;
      uVar12 = uVar16 << 5;
LAB_004c81c0:
      uVar2 = *(uint *)((long)plVar13 + (ulong)uVar16 * 4);
      if (uVar2 == 0) goto code_r0x004c81c9;
      uVar15 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar15 = (uVar15 ^ 0x1f | uVar12) ^ 0x1f;
    }
LAB_004c8210:
    *(uint *)(puVar7 + 6) = uVar15;
    *(undefined1 *)((long)puVar7 + 0x34) = *(undefined1 *)((long)param_2 + 0x2c);
    sVar1 = uVar3 * 4;
    if (uVar3 < 5) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      if (sVar1 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = malloc(sVar1);
      }
      puVar7[2] = puVar9;
    }
    puVar17 = puVar7 + 3;
    if (puVar9 != (undefined8 *)0x0) {
      puVar17 = puVar9;
    }
    memcpy(puVar17,plVar13,sVar1);
  }
  puVar7[7] = 0;
  uVar3 = param_2[4];
  puVar7[10] = uVar3;
  plVar13 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar13 = param_2 + 2;
  }
  uVar15 = 0xffffffff;
  if (-1 < (int)*(uint *)(param_2 + 5)) {
    uVar16 = *(uint *)(param_2 + 5) >> 5;
    uVar12 = uVar16 << 5;
LAB_004c8290:
    uVar2 = *(uint *)((long)plVar13 + (ulong)uVar16 * 4);
    if (uVar2 == 0) goto code_r0x004c8299;
    uVar15 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar15 == 0; uVar15 = uVar15 - 1) {
      }
    }
    uVar15 = (uVar15 ^ 0x1f | uVar12) ^ 0x1f;
  }
LAB_004c82b2:
  *(uint *)(puVar7 + 0xb) = uVar15;
  *(undefined1 *)((long)puVar7 + 0x5c) = *(undefined1 *)((long)param_2 + 0x2c);
  sVar1 = uVar3 * 4;
  if (uVar3 < 5) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    if (sVar1 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = malloc(sVar1);
    }
    puVar7[7] = puVar9;
  }
  puVar17 = puVar7 + 8;
  if (puVar9 != (undefined8 *)0x0) {
    puVar17 = puVar9;
  }
  memcpy(puVar17,plVar13,sVar1);
  puVar7[0xc] = 0;
  uVar3 = param_2[4];
  puVar7[0xf] = uVar3;
  plVar13 = param_2 + 2;
  if ((long *)param_2[1] != (long *)0x0) {
    plVar13 = (long *)param_2[1];
  }
  uVar15 = 0xffffffff;
  if (-1 < (int)*(uint *)(param_2 + 5)) {
    uVar16 = *(uint *)(param_2 + 5) >> 5;
    uVar12 = uVar16 << 5;
    do {
      uVar2 = *(uint *)((long)plVar13 + (ulong)uVar16 * 4);
      if (uVar2 != 0) {
        uVar15 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar15 == 0; uVar15 = uVar15 - 1) {
          }
        }
        uVar15 = (uVar15 ^ 0x1f | uVar12) ^ 0x1f;
        break;
      }
      uVar12 = uVar12 - 0x20;
      bVar4 = 0 < (int)uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar4);
  }
  *(uint *)(puVar7 + 0x10) = uVar15;
  *(undefined1 *)((long)puVar7 + 0x84) = *(undefined1 *)((long)param_2 + 0x2c);
  sVar1 = uVar3 * 4;
  if (uVar3 < 5) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    if (sVar1 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = malloc(sVar1);
    }
    puVar7[0xc] = puVar9;
  }
  puVar17 = puVar7 + 0xd;
  if (puVar9 != (undefined8 *)0x0) {
    puVar17 = puVar9;
  }
  memcpy(puVar17,plVar13,sVar1);
  *(char *)(puVar7 + 0x11) = (char)lVar5;
  lVar10 = (ulong)(param_1 ^ 1) * 0x10;
  pAVar14 = this + lVar10 + 0xc0;
  iVar6 = *(int *)(this + lVar10 + 0xcc);
  if ((int)*(uint *)(this + lVar10 + 200) <= iVar6) {
    uVar15 = iVar6 + ((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + lVar10 + 200) != uVar15) {
      if ((int)uVar15 < 1) {
        free(*(void **)pAVar14);
        *(long *)pAVar14 = 0;
      }
      else {
        pvVar11 = realloc(*(void **)pAVar14,(ulong)uVar15 << 3);
        *(void **)pAVar14 = pvVar11;
      }
    }
    *(uint *)(this + lVar10 + 200) = uVar15;
    iVar6 = *(int *)(this + lVar10 + 0xcc);
  }
  *(int *)(this + lVar10 + 0xcc) = iVar6 + 1;
  *(undefined8 **)(*(long *)pAVar14 + (long)iVar6 * 8) = puVar7;
  audioIOChanged(this,'\x01',(char)param_2[6]);
  return;
code_r0x004c81c9:
  uVar12 = uVar12 - 0x20;
  bVar4 = (int)uVar16 < 1;
  uVar16 = uVar16 - 1;
  if (bVar4) goto LAB_004c8210;
  goto LAB_004c81c0;
code_r0x004c8299:
  uVar12 = uVar12 - 0x20;
  bVar4 = (int)uVar16 < 1;
  uVar16 = uVar16 - 1;
  if (bVar4) goto LAB_004c82b2;
  goto LAB_004c8290;
}


