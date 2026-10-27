// Function : ~Pimpl
// Namespace: juce:Slider:Pimpl
// Entry    : 002e0b80
// Prototype: undefined ~Pimpl(Pimpl * this)
// Body     : 002e0b80 - 002e0b91


/* juce::Slider::Pimpl::~Pimpl() */

void __thiscall juce::Slider::Pimpl::~Pimpl(Pimpl *this)

{
  ~Pimpl(this);
  operator_delete(this);
  return;
}


