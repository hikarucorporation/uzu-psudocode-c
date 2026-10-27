// Function : operator[]
// Namespace: std:map_unsigned_int_unsigned_long_std__less_unsigned_int__std__allocator_std__pair_unsigned_i~0d1a3d38
// Entry    : 0019f7c0
// Prototype: _Rb_tree_node_base * operator[](map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>> * this, uint * param_1)
// Body     : 0019f7c0 - 0019f887


/* std::map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned long> > >::operator[](unsigned int const&) */

_Rb_tree_node_base * __thiscall
std::
map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
::operator[](map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
             *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var3 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  uVar2 = *param_1;
  p_Var4 = p_Var1;
  if (p_Var3 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var5 = p_Var3 + 0x18;
      if (uVar2 <= *(uint *)(p_Var3 + 0x20)) {
        p_Var5 = p_Var3 + 0x10;
        p_Var4 = p_Var3;
      }
      p_Var3 = *(_Rb_tree_node_base **)p_Var5;
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    if (p_Var4 == p_Var1) {
      p_Var4 = p_Var1;
    }
    else if (*(uint *)(p_Var4 + 0x20) <= uVar2) goto LAB_0019f872;
  }
  p_Var3 = operator_new(0x30);
  *(uint *)(p_Var3 + 0x20) = uVar2;
  *(undefined8 *)(p_Var3 + 0x28) = 0;
                    /* try { // try from 0019f826 to 0019f833 has its CatchHandler @ 0019f888 */
  auVar7 = _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
                       *)this,p_Var4,(uint *)(p_Var3 + 0x20));
  p_Var5 = auVar7._8_8_;
  p_Var4 = auVar7._0_8_;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var3);
  }
  else {
    bVar6 = true;
    if ((p_Var4 == (_Rb_tree_node_base *)0x0) && (p_Var5 != p_Var1)) {
      bVar6 = *(uint *)(p_Var3 + 0x20) < *(uint *)(p_Var5 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var5,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var4 = p_Var3;
  }
LAB_0019f872:
  return p_Var4 + 0x28;
}


