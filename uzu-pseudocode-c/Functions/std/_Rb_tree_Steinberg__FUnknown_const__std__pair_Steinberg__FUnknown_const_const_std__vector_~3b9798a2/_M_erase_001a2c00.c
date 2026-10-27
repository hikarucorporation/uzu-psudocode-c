// Function : _M_erase
// Namespace: std:_Rb_tree_Steinberg__FUnknown_const__std__pair_Steinberg__FUnknown_const_const_std__vector_~3b9798a2
// Entry    : 001a2c00
// Prototype: undefined _M_erase(_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> * this, void * param_1)
// Body     : 001a2c00 - 001a2c55


/* std::_Rb_tree<Steinberg::FUnknown const*, std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > >,
   std::_Select1st<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >, std::less<Steinberg::FUnknown const*>,
   std::allocator<std::pair<Steinberg::FUnknown const* const, std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<Steinberg::FUnknown const* const,
   std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*> > > >*) */

void __thiscall
std::
_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
::_M_erase(_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(void **)((long)param_1 + 0x28) != (void *)0x0) {
        operator_delete(*(void **)((long)param_1 + 0x28));
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


