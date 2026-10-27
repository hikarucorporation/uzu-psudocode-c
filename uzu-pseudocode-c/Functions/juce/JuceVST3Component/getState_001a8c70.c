// Function : getState
// Namespace: juce:JuceVST3Component
// Entry    : 001a8c70
// Prototype: undefined4 getState(JuceVST3Component * this, long * param_1)
// Body     : 001a8c70 - 001a8cd6


/* juce::JuceVST3Component::getState(Steinberg::IBStream*) */

undefined4 __thiscall juce::JuceVST3Component::getState(JuceVST3Component *this,long *param_1)

{
  undefined4 uVar1;
  undefined8 local_28;
  long local_20;
  
  if (param_1 == (long *)0x0) {
    uVar1 = 2;
  }
  else {
    MemoryBlock::MemoryBlock((MemoryBlock *)&local_28);
                    /* try { // try from 001a8c8f to 001a8cb2 has its CatchHandler @ 001a8cd7 */
    getStateInformation(this,(MemoryBlock *)&local_28);
    if (local_20 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_28,local_20,0);
    }
    MemoryBlock::~MemoryBlock((MemoryBlock *)&local_28);
  }
  return uVar1;
}


