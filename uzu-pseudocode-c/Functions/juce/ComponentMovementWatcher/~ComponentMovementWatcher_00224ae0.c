// Function : ~ComponentMovementWatcher
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00224ae0
// Prototype: undefined ~ComponentMovementWatcher(ComponentMovementWatcher * this)
// Body     : 00224ae0 - 00224ba6


/* juce::ComponentMovementWatcher::~ComponentMovementWatcher() */

void __thiscall
juce::ComponentMovementWatcher::~ComponentMovementWatcher(ComponentMovementWatcher *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  
  *(undefined ***)this = &PTR__ComponentMovementWatcher_007089a0;
  if ((*(long *)(this + 8) != 0) && (lVar4 = *(long *)(*(long *)(this + 8) + 0x10), lVar4 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar4 + 0xa0),(long)this);
  }
  __ptr = *(void **)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  if ((long)iVar2 != 0) {
    lVar4 = 0;
    do {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(*(long *)((long)__ptr + lVar4) + 0xa0),(long)this);
      lVar4 = lVar4 + 8;
    } while ((long)iVar2 * 8 != lVar4);
    __ptr = *(void **)(this + 0x18);
  }
  *(undefined4 *)(this + 0x24) = 0;
  if (*(int *)(this + 0x20) != 0) {
    free(__ptr);
    *(undefined8 *)(this + 0x18) = 0;
    __ptr = (void *)0x0;
  }
  *(undefined8 *)(this + 0x20) = 0;
  free(__ptr);
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00224b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


