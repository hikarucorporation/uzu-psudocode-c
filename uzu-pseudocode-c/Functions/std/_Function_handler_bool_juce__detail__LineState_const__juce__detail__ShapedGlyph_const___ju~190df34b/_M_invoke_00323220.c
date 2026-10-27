// Function : _M_invoke
// Namespace: std:_Function_handler_bool_juce__detail__LineState_const__juce__detail__ShapedGlyph_const___ju~190df34b
// Entry    : 00323220
// Prototype: bool _M_invoke(undefined8 param_1, long * param_2, float * param_3)
// Body     : 00323220 - 0032324e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<bool (juce::detail::LineState const&, juce::detail::ShapedGlyph const&),
   juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor const&,
   bool)::{lambda(auto:1&, auto:2&)#2}>::_M_invoke(std::_Any_data const&, juce::detail::LineState
   const&, juce::detail::ShapedGlyph const&) */

bool __cdecl
std::
_Function_handler<bool(juce::detail::LineState_const&,juce::detail::ShapedGlyph_const&),juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor_const&,bool)::{lambda(auto:1&,auto:2&)#2}>
::_M_invoke(undefined8 param_1,long *param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((-1 < *param_2) && (*(float *)(param_2 + 1) - *(float *)((long)param_2 + 0xc) < *param_3))
      && (bVar1 = false, (char)param_2[2] != '\0')) && (*(char *)((long)param_3 + 0x1d) != '\0')) {
    bVar1 = *param_2 <= *(long *)(param_3 + 4);
  }
  return bVar1;
}


