// Function : insert<std::pair<char_const*,char16_t*>>
// Namespace: std:map_char_const__char16_t__std__less_char_const___std__allocator_std__pair_char_const_const~d2378b9b
// Entry    : 0019eb50
// Prototype: undefined1[16] insert<std::pair<char_const*,char16_t*>>(map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> * this, ulong * param_1)
// Body     : 0019eb50 - 0019ec45


/* std::enable_if<is_constructible<std::pair<char const* const, char16_t*>, std::pair<char const*,
   char16_t*> >::value, std::pair<std::_Rb_tree_iterator<std::pair<char const* const, char16_t*> >,
   bool> >::type std::map<char const*, char16_t*, std::less<char const*>,
   std::allocator<std::pair<char const* const, char16_t*> > >::insert<std::pair<char const*,
   char16_t*> >(std::pair<char const*, char16_t*>&&) */

undefined1  [16] __thiscall
std::
map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
::insert<std::pair<char_const*,char16_t*>>
          (map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
           *this,ulong *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  undefined7 uVar5;
  ulong uVar4;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  uVar4 = *param_1;
  if (p_Var2 == (_Rb_tree_node_base *)0x0) {
LAB_0019ebb1:
    p_Var3 = p_Var1;
  }
  else {
    p_Var3 = p_Var1;
    do {
      auVar7._8_8_ = p_Var2 + 0x18;
      if (uVar4 <= *(ulong *)(p_Var2 + 0x20)) {
        auVar7._8_8_ = p_Var2 + 0x10;
        p_Var3 = p_Var2;
      }
      p_Var2 = *(_Rb_tree_node_base **)auVar7._8_8_;
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    if (p_Var3 == p_Var1) goto LAB_0019ebb1;
    if (*(ulong *)(p_Var3 + 0x20) <= uVar4) {
      uVar4 = 0;
      goto LAB_0019ec31;
    }
  }
  p_Var2 = operator_new(0x30);
  *(ulong *)(p_Var2 + 0x20) = uVar4;
  *(ulong *)(p_Var2 + 0x28) = param_1[1];
                    /* try { // try from 0019ebd6 to 0019ebe3 has its CatchHandler @ 0019ec46 */
  auVar7 = _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
                       *)this,p_Var3,(ulong *)(p_Var2 + 0x20));
  auVar7._8_8_ = auVar7._8_8_;
  p_Var3 = auVar7._0_8_;
  uVar5 = (undefined7)((ulong)param_1 >> 8);
  if (auVar7._8_8_ == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var2);
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    uVar4 = CONCAT71(uVar5,1);
    bVar6 = true;
    if ((p_Var3 == (_Rb_tree_node_base *)0x0) && (bVar6 = true, auVar7._8_8_ != p_Var1)) {
      bVar6 = *(ulong *)(p_Var2 + 0x20) < *(ulong *)(auVar7._8_8_ + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar6,p_Var2,auVar7._8_8_,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var3 = p_Var2;
  }
LAB_0019ec31:
  auVar7._8_8_ = uVar4 & 0xffffffff;
  auVar7._0_8_ = p_Var3;
  return auVar7;
}


