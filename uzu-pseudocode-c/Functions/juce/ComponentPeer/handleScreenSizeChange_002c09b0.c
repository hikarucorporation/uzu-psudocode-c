// Function : handleScreenSizeChange
// Namespace: juce:ComponentPeer
// Entry    : 002c09b0
// Prototype: undefined handleScreenSizeChange(ComponentPeer * this)
// Body     : 002c09b0 - 002c09c9


/* juce::ComponentPeer::handleScreenSizeChange() */

void __thiscall juce::ComponentPeer::handleScreenSizeChange(ComponentPeer *this)

{
  (**(code **)(**(long **)(this + 8) + 0x158))();
  handleMovedOrResized(this);
  return;
}


