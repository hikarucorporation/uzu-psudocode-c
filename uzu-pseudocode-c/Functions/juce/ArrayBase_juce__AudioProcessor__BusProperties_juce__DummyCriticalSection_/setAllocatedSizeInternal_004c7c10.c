// Function : setAllocatedSizeInternal
// Namespace: juce:ArrayBase_juce__AudioProcessor__BusProperties_juce__DummyCriticalSection_
// Entry    : 004c7c10
// Prototype: undefined setAllocatedSizeInternal(ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> * this, int param_1)
// Body     : 004c7c10 - 004c7d19


/* juce::ArrayBase<juce::AudioProcessor::BusProperties,
   juce::DummyCriticalSection>::setAllocatedSizeInternal(int) */

void __thiscall
juce::ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>::
setAllocatedSizeInternal
          (ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *this,
          int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  pvVar6 = malloc((long)param_1 * 0x38);
  if (0 < *(int *)(this + 0xc)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar4 = *(long *)this;
      *(undefined8 *)((long)pvVar6 + lVar7) = *(undefined8 *)(lVar4 + lVar7);
      *(undefined1 **)(lVar4 + lVar7) = &DAT_0061ac58;
      *(undefined8 *)((long)pvVar6 + lVar7 + 8) = *(undefined8 *)(lVar4 + 8 + lVar7);
      *(undefined8 *)(lVar4 + 8 + lVar7) = 0;
      *(undefined8 *)((long)pvVar6 + lVar7 + 0x20) = *(undefined8 *)(lVar4 + 0x20 + lVar7);
      *(undefined4 *)((long)pvVar6 + lVar7 + 0x28) = *(undefined4 *)(lVar4 + 0x28 + lVar7);
      *(undefined1 *)((long)pvVar6 + lVar7 + 0x2c) = *(undefined1 *)(lVar4 + 0x2c + lVar7);
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)((long)pvVar6 + lVar7 + 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined1 *)((long)pvVar6 + lVar7 + 0x30) = *(undefined1 *)(lVar4 + 0x30 + lVar7);
      free(*(void **)(lVar4 + 8 + lVar7));
      piVar8 = (int *)(*(long *)(lVar4 + lVar7) + -0x10);
      if (piVar8 != &emptyString) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar8);
        }
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar9 < *(int *)(this + 0xc));
  }
  __ptr = *(void **)this;
  *(void **)this = pvVar6;
  free(__ptr);
  return;
}


