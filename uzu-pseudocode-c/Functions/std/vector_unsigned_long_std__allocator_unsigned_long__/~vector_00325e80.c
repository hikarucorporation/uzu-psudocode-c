// Function : ~vector
// Namespace: std:vector_unsigned_long_std__allocator_unsigned_long__
// Entry    : 00325e80
// Prototype: undefined ~vector(vector<unsigned_long,std::allocator<unsigned_long>> * this)
// Body     : 00325e80 - 00325e8d


/* std::vector<unsigned long, std::allocator<unsigned long> >::~vector() */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
          (vector<unsigned_long,std::allocator<unsigned_long>> *this)

{
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


