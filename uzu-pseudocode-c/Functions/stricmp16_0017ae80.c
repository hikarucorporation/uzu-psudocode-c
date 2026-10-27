// Function : stricmp16
// Namespace: 
// Entry    : 0017ae80
// Prototype: int stricmp16(long param_1, long param_2)
// Body     : 0017ae80 - 0017afcf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* stricmp16(char16_t const*, char16_t const*) */

int __cdecl stricmp16(long param_1,long param_2)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *local_58 [2];
  char local_48 [16];
  char *local_38 [2];
  char local_28 [16];
  
  if (converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') {
    iVar2 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
    if (iVar2 != 0) {
                    /* try { // try from 0017af4e to 0017af59 has its CatchHandler @ 0017afe1 */
      std::__cxx11::
      wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
      ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                         *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
      __cxa_atexit(std::__cxx11::
                   wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                   ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,&__dso_handle);
      __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
    }
  }
  lVar3 = param_1 + -2;
  do {
    psVar1 = (short *)(lVar3 + 2);
    lVar3 = lVar3 + 2;
  } while (*psVar1 != 0);
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::to_bytes((ulong *)local_58,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,param_1,
             lVar3);
  if (converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') {
    iVar2 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
    if (iVar2 != 0) {
                    /* try { // try from 0017af99 to 0017afa4 has its CatchHandler @ 0017afd0 */
      std::__cxx11::
      wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
      ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                         *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
      __cxa_atexit(std::__cxx11::
                   wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                   ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,&__dso_handle);
      __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
    }
  }
  lVar3 = param_2 + -2;
  do {
    psVar1 = (short *)(lVar3 + 2);
    lVar3 = lVar3 + 2;
  } while (*psVar1 != 0);
                    /* try { // try from 0017aedb to 0017aeee has its CatchHandler @ 0017aff2 */
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::to_bytes((ulong *)local_38,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,param_2,
             lVar3);
  pcVar4 = local_58[0];
  iVar2 = strcasecmp(local_58[0],local_38[0]);
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
    pcVar4 = local_58[0];
  }
  if (pcVar4 != local_48) {
    operator_delete(pcVar4);
  }
  return iVar2;
}


