// Function : _M_erase
// Namespace: std:_Rb_tree_int_std__pair_int_const_unsigned_long__std___Select1st_std__pair_int_const_unsign~8beebc40
// Entry    : 001a4510
// Prototype: undefined _M_erase(_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> * this, void * param_1)
// Body     : 001a4510 - 001a4545


/* std::_Rb_tree<int, std::pair<int const, unsigned long>, std::_Select1st<std::pair<int const,
   unsigned long> >, std::less<int>, std::allocator<std::pair<int const, unsigned long> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, unsigned long> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
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


