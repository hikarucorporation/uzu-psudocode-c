// Function : ~vector
// Namespace: std:vector_float_std__allocator_float__
// Entry    : 00171e20
// Prototype: undefined ~vector(vector<float,std::allocator<float>> * this)
// Body     : 00171e20 - 00171e2d


/* std::vector<float, std::allocator<float> >::~vector() */

void __thiscall
std::vector<float,std::allocator<float>>::~vector(vector<float,std::allocator<float>> *this)

{
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


