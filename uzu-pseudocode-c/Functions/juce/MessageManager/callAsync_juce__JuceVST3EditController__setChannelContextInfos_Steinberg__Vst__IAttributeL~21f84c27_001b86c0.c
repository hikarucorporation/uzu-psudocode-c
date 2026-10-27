// Function : callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}>
// Namespace: juce:MessageManager
// Entry    : 001b86c0
// Prototype: ulong callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}>(undefined8 * param_1)
// Body     : 001b86c0 - 001b876f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   juce::MessageManager::callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}>(juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::{lambda()#1}&&)
    */

ulong __cdecl
juce::MessageManager::
callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::_lambda()_1_>
          (undefined8 *param_1)

{
  char cVar1;
  MessageBase *this;
  ulong uVar2;
  bool bVar3;
  String aSStack_38 [8];
  char local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  this = operator_new(0x30);
  local_30 = 0;
  cVar1 = *(char *)(param_1 + 1);
  bVar3 = cVar1 != '\0';
  if (bVar3) {
    juce::String::String(aSStack_38,param_1);
  }
  local_28 = param_1[2];
  local_20 = param_1[3];
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AsyncCallInvoker_007067c0;
  this[0x18] = (MessageBase)0x0;
  local_30 = bVar3;
  if (cVar1 != '\0') {
    juce::String::String((String *)(this + 0x10),(undefined8 *)aSStack_38);
    this[0x18] = (MessageBase)0x1;
  }
  *(undefined8 *)(this + 0x20) = local_28;
  *(undefined8 *)(this + 0x28) = local_20;
                    /* try { // try from 001b8747 to 001b874e has its CatchHandler @ 001b8770 */
  uVar2 = MessageBase::post(this);
  if (local_30 != '\0') {
    local_30 = 0;
    juce::String::~String(aSStack_38);
  }
  return uVar2 & 0xffffffff;
}


