// Function : setTitle
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3100
// Prototype: undefined setTitle(LinuxComponentPeer * this, undefined8 * param_1)
// Body     : 002d3100 - 002d312e


/* juce::LinuxComponentPeer::setTitle(juce::String const&) */

void __thiscall juce::LinuxComponentPeer::setTitle(LinuxComponentPeer *this,undefined8 *param_1)

{
  XWindowSystem *this_00;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  XWindowSystem::setTitle(this_00,*(undefined8 *)(this + 0x120),*param_1);
  return;
}


