// Function : insert<std::pair<char,char16_t>>
// Namespace: std:map_char_const_char16_t_std__less_char_const__std__allocator_std__pair_char_const_char16_t~25cde19e
// Entry    : 0019ec60
// Prototype: undefined1[16] insert<std::pair<char,char16_t>>(map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> * this, _Rb_tree_node_base * param_1)
// Body     : 0019ec60 - 0019ed55


/* std::enable_if<is_constructible<std::pair<char const, char16_t>, std::pair<char, char16_t>
   >::value, std::pair<std::_Rb_tree_iterator<std::pair<char const, char16_t> >, bool> >::type
   std::map<char const, char16_t, std::less<char const>, std::allocator<std::pair<char const,
   char16_t> > >::insert<std::pair<char, char16_t> >(std::pair<char, char16_t>&&) */

undefined1  [16] __thiscall
std::map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>::
insert<std::pair<char,char16_t>>
          (map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
           *this,_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base _Var2;
  bool bVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  undefined7 uVar7;
  ulong uVar6;
  undefined1 auVar8 [16];
  
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  _Var2 = *param_1;
  if (p_Var4 == (_Rb_tree_node_base *)0x0) {
LAB_0019ecc1:
    p_Var5 = p_Var1;
  }
  else {
    p_Var5 = p_Var1;
    do {
      auVar8._8_8_ = p_Var4 + 0x18;
      if ((char)_Var2 <= (char)p_Var4[0x20]) {
        auVar8._8_8_ = p_Var4 + 0x10;
        p_Var5 = p_Var4;
      }
      p_Var4 = *(_Rb_tree_node_base **)auVar8._8_8_;
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    if (p_Var5 == p_Var1) goto LAB_0019ecc1;
    if ((char)p_Var5[0x20] <= (char)_Var2) {
      uVar6 = 0;
      goto LAB_0019ed41;
    }
  }
  p_Var4 = operator_new(0x28);
  p_Var4[0x20] = _Var2;
  *(undefined2 *)(p_Var4 + 0x22) = *(undefined2 *)(param_1 + 2);
                    /* try { // try from 0019ece8 to 0019ecf5 has its CatchHandler @ 0019ed56 */
  auVar8 = _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
                       *)this,p_Var5,(char *)(p_Var4 + 0x20));
  auVar8._8_8_ = auVar8._8_8_;
  p_Var5 = auVar8._0_8_;
  uVar7 = (undefined7)((ulong)param_1 >> 8);
  if (auVar8._8_8_ == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var4);
    uVar6 = CONCAT71(uVar7,1);
  }
  else {
    uVar6 = CONCAT71(uVar7,1);
    bVar3 = true;
    if ((p_Var5 == (_Rb_tree_node_base *)0x0) && (bVar3 = true, auVar8._8_8_ != p_Var1)) {
      bVar3 = (char)p_Var4[0x20] < (char)auVar8._8_8_[0x20];
    }
    std::_Rb_tree_insert_and_rebalance(bVar3,p_Var4,auVar8._8_8_,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var5 = p_Var4;
  }
LAB_0019ed41:
  auVar8._8_8_ = uVar6 & 0xffffffff;
  auVar8._0_8_ = p_Var5;
  return auVar8;
}


