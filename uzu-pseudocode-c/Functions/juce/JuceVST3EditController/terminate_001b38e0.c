// Function : terminate
// Namespace: juce:JuceVST3EditController
// Entry    : 001b38e0
// Prototype: undefined8 terminate(JuceVST3EditController * this)
// Body     : 001b38e0 - 001b3975


/* juce::JuceVST3EditController::terminate() */

undefined8 __thiscall juce::JuceVST3EditController::terminate(JuceVST3EditController *this)

{
  JuceAudioProcessor *pJVar1;
  int iVar2;
  JuceAudioProcessor *this_00;
  long *plVar3;
  
  this_00 = *(JuceAudioProcessor **)(this + 0xe8);
  if (this_00 == (JuceAudioProcessor *)0x0) {
    *(undefined8 *)(this + 0xe8) = 0;
  }
  else {
    plVar3 = *(long **)(this_00 + 0xd8);
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(this + 0xe8) = 0;
      LOCK();
      pJVar1 = this_00 + 0xd0;
      *(int *)pJVar1 = *(int *)pJVar1 + -1;
      iVar2 = *(int *)pJVar1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar3 + 0x148))(plVar3,this + 0xa8);
      this_00 = *(JuceAudioProcessor **)(this + 0xe8);
      *(undefined8 *)(this + 0xe8) = 0;
      if (this_00 == (JuceAudioProcessor *)0x0) goto LAB_001b3964;
      LOCK();
      pJVar1 = this_00 + 0xd0;
      *(int *)pJVar1 = *(int *)pJVar1 + -1;
      iVar2 = *(int *)pJVar1;
      UNLOCK();
    }
    if (iVar2 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(this_00);
      operator_delete(this_00);
    }
  }
LAB_001b3964:
  Steinberg::Vst::EditController::terminate((EditController *)this);
  return 0;
}


