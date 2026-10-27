// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_juce__Component__exitModalState_int_____35__juce__Component__exitModalState_int_~6cfa70a2:AsyncCallInvoker
// Entry    : 0023acf0
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 0023acf0 - 0023ad12


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::
callAsync<juce::Component::exitModalState(int)::$_35>(juce::Component::exitModalState(int)::$_35&&)
::AsyncCallInvoker::~AsyncCallInvoker(AsyncCallInvoker *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(this);
  return;
}


