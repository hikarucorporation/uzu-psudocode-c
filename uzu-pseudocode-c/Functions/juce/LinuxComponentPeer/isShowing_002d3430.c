// Function : isShowing
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3430
// Prototype: ulong isShowing(LinuxComponentPeer * this)
// Body     : 002d3430 - 002d3452


/* juce::LinuxComponentPeer::isShowing() const */

ulong __thiscall juce::LinuxComponentPeer::isShowing(LinuxComponentPeer *this)

{
  XWindowSystem *this_00;
  ulong uVar1;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar1 = XWindowSystem::isHidden(this_00,*(undefined8 *)(this + 0x120));
  return uVar1 ^ 1;
}


