// Function : ~CustomDial
// Namespace: juce:CustomDial
// Entry    : 0016b970
// Prototype: undefined ~CustomDial(CustomDial * this)
// Body     : 0016b970 - 0016b98d


/* non-virtual thunk to juce::CustomDial::~CustomDial() */

void __thiscall juce::CustomDial::~CustomDial(CustomDial *this)

{
  Timer::~Timer((Timer *)this);
  Slider::~Slider((Slider *)(this + -0x1a8));
  operator_delete((Slider *)(this + -0x1a8));
  return;
}


