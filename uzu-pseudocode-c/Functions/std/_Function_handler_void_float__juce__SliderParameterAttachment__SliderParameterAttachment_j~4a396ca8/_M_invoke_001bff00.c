// Function : _M_invoke
// Namespace: std:_Function_handler_void_float__juce__SliderParameterAttachment__SliderParameterAttachment_j~4a396ca8
// Entry    : 001bff00
// Prototype: undefined _M_invoke(long * param_1, float * param_2)
// Body     : 001bff00 - 001bff35


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (float),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_11>::_M_invoke(std::_Any_data const&, float&&) */

void __cdecl
std::
_Function_handler<void(float),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_11>
::_M_invoke(long *param_1,float *param_2)

{
  float fVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  fVar1 = *param_2;
  uVar2 = *(undefined1 *)(lVar3 + 0x60);
  *(undefined1 *)(lVar3 + 0x60) = 1;
                    /* try { // try from 001bff21 to 001bff2a has its CatchHandler @ 001bff36 */
  juce::Slider::Pimpl::setValue((double)fVar1,*(Pimpl **)(*(long *)(lVar3 + 8) + 0x1a0),2);
  *(undefined1 *)(lVar3 + 0x60) = uVar2;
  return;
}


