// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__Component__postCommandMessage_int_____37__juce__Component__postCommandMess~50bfb2df:AsyncCallInvoker
// Entry    : 00230150
// Prototype: undefined messageCallback(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00230150 - 00230174


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* messageCallback() */

void __cdecl
juce::MessageManager::
callAsync<juce::Component::postCommandMessage(int)::$_37>(juce::Component::postCommandMessage(int)::$_37&&)
::AsyncCallInvoker::messageCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x10), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00230172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x168))
            (plVar1,*(undefined4 *)(param_1 + 0x18),param_3,*(code **)(*plVar1 + 0x168));
  return;
}


