// Function : ~ComponentRestarter
// Namespace: juce:ComponentRestarter
// Entry    : 001b3670
// Prototype: undefined ~ComponentRestarter(ComponentRestarter * this)
// Body     : 001b3670 - 001b368b


/* juce::ComponentRestarter::~ComponentRestarter() */

void __thiscall juce::ComponentRestarter::~ComponentRestarter(ComponentRestarter *this)

{
  *(undefined ***)this = &PTR__ComponentRestarter_007061e8;
  AsyncUpdater::cancelPendingUpdate((AsyncUpdater *)this);
  AsyncUpdater::~AsyncUpdater((AsyncUpdater *)this);
  return;
}


