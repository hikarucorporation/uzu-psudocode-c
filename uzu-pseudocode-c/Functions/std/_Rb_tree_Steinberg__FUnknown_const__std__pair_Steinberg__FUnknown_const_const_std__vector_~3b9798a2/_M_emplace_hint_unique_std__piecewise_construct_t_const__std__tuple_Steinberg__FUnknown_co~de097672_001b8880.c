// Function : _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<Steinberg::FUnknown_const*&&>,std::tuple<>>
// Namespace: std:_Rb_tree_Steinberg__FUnknown_const__std__pair_Steinberg__FUnknown_const_const_std__vector_~3b9798a2
// Entry    : 001b8880
// Prototype: _Rb_tree_node_base * _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<Steinberg::FUnknown_const*&&>,std::tuple<>>(_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> * param_1, _Rb_tree_node_base * param_2, undefined8 param_3, undefined8 * param_4)
// Body     : 001b8880 - 001b893b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree_iterator<std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > > >
   std::_Rb_tree<Steinberg::FUnknown const*, std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > >,
   std::_Select1st<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >, std::less<Steinberg::FUnknown const*>,
   std::allocator<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > > >::_M_emplace_hint_unique<std::piecewise_construct_t
   const&, std::tuple<Steinberg::FUnknown const*&&>, std::tuple<>
   >(std::_Rb_tree_const_iterator<std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > > >,
   std::piecewise_construct_t const&, std::tuple<Steinberg::FUnknown const*&&>&&, std::tuple<>&&) */

_Rb_tree_node_base * __cdecl
std::
_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<Steinberg::FUnknown_const*&&>,std::tuple<>>
          (_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 param_3,undefined8 *param_4)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  p_Var1 = operator_new(0x40);
  *(undefined8 *)(p_Var1 + 0x20) = *(undefined8 *)*param_4;
  *(undefined8 *)(p_Var1 + 0x28) = 0;
  *(undefined8 *)(p_Var1 + 0x30) = 0;
  *(undefined8 *)(p_Var1 + 0x38) = 0;
                    /* try { // try from 001b88ca to 001b88d7 has its CatchHandler @ 001b893c */
  auVar5 = _M_get_insert_hint_unique_pos(param_1,param_2,(ulong *)(p_Var1 + 0x20));
  p_Var3 = auVar5._8_8_;
  p_Var2 = auVar5._0_8_;
  if (p_Var3 == (_Rb_tree_node_base *)0x0) {
    if (*(void **)(p_Var1 + 0x28) != (void *)0x0) {
      operator_delete(*(void **)(p_Var1 + 0x28));
    }
    operator_delete(p_Var1);
  }
  else {
    bVar4 = true;
    if ((p_Var2 == (_Rb_tree_node_base *)0x0) && (p_Var3 != (_Rb_tree_node_base *)(param_1 + 8))) {
      bVar4 = *(ulong *)(p_Var1 + 0x20) < *(ulong *)(p_Var3 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar4,p_Var1,p_Var3,(_Rb_tree_node_base *)(param_1 + 8));
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    p_Var2 = p_Var1;
  }
  return p_Var2;
}


