// Function : ~TextButton
// Namespace: juce:TextButton
// Entry    : 0028a6e0
// Prototype: undefined ~TextButton(TextButton * this)
// Body     : 0028a6e0 - 0028a6f1


/* juce::TextButton::~TextButton() */

void __thiscall juce::TextButton::~TextButton(TextButton *this)

{
  Button::~Button((Button *)this);
  operator_delete(this);
  return;
}


