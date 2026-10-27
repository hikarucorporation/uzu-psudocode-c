// Function : ~LookAndFeel_V4_DocumentWindowButton
// Namespace: juce:LookAndFeel_V4_DocumentWindowButton
// Entry    : 002b78b0
// Prototype: undefined ~LookAndFeel_V4_DocumentWindowButton(LookAndFeel_V4_DocumentWindowButton * this)
// Body     : 002b78b0 - 002b7900


/* non-virtual thunk to
   juce::LookAndFeel_V4_DocumentWindowButton::~LookAndFeel_V4_DocumentWindowButton() */

void __thiscall
juce::LookAndFeel_V4_DocumentWindowButton::~LookAndFeel_V4_DocumentWindowButton
          (LookAndFeel_V4_DocumentWindowButton *this)

{
  *(undefined4 *)(this + 0x144) = 0;
  free(*(void **)(this + 0x138));
  *(undefined4 *)(this + 0x11c) = 0;
  free(*(void **)(this + 0x110));
  Button::~Button((Button *)(this + -0xf0));
  operator_delete((Button *)(this + -0xf0));
  return;
}


