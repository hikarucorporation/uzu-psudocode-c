// Function : vsnwprintf
// Namespace: 
// Entry    : 00182190
// Prototype: undefined vsnwprintf(undefined2 * param_1, long param_2, __gnuc_va_list param_3)
// Body     : 00182190 - 00182340


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* vsnwprintf(char16_t*, unsigned long, char16_t const*, __va_list_tag*) */

void __cdecl vsnwprintf(undefined2 *param_1,long param_2,__gnuc_va_list param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *local_1058 [2];
  char local_1048 [16];
  undefined2 *local_1038;
  ulong local_1030;
  undefined2 local_1028 [8];
  char local_1018 [4096];
  
  if ((converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') &&
     (iVar2 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_), iVar2 != 0)) {
                    /* try { // try from 001822bf to 001822ca has its CatchHandler @ 00182352 */
    std::__cxx11::
    wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
    ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                       *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
    __cxa_atexit(std::__cxx11::
                 wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                 ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,&__dso_handle);
    __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
  }
  lVar4 = param_2 + -2;
  do {
    psVar1 = (short *)(lVar4 + 2);
    lVar4 = lVar4 + 2;
  } while (*psVar1 != 0);
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::to_bytes((ulong *)local_1058,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,param_2
             ,lVar4);
  iVar2 = vsnprintf(local_1018,0x1000,local_1058[0],param_3);
  if ((converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') &&
     (iVar3 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_), iVar3 != 0)) {
                    /* try { // try from 0018230a to 00182315 has its CatchHandler @ 00182341 */
    std::__cxx11::
    wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
    ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                       *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
    __cxa_atexit(std::__cxx11::
                 wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                 ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,&__dso_handle);
    __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
  }
                    /* try { // try from 0018220e to 00182223 has its CatchHandler @ 00182363 */
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::from_bytes(&local_1038,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,
               (long)local_1018,(long)(local_1018 + iVar2));
  uVar5 = 0xffe;
  if (local_1030 < 0xffe) {
    uVar5 = local_1030;
  }
  if (uVar5 != 0) {
    if (uVar5 != 1) {
      memcpy(param_1,local_1038,uVar5 * 2);
      param_1[uVar5] = 0;
      goto joined_r0x0018225f;
    }
    *param_1 = *local_1038;
  }
  param_1[uVar5] = 0;
joined_r0x0018225f:
  if (local_1038 != local_1028) {
    operator_delete(local_1038);
  }
  if (local_1058[0] != local_1048) {
    operator_delete(local_1058[0]);
  }
  return;
}


