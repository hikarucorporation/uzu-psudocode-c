// Function : ~ComboBox
// Namespace: juce:ComboBox
// Entry    : 002dad70
// Prototype: undefined ~ComboBox(ComboBox * this)
// Body     : 002dad70 - 002dafbe


/* juce::ComboBox::~ComboBox() */

void __thiscall juce::ComboBox::~ComboBox(ComboBox *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  *(undefined ***)this = &PTR__ComboBox_0070bf00;
  *(undefined ***)(this + 0xf0) = &PTR__ComboBox_0070c0d0;
  *(undefined ***)(this + 0x100) = &PTR__ComboBox_0070c100;
  *(undefined ***)(this + 0x108) = &PTR__ComboBox_0070c128;
  Value::removeListener((Value *)(this + 0x150),(long)(this + 0x100));
  if (this[0x185] != (ComboBox)0x0) {
    this[0x185] = (ComboBox)0x0;
                    /* try { // try from 002dade8 to 002dadff has its CatchHandler @ 002dafc7 */
    PopupMenu::dismissAllActiveMenus();
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  }
  plVar3 = *(long **)(this + 0x1b8);
  *(undefined8 *)(this + 0x1b8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  piVar7 = (int *)(*(long *)(this + 0x1c8) + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(*(long *)(this + 0x1c0) + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 8))();
  }
  *(undefined8 *)(this + 0x1b8) = 0;
  ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 400));
  Value::removeFromListenerList((Value *)(this + 0x150));
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x158));
  plVar3 = *(long **)(this + 0x150);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x148);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (0 < *(int *)(this + 0x144)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      PopupMenu::Item::~Item((Item *)(*(long *)(this + 0x138) + lVar5));
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while (lVar6 < *(int *)(this + 0x144));
  }
  *(undefined4 *)(this + 0x144) = 0;
  free(*(void **)(this + 0x138));
  if (*(code **)(this + 0x128) != (code *)0x0) {
                    /* try { // try from 002daf3d to 002daf46 has its CatchHandler @ 002dafbf */
    (**(code **)(this + 0x128))(this + 0x118,this + 0x118,3);
  }
  *(undefined ***)(this + 0x108) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x110) + 0x18) = 0;
  UNLOCK();
  pvVar4 = *(void **)(this + 0x110);
  if (pvVar4 != (void *)0x0) {
    LOCK();
    piVar7 = (int *)((long)pvVar4 + 8);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      operator_delete(pvVar4);
    }
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


