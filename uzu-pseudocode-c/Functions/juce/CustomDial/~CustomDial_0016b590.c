// Function : ~CustomDial
// Namespace: juce:CustomDial
// Entry    : 0016b590
// Prototype: undefined ~CustomDial(CustomDial * this)
// Body     : 0016b590 - 0016b5b0


/* juce::CustomDial::~CustomDial() */

void __thiscall juce::CustomDial::~CustomDial(CustomDial *this)

{
  Timer::~Timer((Timer *)(this + 0x1a8));
  Slider::~Slider((Slider *)this);
  operator_delete(this);
  return;
}


