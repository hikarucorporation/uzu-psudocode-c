// Function : ~map
// Namespace: std:map_unsigned_long_int_std__less_unsigned_long__std__allocator_std__pair_unsigned_long_cons~59ef14fc
// Entry    : 002c2290
// Prototype: undefined ~map(map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>> * this)
// Body     : 002c2290 - 002c2298


/* std::map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<unsigned long
   const, int> > >::~map() */

void __thiscall
std::
map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>::
~map(map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
     *this)

{
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,int>,std::_Select1st<std::pair<unsigned_long_const,int>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::_M_erase(*(void **)(this + 0x10));
  return;
}


