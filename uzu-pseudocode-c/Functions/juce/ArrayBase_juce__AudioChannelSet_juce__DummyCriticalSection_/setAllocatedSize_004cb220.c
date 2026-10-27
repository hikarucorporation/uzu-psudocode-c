// Function : setAllocatedSize
// Namespace: juce:ArrayBase_juce__AudioChannelSet_juce__DummyCriticalSection_
// Entry    : 004cb220
// Prototype: undefined setAllocatedSize(ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> * this, uint param_1)
// Body     : 004cb220 - 004cb2fb


/* juce::ArrayBase<juce::AudioChannelSet, juce::DummyCriticalSection>::setAllocatedSize(int) */

void __thiscall
juce::ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::setAllocatedSize
          (ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__ptr;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  if (*(uint *)(this + 8) != param_1) {
    if ((int)param_1 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar5 = malloc((ulong)param_1 * 0x28);
      if (0 < *(int *)(this + 0xc)) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          lVar3 = *(long *)this;
          *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar3 + lVar6) = 0;
          *(undefined8 *)((long)pvVar5 + lVar6 + 0x18) = *(undefined8 *)(lVar3 + 0x18 + lVar6);
          *(undefined4 *)((long)pvVar5 + lVar6 + 0x20) = *(undefined4 *)(lVar3 + 0x20 + lVar6);
          *(undefined1 *)((long)pvVar5 + lVar6 + 0x24) = *(undefined1 *)(lVar3 + 0x24 + lVar6);
          puVar1 = (undefined8 *)(lVar3 + 8 + lVar6);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          free(*(void **)(lVar3 + lVar6));
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar7 < *(int *)(this + 0xc));
      }
      __ptr = *(void **)this;
      *(void **)this = pvVar5;
      free(__ptr);
    }
  }
  *(uint *)(this + 8) = param_1;
  return;
}


