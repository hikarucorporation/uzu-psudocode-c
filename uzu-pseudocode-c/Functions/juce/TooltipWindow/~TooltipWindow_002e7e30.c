// Function : ~TooltipWindow
// Namespace: juce:TooltipWindow
// Entry    : 002e7e30
// Prototype: undefined ~TooltipWindow(TooltipWindow * this)
// Body     : 002e7e30 - 002e7f3f


/* juce::TooltipWindow::~TooltipWindow() */

void __thiscall juce::TooltipWindow::~TooltipWindow(TooltipWindow *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  Desktop *pDVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__TooltipWindow_0070cd60;
  *(undefined ***)(this + 0xf0) = &PTR__TooltipWindow_0070cf18;
                    /* try { // try from 002e7e5a to 002e7e74 has its CatchHandler @ 002e7f4d */
  hideTip(this);
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar4 = operator_new(0x1d0);
                    /* try { // try from 002e7e78 to 002e7e7f has its CatchHandler @ 002e7f40 */
    Desktop::Desktop(pDVar4);
    Desktop::instance = pDVar4;
  }
  pDVar4 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
                    /* try { // try from 002e7e93 to 002e7e9a has its CatchHandler @ 002e7f4d */
  Desktop::resetTimer(pDVar4);
  piVar5 = (int *)(*(long *)(this + 0x138) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(*(long *)(this + 0x130) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(*(long *)(this + 0x128) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  plVar3 = *(long **)(this + 0x120);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Timer::~Timer((Timer *)(this + 0xf0));
  Component::~Component((Component *)this);
  return;
}


