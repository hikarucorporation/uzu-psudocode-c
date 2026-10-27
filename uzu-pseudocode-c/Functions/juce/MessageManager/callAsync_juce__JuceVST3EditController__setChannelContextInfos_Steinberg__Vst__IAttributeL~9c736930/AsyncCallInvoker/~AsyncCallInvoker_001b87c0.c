// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_juce__JuceVST3EditController__setChannelContextInfos_Steinberg__Vst__IAttributeL~9c736930:AsyncCallInvoker
// Entry    : 001b87c0
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 001b87c0 - 001b87df


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::
callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}>(juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}&&)
::AsyncCallInvoker::~AsyncCallInvoker(AsyncCallInvoker *this)

{
  if (this[0x18] != (AsyncCallInvoker)0x0) {
    this[0x18] = (AsyncCallInvoker)0x0;
    juce::String::~String((String *)(this + 0x10));
  }
  operator_delete(this);
  return;
}


