// Function : ~CaretComponent
// Namespace: juce:CaretComponent
// Entry    : 002b70a0
// Prototype: undefined ~CaretComponent(CaretComponent * this)
// Body     : 002b70a0 - 002b70b5


/* non-virtual thunk to juce::CaretComponent::~CaretComponent() */

void __thiscall juce::CaretComponent::~CaretComponent(CaretComponent *this)

{
  Timer::~Timer((Timer *)this);
  Component::~Component((Component *)(this + -0xf0));
  return;
}


