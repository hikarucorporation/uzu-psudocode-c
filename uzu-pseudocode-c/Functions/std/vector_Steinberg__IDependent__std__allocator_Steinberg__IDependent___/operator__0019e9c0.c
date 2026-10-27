// Function : operator=
// Namespace: std:vector_Steinberg__IDependent__std__allocator_Steinberg__IDependent___
// Entry    : 0019e9c0
// Prototype: vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> * operator=(vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> * this, vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> * param_1)
// Body     : 0019e9c0 - 0019eae7


/* std::vector<Steinberg::IDependent*, std::allocator<Steinberg::IDependent*>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<Steinberg::IDependent*,
   std::allocator<Steinberg::IDependent*> > const&) */

vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> * __thiscall
std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>::operator=
          (vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> *this,
          vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> *param_1)

{
  void *__dest;
  size_t __n;
  size_t __n_00;
  ulong uVar1;
  void *__src;
  void *__dest_00;
  
  if (param_1 == this) {
    return this;
  }
  __src = *(void **)param_1;
  __n_00 = *(long *)(param_1 + 8) - (long)__src;
  uVar1 = (long)__n_00 >> 3;
  __dest_00 = *(void **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__dest_00 >> 3) < uVar1) {
    if (0x7ffffffffffffff8 < __n_00) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    __dest = operator_new(__n_00);
    if (__n_00 != 0) {
      memcpy(__dest,__src,__n_00);
    }
    if (__dest_00 != (void *)0x0) {
      operator_delete(__dest_00);
    }
    *(void **)this = __dest;
    *(void **)(this + 0x10) = (void *)(uVar1 * 8 + (long)__dest);
  }
  else {
    __n = (long)*(void **)(this + 8) - (long)__dest_00;
    if ((ulong)((long)__n >> 3) < uVar1) {
      if (__n == 0) {
        __n_00 = *(long *)(param_1 + 8) - (long)__src;
        __dest_00 = *(void **)(this + 8);
      }
      else {
        memmove(__dest_00,__src,__n);
        __dest_00 = *(void **)(this + 8);
        __src = (void *)(*(long *)param_1 + ((long)__dest_00 - *(long *)this >> 3) * 8);
        __n_00 = *(long *)(param_1 + 8) - (long)__src;
      }
      if (__n_00 == 0) goto LAB_0019eac4;
    }
    else if (__n_00 == 0) goto LAB_0019eac4;
    memmove(__dest_00,__src,__n_00);
  }
LAB_0019eac4:
  *(ulong *)(this + 8) = uVar1 * 8 + *(long *)this;
  return this;
}


