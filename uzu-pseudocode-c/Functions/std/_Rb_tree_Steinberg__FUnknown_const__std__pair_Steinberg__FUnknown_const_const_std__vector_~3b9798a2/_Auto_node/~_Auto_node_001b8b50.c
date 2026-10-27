// Function : ~_Auto_node
// Namespace: std:_Rb_tree_Steinberg__FUnknown_const__std__pair_Steinberg__FUnknown_const_const_std__vector_~3b9798a2:_Auto_node
// Entry    : 001b8b50
// Prototype: undefined ~_Auto_node(_Auto_node * this)
// Body     : 001b8b50 - 001b8b72


/* std::_Rb_tree<Steinberg::FUnknown const*, std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > >,
   std::_Select1st<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >, std::less<Steinberg::FUnknown const*>,
   std::allocator<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > > >::_Auto_node::~_Auto_node() */

void __thiscall
std::
_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
::_Auto_node::~_Auto_node(_Auto_node *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)pvVar1 + 0x28) != (void *)0x0) {
    operator_delete(*(void **)((long)pvVar1 + 0x28));
  }
  operator_delete(pvVar1);
  return;
}


