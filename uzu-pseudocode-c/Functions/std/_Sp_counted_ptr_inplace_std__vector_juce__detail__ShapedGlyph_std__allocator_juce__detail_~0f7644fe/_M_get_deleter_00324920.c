// Function : _M_get_deleter
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__detail__ShapedGlyph_std__allocator_juce__detail_~0f7644fe
// Entry    : 00324920
// Prototype: _Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * _M_get_deleter(_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this, pointer __((offset(0x10))) * param_1)
// Body     : 00324920 - 0032493c


/* std::_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,
   std::allocator<juce::detail::ShapedGlyph> >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,pointer_____offset_0x10___ *param_1)

{
  _Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var1;
  
  p_Var1 = (_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
            *)0x0;
  if (param_1 == (pointer_____offset_0x10___ *)PTR_typeinfo_00715c10) {
    p_Var1 = this + 0x10;
  }
  if (param_1 == (pointer_____offset_0x10___ *)PTR___tag_00715650) {
    p_Var1 = this + 0x10;
  }
  return p_Var1;
}


