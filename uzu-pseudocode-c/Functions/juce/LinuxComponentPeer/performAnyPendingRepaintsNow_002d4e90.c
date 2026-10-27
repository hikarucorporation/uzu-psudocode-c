// Function : performAnyPendingRepaintsNow
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4e90
// Prototype: undefined performAnyPendingRepaintsNow(LinuxComponentPeer * this)
// Body     : 002d4e90 - 002d4ea1


/* juce::LinuxComponentPeer::performAnyPendingRepaintsNow() */

void __thiscall juce::LinuxComponentPeer::performAnyPendingRepaintsNow(LinuxComponentPeer *this)

{
  if (*(LinuxRepaintManager **)(this + 0xd0) == (LinuxRepaintManager *)0x0) {
    return;
  }
  LinuxRepaintManager::performAnyPendingRepaintsNow(*(LinuxRepaintManager **)(this + 0xd0));
  return;
}


