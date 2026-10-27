// Function : _M_erase
// Namespace: std:_Rb_tree_Steinberg__Linux__IRunLoop__Steinberg__Linux__IRunLoop__std___Identity_Steinberg_~74e8fcbe
// Entry    : 001a6eb0
// Prototype: undefined _M_erase(_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> * this, void * param_1)
// Body     : 001a6eb0 - 001a6ee5


/* std::_Rb_tree<Steinberg::Linux::IRunLoop*, Steinberg::Linux::IRunLoop*,
   std::_Identity<Steinberg::Linux::IRunLoop*>, std::less<Steinberg::Linux::IRunLoop*>,
   std::allocator<Steinberg::Linux::IRunLoop*>
   >::_M_erase(std::_Rb_tree_node<Steinberg::Linux::IRunLoop*>*) */

void __thiscall
std::
_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
::_M_erase(_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


