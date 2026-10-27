// Function : ~ComponentRestarter
// Namespace: juce:ComponentRestarter
// Entry    : 001b5100
// Prototype: undefined ~ComponentRestarter(ComponentRestarter * this)
// Body     : 001b5100 - 001b5123


/* juce::ComponentRestarter::~ComponentRestarter() */

void __thiscall juce::ComponentRestarter::~ComponentRestarter(ComponentRestarter *this)

{
  *(undefined ***)this = &PTR__ComponentRestarter_007061e8;
  AsyncUpdater::cancelPendingUpdate((AsyncUpdater *)this);
  AsyncUpdater::~AsyncUpdater((AsyncUpdater *)this);
  operator_delete(this);
  return;
}


