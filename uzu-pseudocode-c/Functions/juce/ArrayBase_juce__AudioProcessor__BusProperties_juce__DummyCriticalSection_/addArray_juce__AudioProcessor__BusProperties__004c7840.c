// Function : addArray<juce::AudioProcessor::BusProperties>
// Namespace: juce:ArrayBase_juce__AudioProcessor__BusProperties_juce__DummyCriticalSection_
// Entry    : 004c7840
// Prototype: void addArray<juce::AudioProcessor::BusProperties>(ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> * this, long * param_1, int param_2)
// Body     : 004c7840 - 004c79ee


/* void juce::ArrayBase<juce::AudioProcessor::BusProperties,
   juce::DummyCriticalSection>::addArray<juce::AudioProcessor::BusProperties>(juce::AudioProcessor::BusProperties
   const*, int) */

void __thiscall
juce::ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>::
addArray<juce::AudioProcessor::BusProperties>
          (ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *this,
          long *param_1,int param_2)

{
  size_t __size;
  uint uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long *__dest;
  long *plVar11;
  uint uVar12;
  
  iVar8 = *(int *)(this + 0xc) + param_2;
  if ((int)*(uint *)(this + 8) < iVar8) {
    uVar12 = iVar8 + iVar8 / 2 + 8U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar12) {
      if ((int)uVar12 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        setAllocatedSizeInternal(this,uVar12);
      }
    }
    *(uint *)(this + 8) = uVar12;
  }
  if (0 < param_2) {
    plVar9 = (long *)((long)*(int *)(this + 0xc) * 0x38 + *(long *)this);
    iVar8 = param_2;
    do {
      lVar2 = *param_1;
      *plVar9 = lVar2;
      piVar6 = (int *)(lVar2 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      plVar9[1] = 0;
      uVar3 = param_1[4];
      plVar9[4] = uVar3;
      plVar11 = (long *)param_1[1];
      plVar7 = plVar11;
      if (plVar11 == (long *)0x0) {
        plVar7 = param_1 + 2;
      }
      uVar12 = 0xffffffff;
      if (-1 < (int)*(uint *)(param_1 + 5)) {
        uVar5 = *(uint *)(param_1 + 5) >> 5;
        uVar10 = uVar5 << 5;
LAB_004c7970:
        uVar1 = *(uint *)((long)plVar7 + (ulong)uVar5 * 4);
        if (uVar1 == 0) goto code_r0x004c7979;
        uVar12 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        uVar12 = (uVar12 ^ 0x1f | uVar10) ^ 0x1f;
      }
LAB_004c799b:
      *(uint *)(plVar9 + 5) = uVar12;
      *(undefined1 *)((long)plVar9 + 0x2c) = *(undefined1 *)((long)param_1 + 0x2c);
      __size = uVar3 * 4;
      if (uVar3 < 5) {
        plVar7 = (long *)0x0;
      }
      else {
        if (__size == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = malloc(__size);
        }
        plVar9[1] = (long)plVar7;
        plVar11 = (long *)param_1[1];
      }
      __dest = plVar9 + 2;
      if (plVar7 != (long *)0x0) {
        __dest = plVar7;
      }
      plVar7 = param_1 + 2;
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11;
      }
      memcpy(__dest,plVar7,__size);
      plVar11 = param_1 + 6;
      param_1 = param_1 + 7;
      *(char *)(plVar9 + 6) = (char)*plVar11;
      plVar9 = plVar9 + 7;
      bVar4 = 1 < iVar8;
      iVar8 = iVar8 + -1;
    } while (bVar4);
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return;
code_r0x004c7979:
  uVar10 = uVar10 - 0x20;
  bVar4 = (int)uVar5 < 1;
  uVar5 = uVar5 - 1;
  if (bVar4) goto LAB_004c799b;
  goto LAB_004c7970;
}


