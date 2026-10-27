// Function : _M_erase
// Namespace: std:_Rb_tree_char_const_std__pair_char_const_char16_t__std___Select1st_std__pair_char_const_ch~d3b178aa
// Entry    : 001a2de0
// Prototype: undefined _M_erase(_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> * this, void * param_1)
// Body     : 001a2de0 - 001a2e15


/* std::_Rb_tree<char const, std::pair<char const, char16_t>, std::_Select1st<std::pair<char const,
   char16_t> >, std::less<char const>, std::allocator<std::pair<char const, char16_t> >
   >::_M_erase(std::_Rb_tree_node<std::pair<char const, char16_t> >*) */

void __thiscall
std::
_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
::_M_erase(_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


