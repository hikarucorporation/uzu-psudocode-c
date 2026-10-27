// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4
// Entry    : 001bd000
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> * this, _Rb_tree_node_base * param_1, short * param_2)
// Body     : 001bd000 - 001bd1f7


/* std::_Rb_tree<short, std::pair<short const, std::__cxx11::u16string >,
   std::_Select1st<std::pair<short const, std::__cxx11::u16string > >, std::less<short>,
   std::allocator<std::pair<short const, std::__cxx11::u16string > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<short const,
   std::__cxx11::u16string > >, short const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
           *this,_Rb_tree_node_base *param_1,short *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  short sVar4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var5 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == param_1) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), *(short *)(p_Var5 + 0x20) < *param_2)) {
LAB_001bd07b:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001bd1e6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bd0f1:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001bd125;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      sVar4 = *param_2;
    }
    else {
      sVar4 = *param_2;
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      do {
        p_Var3 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10);
      } while (*(_Rb_tree_node_base **)
                (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10) !=
               (_Rb_tree_node_base *)0x0);
      param_1 = p_Var3;
      if (sVar4 < *(short *)(p_Var3 + 0x20)) goto LAB_001bd0f1;
    }
    if (*(short *)(p_Var3 + 0x20) < sVar4) {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
    else {
      param_1 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    sVar4 = *param_2;
    p_Var3 = param_1;
    if (sVar4 < *(short *)(param_1 + 0x20)) {
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var1 == param_1) {
        goto LAB_001bd1e6;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      if (*(short *)(p_Var2 + 0x20) < sVar4) {
        if (*(long *)(p_Var2 + 0x18) == 0) {
          param_1 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var2 = param_1;
        }
        p_Var3 = param_1;
        param_1 = p_Var2;
        goto LAB_001bd1e6;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bd171:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001bd07b;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        param_1 = p_Var3;
        if (sVar4 < *(short *)(p_Var3 + 0x20)) goto LAB_001bd171;
      }
      if (*(short *)(p_Var3 + 0x20) < sVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001bd1e6;
    }
    if (sVar4 <= *(short *)(param_1 + 0x20)) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001bd1e6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x20) != param_1) {
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      if (sVar4 < *(short *)(p_Var3 + 0x20)) {
        if (*(long *)(param_1 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
        else {
          param_1 = p_Var3;
        }
        goto LAB_001bd1e6;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001bd1c6:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001bd07b;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      }
      else {
        do {
          p_Var3 = p_Var1;
          p_Var1 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(short *)(p_Var3 + 0x20) <= sVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var5 = p_Var3;
        if (sVar4 < *(short *)(p_Var3 + 0x20)) goto LAB_001bd1c6;
      }
      if (*(short *)(p_Var3 + 0x20) < sVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001bd1e6;
    }
LAB_001bd125:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001bd1e6:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


