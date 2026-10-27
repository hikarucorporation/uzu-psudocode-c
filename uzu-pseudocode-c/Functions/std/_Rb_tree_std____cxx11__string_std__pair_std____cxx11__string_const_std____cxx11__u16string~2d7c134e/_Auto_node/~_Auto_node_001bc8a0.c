// Function : ~_Auto_node
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_std____cxx11__u16string~2d7c134e:_Auto_node
// Entry    : 001bc8a0
// Prototype: undefined ~_Auto_node(_Auto_node * this)
// Body     : 001bc8a0 - 001bc8d8


/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::u16string
   >, std::_Select1st<std::pair<std::__cxx11::string const, std::__cxx11::u16string > >,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > > >::_Auto_node::~_Auto_node() */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
::_Auto_node::~_Auto_node(_Auto_node *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)pvVar1 + 0x40) != (void *)((long)pvVar1 + 0x50)) {
    operator_delete(*(void **)((long)pvVar1 + 0x40));
  }
  if (*(void **)((long)pvVar1 + 0x20) != (void *)((long)pvVar1 + 0x30)) {
    operator_delete(*(void **)((long)pvVar1 + 0x20));
  }
  operator_delete(pvVar1);
  return;
}


