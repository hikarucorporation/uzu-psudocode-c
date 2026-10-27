// Function : replaceString
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195c20
// Prototype: bool replaceString(StringListParameter * this, int param_1, short * param_2)
// Body     : 00195c20 - 00195cf3


/* Steinberg::Vst::StringListParameter::replaceString(int, char16_t const*) */

bool __thiscall
Steinberg::Vst::StringListParameter::replaceString
          (StringListParameter *this,int param_1,short *param_2)

{
  short sVar1;
  long lVar2;
  void *__ptr;
  void *__dest;
  short *psVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar6 = (ulong)param_1;
  lVar2 = *(long *)(this + 0x338);
  if ((ulong)(*(long *)(this + 0x340) - lVar2 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar6);
  }
  __ptr = *(void **)(lVar2 + uVar6 * 8);
  if (__ptr == (void *)0x0) {
    bVar7 = false;
  }
  else {
    psVar3 = param_2;
    lVar4 = 0;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 0x100000000;
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    __dest = malloc(lVar4 >> 0x1f);
    if (__dest != (void *)0x0) {
      lVar5 = lVar5 >> 0x20;
      memcpy(__dest,param_2,lVar5 * 2);
      *(undefined2 *)((long)__dest + lVar5 * 2) = 0;
      *(void **)(lVar2 + uVar6 * 8) = __dest;
      free(__ptr);
    }
    bVar7 = __dest != (void *)0x0;
  }
  return bVar7;
}


