// Function : _M_default_append
// Namespace: std:vector_float_std__allocator_float__
// Entry    : 001747a0
// Prototype: undefined _M_default_append(vector<float,std::allocator<float>> * this, ulong param_1)
// Body     : 001747a0 - 001748f3


/* std::vector<float, std::allocator<float> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<float,std::allocator<float>>::_M_default_append
          (vector<float,std::allocator<float>> *this,ulong param_1)

{
  undefined4 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  undefined4 *__s;
  ulong __n;
  ulong uVar4;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(this + 8);
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar1 >> 2) < param_1) {
      __src = *(void **)this;
      __n = (long)puVar1 - (long)__src;
      uVar4 = __n >> 2;
      if ((uVar4 ^ 0x1fffffffffffffff) < param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_default_append");
      }
      uVar2 = uVar4;
      if (uVar4 < param_1) {
        uVar2 = param_1;
      }
      uVar3 = uVar2 + uVar4;
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (CARRY8(uVar2,uVar4)) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = operator_new(uVar3 * 4);
      }
      *(undefined4 *)((long)__dest + uVar4 * 4) = 0;
      if (param_1 != 1) {
        memset((void *)((long)__dest + uVar4 * 4 + 4),0,param_1 * 4 - 4);
      }
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      *(void **)this = __dest;
      *(ulong *)(this + 8) = (long)__dest + param_1 * 4 + uVar4 * 4;
      *(void **)(this + 0x10) = (void *)(uVar3 * 4 + (long)__dest);
    }
    else {
      *puVar1 = 0;
      __s = puVar1 + 1;
      if (param_1 != 1) {
        memset(__s,0,param_1 * 4 - 4);
        __s = puVar1 + param_1;
      }
      *(undefined4 **)(this + 8) = __s;
    }
  }
  return;
}


