// Function : to_bytes
// Namespace: std:__cxx11:wstring_convert_std__codecvt_utf8_utf16_char16_t_1114111ul__std__codecvt_mode_0__char16_t_~9fad7a19
// Entry    : 0019ed70
// Prototype: ulong * to_bytes(ulong * param_1, undefined8 * param_2, long param_3, long param_4)
// Body     : 0019ed70 - 0019eee6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__cxx11::wstring_convert<std::codecvt_utf8_utf16<char16_t, 1114111ul, (std::codecvt_mode)0>,
   char16_t, std::allocator<char16_t>, std::allocator<char> >::to_bytes(char16_t const*, char16_t
   const*) */

ulong * __cdecl
std::__cxx11::
wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
::to_bytes(ulong *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined1 *__src;
  code *__n;
  ulong uVar1;
  undefined8 uVar2;
  ulong *__dest;
  code *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  
  if (*(char *)(param_2 + 0xb) == '\0') {
    param_2[9] = 0;
  }
  local_38 = 0;
  local_30 = 0;
  local_50 = __codecvt_abstract_base<char16_t,char,__mbstate_t>::out;
  uStack_48 = 0;
                    /* try { // try from 0019edca to 0019ee40 has its CatchHandler @ 0019eecd */
  local_40 = &local_30;
  uVar2 = __do_str_codecvt<std::__cxx11::string,char16_t,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char16_t_const*,char16_t_const*,char16_t_const*&,char*,char*,char*&)const>
                    (param_3,param_4,(long *)&local_40,(long *)*param_2,param_2 + 9,param_2 + 10,
                     __codecvt_abstract_base<char16_t,char,__mbstate_t>::out,0);
  uVar1 = local_38;
  if ((char)uVar2 == '\0') {
    if (*(char *)((long)param_2 + 0x59) == '\0') {
                    /* try { // try from 0019eec1 to 0019eecc has its CatchHandler @ 0019eecd */
      uVar2 = std::__throw_range_error("wstring_convert::to_bytes");
                    /* catch() { ... } // from try @ 0019edca with catch @ 0019eecd
                       catch() { ... } // from try @ 0019eec1 with catch @ 0019eecd */
      if (local_40 != &local_30) {
        operator_delete(local_40);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    __dest = param_1 + 2;
    *param_1 = (ulong)__dest;
    __src = (undefined1 *)param_2[1];
    __n = (code *)param_2[2];
    local_50 = __n;
    if ((code *)0xf < __n) {
      __dest = (ulong *)std::__cxx11::string::_M_create(param_1,(ulong)&local_50);
      *param_1 = (ulong)__dest;
      param_1[2] = (ulong)local_50;
    }
    if (__n != (code *)0x0) {
      if (__n == (code *)0x1) {
        *(undefined1 *)__dest = *__src;
      }
      else {
        memcpy(__dest,__src,(size_t)__n);
      }
    }
    param_1[1] = (ulong)local_50;
    local_50[*param_1] = (code)0x0;
    if (local_40 != &local_30) {
      operator_delete(local_40);
    }
  }
  else {
    *param_1 = (ulong)(param_1 + 2);
    if (local_40 == &local_30) {
      memcpy(param_1 + 2,&local_30,local_38 + 1);
    }
    else {
      *param_1 = (ulong)local_40;
      param_1[2] = CONCAT71(uStack_2f,local_30);
    }
    param_1[1] = uVar1;
  }
  return param_1;
}


