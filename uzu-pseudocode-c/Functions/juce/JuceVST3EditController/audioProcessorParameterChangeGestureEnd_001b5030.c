// Function : audioProcessorParameterChangeGestureEnd
// Namespace: juce:JuceVST3EditController
// Entry    : 001b5030
// Prototype: undefined audioProcessorParameterChangeGestureEnd(JuceVST3EditController * this, undefined8 param_2_00, int param_2)
// Body     : 001b5030 - 001b507e


/* non-virtual thunk to
   juce::JuceVST3EditController::audioProcessorParameterChangeGestureEnd(juce::AudioProcessor*, int)
    */

void __thiscall
juce::JuceVST3EditController::audioProcessorParameterChangeGestureEnd
          (JuceVST3EditController *this,undefined8 param_2_00,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  MessageManager *this_00;
  ulong uVar3;
  
  if (this[0x6208] == (JuceVST3EditController)0x0) {
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(this + 0x40) + 8) + (long)param_2 * 4);
    this_00 = (MessageManager *)MessageManager::getInstance();
    uVar3 = MessageManager::isThisTheMessageThread(this_00);
    if (((char)uVar3 != '\0') && (plVar2 = *(long **)(this + -0x68), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001b5076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,uVar1);
      return;
    }
  }
  return;
}


