// Function : ~XWindowSystem
// Namespace: juce:XWindowSystem
// Entry    : 002d0390
// Prototype: undefined ~XWindowSystem(XWindowSystem * this)
// Body     : 002d0390 - 002d03a1


/* juce::XWindowSystem::~XWindowSystem() */

void __thiscall juce::XWindowSystem::~XWindowSystem(XWindowSystem *this)

{
  ~XWindowSystem(this);
  operator_delete(this);
  return;
}


