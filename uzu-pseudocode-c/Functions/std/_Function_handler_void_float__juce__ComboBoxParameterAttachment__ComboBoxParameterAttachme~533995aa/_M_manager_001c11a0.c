// Function : _M_manager
// Namespace: std:_Function_handler_void_float__juce__ComboBoxParameterAttachment__ComboBoxParameterAttachme~533995aa
// Entry    : 001c11a0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 001c11a0 - 001c11c5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (float),
   juce::ComboBoxParameterAttachment::ComboBoxParameterAttachment(juce::RangedAudioParameter&,
   juce::ComboBox&, juce::UndoManager*)::$_17>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<void(float),juce::ComboBoxParameterAttachment::ComboBoxParameterAttachment(juce::RangedAudioParameter&,juce::ComboBox&,juce::UndoManager*)::$_17>
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
    ppuVar1 = &juce::ComboBoxParameterAttachment::
               ComboBoxParameterAttachment(juce::RangedAudioParameter&,juce::ComboBox&,juce::UndoManager*)
               ::$_17::typeinfo;
  }
  *param_1 = ppuVar1;
  return 0;
}


