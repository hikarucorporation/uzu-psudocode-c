// Function : ~GlassWindowButton
// Namespace: juce:LookAndFeel_V2:GlassWindowButton
// Entry    : 00231fe0
// Prototype: undefined ~GlassWindowButton(GlassWindowButton * this)
// Body     : 00231fe0 - 00232028


/* non-virtual thunk to juce::LookAndFeel_V2::GlassWindowButton::~GlassWindowButton() */

void __thiscall juce::LookAndFeel_V2::GlassWindowButton::~GlassWindowButton(GlassWindowButton *this)

{
  *(undefined4 *)(this + 0x144) = 0;
  free(*(void **)(this + 0x138));
  *(undefined4 *)(this + 0x11c) = 0;
  free(*(void **)(this + 0x110));
  Button::~Button((Button *)(this + -0xf0));
  return;
}


