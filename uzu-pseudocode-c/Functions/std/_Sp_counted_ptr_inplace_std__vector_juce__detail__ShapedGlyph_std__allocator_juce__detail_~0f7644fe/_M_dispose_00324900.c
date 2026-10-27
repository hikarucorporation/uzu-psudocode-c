// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__detail__ShapedGlyph_std__allocator_juce__detail_~0f7644fe
// Entry    : 00324900
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00324900 - 0032490e


/* std::_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,
   std::allocator<juce::detail::ShapedGlyph> >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  if (*(void **)(this + 0x10) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


