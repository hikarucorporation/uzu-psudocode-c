// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_Steinberg__FUnknown_const__std__pair_Steinberg__FUnknown_const_const_std__vector_~3b9798a2
// Entry    : 001b8950
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> * this, _Rb_tree_node_base * param_1, ulong * param_2)
// Body     : 001b8950 - 001b8b42


/* std::_Rb_tree<Steinberg::FUnknown const*, std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > >,
   std::_Select1st<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >, std::less<Steinberg::FUnknown const*>,
   std::allocator<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<Steinberg::FUnknown
   const* const, std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > > >,
   Steinberg::FUnknown const* const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
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
LAB_001b89c6:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001b8b36;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001b8a41:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001b8a74;
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
      if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001b8a41;
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
        goto LAB_001b8b36;
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
        goto LAB_001b8b36;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001b8ac1:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001b89c6;
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
        if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001b8ac1;
      }
      if (*(ulong *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001b8b36;
    }
    if (uVar4 <= *(ulong *)(param_1 + 0x20)) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001b8b36;
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
        goto LAB_001b8b36;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001b8b16:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001b89c6;
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
        if (uVar4 < *(ulong *)(p_Var3 + 0x20)) goto LAB_001b8b16;
      }
      if (*(ulong *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001b8b36;
    }
LAB_001b8a74:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001b8b36:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


