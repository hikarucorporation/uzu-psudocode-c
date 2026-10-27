// Function : multiByteToWideString
// Namespace: Steinberg:ConstString
// Entry    : 00177cb0
// Prototype: int multiByteToWideString(undefined2 * param_1, char * param_2, int param_3, int param_4)
// Body     : 00177cb0 - 00177ead


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::multiByteToWideString(char16_t*, char const*, int, unsigned int) */

int __cdecl
Steinberg::ConstString::multiByteToWideString
          (undefined2 *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *local_40;
  long local_38;
  undefined1 local_30 [16];
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
    if ((param_1 != (undefined2 *)0x0) && (0 < param_3)) {
      *param_1 = 0;
    }
  }
  else if (((param_4 == 0) || (param_4 == 0xfde9)) || (iVar1 = 0, param_4 == 0x4e9f)) {
    if (param_1 == (undefined2 *)0x0) {
      local_40 = (undefined1 *)0x0;
      iVar1 = 0x7ffffffe;
      if (param_3 != 0) {
        iVar1 = param_3;
      }
      if ((converterFacet()::gFacet == '\0') &&
         (iVar2 = __cxa_guard_acquire(&converterFacet()::gFacet), iVar2 != 0)) {
        _DAT_0071b460 = 0;
        _DAT_0071b468 = "ll";
        _DAT_0071b470 = 0;
        converterFacet()::gFacet = PTR_vtable_00715e88 + 0x10;
        __cxa_atexit(PTR____codecvt_utf8_utf16_base_007158f0,&converterFacet()::gFacet,&__dso_handle
                    );
        __cxa_guard_release(&converterFacet()::gFacet);
      }
      sVar3 = strlen(param_2);
      iVar1 = (**(code **)(converterFacet()::gFacet + 0x38))
                        (&converterFacet()::gFacet,&local_40,param_2,param_2 + sVar3,(long)iVar1);
    }
    else {
      if ((converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') &&
         (iVar1 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_), iVar1 != 0))
      {
                    /* try { // try from 00177e07 to 00177e12 has its CatchHandler @ 00177eae */
        std::__cxx11::
        wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
        ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                           *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
        __cxa_atexit(std::__cxx11::
                     wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                     ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,&__dso_handle)
        ;
        __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
      }
      sVar3 = strlen(param_2);
      std::__cxx11::
      wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
      ::from_bytes(&local_40,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,
                   (long)param_2,(long)(param_2 + sVar3));
      if (local_38 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_3;
        if ((int)local_38 < param_3) {
          iVar1 = (int)local_38;
        }
        memcpy(param_1,local_40,(long)iVar1 * 2);
        param_1[iVar1] = 0;
      }
      if (local_40 != local_30) {
        operator_delete(local_40);
      }
    }
  }
  return iVar1;
}


