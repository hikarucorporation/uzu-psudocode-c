// Function : ~LookAndFeel_V4_DocumentWindowButton
// Namespace: juce:LookAndFeel_V4_DocumentWindowButton
// Entry    : 002b73c0
// Prototype: undefined ~LookAndFeel_V4_DocumentWindowButton(LookAndFeel_V4_DocumentWindowButton * this)
// Body     : 002b73c0 - 002b73f8


/* juce::LookAndFeel_V4_DocumentWindowButton::~LookAndFeel_V4_DocumentWindowButton() */

void __thiscall
juce::LookAndFeel_V4_DocumentWindowButton::~LookAndFeel_V4_DocumentWindowButton
          (LookAndFeel_V4_DocumentWindowButton *this)

{
  *(undefined4 *)(this + 0x234) = 0;
  free(*(void **)(this + 0x228));
  *(undefined4 *)(this + 0x20c) = 0;
  free(*(void **)(this + 0x200));
  Button::~Button((Button *)this);
  return;
}


