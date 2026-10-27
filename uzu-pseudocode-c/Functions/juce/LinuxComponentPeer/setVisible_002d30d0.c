// Function : setVisible
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d30d0
// Prototype: undefined setVisible(LinuxComponentPeer * this, char param_1)
// Body     : 002d30d0 - 002d30fa


/* juce::LinuxComponentPeer::setVisible(bool) */

void __thiscall juce::LinuxComponentPeer::setVisible(LinuxComponentPeer *this,char param_1)

{
  XWindowSystem *this_00;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  XWindowSystem::setVisible(this_00,*(undefined8 *)(this + 0x120),param_1);
  return;
}


