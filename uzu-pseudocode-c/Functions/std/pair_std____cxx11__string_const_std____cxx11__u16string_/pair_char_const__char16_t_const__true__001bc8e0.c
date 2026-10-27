// Function : pair<char_const*,char16_t_const*,true>
// Namespace: std:pair_std____cxx11__string_const_std____cxx11__u16string_
// Entry    : 001bc8e0
// Prototype: undefined pair<char_const*,char16_t_const*,true>(pair<std::__cxx11::string_const,std::__cxx11::u16string> * this, undefined8 * param_1)
// Body     : 001bc8e0 - 001bca1d


/* std::pair<std::__cxx11::string const, std::__cxx11::u16string >::pair<char const*, char16_t
   const*, true>(std::pair<char const*, char16_t const*>&&) */

void __thiscall
std::pair<std::__cxx11::string_const,std::__cxx11::u16string>::
pair<char_const*,char16_t_const*,true>
          (pair<std::__cxx11::string_const,std::__cxx11::u16string> *this,undefined8 *param_1)

{
  pair<std::__cxx11::string_const,std::__cxx11::u16string> *__s;
  undefined2 *__src;
  ulong __n;
  long lVar1;
  size_t in_RAX;
  size_t __n_00;
  pair<std::__cxx11::string_const,std::__cxx11::u16string> *ppVar2;
  long lVar3;
  size_t local_38;
  
  __s = (pair<std::__cxx11::string_const,std::__cxx11::u16string> *)*param_1;
  ppVar2 = this + 0x10;
  *(pair<std::__cxx11::string_const,std::__cxx11::u16string> **)this = ppVar2;
  if (__s == (pair<std::__cxx11::string_const,std::__cxx11::u16string> *)0x0) {
    local_38 = in_RAX;
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  else {
    __n_00 = strlen((char *)__s);
    local_38 = __n_00;
    if (0xf < __n_00) {
      ppVar2 = (pair<std::__cxx11::string_const,std::__cxx11::u16string> *)
               std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
      *(pair<std::__cxx11::string_const,std::__cxx11::u16string> **)this = ppVar2;
      *(size_t *)(this + 0x10) = local_38;
    }
    if (__n_00 != 0) {
      if (__n_00 == 1) {
        *ppVar2 = *__s;
      }
      else {
        memcpy(ppVar2,__s,__n_00);
      }
    }
    *(size_t *)(this + 8) = local_38;
    *(undefined1 *)(*(long *)this + local_38) = 0;
    __src = (undefined2 *)param_1[1];
    ppVar2 = this + 0x30;
    *(pair<std::__cxx11::string_const,std::__cxx11::u16string> **)(this + 0x20) = ppVar2;
    if (__src != (undefined2 *)0x0) {
      lVar1 = 0;
      do {
        lVar3 = lVar1;
        lVar1 = lVar3 + 1;
      } while (__src[lVar3] != 0);
      __n = lVar3 * 2;
      if (__n < 0xf) {
LAB_001bc9be:
        if (lVar3 != 0) {
          if (lVar3 == 1) {
            *(undefined2 *)ppVar2 = *__src;
          }
          else {
            memcpy(ppVar2,__src,__n);
          }
        }
        *(long *)(this + 0x28) = lVar3;
        *(undefined2 *)(ppVar2 + lVar3 * 2) = 0;
        return;
      }
      if (__n < 0x3fffffffffffffff) {
                    /* try { // try from 001bc9ae to 001bc9b2 has its CatchHandler @ 001bca1e */
        ppVar2 = operator_new(__n + 2);
        *(pair<std::__cxx11::string_const,std::__cxx11::u16string> **)(this + 0x20) = ppVar2;
        *(long *)(this + 0x30) = lVar3;
        goto LAB_001bc9be;
      }
      goto LAB_001bca12;
    }
  }
                    /* try { // try from 001bca06 to 001bca1d has its CatchHandler @ 001bca1e */
  std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001bca12:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_create");
}


