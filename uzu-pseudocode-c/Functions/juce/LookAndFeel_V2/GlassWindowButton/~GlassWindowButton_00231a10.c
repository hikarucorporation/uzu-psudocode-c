// Function : ~GlassWindowButton
// Namespace: juce:LookAndFeel_V2:GlassWindowButton
// Entry    : 00231a10
// Prototype: undefined ~GlassWindowButton(GlassWindowButton * this)
// Body     : 00231a10 - 00231a48


/* juce::LookAndFeel_V2::GlassWindowButton::~GlassWindowButton() */

void __thiscall juce::LookAndFeel_V2::GlassWindowButton::~GlassWindowButton(GlassWindowButton *this)

{
  *(undefined4 *)(this + 0x234) = 0;
  free(*(void **)(this + 0x228));
  *(undefined4 *)(this + 0x20c) = 0;
  free(*(void **)(this + 0x200));
  Button::~Button((Button *)this);
  return;
}


