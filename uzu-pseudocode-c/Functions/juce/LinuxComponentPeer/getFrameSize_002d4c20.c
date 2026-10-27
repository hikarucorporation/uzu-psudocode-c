// Function : getFrameSize
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4c20
// Prototype: undefined1[16] getFrameSize(LinuxComponentPeer * this)
// Body     : 002d4c20 - 002d4c3c


/* juce::LinuxComponentPeer::getFrameSize() const */

undefined1  [16] __thiscall juce::LinuxComponentPeer::getFrameSize(LinuxComponentPeer *this)

{
  if (this[0x140] == (LinuxComponentPeer)0x0) {
    return ZEXT816(0);
  }
  return *(undefined1 (*) [16])(this + 0x144);
}


