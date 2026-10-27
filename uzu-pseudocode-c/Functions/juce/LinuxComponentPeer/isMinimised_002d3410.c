// Function : isMinimised
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3410
// Prototype: undefined isMinimised(LinuxComponentPeer * this)
// Body     : 002d3410 - 002d342f


/* juce::LinuxComponentPeer::isMinimised() const */

void __thiscall juce::LinuxComponentPeer::isMinimised(LinuxComponentPeer *this)

{
  XWindowSystem *this_00;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  XWindowSystem::isHidden(this_00,*(undefined8 *)(this + 0x120));
  return;
}


