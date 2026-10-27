// Function : _M_mutate
// Namespace: std:__cxx11:u16string
// Entry    : 001a2910
// Prototype: undefined _M_mutate(u16string * this, long param_1, long param_2, undefined2 * param_3, long param_4)
// Body     : 001a2910 - 001a2a7e


/* std::__cxx11::u16string::_M_mutate(unsigned long, unsigned long, char16_t const*, unsigned long)
    */

void __thiscall
std::__cxx11::u16string::_M_mutate
          (u16string *this,long param_1,long param_2,undefined2 *param_3,long param_4)

{
  u16string *__src;
  ulong uVar1;
  undefined2 *__dest;
  long lVar2;
  ulong uVar3;
  
  __src = *(u16string **)this;
  lVar2 = *(long *)(this + 8);
  uVar3 = (param_4 - param_2) + lVar2;
  uVar1 = 7;
  if (__src != this + 0x10) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  if (((uVar1 < uVar3) && (uVar1 = uVar1 * 2, uVar3 < uVar1)) &&
     (uVar3 = 0x1fffffffffffffff, uVar1 < 0x1fffffffffffffff)) {
    uVar3 = uVar1;
  }
  __dest = operator_new(uVar3 * 2 + 2);
  if (param_1 != 0) {
    if (param_1 == 1) {
      *__dest = *(undefined2 *)__src;
    }
    else {
      memcpy(__dest,__src,param_1 * 2);
    }
  }
  lVar2 = lVar2 - (param_2 + param_1);
  if ((param_3 != (undefined2 *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      __dest[param_1] = *param_3;
    }
    else {
      memcpy(__dest + param_1,param_3,param_4 * 2);
    }
  }
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      __dest[param_1 + param_4] = *(undefined2 *)(__src + param_2 * 2 + param_1 * 2);
    }
    else {
      memcpy(__dest + param_1 + param_4,__src + param_2 * 2 + param_1 * 2,lVar2 * 2);
    }
  }
  if (__src != this + 0x10) {
    operator_delete(__src);
  }
  *(undefined2 **)this = __dest;
  *(ulong *)(this + 0x10) = uVar3;
  return;
}


