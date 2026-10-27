// Function : _M_manager
// Namespace: std:_Function_handler_double_double_double_double__juce__SliderParameterAttachment__SliderPara~550f3845
// Entry    : 001c0080
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, undefined4 param_3)
// Body     : 001c0080 - 001c0133


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<double (double, double, double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_14>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
::_M_manager(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  NormalisableRange<float> *this;
  
  switch(param_3) {
  case 0:
    *param_1 = &juce::SliderParameterAttachment::
                SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)
                ::$_14::typeinfo;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    puVar1 = (undefined8 *)*param_2;
    this = operator_new(0x78);
                    /* try { // try from 001c00c7 to 001c00d1 has its CatchHandler @ 001c014c */
    juce::NormalisableRange<float>::NormalisableRange(this,puVar1);
    *param_1 = this;
    break;
  case 3:
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      if (*(code **)((long)pvVar2 + 0x68) != (code *)0x0) {
                    /* try { // try from 001c00ec to 001c00f5 has its CatchHandler @ 001c0144 */
        (**(code **)((long)pvVar2 + 0x68))((long)pvVar2 + 0x58,(long)pvVar2 + 0x58,3);
      }
      if (*(code **)((long)pvVar2 + 0x48) != (code *)0x0) {
                    /* try { // try from 001c0103 to 001c010c has its CatchHandler @ 001c013c */
        (**(code **)((long)pvVar2 + 0x48))((long)pvVar2 + 0x38,(long)pvVar2 + 0x38,3);
      }
      if (*(code **)((long)pvVar2 + 0x28) != (code *)0x0) {
                    /* try { // try from 001c011a to 001c0123 has its CatchHandler @ 001c0134 */
        (**(code **)((long)pvVar2 + 0x28))((long)pvVar2 + 0x18,(long)pvVar2 + 0x18,3);
      }
      operator_delete(pvVar2);
    }
  }
  return 0;
}


