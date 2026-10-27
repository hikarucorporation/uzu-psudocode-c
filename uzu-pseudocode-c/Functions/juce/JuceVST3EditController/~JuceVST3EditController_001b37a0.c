// Function : ~JuceVST3EditController
// Namespace: juce:JuceVST3EditController
// Entry    : 001b37a0
// Prototype: undefined ~JuceVST3EditController(JuceVST3EditController * this)
// Body     : 001b37a0 - 001b3863


/* juce::JuceVST3EditController::~JuceVST3EditController() */

void __thiscall juce::JuceVST3EditController::~JuceVST3EditController(JuceVST3EditController *this)

{
  JuceAudioProcessor *pJVar1;
  undefined8 *puVar2;
  JuceAudioProcessor *this_00;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x6298);
  puVar2 = *(undefined8 **)(this + 0x62a0);
  if (puVar3 != puVar2) {
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        operator_delete((void *)*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x6298);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  *(undefined ***)(this + 0xf0) = &PTR__ComponentRestarter_007061e8;
  AsyncUpdater::cancelPendingUpdate((AsyncUpdater *)(this + 0xf0));
  AsyncUpdater::~AsyncUpdater((AsyncUpdater *)(this + 0xf0));
  this_00 = *(JuceAudioProcessor **)(this + 0xe8);
  if (this_00 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = this_00 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(this_00);
      operator_delete(this_00);
    }
  }
  ScopedRunLoop::~ScopedRunLoop((ScopedRunLoop *)(this + 0xb8));
  Steinberg::Vst::EditController::~EditController((EditController *)this);
  return;
}


