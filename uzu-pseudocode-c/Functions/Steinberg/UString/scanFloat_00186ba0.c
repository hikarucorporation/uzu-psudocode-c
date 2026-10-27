// Function : scanFloat
// Namespace: Steinberg:UString
// Entry    : 00186ba0
// Prototype: bool scanFloat(UString * this, undefined8 param_1)
// Body     : 00186ba0 - 00186cda


/* Steinberg::UString::scanFloat(double&) const */

bool __thiscall Steinberg::UString::scanFloat(UString *this,undefined8 param_1)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_30 [2];
  undefined1 local_20 [16];
  
  if ((anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_ == '\0') {
    iVar2 = __cxa_guard_acquire(&(anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_)
    ;
    if (iVar2 != 0) {
                    /* try { // try from 00186c26 to 00186c2f has its CatchHandler @ 00186cdb */
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._0_8_ = operator_new(0x20);
      *(undefined4 *)((anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._0_8_ + 8)
           = 0;
      *(char **)((anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._0_8_ + 0x10) =
           "ll";
      *(undefined4 *)
       ((anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._0_8_ + 0x18) = 0;
      *(undefined **)(anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._0_8_ =
           PTR_vtable_00715e88 + 0x10;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._8_8_ = 0x71b500;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._16_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_[0x18] = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._40_8_ = 0x71b520;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._48_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._56_2_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._72_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._80_8_ = 0;
      (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_._88_2_ = 0;
      __cxa_atexit(std::__cxx11::
                   wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                   ::~wstring_convert,
                   (anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_,&__dso_handle)
      ;
      __cxa_guard_release(&(anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_);
    }
  }
  lVar3 = *(long *)this + -2;
  do {
    psVar1 = (short *)(lVar3 + 2);
    lVar3 = lVar3 + 2;
  } while (*psVar1 != 0);
  std::__cxx11::
  wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
  ::to_bytes((ulong *)local_30,
             (undefined8 *)(anonymous_namespace)::converter[abi:cxx11]()::instance_abi_cxx11_,
             *(long *)this,lVar3);
  iVar2 = __isoc99_sscanf(local_30[0],&DAT_005db3a9,param_1);
  if (local_30[0] != local_20) {
    operator_delete(local_30[0]);
  }
  return iVar2 == 1;
}


