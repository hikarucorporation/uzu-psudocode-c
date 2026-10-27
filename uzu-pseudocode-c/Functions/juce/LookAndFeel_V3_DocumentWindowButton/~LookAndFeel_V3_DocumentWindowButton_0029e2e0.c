// Function : ~LookAndFeel_V3_DocumentWindowButton
// Namespace: juce:LookAndFeel_V3_DocumentWindowButton
// Entry    : 0029e2e0
// Prototype: undefined ~LookAndFeel_V3_DocumentWindowButton(LookAndFeel_V3_DocumentWindowButton * this)
// Body     : 0029e2e0 - 0029e330


/* non-virtual thunk to
   juce::LookAndFeel_V3_DocumentWindowButton::~LookAndFeel_V3_DocumentWindowButton() */

void __thiscall
juce::LookAndFeel_V3_DocumentWindowButton::~LookAndFeel_V3_DocumentWindowButton
          (LookAndFeel_V3_DocumentWindowButton *this)

{
  *(undefined4 *)(this + 0x144) = 0;
  free(*(void **)(this + 0x138));
  *(undefined4 *)(this + 0x11c) = 0;
  free(*(void **)(this + 0x110));
  Button::~Button((Button *)(this + -0xf0));
  operator_delete((Button *)(this + -0xf0));
  return;
}


