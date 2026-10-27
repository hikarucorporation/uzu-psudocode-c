// Function : connect
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3980
// Prototype: undefined8 connect(JuceVST3EditController * this, long * param_1)
// Body     : 001b3980 - 001b3a4d


/* juce::JuceVST3EditController::connect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall
juce::JuceVST3EditController::connect(JuceVST3EditController *this,long *param_1)

{
  JuceVST3EditController *pJVar1;
  JuceAudioProcessor *pJVar2;
  JuceAudioProcessor *this_00;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if ((param_1 != (long *)0x0) && (*(long *)(this + 0xe8) == 0)) {
    pJVar1 = this + 0xe8;
    if (*(long *)(this + 0x28) == 0) {
      *(long **)(this + 0x28) = param_1;
      (**(code **)(*param_1 + 8))(param_1);
      this_00 = *(JuceAudioProcessor **)(this + 0xe8);
      *(undefined8 *)(this + 0xe8) = 0;
      uVar4 = 0;
      if (this_00 != (JuceAudioProcessor *)0x0) {
        LOCK();
        pJVar2 = this_00 + 0xd0;
        *(int *)pJVar2 = *(int *)pJVar2 + -1;
        UNLOCK();
        if (*(int *)pJVar2 == 0) {
          JuceAudioProcessor::~JuceAudioProcessor(this_00);
          operator_delete(this_00);
        }
      }
    }
    else {
      *(long *)pJVar1 = 0;
      uVar4 = 1;
    }
    iVar3 = (**(code **)*param_1)(param_1,0x71b730,pJVar1);
    if (iVar3 == 0) {
      installAudioProcessor(this,(long *)pJVar1);
    }
    else {
      sendIntMessage(this,"JuceVST3EditController",this);
    }
  }
  return uVar4;
}


