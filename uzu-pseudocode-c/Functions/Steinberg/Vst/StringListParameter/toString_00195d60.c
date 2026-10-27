// Function : toString
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195d60
// Prototype: undefined toString(long * param_1, undefined2 * param_2_00)
// Body     : 00195d60 - 00195ddd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::StringListParameter::toString(double, char16_t*) const */

void __cdecl Steinberg::Vst::StringListParameter::toString(long *param_1,undefined2 *param_2_00)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = (double)(**(code **)(*param_1 + 0xb0))();
  if ((ulong)(param_1[0x68] - param_1[0x67] >> 3) <= (ulong)(long)(int)dVar4) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
  }
  lVar1 = *(long *)(param_1[0x67] + (long)(int)dVar4 * 8);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      param_2_00[uVar2] = *(undefined2 *)(lVar1 + uVar2 * 2);
      if (*(short *)(lVar1 + uVar2 * 2) == 0) break;
      bVar3 = uVar2 < 0x7f;
      uVar2 = uVar2 + 1;
    } while (bVar3);
    param_2_00 = param_2_00 + 0x7f;
  }
  *param_2_00 = 0;
  return;
}


