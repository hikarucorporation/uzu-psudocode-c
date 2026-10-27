// Function : ~Value
// Namespace: juce:Value
// Entry    : 004bf4d0
// Prototype: undefined ~Value(Value * this)
// Body     : 004bf4d0 - 004bf4f9


/* juce::Value::~Value() */

void __thiscall juce::Value::~Value(Value *this)

{
  long *plVar1;
  long *plVar2;
  
  removeFromListenerList(this);
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 8));
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004bf4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


