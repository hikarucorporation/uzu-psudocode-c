// Function : _M_emplace_hint_unique<std::pair<short,char16_t_const*>>
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4
// Entry    : 001bcf30
// Prototype: _Rb_tree_node_base * _M_emplace_hint_unique<std::pair<short,char16_t_const*>>(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> * this, _Rb_tree_node_base * param_1, undefined2 * param_2)
// Body     : 001bcf30 - 001bcfe2


/* std::_Rb_tree_iterator<std::pair<short const, std::__cxx11::u16string > > std::_Rb_tree<short,
   std::pair<short const, std::__cxx11::u16string >, std::_Select1st<std::pair<short const,
   std::__cxx11::u16string > >, std::less<short>, std::allocator<std::pair<short const,
   std::__cxx11::u16string > > >::_M_emplace_hint_unique<std::pair<short, char16_t const*>
   >(std::_Rb_tree_const_iterator<std::pair<short const, std::__cxx11::u16string > >,
   std::pair<short, char16_t const*>&&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_M_emplace_hint_unique<std::pair<short,char16_t_const*>>
          (_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
           *this,_Rb_tree_node_base *param_1,undefined2 *param_2)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  
  p_Var2 = operator_new(0x48);
  _M_construct_node<std::pair<short,char16_t_const*>>(this,(long)p_Var2,param_2);
                    /* try { // try from 001bcf6e to 001bcf7b has its CatchHandler @ 001bcfe3 */
  auVar5 = _M_get_insert_hint_unique_pos(this,param_1,(short *)(p_Var2 + 0x20));
  p_Var4 = auVar5._8_8_;
  p_Var3 = auVar5._0_8_;
  if (p_Var4 == (_Rb_tree_node_base *)0x0) {
    if (*(_Rb_tree_node_base **)(p_Var2 + 0x28) != p_Var2 + 0x38) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var2 + 0x28));
    }
    operator_delete(p_Var2);
  }
  else {
    bVar1 = true;
    if ((p_Var3 == (_Rb_tree_node_base *)0x0) && (p_Var4 != (_Rb_tree_node_base *)(this + 8))) {
      bVar1 = *(short *)(p_Var2 + 0x20) < *(short *)(p_Var4 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar1,p_Var2,p_Var4,(_Rb_tree_node_base *)(this + 8));
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var3 = p_Var2;
  }
  return p_Var3;
}


