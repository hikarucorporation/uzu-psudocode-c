// Function : wideStringToMultiByte
// Namespace: Steinberg:ConstString
// Entry    : 00178020
// Prototype: ulong wideStringToMultiByte(void * param_1, long param_2, uint param_3, int param_4)
// Body     : 00178020 - 0017827b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::wideStringToMultiByte(char*, char16_t const*, int, unsigned int) */

ulong __cdecl
Steinberg::ConstString::wideStringToMultiByte(void *param_1,long param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  undefined1 *local_40;
  long local_38;
  undefined1 local_30 [16];
  
  if ((param_4 == 0) || (param_4 == 0x4e9f)) {
    if (param_1 == (void *)0x0) {
      uVar5 = 0;
      do {
        psVar1 = (short *)(param_2 + uVar5);
        uVar5 = uVar5 + 2;
      } while (*psVar1 != 0);
      uVar5 = uVar5 >> 1;
    }
    else {
      if ((int)param_3 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar4 = *(ushort *)(param_2 + uVar5 * 2);
          if (uVar4 == 0) goto LAB_00178143;
          if (0x7f < uVar4) {
            uVar4 = 0x5f;
          }
          *(char *)((long)param_1 + uVar5) = (char)uVar4;
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
        uVar5 = (ulong)param_3;
      }
LAB_00178143:
      *(undefined1 *)((long)param_1 + (uVar5 & 0xffffffff)) = 0;
    }
  }
  else {
    uVar5 = 0;
    if (param_4 == 0xfde9) {
      if (param_1 == (void *)0x0) {
        if (param_3 == 0) {
          uVar5 = 0;
          do {
            psVar1 = (short *)(param_2 + uVar5);
            uVar5 = uVar5 + 2;
          } while (*psVar1 != 0);
          param_3 = (int)(uVar5 >> 1) - 1;
        }
        if ((converterFacet()::gFacet == '\0') &&
           (iVar2 = __cxa_guard_acquire(&converterFacet()::gFacet), iVar2 != 0)) {
          _DAT_0071b460 = 0;
          _DAT_0071b468 = "ll";
          _DAT_0071b470 = 0;
          converterFacet()::gFacet = PTR_vtable_00715e88 + 0x10;
          __cxa_atexit(PTR____codecvt_utf8_utf16_base_007158f0,&converterFacet()::gFacet,
                       &__dso_handle);
          __cxa_guard_release(&converterFacet()::gFacet);
        }
        iVar2 = (**(code **)(converterFacet()::gFacet + 0x40))(&converterFacet()::gFacet);
        uVar5 = (ulong)(iVar2 * param_3);
      }
      else {
        if ((converter[abi:cxx11]()::gConverter_abi_cxx11_ == '\0') &&
           (iVar2 = __cxa_guard_acquire(&converter[abi:cxx11]()::gConverter_abi_cxx11_), iVar2 != 0)
           ) {
                    /* try { // try from 001781d5 to 001781e0 has its CatchHandler @ 0017827c */
          std::__cxx11::
          wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
          ::wstring_convert((wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                             *)converter[abi:cxx11]()::gConverter_abi_cxx11_);
          __cxa_atexit(std::__cxx11::
                       wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                       ::~wstring_convert,converter[abi:cxx11]()::gConverter_abi_cxx11_,
                       &__dso_handle);
          __cxa_guard_release(&converter[abi:cxx11]()::gConverter_abi_cxx11_);
        }
        lVar3 = param_2 + -2;
        do {
          psVar1 = (short *)(lVar3 + 2);
          lVar3 = lVar3 + 2;
        } while (*psVar1 != 0);
        std::__cxx11::
        wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
        ::to_bytes((ulong *)&local_40,(undefined8 *)converter[abi:cxx11]()::gConverter_abi_cxx11_,
                   param_2,lVar3);
        if (local_38 == 0) {
          uVar5 = 0;
        }
        else {
          if ((int)(uint)local_38 < (int)param_3) {
            param_3 = (uint)local_38;
          }
          memcpy(param_1,local_40,(long)(int)param_3);
          *(undefined1 *)((long)param_1 + (long)(int)param_3) = 0;
          uVar5 = (ulong)param_3;
        }
        if (local_40 != local_30) {
          operator_delete(local_40);
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}


