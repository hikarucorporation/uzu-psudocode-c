// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__detail__BoundsChangeListener__BoundsChangeListener_juce__Co~92bfe7b3
// Entry    : 00287380
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 00287380 - 00287393


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::detail::BoundsChangeListener::BoundsChangeListener(juce::Component&, std::function<void
   ()>)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void __cdecl
std::
_Function_handler<void(),juce::detail::BoundsChangeListener::BoundsChangeListener(juce::Component&,std::function<void()>)::{lambda()#1}>
::_M_invoke(long *param_1)

{
  juce::
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
            *)(*param_1 + 0xa0),param_1[1]);
  return;
}


