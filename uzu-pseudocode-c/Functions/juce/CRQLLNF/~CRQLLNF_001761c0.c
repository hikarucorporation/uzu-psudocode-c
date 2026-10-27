// Function : ~CRQLLNF
// Namespace: juce:CRQLLNF
// Entry    : 001761c0
// Prototype: undefined ~CRQLLNF(CRQLLNF * this)
// Body     : 001761c0 - 001761d1


/* juce::CRQLLNF::~CRQLLNF() */

void __thiscall juce::CRQLLNF::~CRQLLNF(CRQLLNF *this)

{
  LookAndFeel_V4::~LookAndFeel_V4((LookAndFeel_V4 *)this);
  operator_delete(this);
  return;
}


