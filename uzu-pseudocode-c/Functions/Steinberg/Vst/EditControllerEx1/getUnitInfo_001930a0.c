// Function : getUnitInfo
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001930a0
// Prototype: bool getUnitInfo(EditControllerEx1 * this, uint param_1, void * param_2)
// Body     : 001930a0 - 001930fe


/* Steinberg::Vst::EditControllerEx1::getUnitInfo(int, Steinberg::Vst::UnitInfo&) */

bool __thiscall
Steinberg::Vst::EditControllerEx1::getUnitInfo(EditControllerEx1 *this,uint param_1,void *param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  bVar3 = true;
  if (-1 < (int)param_1) {
    uVar2 = *(long *)(this + 0x98) - *(long *)(this + 0x90) >> 3;
    if ((int)param_1 < (int)uVar2) {
      if (uVar2 <= param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      }
      lVar1 = *(long *)(*(long *)(this + 0x90) + (ulong)param_1 * 8);
      if (lVar1 != 0) {
        memcpy(param_2,(void *)(lVar1 + 0xc),0x10c);
      }
      bVar3 = lVar1 == 0;
    }
  }
  return bVar3;
}


