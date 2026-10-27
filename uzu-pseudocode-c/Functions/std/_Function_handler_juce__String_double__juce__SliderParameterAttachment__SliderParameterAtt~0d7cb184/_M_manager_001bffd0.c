// Function : _M_manager
// Namespace: std:_Function_handler_juce__String_double__juce__SliderParameterAttachment__SliderParameterAtt~0d7cb184
// Entry    : 001bffd0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 001bffd0 - 001bfff5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_13>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  pointer_____offset_0x10___ *ppuVar1;
  
  if (param_3 == 2) {
    ppuVar1 = (pointer_____offset_0x10___ *)*param_2;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_2;
      return 0;
    }
    if (param_3 != 0) {
      return 0;
    }
    ppuVar1 = &juce::SliderParameterAttachment::
               SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)
               ::$_13::typeinfo;
  }
  *param_1 = ppuVar1;
  return 0;
}


