// Function : _M_default_append
// Namespace: std:vector_signed_char_std__allocator_signed_char__
// Entry    : 001baf90
// Prototype: undefined _M_default_append(vector<signed_char,std::allocator<signed_char>> * this, ulong param_1)
// Body     : 001baf90 - 001bb09f


/* std::vector<signed char, std::allocator<signed char> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<signed_char,std::allocator<signed_char>>::_M_default_append
          (vector<signed_char,std::allocator<signed_char>> *this,ulong param_1)

{
  undefined1 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong __n;
  undefined1 *puVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    puVar1 = *(undefined1 **)(this + 8);
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar1) < param_1) {
      __src = *(void **)this;
      __n = (long)puVar1 - (long)__src;
      if ((__n ^ 0x7fffffffffffffff) < param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_default_append");
      }
      uVar2 = __n;
      if (__n < param_1) {
        uVar2 = param_1;
      }
      uVar4 = uVar2 + __n;
      if ((long)uVar4 < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      if (CARRY8(uVar2,__n)) {
        uVar4 = 0x7fffffffffffffff;
      }
      if (uVar4 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = operator_new(uVar4);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
      if (param_1 - 1 != 0) {
        memset((void *)((long)__dest + __n + 1),0,param_1 - 1);
      }
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      *(void **)this = __dest;
      *(ulong *)(this + 8) = (long)__dest + param_1 + __n;
      *(ulong *)(this + 0x10) = uVar4 + (long)__dest;
    }
    else {
      *puVar1 = 0;
      puVar3 = puVar1 + 1;
      if (param_1 - 1 != 0) {
        puVar3 = puVar1 + param_1;
        memset(puVar1 + 1,0,param_1 - 1);
      }
      *(undefined1 **)(this + 8) = puVar3;
    }
  }
  return;
}


