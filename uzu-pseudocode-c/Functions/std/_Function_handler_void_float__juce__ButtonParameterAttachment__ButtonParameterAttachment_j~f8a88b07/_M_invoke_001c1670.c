// Function : _M_invoke
// Namespace: std:_Function_handler_void_float__juce__ButtonParameterAttachment__ButtonParameterAttachment_j~f8a88b07
// Entry    : 001c1670
// Prototype: undefined _M_invoke(long * param_1, float * param_2)
// Body     : 001c1670 - 001c16ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (float),
   juce::ButtonParameterAttachment::ButtonParameterAttachment(juce::RangedAudioParameter&,
   juce::Button&, juce::UndoManager*)::$_18>::_M_invoke(std::_Any_data const&, float&&) */

void __cdecl
std::
_Function_handler<void(float),juce::ButtonParameterAttachment::ButtonParameterAttachment(juce::RangedAudioParameter&,juce::Button&,juce::UndoManager*)::$_18>
::_M_invoke(long *param_1,float *param_2)

{
  float fVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  fVar1 = *param_2;
  uVar2 = *(undefined1 *)(lVar3 + 0x60);
  *(undefined1 *)(lVar3 + 0x60) = 1;
                    /* try { // try from 001c1693 to 001c16a1 has its CatchHandler @ 001c16ad */
  juce::Button::setToggleState(*(Button **)(lVar3 + 8),(Button)(DAT_005d9044 <= fVar1),2,2);
  *(undefined1 *)(lVar3 + 0x60) = uVar2;
  return;
}


