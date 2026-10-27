// Function : ~JuceVST3Component
// Namespace: juce:JuceVST3Component
// Entry    : 001a8e60
// Prototype: undefined ~JuceVST3Component(JuceVST3Component * this)
// Body     : 001a8e60 - 001a8e71


/* juce::JuceVST3Component::~JuceVST3Component() */

void __thiscall juce::JuceVST3Component::~JuceVST3Component(JuceVST3Component *this)

{
  ~JuceVST3Component(this);
  operator_delete(this);
  return;
}


