// Function : sendIntMessage
// Namespace: juce:JuceVST3EditController
// Entry    : 001b54e0
// Prototype: undefined sendIntMessage(JuceVST3EditController * this, undefined8 param_1, undefined8 param_2)
// Body     : 001b54e0 - 001b55c6


/* juce::JuceVST3EditController::sendIntMessage(char const*, long) */

void __thiscall
juce::JuceVST3EditController::sendIntMessage
          (JuceVST3EditController *this,undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *local_50;
  long *local_48 [3];
  
  puVar1 = *(undefined8 **)(this + 0x20);
  local_48[0] = (long *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    iVar3 = (**(code **)*puVar1)(puVar1,0x71ac80,local_48);
    plVar4 = local_48[0];
    if ((iVar3 == 0) && (local_48[0] != (long *)0x0)) {
      local_48[0] = (long *)CONCAT44(Steinberg::Vst::IMessage::iid._12_4_,
                                     Steinberg::Vst::IMessage::iid._8_4_);
      local_48[1]._0_4_ = Steinberg::Vst::IMessage::iid._16_4_;
      local_48[1]._4_4_ = Steinberg::Vst::IMessage::iid._20_4_;
      local_50 = (long *)0x0;
                    /* try { // try from 001b5550 to 001b5562 has its CatchHandler @ 001b55d7 */
      iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_48,local_48,&local_50);
      plVar2 = local_50;
      plVar5 = (long *)0x0;
      if (iVar3 == 0) {
        plVar5 = local_50;
      }
                    /* try { // try from 001b5575 to 001b557a has its CatchHandler @ 001b55cf */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 001b5584 to 001b55b7 has its CatchHandler @ 001b55ee */
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
        plVar4 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5);
        (**(code **)(*plVar4 + 0x18))(plVar4,param_1,param_2);
        plVar4 = *(long **)(this + 0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,plVar5);
        }
                    /* try { // try from 001b55bc to 001b55c1 has its CatchHandler @ 001b55c7 */
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return;
}


