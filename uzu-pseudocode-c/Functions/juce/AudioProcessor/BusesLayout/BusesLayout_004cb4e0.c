// Function : BusesLayout
// Namespace: juce:AudioProcessor:BusesLayout
// Entry    : 004cb4e0
// Prototype: undefined BusesLayout(BusesLayout * this, undefined8 * param_1)
// Body     : 004cb4e0 - 004cb770


/* juce::AudioProcessor::BusesLayout::BusesLayout(juce::AudioProcessor::BusesLayout const&) */

void __thiscall
juce::AudioProcessor::BusesLayout::BusesLayout(BusesLayout *this,undefined8 *param_1)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  iVar7 = 0;
  if (0 < (int)uVar2) {
    plVar13 = (long *)*param_1;
    ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)this,
               uVar2 + (uVar2 >> 1) + 8 & 0xfffffff8);
    puVar17 = (undefined8 *)((long)*(int *)(this + 0xc) * 0x28 + *(long *)this);
    uVar6 = uVar2;
    do {
      *puVar17 = 0;
      uVar4 = plVar13[3];
      puVar17[3] = uVar4;
      plVar10 = (long *)*plVar13;
      plVar14 = plVar10;
      if (plVar10 == (long *)0x0) {
        plVar14 = plVar13 + 1;
      }
      uVar11 = 0xffffffff;
      if (-1 < (int)*(uint *)(plVar13 + 4)) {
        uVar12 = *(uint *)(plVar13 + 4) >> 5;
        uVar15 = uVar12 << 5;
LAB_004cb5b0:
        uVar3 = *(uint *)((long)plVar14 + (ulong)uVar12 * 4);
        if (uVar3 == 0) goto code_r0x004cb5b9;
        uVar11 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar11 = (uVar11 ^ 0x1f | uVar15) ^ 0x1f;
      }
LAB_004cb5de:
      *(uint *)(puVar17 + 4) = uVar11;
      *(undefined1 *)((long)puVar17 + 0x24) = *(undefined1 *)((long)plVar13 + 0x24);
      sVar1 = uVar4 * 4;
      if (uVar4 < 5) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        if (sVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = malloc(sVar1);
        }
        *puVar17 = puVar8;
        plVar10 = (long *)*plVar13;
      }
      puVar16 = puVar17 + 1;
      if (puVar8 != (undefined8 *)0x0) {
        puVar16 = puVar8;
      }
      plVar14 = plVar13 + 1;
      if (plVar10 != (long *)0x0) {
        plVar14 = plVar10;
      }
      memcpy(puVar16,plVar14,sVar1);
      plVar13 = plVar13 + 5;
      puVar17 = puVar17 + 5;
      bVar5 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar5);
    iVar7 = *(int *)(this + 0xc);
  }
  iVar9 = 0;
  *(uint *)(this + 0xc) = iVar7 + uVar2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar2 = *(uint *)((long)param_1 + 0x1c);
  if (0 < (int)uVar2) {
    plVar13 = (long *)param_1[2];
    ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)(this + 0x10),
               uVar2 + (uVar2 >> 1) + 8 & 0xfffffff8);
    puVar17 = (undefined8 *)((long)*(int *)(this + 0x1c) * 0x28 + *(long *)(this + 0x10));
    uVar6 = uVar2;
    do {
      *puVar17 = 0;
      uVar4 = plVar13[3];
      puVar17[3] = uVar4;
      plVar10 = (long *)*plVar13;
      plVar14 = plVar10;
      if (plVar10 == (long *)0x0) {
        plVar14 = plVar13 + 1;
      }
      uVar11 = 0xffffffff;
      if (-1 < (int)*(uint *)(plVar13 + 4)) {
        uVar12 = *(uint *)(plVar13 + 4) >> 5;
        uVar15 = uVar12 << 5;
LAB_004cb6f0:
        uVar3 = *(uint *)((long)plVar14 + (ulong)uVar12 * 4);
        if (uVar3 == 0) goto code_r0x004cb6f9;
        uVar11 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar11 = (uVar11 ^ 0x1f | uVar15) ^ 0x1f;
      }
LAB_004cb71b:
      *(uint *)(puVar17 + 4) = uVar11;
      *(undefined1 *)((long)puVar17 + 0x24) = *(undefined1 *)((long)plVar13 + 0x24);
      sVar1 = uVar4 * 4;
      if (uVar4 < 5) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        if (sVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = malloc(sVar1);
        }
        *puVar17 = puVar8;
        plVar10 = (long *)*plVar13;
      }
      puVar16 = puVar17 + 1;
      if (puVar8 != (undefined8 *)0x0) {
        puVar16 = puVar8;
      }
      plVar14 = plVar13 + 1;
      if (plVar10 != (long *)0x0) {
        plVar14 = plVar10;
      }
      memcpy(puVar16,plVar14,sVar1);
      plVar13 = plVar13 + 5;
      puVar17 = puVar17 + 5;
      bVar5 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar5);
    iVar9 = *(int *)(this + 0x1c);
  }
  *(uint *)(this + 0x1c) = iVar9 + uVar2;
  return;
code_r0x004cb5b9:
  uVar15 = uVar15 - 0x20;
  bVar5 = (int)uVar12 < 1;
  uVar12 = uVar12 - 1;
  if (bVar5) goto LAB_004cb5de;
  goto LAB_004cb5b0;
code_r0x004cb6f9:
  uVar15 = uVar15 - 0x20;
  bVar5 = (int)uVar12 < 1;
  uVar12 = uVar12 - 1;
  if (bVar5) goto LAB_004cb71b;
  goto LAB_004cb6f0;
}


