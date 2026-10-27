// Function : ~ArrayBase
// Namespace: juce:ArrayBase_juce__NamedValueSet__NamedValue_juce__DummyCriticalSection_
// Entry    : 00487100
// Prototype: undefined ~ArrayBase(ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> * this)
// Body     : 00487100 - 0048718a


/* juce::ArrayBase<juce::NamedValueSet::NamedValue, juce::DummyCriticalSection>::~ArrayBase() */

void __thiscall
juce::ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::~ArrayBase
          (ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar4 = 0x10;
    lVar5 = 0;
    do {
      lVar2 = *(long *)this;
                    /* try { // try from 0048714d to 0048714f has its CatchHandler @ 0048718b */
      (**(code **)(*(long *)(lVar2 + -8 + lVar4) + 0x58))(lVar2 + lVar4);
      piVar3 = (int *)(*(long *)(lVar2 + -0x10 + lVar4) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


