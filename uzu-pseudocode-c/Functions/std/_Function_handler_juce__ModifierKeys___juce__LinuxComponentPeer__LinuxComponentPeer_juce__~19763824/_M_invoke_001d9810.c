// Function : _M_invoke
// Namespace: std:_Function_handler_juce__ModifierKeys___juce__LinuxComponentPeer__LinuxComponentPeer_juce__~19763824
// Entry    : 001d9810
// Prototype: undefined _M_invoke(void)
// Body     : 001d9810 - 001d9825


/* std::_Function_handler<juce::ModifierKeys (),
   juce::LinuxComponentPeer::LinuxComponentPeer(juce::Component&, int, unsigned
   long)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<juce::ModifierKeys(),juce::LinuxComponentPeer::LinuxComponentPeer(juce::Component&,int,unsigned_long)::{lambda()#1}>
     ::_M_invoke(void)

{
  XWindowSystem *this;
  
  this = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                   ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                    juce::XWindowSystem::singletonHolder);
  juce::XWindowSystem::getNativeRealtimeModifiers(this);
  return;
}


