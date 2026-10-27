// Function : ~TextButton
// Namespace: juce:TextButton
// Entry    : 0028a860
// Prototype: undefined ~TextButton(TextButton * this)
// Body     : 0028a860 - 0028a87b


/* non-virtual thunk to juce::TextButton::~TextButton() */

void __thiscall juce::TextButton::~TextButton(TextButton *this)

{
  Button::~Button((Button *)(this + -0xf0));
  operator_delete((Button *)(this + -0xf0));
  return;
}


