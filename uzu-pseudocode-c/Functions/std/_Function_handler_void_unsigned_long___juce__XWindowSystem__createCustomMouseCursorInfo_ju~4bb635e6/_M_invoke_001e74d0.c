// Function : _M_invoke
// Namespace: std:_Function_handler_void_unsigned_long___juce__XWindowSystem__createCustomMouseCursorInfo_ju~4bb635e6
// Entry    : 001e74d0
// Prototype: undefined _M_invoke(long * param_1, undefined8 * param_2)
// Body     : 001e74d0 - 001e74f8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (unsigned long&),
   juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image const&, juce::Point<int>)
   const::$_2>::_M_invoke(std::_Any_data const&, unsigned long&) */

void __cdecl
std::
_Function_handler<void(unsigned_long&),juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_2>
::_M_invoke(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    /* WARNING: Could not recover jumptable at 0x001e74f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x150))(*(undefined8 *)(lVar1 + 0x148),*param_2);
  return;
}


