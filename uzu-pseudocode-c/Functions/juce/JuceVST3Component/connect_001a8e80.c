// Function : connect
// Namespace: juce:JuceVST3Component
// Entry    : 001a8e80
// Prototype: undefined8 connect(JuceVST3Component * this, undefined8 * param_1)
// Body     : 001a8e80 - 001a8eb7


/* juce::JuceVST3Component::connect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall juce::JuceVST3Component::connect(JuceVST3Component *this,undefined8 *param_1)

{
  if ((param_1 == (undefined8 *)0x0) || (*(long *)(this + 0x80) != 0)) {
    return 0;
  }
  *(undefined8 *)(this + 0x80) = 0;
  (**(code **)*param_1)(param_1,0x71b750);
  return 0;
}


