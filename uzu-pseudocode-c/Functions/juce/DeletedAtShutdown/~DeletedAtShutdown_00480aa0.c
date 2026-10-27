// Function : ~DeletedAtShutdown
// Namespace: juce:DeletedAtShutdown
// Entry    : 00480aa0
// Prototype: undefined ~DeletedAtShutdown(DeletedAtShutdown * this)
// Body     : 00480aa0 - 00480ab1


/* juce::DeletedAtShutdown::~DeletedAtShutdown() */

void __thiscall juce::DeletedAtShutdown::~DeletedAtShutdown(DeletedAtShutdown *this)

{
  ~DeletedAtShutdown(this);
  operator_delete(this);
  return;
}


