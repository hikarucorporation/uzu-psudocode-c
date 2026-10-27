// Function : getBusesLayout
// Namespace: juce:AudioProcessor
// Entry    : 004cacf0
// Prototype: ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> * getBusesLayout(ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> * param_1, long param_2)
// Body     : 004cacf0 - 004caffc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getBusesLayout() const */

ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> * __cdecl
juce::AudioProcessor::getBusesLayout
          (ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *param_1,long param_2)

{
  long *plVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  long *plVar15;
  long lVar16;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((long)*(int *)(param_2 + 0xcc) != 0) {
    plVar15 = *(long **)(param_2 + 0xc0);
    plVar1 = plVar15 + *(int *)(param_2 + 0xcc);
    iVar7 = 0;
    lVar16 = *plVar15;
    do {
      ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::setAllocatedSize
                (param_1,iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
      iVar7 = *(int *)(param_1 + 0xc);
      do {
        *(int *)(param_1 + 0xc) = iVar7 + 1;
        lVar4 = *(long *)param_1;
        lVar8 = (long)iVar7;
        *(undefined8 *)(lVar4 + lVar8 * 0x28) = 0;
        uVar5 = *(ulong *)(lVar16 + 0x28);
        *(ulong *)(lVar4 + 0x18 + lVar8 * 0x28) = uVar5;
        pvVar10 = *(void **)(lVar16 + 0x10);
        pvVar9 = pvVar10;
        if (pvVar10 == (void *)0x0) {
          pvVar9 = (void *)(lVar16 + 0x18);
        }
        uVar11 = 0xffffffff;
        if (-1 < (int)*(uint *)(lVar16 + 0x30)) {
          uVar12 = *(uint *)(lVar16 + 0x30) >> 5;
          uVar13 = uVar12 << 5;
LAB_004cadc0:
          uVar3 = *(uint *)((long)pvVar9 + (ulong)uVar12 * 4);
          if (uVar3 == 0) goto code_r0x004cadc9;
          uVar11 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          uVar11 = (uVar11 ^ 0x1f | uVar13) ^ 0x1f;
        }
LAB_004cadeb:
        *(uint *)(lVar8 * 0x28 + 0x20 + lVar4) = uVar11;
        *(undefined1 *)(lVar4 + 0x24 + lVar8 * 0x28) = *(undefined1 *)(lVar16 + 0x34);
        sVar2 = uVar5 * 4;
        if (uVar5 < 5) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (sVar2 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = malloc(sVar2);
          }
          *(void **)(lVar8 * 0x28 + lVar4) = pvVar9;
          pvVar10 = *(void **)(lVar16 + 0x10);
        }
        pvVar14 = (void *)(lVar4 + 8 + lVar8 * 0x28);
        if (pvVar9 != (void *)0x0) {
          pvVar14 = pvVar9;
        }
        pvVar9 = (void *)(lVar16 + 0x18);
        if (pvVar10 != (void *)0x0) {
          pvVar9 = pvVar10;
        }
        memcpy(pvVar14,pvVar9,sVar2);
        plVar15 = plVar15 + 1;
        if (plVar15 == plVar1) goto LAB_004cae89;
        iVar7 = *(int *)(param_1 + 0xc);
        lVar16 = *plVar15;
      } while (iVar7 < *(int *)(param_1 + 8));
    } while( true );
  }
LAB_004cae89:
  if ((long)*(int *)(param_2 + 0xdc) != 0) {
    plVar15 = *(long **)(param_2 + 0xd0);
    plVar1 = plVar15 + *(int *)(param_2 + 0xdc);
    do {
      lVar16 = *plVar15;
      iVar7 = *(int *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x18) <= iVar7) {
        ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::setAllocatedSize
                  (param_1 + 0x10,iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8
                  );
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      *(int *)(param_1 + 0x1c) = iVar7 + 1;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar8 = (long)iVar7;
      *(undefined8 *)(lVar4 + lVar8 * 0x28) = 0;
      uVar5 = *(ulong *)(lVar16 + 0x28);
      *(ulong *)(lVar4 + 0x18 + lVar8 * 0x28) = uVar5;
      pvVar10 = *(void **)(lVar16 + 0x10);
      pvVar9 = pvVar10;
      if (pvVar10 == (void *)0x0) {
        pvVar9 = (void *)(lVar16 + 0x18);
      }
      uVar11 = 0xffffffff;
      if (-1 < (int)*(uint *)(lVar16 + 0x30)) {
        uVar12 = *(uint *)(lVar16 + 0x30) >> 5;
        uVar13 = uVar12 << 5;
LAB_004caf70:
        uVar3 = *(uint *)((long)pvVar9 + (ulong)uVar12 * 4);
        if (uVar3 == 0) goto code_r0x004caf79;
        uVar11 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar11 = (uVar11 ^ 0x1f | uVar13) ^ 0x1f;
      }
LAB_004caf9b:
      *(uint *)(lVar8 * 0x28 + 0x20 + lVar4) = uVar11;
      *(undefined1 *)(lVar4 + 0x24 + lVar8 * 0x28) = *(undefined1 *)(lVar16 + 0x34);
      sVar2 = uVar5 * 4;
      if (uVar5 < 5) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (sVar2 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = malloc(sVar2);
        }
        *(void **)(lVar8 * 0x28 + lVar4) = pvVar9;
        pvVar10 = *(void **)(lVar16 + 0x10);
      }
      pvVar14 = (void *)(lVar4 + 8 + lVar8 * 0x28);
      if (pvVar9 != (void *)0x0) {
        pvVar14 = pvVar9;
      }
      pvVar9 = (void *)(lVar16 + 0x18);
      if (pvVar10 != (void *)0x0) {
        pvVar9 = pvVar10;
      }
      memcpy(pvVar14,pvVar9,sVar2);
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
  }
  return param_1;
code_r0x004cadc9:
  uVar13 = uVar13 - 0x20;
  bVar6 = (int)uVar12 < 1;
  uVar12 = uVar12 - 1;
  if (bVar6) goto LAB_004cadeb;
  goto LAB_004cadc0;
code_r0x004caf79:
  uVar13 = uVar13 - 0x20;
  bVar6 = (int)uVar12 < 1;
  uVar12 = uVar12 - 1;
  if (bVar6) goto LAB_004caf9b;
  goto LAB_004caf70;
}


