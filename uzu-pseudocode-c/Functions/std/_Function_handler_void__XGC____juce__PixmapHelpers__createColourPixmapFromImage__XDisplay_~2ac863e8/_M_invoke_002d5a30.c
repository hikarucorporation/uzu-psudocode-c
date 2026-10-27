// Function : _M_invoke
// Namespace: std:_Function_handler_void__XGC____juce__PixmapHelpers__createColourPixmapFromImage__XDisplay_~2ac863e8
// Entry    : 002d5a30
// Prototype: undefined _M_invoke(undefined8 * param_1, undefined8 * param_2)
// Body     : 002d5a30 - 002d5a57


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (_XGC*&),
   juce::PixmapHelpers::createColourPixmapFromImage(_XDisplay*, juce::Image
   const&)::$_0>::_M_invoke(std::_Any_data const&, _XGC*&) */

void __cdecl
std::
_Function_handler<void(_XGC*&),juce::PixmapHelpers::createColourPixmapFromImage(_XDisplay*,juce::Image_const&)::$_0>
::_M_invoke(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    /* WARNING: Could not recover jumptable at 0x002d5a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x140))(*(undefined8 *)*param_1,*param_2);
  return;
}


