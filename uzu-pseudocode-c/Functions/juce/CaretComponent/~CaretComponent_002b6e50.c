// Function : ~CaretComponent
// Namespace: juce:CaretComponent
// Entry    : 002b6e50
// Prototype: undefined ~CaretComponent(CaretComponent * this)
// Body     : 002b6e50 - 002b6e70


/* juce::CaretComponent::~CaretComponent() */

void __thiscall juce::CaretComponent::~CaretComponent(CaretComponent *this)

{
  Timer::~Timer((Timer *)(this + 0xf0));
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


