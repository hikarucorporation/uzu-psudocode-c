// Function : _M_get_deleter
// Namespace: std:_Sp_counted_ptr_inplace_juce__detail__ShapedText__Impl_std__allocator_void_____gnu_cxx___L~4550279f
// Entry    : 00326060
// Prototype: _Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * _M_get_deleter(_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this, pointer __((offset(0x10))) * param_1)
// Body     : 00326060 - 0032607c


/* std::_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,pointer_____offset_0x10___ *param_1)

{
  _Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var1;
  
  p_Var1 = (_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
            *)0x0;
  if (param_1 == (pointer_____offset_0x10___ *)PTR_typeinfo_00715c10) {
    p_Var1 = this + 0x10;
  }
  if (param_1 == (pointer_____offset_0x10___ *)PTR___tag_00715650) {
    p_Var1 = this + 0x10;
  }
  return p_Var1;
}


