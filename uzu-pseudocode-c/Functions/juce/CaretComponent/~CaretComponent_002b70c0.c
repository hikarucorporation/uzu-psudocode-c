// Function : ~CaretComponent
// Namespace: juce:CaretComponent
// Entry    : 002b70c0
// Prototype: undefined ~CaretComponent(CaretComponent * this)
// Body     : 002b70c0 - 002b70dd


/* non-virtual thunk to juce::CaretComponent::~CaretComponent() */

void __thiscall juce::CaretComponent::~CaretComponent(CaretComponent *this)

{
  Timer::~Timer((Timer *)this);
  Component::~Component((Component *)(this + -0xf0));
  operator_delete((Component *)(this + -0xf0));
  return;
}


