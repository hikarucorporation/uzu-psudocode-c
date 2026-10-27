// Function : isFocused
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4e40
// Prototype: undefined isFocused(LinuxComponentPeer * this)
// Body     : 002d4e40 - 002d4e5f


/* juce::LinuxComponentPeer::isFocused() const */

void __thiscall juce::LinuxComponentPeer::isFocused(LinuxComponentPeer *this)

{
  XWindowSystem *this_00;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  XWindowSystem::isFocused(this_00,*(long *)(this + 0x120));
  return;
}


