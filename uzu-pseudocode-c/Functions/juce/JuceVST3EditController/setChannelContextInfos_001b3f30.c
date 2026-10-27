// Function : setChannelContextInfos
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3f30
// Prototype: undefined8 setChannelContextInfos(JuceVST3EditController * this, long * param_1)
// Body     : 001b3f30 - 001b409d


/* juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*) */

undefined8 __thiscall
juce::JuceVST3EditController::setChannelContextInfos(JuceVST3EditController *this,long *param_1)

{
  long *plVar1;
  int iVar2;
  MessageManager *this_00;
  ulong uVar3;
  bool bVar4;
  String aSStack_148 [8];
  char local_140;
  undefined4 local_138;
  uint uStack_134;
  String local_130 [8];
  String local_128 [8];
  char local_120;
  undefined8 local_118;
  char local_110;
  undefined8 local_108;
  long *local_100;
  
  if (((*(long *)(this + 0xe8) != 0) && (param_1 != (long *)0x0)) &&
     (plVar1 = *(long **)(*(long *)(this + 0xe8) + 0xd8), plVar1 != (long *)0x0)) {
    local_140 = '\0';
    uStack_134 = uStack_134 & 0xffffff00;
                    /* try { // try from 001b3f75 to 001b3f8b has its CatchHandler @ 001b40d9 */
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,"channel name",&local_118,0x100);
    if (iVar2 == 0) {
                    /* try { // try from 001b3f90 to 001b3f9e has its CatchHandler @ 001b409e */
      juce::String::String(local_130,(ushort *)&local_118);
      juce::String::String(local_128,(undefined8 *)local_130);
      local_120 = '\x01';
      juce::String::String(aSStack_148,(undefined8 *)local_128);
      local_140 = '\x01';
      if (local_120 != '\0') {
        local_120 = '\0';
        juce::String::~String(local_128);
      }
      juce::String::~String(local_130);
    }
                    /* try { // try from 001b3fe9 to 001b3ffa has its CatchHandler @ 001b40d7 */
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,"channel color",&local_118);
    if (iVar2 == 0) {
      local_138 = (undefined4)local_118;
      uStack_134 = CONCAT31(uStack_134._1_3_,1);
    }
                    /* try { // try from 001b400c to 001b402b has its CatchHandler @ 001b40db */
    this_00 = (MessageManager *)MessageManager::getInstance();
    uVar3 = MessageManager::isThisTheMessageThread(this_00);
    if ((char)uVar3 == '\0') {
      local_110 = 0;
      bVar4 = local_140 != '\0';
      if (bVar4) {
        juce::String::String((String *)&local_118,(long *)aSStack_148);
      }
      local_108 = CONCAT44(uStack_134,local_138);
                    /* try { // try from 001b405b to 001b4064 has its CatchHandler @ 001b40a6 */
      local_110 = bVar4;
      local_100 = plVar1;
      MessageManager::
      callAsync<juce::JuceVST3EditController::setChannelContextInfos(Steinberg::Vst::IAttributeList*)::_lambda()_1_>
                (&local_118);
      if (local_110 != '\0') {
        local_110 = '\0';
        juce::String::~String((String *)&local_118);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x180))(plVar1,aSStack_148);
    }
    if (local_140 != '\0') {
      local_140 = 0;
      juce::String::~String(aSStack_148);
    }
  }
  return 0;
}


