// Function : convert
// Namespace: Steinberg:StringConvert
// Entry    : 00187120
// Prototype: undefined8 * convert(undefined8 * param_1, long * param_2)
// Body     : 00187120 - 0018721c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::StringConvert::convert(std::__cxx11::string const&) */

undefined8 * __cdecl Steinberg::StringConvert::convert(undefined8 *param_1,long *param_2)

{
  int iVar1;
  
  if ((anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_ == '\0') {
    iVar1 = __cxa_guard_acquire(&(anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_);
    if (iVar1 != 0) {
                    /* try { // try from 00187168 to 00187171 has its CatchHandler @ 0018721d */
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._0_8_ = operator_new(0x20);
      *(undefined4 *)((anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._0_8_ + 8) = 0;
      *(char **)((anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._0_8_ + 0x10) = "ll"
      ;
      *(undefined4 *)((anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._0_8_ + 0x18) =
           0;
      *(undefined **)(anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._0_8_ =
           PTR_vtable_00715e88 + 0x10;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._8_8_ = 0x71b568;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._16_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_[0x18] = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._40_8_ = 0x71b588;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._48_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._56_2_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._72_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._80_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_._88_2_ = 0;
      __cxa_atexit(std::__cxx11::
                   wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                   ::~wstring_convert,(anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_
                   ,&__dso_handle);
      __cxa_guard_release(&(anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_);
    }
  }
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::from_bytes(param_1,(undefined8 *)(anonymous_namespace)::converter[abi:cxx11]()::conv_abi_cxx11_,
               *param_2,param_2[1] + *param_2);
  return param_1;
}


