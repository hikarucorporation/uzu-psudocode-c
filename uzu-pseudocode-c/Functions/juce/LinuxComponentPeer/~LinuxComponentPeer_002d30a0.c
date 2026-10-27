// Function : ~LinuxComponentPeer
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d30a0
// Prototype: undefined ~LinuxComponentPeer(LinuxComponentPeer * this)
// Body     : 002d30a0 - 002d30b1


/* juce::LinuxComponentPeer::~LinuxComponentPeer() */

void __thiscall juce::LinuxComponentPeer::~LinuxComponentPeer(LinuxComponentPeer *this)

{
  ~LinuxComponentPeer(this);
  operator_delete(this);
  return;
}


