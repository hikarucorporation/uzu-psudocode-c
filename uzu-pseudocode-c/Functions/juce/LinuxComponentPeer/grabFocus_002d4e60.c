// Function : grabFocus
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4e60
// Prototype: undefined grabFocus(LinuxComponentPeer * this)
// Body     : 002d4e60 - 002d4e8b


/* juce::LinuxComponentPeer::grabFocus() */

void __thiscall juce::LinuxComponentPeer::grabFocus(LinuxComponentPeer *this)

{
  XWindowSystem *this_00;
  ulong uVar1;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar1 = XWindowSystem::grabFocus(this_00,*(long *)(this + 0x120));
  if ((char)uVar1 != '\0') {
    isActiveApplication = 1;
  }
  return;
}


