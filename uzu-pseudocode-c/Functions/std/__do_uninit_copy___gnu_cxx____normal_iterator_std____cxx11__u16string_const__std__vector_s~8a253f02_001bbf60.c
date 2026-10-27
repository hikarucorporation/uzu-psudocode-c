// Function : __do_uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::u16string_const*,std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>>,std::__cxx11::u16string*>
// Namespace: std
// Entry    : 001bbf60
// Prototype: long * __do_uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::u16string_const*,std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>>,std::__cxx11::u16string*>(long param_1, long param_2, long * param_3)
// Body     : 001bbf60 - 001bc040


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__cxx11::u16string*
   std::__do_uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::u16string const*,
   std::vector<std::__cxx11::u16string, std::allocator<std::__cxx11::u16string > > >,
   std::__cxx11::u16string*>(__gnu_cxx::__normal_iterator<std::__cxx11::u16string const*,
   std::vector<std::__cxx11::u16string, std::allocator<std::__cxx11::u16string > > >,
   __gnu_cxx::__normal_iterator<std::__cxx11::u16string const*, std::vector<std::__cxx11::u16string,
   std::allocator<std::__cxx11::u16string > > >, std::__cxx11::u16string*) */

long * __cdecl
std::
__do_uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::u16string_const*,std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>>,std::__cxx11::u16string*>
          (long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined2 *__src;
  long lVar2;
  size_t __n;
  long *__dest;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      __dest = param_3 + 2;
      *param_3 = (long)__dest;
      __src = *(undefined2 **)(param_1 + lVar3);
      lVar2 = *(long *)(param_1 + 8 + lVar3);
      __n = lVar2 * 2;
      if (0xe < __n) {
        if (0x3ffffffffffffffe < __n) {
                    /* try { // try from 001bc035 to 001bc040 has its CatchHandler @ 001bc043 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::_M_create");
        }
                    /* try { // try from 001bbfee to 001bbff2 has its CatchHandler @ 001bc041 */
        __dest = operator_new(__n + 2);
        *param_3 = (long)__dest;
        param_3[2] = lVar2;
      }
      lVar1 = param_1 + lVar3;
      if (lVar2 != 0) {
        if (lVar2 == 1) {
          *(undefined2 *)__dest = *__src;
        }
        else {
          memcpy(__dest,__src,__n);
        }
      }
      param_3[1] = lVar2;
      *(undefined2 *)((long)__dest + lVar2 * 2) = 0;
      param_3 = param_3 + 4;
      lVar3 = lVar3 + 0x20;
    } while (lVar1 + 0x20 != param_2);
  }
  return param_3;
}


