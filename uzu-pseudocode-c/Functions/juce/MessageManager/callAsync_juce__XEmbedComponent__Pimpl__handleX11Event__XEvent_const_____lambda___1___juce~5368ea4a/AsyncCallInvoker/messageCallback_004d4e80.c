// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__XEmbedComponent__Pimpl__handleX11Event__XEvent_const_____lambda___1___juce~5368ea4a:AsyncCallInvoker
// Entry    : 004d4e80
// Prototype: undefined messageCallback(AsyncCallInvoker * this)
// Body     : 004d4e80 - 004d4e9a


/* messageCallback() */

void __thiscall
juce::MessageManager::
callAsync<juce::XEmbedComponent::Pimpl::handleX11Event(_XEvent_const&)::{lambda()#1}>(juce::XEmbedComponent::Pimpl::handleX11Event(_XEvent_const&)::{lambda()#1}&&)
::AsyncCallInvoker::messageCallback(AsyncCallInvoker *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
                    /* WARNING: Could not recover jumptable at 0x004d4e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,plVar1[1],1,1);
  return;
}


