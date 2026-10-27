// Function : operator[]
// Namespace: std:map_int_unsigned_long_std__less_int__std__allocator_std__pair_int_const_unsigned_long___
// Entry    : 0019f510
// Prototype: _Rb_tree_node_base * operator[](map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> * this, int * param_1)
// Body     : 0019f510 - 0019f5d7


/* std::map<int, unsigned long, std::less<int>, std::allocator<std::pair<int const, unsigned long> >
   >::operator[](int&&) */

_Rb_tree_node_base * __thiscall
std::map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>::
operator[](map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
           *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  bool bVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  iVar2 = *param_1;
  p_Var5 = p_Var1;
  if (p_Var4 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var6 = p_Var4 + 0x18;
      if (iVar2 <= *(int *)(p_Var4 + 0x20)) {
        p_Var6 = p_Var4 + 0x10;
        p_Var5 = p_Var4;
      }
      p_Var4 = *(_Rb_tree_node_base **)p_Var6;
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    if (p_Var5 == p_Var1) {
      p_Var5 = p_Var1;
    }
    else if (*(int *)(p_Var5 + 0x20) <= iVar2) goto LAB_0019f5c2;
  }
  p_Var4 = operator_new(0x30);
  *(int *)(p_Var4 + 0x20) = iVar2;
  *(undefined8 *)(p_Var4 + 0x28) = 0;
                    /* try { // try from 0019f576 to 0019f583 has its CatchHandler @ 0019f5d8 */
  auVar7 = _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
                       *)this,p_Var5,(int *)(p_Var4 + 0x20));
  p_Var6 = auVar7._8_8_;
  p_Var5 = auVar7._0_8_;
  if (p_Var6 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var4);
  }
  else {
    bVar3 = true;
    if ((p_Var5 == (_Rb_tree_node_base *)0x0) && (p_Var6 != p_Var1)) {
      bVar3 = *(int *)(p_Var4 + 0x20) < *(int *)(p_Var6 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar3,p_Var4,p_Var6,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var5 = p_Var4;
  }
LAB_0019f5c2:
  return p_Var5 + 0x28;
}


