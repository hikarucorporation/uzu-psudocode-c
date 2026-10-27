// Function : setAllocatedSize
// Namespace: juce:ArrayBase_juce__AttributedString__Attribute_juce__DummyCriticalSection_
// Entry    : 003c1e10
// Prototype: undefined setAllocatedSize(ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> * this, uint param_1)
// Body     : 003c1e10 - 003c1eda


/* juce::ArrayBase<juce::AttributedString::Attribute,
   juce::DummyCriticalSection>::setAllocatedSize(int) */

void __thiscall
juce::ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>::setAllocatedSize
          (ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *this,
          uint param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  if (*(uint *)(this + 8) != param_1) {
    if ((int)param_1 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar4 = malloc((ulong)param_1 * 0x18);
      if (0 < *(int *)(this + 0xc)) {
        lVar5 = 8;
        lVar6 = 0;
        do {
          lVar2 = *(long *)this;
          *(undefined8 *)((long)pvVar4 + lVar5 + -8) = *(undefined8 *)(lVar2 + -8 + lVar5);
          *(undefined8 *)((long)pvVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar2 + lVar5) = 0;
          *(undefined4 *)((long)pvVar4 + lVar5 + 8) = *(undefined4 *)(lVar2 + 8 + lVar5);
          plVar3 = *(long **)(*(long *)this + lVar5);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x18;
        } while (lVar6 < *(int *)(this + 0xc));
      }
      __ptr = *(void **)this;
      *(void **)this = pvVar4;
      free(__ptr);
    }
  }
  *(uint *)(this + 8) = param_1;
  return;
}


