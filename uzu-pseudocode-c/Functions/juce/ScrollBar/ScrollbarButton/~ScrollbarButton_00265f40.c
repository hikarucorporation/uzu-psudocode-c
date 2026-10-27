// Function : ~ScrollbarButton
// Namespace: juce:ScrollBar:ScrollbarButton
// Entry    : 00265f40
// Prototype: undefined ~ScrollbarButton(ScrollbarButton * this)
// Body     : 00265f40 - 00265f51


/* juce::ScrollBar::ScrollbarButton::~ScrollbarButton() */

void __thiscall juce::ScrollBar::ScrollbarButton::~ScrollbarButton(ScrollbarButton *this)

{
  Button::~Button((Button *)this);
  operator_delete(this);
  return;
}


