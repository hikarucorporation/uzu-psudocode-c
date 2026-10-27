// Function : emplace_back<char16_t_const*&>
// Namespace: std:vector_std____cxx11__u16string_std__allocator_std____cxx11__u16string__
// Entry    : 0019f5f0
// Prototype: long emplace_back<char16_t_const*&>(vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> * this, undefined8 * param_1)
// Body     : 0019f5f0 - 0019f6d1


/* std::__cxx11::u16string& std::vector<std::__cxx11::u16string,
   std::allocator<std::__cxx11::u16string > >::emplace_back<char16_t const*&>(char16_t const*&) */

long __thiscall
std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>::
emplace_back<char16_t_const*&>
          (vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> *this,
          undefined8 *param_1)

{
  long *plVar1;
  undefined2 *__src;
  ulong __n;
  long lVar2;
  long *__dest;
  long lVar3;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 == *(long **)(this + 0x10)) {
    _M_realloc_insert<char16_t_const*&>(this,plVar1,param_1);
    lVar3 = *(long *)(this + 8);
  }
  else {
    __src = (undefined2 *)*param_1;
    __dest = plVar1 + 2;
    *plVar1 = (long)__dest;
    if (__src == (undefined2 *)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_0019f6c6:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    lVar3 = 0;
    do {
      lVar2 = lVar3;
      lVar3 = lVar2 + 1;
    } while (__src[lVar2] != 0);
    __n = lVar2 * 2;
    if (0xe < __n) {
      if (0x3ffffffffffffffe < __n) goto LAB_0019f6c6;
      __dest = operator_new(__n + 2);
      *plVar1 = (long)__dest;
      plVar1[2] = lVar2;
    }
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        *(undefined2 *)__dest = *__src;
      }
      else {
        memcpy(__dest,__src,__n);
      }
    }
    plVar1[1] = lVar2;
    *(undefined2 *)((long)__dest + lVar2 * 2) = 0;
    lVar3 = *(long *)(this + 8) + 0x20;
    *(long *)(this + 8) = lVar3;
  }
  return lVar3 + -0x20;
}


