// Function : resize
// Namespace: std:vector_signed_char_std__allocator_signed_char__
// Entry    : 0019f1c0
// Prototype: undefined resize(vector<signed_char,std::allocator<signed_char>> * this, ulong param_1)
// Body     : 0019f1c0 - 0019f1e8


/* std::vector<signed char, std::allocator<signed char> >::resize(unsigned long) */

void __thiscall
std::vector<signed_char,std::allocator<signed_char>>::resize
          (vector<signed_char,std::allocator<signed_char>> *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(this + 8) - *(long *)this;
  if (uVar2 < param_1) {
    _M_default_append(this,param_1 - uVar2);
    return;
  }
  if ((param_1 < uVar2) && (lVar1 = *(long *)this + param_1, *(long *)(this + 8) != lVar1)) {
    *(long *)(this + 8) = lVar1;
  }
  return;
}


