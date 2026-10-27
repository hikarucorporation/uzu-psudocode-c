// Function : ~LookAndFeel_V3_DocumentWindowButton
// Namespace: juce:LookAndFeel_V3_DocumentWindowButton
// Entry    : 0029db70
// Prototype: undefined ~LookAndFeel_V3_DocumentWindowButton(LookAndFeel_V3_DocumentWindowButton * this)
// Body     : 0029db70 - 0029dbb0


/* juce::LookAndFeel_V3_DocumentWindowButton::~LookAndFeel_V3_DocumentWindowButton() */

void __thiscall
juce::LookAndFeel_V3_DocumentWindowButton::~LookAndFeel_V3_DocumentWindowButton
          (LookAndFeel_V3_DocumentWindowButton *this)

{
  *(undefined4 *)(this + 0x234) = 0;
  free(*(void **)(this + 0x228));
  *(undefined4 *)(this + 0x20c) = 0;
  free(*(void **)(this + 0x200));
  Button::~Button((Button *)this);
  operator_delete(this);
  return;
}


