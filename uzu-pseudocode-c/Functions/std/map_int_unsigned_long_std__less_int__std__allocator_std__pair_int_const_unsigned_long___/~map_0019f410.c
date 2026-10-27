// Function : ~map
// Namespace: std:map_int_unsigned_long_std__less_int__std__allocator_std__pair_int_const_unsigned_long___
// Entry    : 0019f410
// Prototype: undefined8 ~map(map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> * this)
// Body     : 0019f410 - 0019f41b


/* std::map<int, unsigned long, std::less<int>, std::allocator<std::pair<int const, unsigned long> >
   >::~map() */

undefined8 __thiscall
std::map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>::~map
          (map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
           *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 0019f415 to 0019f419 has its CatchHandler @ 0019f41c */
  _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
              *)this,*(void **)(this + 0x10));
  return in_RAX;
}


