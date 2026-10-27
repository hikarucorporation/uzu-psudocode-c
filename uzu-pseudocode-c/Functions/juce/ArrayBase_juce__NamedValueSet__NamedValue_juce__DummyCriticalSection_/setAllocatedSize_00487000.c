// Function : setAllocatedSize
// Namespace: juce:ArrayBase_juce__NamedValueSet__NamedValue_juce__DummyCriticalSection_
// Entry    : 00487000
// Prototype: undefined setAllocatedSize(ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> * this, uint param_1)
// Body     : 00487000 - 004870f4


/* juce::ArrayBase<juce::NamedValueSet::NamedValue,
   juce::DummyCriticalSection>::setAllocatedSize(int) */

void __thiscall
juce::ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
          (ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *this,uint param_1)

{
  int iVar1;
  long lVar2;
  void *__ptr;
  void *pvVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if (*(uint *)(this + 8) != param_1) {
    if ((int)param_1 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar3 = malloc((ulong)param_1 * 0x18);
      if (0 < *(int *)(this + 0xc)) {
        lVar4 = 0;
        lVar6 = 0;
        do {
          lVar2 = *(long *)this;
          *(undefined8 *)((long)pvVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined1 **)(lVar2 + lVar4) = &DAT_0061ac58;
          *(undefined8 *)((long)pvVar3 + lVar4 + 8) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined8 *)((long)pvVar3 + lVar4 + 0x10) = *(undefined8 *)(lVar2 + 0x10 + lVar4);
          *(undefined1 **)(lVar2 + 8 + lVar4) = &var::Instance::attributesVoid;
          piVar5 = (int *)(*(long *)(lVar2 + lVar4) + -0x10);
          if (piVar5 != &emptyString) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar5);
            }
          }
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 0x18;
        } while (lVar6 < *(int *)(this + 0xc));
      }
      __ptr = *(void **)this;
      *(void **)this = pvVar3;
      free(__ptr);
    }
  }
  *(uint *)(this + 8) = param_1;
  return;
}


