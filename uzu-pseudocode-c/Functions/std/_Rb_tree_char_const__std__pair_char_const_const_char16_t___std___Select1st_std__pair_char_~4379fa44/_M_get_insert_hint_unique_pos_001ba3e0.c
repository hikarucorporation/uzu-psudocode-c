// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_char_const__std__pair_char_const_const_char16_t___std___Select1st_std__pair_char_~4379fa44
// Entry    : 001ba3e0
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> * this, _Rb_tree_node_base * param_1, ulong * param_2)
// Body     : 001ba3e0 - 001ba5d2


/* std::_Rb_tree<char const*, std::pair<char const* const, char16_t*>,
   std::_Select1st<std::pair<char const* const, char16_t*> >, std::less<char const*>,
   std::allocator<std::pair<char const* const, char16_t*> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<char const* const,
   char16_t*> >, char const* const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
           *this,_Rb_tree_node_base *param_1,ulong *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var5 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == param_1) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), *(ulong *)(p_Var5 + 0x20) < *param_2)) {
LAB_001ba456:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001ba5c6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba4d1:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001ba504;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      uVar4 = *param_2;
    }
    else {
      uVar4 = *param_2;
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      do {
        p_Var3 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
      } while (*(_Rb_tree_node_base **)
                (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
               (_Rb_tree_node_base *)0x0);
      param_1 = p_Var3;
      if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001ba4d1;
    }
    if (*(ulong *)(p_Var3 + 0x20) < uVar4) {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
    else {
      param_1 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    uVar4 = *param_2;
    p_Var3 = param_1;
    if (uVar4 < *(ulong *)(param_1 + 0x20)) {
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var1 == param_1) {
        goto LAB_001ba5c6;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      if (*(ulong *)(p_Var2 + 0x20) < uVar4) {
        if (*(long *)(p_Var2 + 0x18) == 0) {
          param_1 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var2 = param_1;
        }
        p_Var3 = param_1;
        param_1 = p_Var2;
        goto LAB_001ba5c6;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba551:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001ba456;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        param_1 = p_Var3;
        if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001ba551;
      }
      if (*(ulong *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001ba5c6;
    }
    if (uVar4 <= *(ulong *)(param_1 + 0x20)) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001ba5c6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x20) != param_1) {
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      if (uVar4 < *(ulong *)(p_Var3 + 0x20)) {
        if (*(long *)(param_1 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
        else {
          param_1 = p_Var3;
        }
        goto LAB_001ba5c6;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba5a6:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001ba456;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      }
      else {
        do {
          p_Var3 = p_Var1;
          p_Var1 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(ulong *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var5 = p_Var3;
        if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001ba5a6;
      }
      if (*(ulong *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001ba5c6;
    }
LAB_001ba504:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001ba5c6:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


