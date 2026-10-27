// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_char_const_std__pair_char_const_char16_t__std___Select1st_std__pair_char_const_ch~d3b178aa
// Entry    : 001ba5e0
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> * this, _Rb_tree_node_base * param_1, char * param_2)
// Body     : 001ba5e0 - 001ba7c7


/* std::_Rb_tree<char const, std::pair<char const, char16_t>, std::_Select1st<std::pair<char const,
   char16_t> >, std::less<char const>, std::allocator<std::pair<char const, char16_t> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<char const, char16_t> >,
   char const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
           *this,_Rb_tree_node_base *param_1,char *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  char cVar4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var5 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == param_1) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), (char)p_Var5[0x20] < *param_2)) {
LAB_001ba657:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001ba7b6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba6cf:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001ba701;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      cVar4 = *param_2;
    }
    else {
      cVar4 = *param_2;
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      do {
        p_Var3 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10);
      } while (*(_Rb_tree_node_base **)(p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10) !=
               (_Rb_tree_node_base *)0x0);
      param_1 = p_Var3;
      if (cVar4 < (char)p_Var3[0x20]) goto LAB_001ba6cf;
    }
    if ((char)p_Var3[0x20] < cVar4) {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
    else {
      param_1 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    cVar4 = *param_2;
    p_Var3 = param_1;
    if (cVar4 < (char)param_1[0x20]) {
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var1 == param_1) {
        goto LAB_001ba7b6;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      if ((char)p_Var2[0x20] < cVar4) {
        if (*(long *)(p_Var2 + 0x18) == 0) {
          param_1 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var2 = param_1;
        }
        p_Var3 = param_1;
        param_1 = p_Var2;
        goto LAB_001ba7b6;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba741:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001ba657;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)(p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10)
                 != (_Rb_tree_node_base *)0x0);
        param_1 = p_Var3;
        if (cVar4 < (char)p_Var3[0x20]) goto LAB_001ba741;
      }
      if ((char)p_Var3[0x20] < cVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001ba7b6;
    }
    if (cVar4 <= (char)param_1[0x20]) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001ba7b6;
    }
    if (*(_Rb_tree_node_base **)(this + 0x20) != param_1) {
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      if (cVar4 < (char)p_Var3[0x20]) {
        if (*(long *)(param_1 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
        else {
          param_1 = p_Var3;
        }
        goto LAB_001ba7b6;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001ba796:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001ba657;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      }
      else {
        do {
          p_Var3 = p_Var1;
          p_Var1 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)(p_Var3 + (ulong)((char)p_Var3[0x20] <= cVar4) * 8 + 0x10)
                 != (_Rb_tree_node_base *)0x0);
        p_Var5 = p_Var3;
        if (cVar4 < (char)p_Var3[0x20]) goto LAB_001ba796;
      }
      if ((char)p_Var3[0x20] < cVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001ba7b6;
    }
LAB_001ba701:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001ba7b6:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


