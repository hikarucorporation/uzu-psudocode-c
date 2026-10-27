// Function : ~Label
// Namespace: juce:Label
// Entry    : 002352b0
// Prototype: undefined ~Label(Label * this)
// Body     : 002352b0 - 00235499


/* juce::Label::~Label() */

void __thiscall juce::Label::~Label(Label *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__Label_0070c150;
  *(undefined ***)(this + 0xf0) = &PTR__Label_0070c360;
  *(undefined ***)(this + 0x100) = &PTR__Label_0070c390;
  *(undefined ***)(this + 0x108) = &PTR__Label_0070c3d0;
  *(undefined ***)(this + 0x110) = &PTR__Label_0070c430;
  Value::removeListener((Value *)(this + 0x178),(long)(this + 0x110));
  if ((*(long *)(this + 0x1f0) != 0) &&
     (lVar3 = *(long *)(*(long *)(this + 0x1f0) + 0x10), lVar3 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar3 + 0xa0),(long)(this + 0x108));
  }
  plVar4 = *(long **)(this + 0x1c0);
  *(undefined8 *)(this + 0x1c0) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x1f0);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x1c8));
  if (*(long **)(this + 0x1c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1c0) + 8))();
  }
  *(undefined8 *)(this + 0x1c0) = 0;
  plVar4 = *(long **)(this + 0x1b0);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  piVar5 = (int *)(*(long *)(this + 0x1a8) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  Value::removeFromListenerList((Value *)(this + 0x178));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x180));
  plVar4 = *(long **)(this + 0x178);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(code **)(this + 0x168) != (code *)0x0) {
                    /* try { // try from 00235419 to 00235422 has its CatchHandler @ 002354aa */
    (**(code **)(this + 0x168))(this + 0x158,this + 0x158,3);
  }
  if (*(code **)(this + 0x148) != (code *)0x0) {
                    /* try { // try from 00235436 to 0023543f has its CatchHandler @ 002354a2 */
    (**(code **)(this + 0x148))(this + 0x138,this + 0x138,3);
  }
  if (*(code **)(this + 0x128) != (code *)0x0) {
                    /* try { // try from 00235453 to 0023545c has its CatchHandler @ 0023549a */
    (**(code **)(this + 0x128))(this + 0x118,this + 0x118,3);
  }
  *(undefined ***)(this + 0xf0) = &PTR__SettableTooltipClient_0070ded0;
  piVar5 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  Component::~Component((Component *)this);
  return;
}


