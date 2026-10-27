// Function : ~CustomDial
// Namespace: juce:CustomDial
// Entry    : 0016b570
// Prototype: undefined ~CustomDial(CustomDial * this)
// Body     : 0016b570 - 0016b588


/* juce::CustomDial::~CustomDial() */

void __thiscall juce::CustomDial::~CustomDial(CustomDial *this)

{
  Timer::~Timer((Timer *)(this + 0x1a8));
  Slider::~Slider((Slider *)this);
  return;
}


