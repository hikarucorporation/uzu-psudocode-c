// Function : connect
// Namespace: juce:JuceVST3Component
// Entry    : 001aa4c0
// Prototype: undefined8 connect(JuceVST3Component * this, undefined8 * param_1)
// Body     : 001aa4c0 - 001aa4f4


/* non-virtual thunk to juce::JuceVST3Component::connect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall juce::JuceVST3Component::connect(JuceVST3Component *this,undefined8 *param_1)

{
  if ((param_1 == (undefined8 *)0x0) || (*(long *)(this + 0x68) != 0)) {
    return 0;
  }
  *(undefined8 *)(this + 0x68) = 0;
  (**(code **)*param_1)(param_1,0x71b750);
  return 0;
}


