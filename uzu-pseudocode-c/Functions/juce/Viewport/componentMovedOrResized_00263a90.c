// Function : componentMovedOrResized
// Namespace: juce:Viewport
// Entry    : 00263a90
// Prototype: undefined componentMovedOrResized(Viewport * this)
// Body     : 00263a90 - 00263a9b


/* non-virtual thunk to juce::Viewport::componentMovedOrResized(juce::Component&, bool, bool) */

void __thiscall juce::Viewport::componentMovedOrResized(Viewport *this)

{
  updateVisibleArea(this + -0xf0);
  return;
}


