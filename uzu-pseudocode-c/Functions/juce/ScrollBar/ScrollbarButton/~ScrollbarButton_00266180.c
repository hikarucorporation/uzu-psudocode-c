// Function : ~ScrollbarButton
// Namespace: juce:ScrollBar:ScrollbarButton
// Entry    : 00266180
// Prototype: undefined ~ScrollbarButton(ScrollbarButton * this)
// Body     : 00266180 - 0026619b


/* non-virtual thunk to juce::ScrollBar::ScrollbarButton::~ScrollbarButton() */

void __thiscall juce::ScrollBar::ScrollbarButton::~ScrollbarButton(ScrollbarButton *this)

{
  Button::~Button((Button *)(this + -0xf0));
  operator_delete((Button *)(this + -0xf0));
  return;
}


