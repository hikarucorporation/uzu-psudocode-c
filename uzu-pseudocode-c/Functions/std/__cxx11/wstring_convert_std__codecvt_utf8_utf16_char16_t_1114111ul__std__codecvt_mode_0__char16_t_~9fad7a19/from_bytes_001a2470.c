// Function : from_bytes
// Namespace: std:__cxx11:wstring_convert_std__codecvt_utf8_utf16_char16_t_1114111ul__std__codecvt_mode_0__char16_t_~9fad7a19
// Entry    : 001a2470
// Prototype: undefined8 * from_bytes(undefined8 * param_1, undefined8 * param_2, long param_3, long param_4)
// Body     : 001a2470 - 001a25f0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__cxx11::wstring_convert<std::codecvt_utf8_utf16<char16_t, 1114111ul, (std::codecvt_mode)0>,
   char16_t, std::allocator<char16_t>, std::allocator<char> >::from_bytes(char const*, char const*)
    */

undefined8 * __cdecl
std::__cxx11::
wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
::from_bytes(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined2 *__src;
  long lVar1;
  ulong __n;
  undefined8 uVar2;
  undefined8 *__dest;
  undefined2 *local_60;
  long local_58;
  undefined2 local_50;
  undefined6 uStack_4e;
  code *local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0xb) == '\0') {
    param_2[9] = 0;
  }
  local_58 = 0;
  local_50 = 0;
  local_40 = __codecvt_abstract_base<char16_t,char,__mbstate_t>::in;
  uStack_38 = 0;
                    /* try { // try from 001a24cf to 001a2553 has its CatchHandler @ 001a25f1 */
  local_60 = &local_50;
  uVar2 = __do_str_codecvt<std::__cxx11::u16string,char,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char_const*,char_const*,char_const*&,char16_t*,char16_t*,char16_t*&)const>
                    (param_3,param_4,(u16string *)&local_60,(long *)*param_2,param_2 + 9,
                     param_2 + 10,__codecvt_abstract_base<char16_t,char,__mbstate_t>::in,0);
  lVar1 = local_58;
  if ((char)uVar2 == '\0') {
    if (*(char *)((long)param_2 + 0x59) == '\0') {
                    /* try { // try from 001a25d9 to 001a25f0 has its CatchHandler @ 001a25f1 */
      std::__throw_range_error("wstring_convert::from_bytes");
LAB_001a25e5:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = param_1 + 2;
    *param_1 = __dest;
    __src = (undefined2 *)param_2[5];
    lVar1 = param_2[6];
    __n = lVar1 * 2;
    if (0xe < __n) {
      if (0x3ffffffffffffffe < __n) goto LAB_001a25e5;
      __dest = operator_new(__n + 2);
      *param_1 = __dest;
      param_1[2] = lVar1;
    }
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        *(undefined2 *)__dest = *__src;
      }
      else {
        memcpy(__dest,__src,__n);
      }
    }
    param_1[1] = lVar1;
    *(undefined2 *)((long)__dest + lVar1 * 2) = 0;
    if (local_60 != &local_50) {
      operator_delete(local_60);
    }
  }
  else {
    *param_1 = param_1 + 2;
    if (local_60 == &local_50) {
      memcpy(param_1 + 2,&local_50,local_58 * 2 + 2);
    }
    else {
      *param_1 = local_60;
      param_1[2] = CONCAT62(uStack_4e,local_50);
    }
    param_1[1] = lVar1;
  }
  return param_1;
}


