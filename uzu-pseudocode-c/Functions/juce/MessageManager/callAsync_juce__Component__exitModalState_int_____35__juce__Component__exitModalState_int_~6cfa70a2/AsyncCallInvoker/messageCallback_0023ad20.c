// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__Component__exitModalState_int_____35__juce__Component__exitModalState_int_~6cfa70a2:AsyncCallInvoker
// Entry    : 0023ad20
// Prototype: undefined messageCallback(AsyncCallInvoker * this)
// Body     : 0023ad20 - 0023ad3d


/* messageCallback() */

void __thiscall
juce::MessageManager::
callAsync<juce::Component::exitModalState(int)::$_35>(juce::Component::exitModalState(int)::$_35&&)
::AsyncCallInvoker::messageCallback(AsyncCallInvoker *this)

{
  Component *this_00;
  
  if ((*(long *)(this + 0x10) == 0) ||
     (this_00 = *(Component **)(*(long *)(this + 0x10) + 0x10), this_00 == (Component *)0x0)) {
    return;
  }
  Component::exitModalState(this_00,*(undefined4 *)(this + 0x18));
  return;
}


