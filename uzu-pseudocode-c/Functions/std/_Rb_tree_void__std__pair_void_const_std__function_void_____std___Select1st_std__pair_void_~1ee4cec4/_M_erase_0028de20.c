// Function : _M_erase
// Namespace: std:_Rb_tree_void__std__pair_void_const_std__function_void_____std___Select1st_std__pair_void_~1ee4cec4
// Entry    : 0028de20
// Prototype: undefined _M_erase(void * param_1)
// Body     : 0028de20 - 0028de6d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<void*, std::pair<void* const, std::function<void ()> >,
   std::_Select1st<std::pair<void* const, std::function<void ()> > >, std::less<void*>,
   std::allocator<std::pair<void* const, std::function<void ()> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<void* const, std::function<void ()> > >*) */

void __cdecl
std::
_Rb_tree<void*,std::pair<void*const,std::function<void()>>,std::_Select1st<std::pair<void*const,std::function<void()>>>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(code **)((long)param_1 + 0x38) != (code *)0x0) {
                    /* try { // try from 0028de5a to 0028de63 has its CatchHandler @ 0028de6e */
        (**(code **)((long)param_1 + 0x38))((long)param_1 + 0x28,(long)param_1 + 0x28,3);
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


