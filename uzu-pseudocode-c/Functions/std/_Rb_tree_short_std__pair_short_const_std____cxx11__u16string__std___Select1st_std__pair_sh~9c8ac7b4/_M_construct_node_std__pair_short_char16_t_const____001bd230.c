// Function : _M_construct_node<std::pair<short,char16_t_const*>>
// Namespace: std:_Rb_tree_short_std__pair_short_const_std____cxx11__u16string__std___Select1st_std__pair_sh~9c8ac7b4
// Entry    : 001bd230
// Prototype: void _M_construct_node<std::pair<short,char16_t_const*>>(undefined8 param_1_00, long param_2, undefined2 * param_3)
// Body     : 001bd230 - 001bd2ee


/* void std::_Rb_tree<short, std::pair<short const, std::__cxx11::u16string >,
   std::_Select1st<std::pair<short const, std::__cxx11::u16string > >, std::less<short>,
   std::allocator<std::pair<short const, std::__cxx11::u16string > >
   >::_M_construct_node<std::pair<short, char16_t const*> >(std::_Rb_tree_node<std::pair<short
   const, std::__cxx11::u16string > >*, std::pair<short, char16_t const*>&&) */

void __thiscall
std::
_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
::_M_construct_node<std::pair<short,char16_t_const*>>
          (undefined8 param_1_00,long param_2,undefined2 *param_3)

{
  undefined2 *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  undefined2 *__dest;
  
  *(undefined2 *)(param_2 + 0x20) = *param_3;
  __src = *(undefined2 **)(param_3 + 4);
  __dest = (undefined2 *)(param_2 + 0x38);
  *(undefined2 **)(param_2 + 0x28) = __dest;
  if (__src == (undefined2 *)0x0) {
                    /* try { // try from 001bd2d7 to 001bd2ee has its CatchHandler @ 001bd2ef */
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001bd2e3:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (__src[lVar2] != 0);
  __n = lVar2 * 2;
  if (0xe < __n) {
    if (0x3ffffffffffffffe < __n) goto LAB_001bd2e3;
                    /* try { // try from 001bd28e to 001bd292 has its CatchHandler @ 001bd2ef */
    __dest = operator_new(__n + 2);
    *(undefined2 **)(param_2 + 0x28) = __dest;
    *(long *)(param_2 + 0x38) = lVar2;
  }
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      *__dest = *__src;
    }
    else {
      memcpy(__dest,__src,__n);
    }
  }
  *(long *)(param_2 + 0x30) = lVar2;
  __dest[lVar2] = 0;
  return;
}


