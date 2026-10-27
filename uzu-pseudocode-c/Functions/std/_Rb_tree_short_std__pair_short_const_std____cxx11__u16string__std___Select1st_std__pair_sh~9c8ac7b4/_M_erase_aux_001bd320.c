// Function : _M_erase_aux
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4
// Entry    : 001bd320
// Prototype: undefined _M_erase_aux(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> * this, _Rb_tree_node_base * param_1, _Rb_tree_node_base * param_2)
// Body     : 001bd320 - 001bd3bf


/* std::_Rb_tree<short, std::pair<short const, std::__cxx11::u16string >,
   std::_Select1st<std::pair<short const, std::__cxx11::u16string > >, std::less<short>,
   std::allocator<std::pair<short const, std::__cxx11::u16string > >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<short const, std::__cxx11::u16string > >,
   std::_Rb_tree_const_iterator<std::pair<short const, std::__cxx11::u16string > >) */

void __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_M_erase_aux(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
               *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  
  if ((*(_Rb_tree_node_base **)(this + 0x18) == param_1) &&
     (p_Var1 = (_Rb_tree_node_base *)(this + 8), p_Var1 == param_2)) {
                    /* try { // try from 001bd396 to 001bd39d has its CatchHandler @ 001bd3c0 */
    _M_erase(this,*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree_node_base **)(this + 0x18) = p_Var1;
    *(_Rb_tree_node_base **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else if (param_1 != param_2) {
    do {
      p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      pvVar2 = (void *)std::_Rb_tree_rebalance_for_erase(param_1,(_Rb_tree_node_base *)(this + 8));
      if (*(void **)((long)pvVar2 + 0x28) != (void *)((long)pvVar2 + 0x38)) {
        operator_delete(*(void **)((long)pvVar2 + 0x28));
      }
      operator_delete(pvVar2);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      param_1 = p_Var1;
    } while (p_Var1 != param_2);
  }
  return;
}


