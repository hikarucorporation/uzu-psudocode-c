// Function : ~Label
// Namespace: juce:Label
// Entry    : 00282f20
// Prototype: undefined ~Label(Label * this)
// Body     : 00282f20 - 00282f31


/* juce::Label::~Label() */

void __thiscall juce::Label::~Label(Label *this)

{
  ~Label(this);
  operator_delete(this);
  return;
}


