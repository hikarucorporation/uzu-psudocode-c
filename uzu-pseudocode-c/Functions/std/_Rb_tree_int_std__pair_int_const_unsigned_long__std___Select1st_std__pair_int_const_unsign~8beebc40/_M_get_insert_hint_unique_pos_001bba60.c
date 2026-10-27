// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_int_std__pair_int_const_unsigned_long__std___Select1st_std__pair_int_const_unsign~8beebc40
// Entry    : 001bba60
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> * this, _Rb_tree_node_base * param_1, int * param_2)
// Body     : 001bba60 - 001bbc43


/* std::_Rb_tree<int, std::pair<int const, unsigned long>, std::_Select1st<std::pair<int const,
   unsigned long> >, std::less<int>, std::allocator<std::pair<int const, unsigned long> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const, unsigned long>
   >, int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
           *this,_Rb_tree_node_base *param_1,int *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  int iVar4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var5 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == param_1) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), *(int *)(p_Var5 + 0x20) < *param_2)) {
LAB_001bbad5:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001bbc32;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bbb4e:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001bbb80;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      iVar4 = *param_2;
    }
    else {
      iVar4 = *param_2;
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      do {
        p_Var3 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10);
      } while (*(_Rb_tree_node_base **)
                (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10) !=
               (_Rb_tree_node_base *)0x0);
      param_1 = p_Var3;
      if (iVar4 < *(int *)(p_Var3 + 0x20)) goto LAB_001bbb4e;
    }
    if (*(int *)(p_Var3 + 0x20) < iVar4) {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
    else {
      param_1 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    iVar4 = *param_2;
    p_Var3 = param_1;
    if (iVar4 < *(int *)(param_1 + 0x20)) {
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var1 == param_1) {
        goto LAB_001bbc32;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      if (*(int *)(p_Var2 + 0x20) < iVar4) {
        if (*(long *)(p_Var2 + 0x18) == 0) {
          param_1 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var2 = param_1;
        }
        p_Var3 = param_1;
        param_1 = p_Var2;
        goto LAB_001bbc32;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bbbbe:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001bbad5;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        param_1 = p_Var3;
        if (iVar4 < *(int *)(p_Var3 + 0x20)) goto LAB_001bbbbe;
      }
      if (*(int *)(p_Var3 + 0x20) < iVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001bbc32;
    }
    if (iVar4 <= *(int *)(param_1 + 0x20)) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001bbc32;
    }
    if (*(_Rb_tree_node_base **)(this + 0x20) != param_1) {
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      if (iVar4 < *(int *)(p_Var3 + 0x20)) {
        if (*(long *)(param_1 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
        else {
          param_1 = p_Var3;
        }
        goto LAB_001bbc32;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bbc13:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001bbad5;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      }
      else {
        do {
          p_Var3 = p_Var1;
          p_Var1 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(int *)(p_Var3 + 0x20) <= iVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var5 = p_Var3;
        if (iVar4 < *(int *)(p_Var3 + 0x20)) goto LAB_001bbc13;
      }
      if (*(int *)(p_Var3 + 0x20) < iVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001bbc32;
    }
LAB_001bbb80:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001bbc32:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


