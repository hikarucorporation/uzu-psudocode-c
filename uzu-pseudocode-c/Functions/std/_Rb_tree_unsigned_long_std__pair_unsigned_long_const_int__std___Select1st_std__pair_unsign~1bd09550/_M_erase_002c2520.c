// Function : _M_erase
// Namespace: std:_Rb_tree_unsigned_long_std__pair_unsigned_long_const_int__std___Select1st_std__pair_unsign~1bd09550
// Entry    : 002c2520
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002c2520 - 002c2554


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, int>,
   std::_Select1st<std::pair<unsigned long const, int> >, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned long const, int> >*) */

void __cdecl
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,int>,std::_Select1st<std::pair<unsigned_long_const,int>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


