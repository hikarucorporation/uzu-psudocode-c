// Function : ~LockedVSTComSmartPtr
// Namespace: juce:JuceVST3Component:LockedVSTComSmartPtr_Steinberg__Vst__IHostApplication_
// Entry    : 001a7d90
// Prototype: undefined ~LockedVSTComSmartPtr(LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication> * this)
// Body     : 001a7d90 - 001a7de0


/* juce::JuceVST3Component::LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication>::~LockedVSTComSmartPtr()
    */

void __thiscall
juce::JuceVST3Component::LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication>::
~LockedVSTComSmartPtr(LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication> *this)

{
  long *plVar1;
  MessageManagerLock local_b0 [160];
  
                    /* try { // try from 001a7d9d to 001a7da8 has its CatchHandler @ 001a7df1 */
  MessageManagerLock::MessageManagerLock(local_b0,0);
  plVar1 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a7dbb to 001a7dbd has its CatchHandler @ 001a7de9 */
    (**(code **)(*plVar1 + 0x10))();
  }
  MessageManagerLock::~MessageManagerLock(local_b0);
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 001a7dd3 to 001a7dd5 has its CatchHandler @ 001a7de1 */
    (**(code **)(**(long **)this + 0x10))();
  }
  return;
}


