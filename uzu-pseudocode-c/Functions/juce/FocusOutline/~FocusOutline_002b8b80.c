// Function : ~FocusOutline
// Namespace: juce:FocusOutline
// Entry    : 002b8b80
// Prototype: undefined ~FocusOutline(FocusOutline * this)
// Body     : 002b8b80 - 002b8c2d


/* juce::FocusOutline::~FocusOutline() */

void __thiscall juce::FocusOutline::~FocusOutline(FocusOutline *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__FocusOutline_0070be80;
  if ((*(long *)(this + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(this + 0x10) + 0x10), lVar2 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar2 + 0xa0),(long)this);
  }
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    if (plVar3[2] != 0) {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(plVar3[2] + 0xa0),(long)this);
      plVar3 = *(long **)(this + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_002b8be8;
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_002b8be8:
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


