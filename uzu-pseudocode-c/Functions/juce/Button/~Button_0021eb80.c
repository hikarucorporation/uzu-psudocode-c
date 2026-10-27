// Function : ~Button
// Namespace: juce:Button
// Entry    : 0021eb80
// Prototype: undefined ~Button(Button * this)
// Body     : 0021eb80 - 0021ed94


/* juce::Button::~Button() */

void __thiscall juce::Button::~Button(Button *this)

{
  long *plVar1;
  int iVar2;
  Timer *pTVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  int *piVar7;
  
  ppuVar5 = &PTR__Button_00707008;
  *(undefined ***)this = &PTR__Button_00707008;
  *(undefined ***)(this + 0xf0) = &PTR__Button_007071e8;
  *(undefined4 *)(this + 0x14c) = 0;
  if (*(int *)(this + 0x148) != 0) {
    free(*(void **)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
    ppuVar5 = *(undefined ***)this;
  }
  *(undefined4 *)(this + 0x148) = 0;
                    /* try { // try from 0021ebe8 to 0021ebf0 has its CatchHandler @ 0021eda5 */
  (*(code *)ppuVar5[0x12])(this);
  if (*(long *)(this + 0x198) != 0) {
    lVar6 = *(long *)(this + 0x188) + 0x28;
    if (*(long *)(this + 0x188) == 0) {
      lVar6 = 0;
    }
    ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>
              *)(*(long *)(this + 0x198) + 0x28),lVar6);
  }
  lVar6 = *(long *)(this + 0x188);
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x30;
  }
  Value::removeListener((Value *)(this + 0x1c0),lVar6);
  pTVar3 = *(Timer **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (pTVar3 != (Timer *)0x0) {
    Timer::~Timer(pTVar3);
    operator_delete(pTVar3);
  }
  Value::removeFromListenerList((Value *)(this + 0x1c0));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x1c8));
  plVar4 = *(long **)(this + 0x1c0);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  pTVar3 = *(Timer **)(this + 0x188);
  if (pTVar3 != (Timer *)0x0) {
    Timer::~Timer(pTVar3);
    operator_delete(pTVar3);
  }
  *(undefined8 *)(this + 0x188) = 0;
  ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x160));
  piVar7 = (int *)(*(long *)(this + 0x158) + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  plVar4 = *(long **)(this + 0x150);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined4 *)(this + 0x14c) = 0;
  free(*(void **)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 0021ed2b to 0021ed34 has its CatchHandler @ 0021ed9d */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(code **)(this + 0x110) != (code *)0x0) {
                    /* try { // try from 0021ed48 to 0021ed51 has its CatchHandler @ 0021ed95 */
    (**(code **)(this + 0x110))(this + 0x100,this + 0x100,3);
  }
  *(undefined ***)(this + 0xf0) = &PTR__SettableTooltipClient_0070ded0;
  piVar7 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  Component::~Component((Component *)this);
  return;
}


