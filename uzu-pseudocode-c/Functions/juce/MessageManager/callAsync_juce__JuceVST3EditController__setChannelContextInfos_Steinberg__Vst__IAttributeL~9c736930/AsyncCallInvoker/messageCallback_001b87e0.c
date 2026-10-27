// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__JuceVST3EditController__setChannelContextInfos_Steinberg__Vst__IAttributeL~9c736930:AsyncCallInvoker
// Entry    : 001b87e0
// Prototype: undefined messageCallback(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001b87e0 - 001b87f6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* messageCallback() */

void __cdecl
juce::MessageManager::
callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}>(juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}&&)
::AsyncCallInvoker::messageCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x28) + 0x180);
                    /* WARNING: Could not recover jumptable at 0x001b87f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long **)(param_1 + 0x28),param_1 + 0x10,param_3,UNRECOVERED_JUMPTABLE);
  return;
}


