// Function : ~CustomDial
// Namespace: juce:CustomDial
// Entry    : 0016b8f0
// Prototype: undefined ~CustomDial(CustomDial * this)
// Body     : 0016b8f0 - 0016b914


/* non-virtual thunk to juce::CustomDial::~CustomDial() */

void __thiscall juce::CustomDial::~CustomDial(CustomDial *this)

{
  Timer::~Timer((Timer *)(this + 0xb8));
  Slider::~Slider((Slider *)(this + -0xf0));
  operator_delete((Slider *)(this + -0xf0));
  return;
}


