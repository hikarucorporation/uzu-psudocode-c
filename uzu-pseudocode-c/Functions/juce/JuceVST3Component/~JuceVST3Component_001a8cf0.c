// Function : ~JuceVST3Component
// Namespace: juce:JuceVST3Component
// Entry    : 001a8cf0
// Prototype: undefined ~JuceVST3Component(JuceVST3Component * this)
// Body     : 001a8cf0 - 001a8df0


/* juce::JuceVST3Component::~JuceVST3Component() */

void __thiscall juce::JuceVST3Component::~JuceVST3Component(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  long *plVar2;
  MessageManagerLock aMStack_b8 [160];
  
  if (*(long *)(this + 0x80) != 0) {
    LOCK();
    *(undefined1 *)(*(long *)(this + 0x80) + 0x62b1) = 0;
    UNLOCK();
  }
  pJVar1 = this + 0x80;
  if ((*(long *)(this + 0x68) != 0) &&
     (this + 0x28 == *(JuceVST3Component **)(*(long *)(this + 0x68) + 0x10))) {
                    /* try { // try from 001a8d37 to 001a8d3e has its CatchHandler @ 001a8df1 */
    (**(code **)(**(long **)(this + 0x68) + 0x150))();
  }
  CriticalSection::~CriticalSection((CriticalSection *)(this + 1000));
  ClientBufferMapper::~ClientBufferMapper((ClientBufferMapper *)(this + 0x120));
  *(undefined4 *)(this + 0x11c) = 0;
  free(*(void **)(this + 0x110));
                    /* try { // try from 001a8d6d to 001a8d76 has its CatchHandler @ 001a8e46 */
  MessageManagerLock::MessageManagerLock(aMStack_b8,0);
  plVar2 = *(long **)pJVar1;
  *(long *)pJVar1 = 0;
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
    UNLOCK();
    if ((int)plVar2[1] == 0) {
      *(undefined4 *)(plVar2 + 1) = 0xfffffc18;
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  MessageManagerLock::~MessageManagerLock(aMStack_b8);
  plVar2 = *(long **)pJVar1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
    UNLOCK();
    if ((int)plVar2[1] == 0) {
      *(undefined4 *)(plVar2 + 1) = 0xfffffc18;
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  LockedVSTComSmartPtr<juce::JuceAudioProcessor>::~LockedVSTComSmartPtr
            ((LockedVSTComSmartPtr<juce::JuceAudioProcessor> *)(this + 0x78));
  LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication>::~LockedVSTComSmartPtr
            ((LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication> *)(this + 0x70));
  ScopedRunLoop::~ScopedRunLoop((ScopedRunLoop *)(this + 0x30));
  return;
}


