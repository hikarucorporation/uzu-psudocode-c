// Function : _M_erase
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4
// Entry    : 001b8820
// Prototype: undefined _M_erase(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> * this, void * param_1)
// Body     : 001b8820 - 001b8879


/* std::_Rb_tree<short, std::pair<short const, std::__cxx11::u16string >,
   std::_Select1st<std::pair<short const, std::__cxx11::u16string > >, std::less<short>,
   std::allocator<std::pair<short const, std::__cxx11::u16string > >
   >::_M_erase(std::_Rb_tree_node<std::pair<short const, std::__cxx11::u16string > >*) */

void __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_M_erase(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(void **)((long)param_1 + 0x28) != (void *)((long)param_1 + 0x38)) {
        operator_delete(*(void **)((long)param_1 + 0x28));
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


