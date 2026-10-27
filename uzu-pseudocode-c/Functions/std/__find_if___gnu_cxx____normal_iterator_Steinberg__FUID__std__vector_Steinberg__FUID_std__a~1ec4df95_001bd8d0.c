// Function : __find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>
// Namespace: std
// Entry    : 001bd8d0
// Prototype: long __find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>(long param_1, long param_2, long param_3)
// Body     : 001bd8d0 - 001bd9e5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<Steinberg::FUID*, std::vector<Steinberg::FUID,
   std::allocator<Steinberg::FUID> > > std::__find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,
   std::vector<Steinberg::FUID, std::allocator<Steinberg::FUID> > >,
   __gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID const>
   >(__gnu_cxx::__normal_iterator<Steinberg::FUID*, std::vector<Steinberg::FUID,
   std::allocator<Steinberg::FUID> > >, __gnu_cxx::__normal_iterator<Steinberg::FUID*,
   std::vector<Steinberg::FUID, std::allocator<Steinberg::FUID> > >,
   __gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID const>, std::random_access_iterator_tag) */

long __cdecl
std::
__find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>
          (long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_2 - param_1;
  if (0x48 < (long)uVar1) {
    lVar2 = *(long *)(param_3 + 8);
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = uVar1 / 0x60 + 1;
    lVar6 = param_1 + 0x30;
    do {
      lVar5 = lVar6;
      if ((*(long *)(lVar5 + -0x28) == lVar2) && (*(long *)(lVar5 + -0x20) == lVar3)) {
        return lVar5 + -0x30;
      }
      if ((*(long *)(lVar5 + -0x10) == lVar2) && (*(long *)(lVar5 + -8) == lVar3)) {
        return lVar5 + -0x18;
      }
      if ((*(long *)(lVar5 + 8) == lVar2) && (*(long *)(lVar5 + 0x10) == lVar3)) {
        return lVar5;
      }
      if ((*(long *)(lVar5 + 0x20) == lVar2) && (*(long *)(lVar5 + 0x28) == lVar3)) {
        return lVar5 + 0x18;
      }
      lVar4 = lVar4 + -1;
      uVar1 = uVar1 - 0x60;
      lVar6 = lVar5 + 0x60;
    } while (1 < lVar4);
    param_1 = lVar5 + 0x30;
  }
  lVar2 = ((long)uVar1 >> 3) * -0x5555555555555555;
  if (lVar2 == 3) {
    lVar3 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    if ((*(long *)(param_1 + 8) == lVar3) && (*(long *)(param_1 + 0x10) == lVar2)) {
      return param_1;
    }
    lVar6 = param_1 + 0x18;
    if (*(long *)(param_1 + 0x20) == lVar3) {
LAB_001bd9c8:
      if (*(long *)(lVar6 + 0x10) == lVar2) {
        return lVar6;
      }
    }
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 != 1) {
        return param_2;
      }
      lVar2 = *(long *)(param_3 + 0x10);
      if (*(long *)(param_1 + 8) != *(long *)(param_3 + 8)) {
        return param_2;
      }
      goto LAB_001bd9d8;
    }
    lVar3 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    lVar6 = param_1;
    if (*(long *)(param_1 + 8) == lVar3) goto LAB_001bd9c8;
  }
  param_1 = lVar6 + 0x18;
  if (*(long *)(lVar6 + 0x20) != lVar3) {
    return param_2;
  }
LAB_001bd9d8:
  if (*(long *)(param_1 + 0x10) == lVar2) {
    return param_1;
  }
  return param_2;
}


