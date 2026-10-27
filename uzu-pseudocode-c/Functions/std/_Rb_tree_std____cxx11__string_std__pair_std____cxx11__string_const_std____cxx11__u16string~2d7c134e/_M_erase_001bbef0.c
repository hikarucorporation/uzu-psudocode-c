// Function : _M_erase
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_std____cxx11__u16string~2d7c134e
// Entry    : 001bbef0
// Prototype: undefined _M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>> * this, void * param_1)
// Body     : 001bbef0 - 001bbf5b


/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::u16string
   >, std::_Select1st<std::pair<std::__cxx11::string const, std::__cxx11::u16string > >,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > > >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > >*) */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
::_M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(void **)((long)param_1 + 0x40) != (void *)((long)param_1 + 0x50)) {
        operator_delete(*(void **)((long)param_1 + 0x40));
      }
      if (*(void **)((long)param_1 + 0x20) != (void *)((long)param_1 + 0x30)) {
        operator_delete(*(void **)((long)param_1 + 0x20));
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


