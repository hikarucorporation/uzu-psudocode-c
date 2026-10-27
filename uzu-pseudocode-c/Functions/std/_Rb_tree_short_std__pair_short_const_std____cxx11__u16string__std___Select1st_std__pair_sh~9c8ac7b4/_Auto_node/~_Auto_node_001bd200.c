// Function : ~_Auto_node
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4:_Auto_node
// Entry    : 001bd200
// Prototype: undefined ~_Auto_node(_Auto_node * this)
// Body     : 001bd200 - 001bd226


/* std::_Rb_tree<short, std::pair<short const, std::__cxx11::u16string >,
   std::_Select1st<std::pair<short const, std::__cxx11::u16string > >, std::less<short>,
   std::allocator<std::pair<short const, std::__cxx11::u16string > > >::_Auto_node::~_Auto_node() */

void __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_Auto_node::~_Auto_node(_Auto_node *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)pvVar1 + 0x28) != (void *)((long)pvVar1 + 0x38)) {
    operator_delete(*(void **)((long)pvVar1 + 0x28));
  }
  operator_delete(pvVar1);
  return;
}


