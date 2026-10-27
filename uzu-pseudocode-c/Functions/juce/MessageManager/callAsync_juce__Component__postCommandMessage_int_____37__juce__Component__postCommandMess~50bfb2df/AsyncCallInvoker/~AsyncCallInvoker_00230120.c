// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_juce__Component__postCommandMessage_int_____37__juce__Component__postCommandMess~50bfb2df:AsyncCallInvoker
// Entry    : 00230120
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 00230120 - 00230142


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::
callAsync<juce::Component::postCommandMessage(int)::$_37>(juce::Component::postCommandMessage(int)::$_37&&)
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


