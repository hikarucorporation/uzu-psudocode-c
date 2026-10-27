// Function : resize
// Namespace: std:vector_float_std__allocator_float__
// Entry    : 00171e60
// Prototype: undefined resize(vector<float,std::allocator<float>> * this, ulong param_1)
// Body     : 00171e60 - 00171e8d


/* std::vector<float, std::allocator<float> >::resize(unsigned long) */

void __thiscall
std::vector<float,std::allocator<float>>::resize
          (vector<float,std::allocator<float>> *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(this + 8) - *(long *)this >> 2;
  if (uVar2 < param_1) {
    _M_default_append(this,param_1 - uVar2);
    return;
  }
  if ((param_1 < uVar2) && (lVar1 = *(long *)this + param_1 * 4, *(long *)(this + 8) != lVar1)) {
    *(long *)(this + 8) = lVar1;
  }
  return;
}


