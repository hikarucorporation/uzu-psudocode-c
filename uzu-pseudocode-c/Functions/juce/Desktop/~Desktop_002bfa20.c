// Function : ~Desktop
// Namespace: juce:Desktop
// Entry    : 002bfa20
// Prototype: undefined ~Desktop(Desktop * this)
// Body     : 002bfa20 - 002bfa31


/* juce::Desktop::~Desktop() */

void __thiscall juce::Desktop::~Desktop(Desktop *this)

{
  ~Desktop(this);
  operator_delete(this);
  return;
}


