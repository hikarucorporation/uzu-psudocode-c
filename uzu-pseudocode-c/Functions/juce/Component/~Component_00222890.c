// Function : ~Component
// Namespace: juce:Component
// Entry    : 00222890
// Prototype: undefined ~Component(Component * this)
// Body     : 00222890 - 002228a1


/* juce::Component::~Component() */

void __thiscall juce::Component::~Component(Component *this)

{
  ~Component(this);
  operator_delete(this);
  return;
}


