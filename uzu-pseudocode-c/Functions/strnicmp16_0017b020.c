// Function : strnicmp16
// Namespace: 
// Entry    : 0017b020
// Prototype: int strnicmp16(long param_1, long param_2, int param_3)
// Body     : 0017b020 - 0017b182


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* strnicmp16(char16_t const*, char16_t const*, int) */

int __cdecl strnicmp16(long param_1,long param_2,int param_3)

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
                    /* try { // try from 0017b101 to 0017b10c has its CatchHandler @ 0017b194 */
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
                    /* try { // try from 0017b14c to 0017b157 has its CatchHandler @ 0017b183 */
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
                    /* try { // try from 0017b08b to 0017b09e has its CatchHandler @ 0017b1a5 */
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::to_bytes((ulong *)local_38,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,param_2,
             lVar3);
  pcVar4 = local_58[0];
  iVar2 = strncasecmp(local_58[0],local_38[0],(long)param_3);
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
    pcVar4 = local_58[0];
  }
  if (pcVar4 != local_48) {
    operator_delete(pcVar4);
  }
  return iVar2;
}


