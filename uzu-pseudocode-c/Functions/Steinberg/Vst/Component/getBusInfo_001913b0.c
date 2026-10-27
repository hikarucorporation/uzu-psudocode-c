// Function : getBusInfo
// Namespace: Steinberg:Vst:Component
// Entry    : 001913b0
// Prototype: byte getBusInfo(Component * this, int param_1, int param_2, uint param_3, int * param_4)
// Body     : 001913b0 - 0019142d


/* Steinberg::Vst::Component::getBusInfo(int, int, int, Steinberg::Vst::BusInfo&) */

byte __thiscall
Steinberg::Vst::Component::getBusInfo
          (Component *this,int param_1,int param_2,uint param_3,int *param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  Component *pCVar4;
  Component *pCVar5;
  ulong uVar6;
  
  bVar2 = 2;
  if (-1 < (int)param_3) {
    if (param_1 == 1) {
      pCVar5 = this + 0xe0;
      pCVar4 = this + 0xb0;
    }
    else {
      if (param_1 != 0) {
        return 2;
      }
      pCVar5 = this + 0x80;
      pCVar4 = this + 0x50;
    }
    if (param_2 != 0) {
      pCVar4 = pCVar5;
    }
    uVar6 = *(long *)(pCVar4 + 0x18) - *(long *)(pCVar4 + 0x10) >> 3;
    if ((int)param_3 < (int)uVar6) {
      uVar3 = (ulong)param_3;
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar3
                   ,uVar6);
      }
      plVar1 = *(long **)(*(long *)(pCVar4 + 0x10) + uVar3 * 8);
      *param_4 = param_1;
      param_4[1] = param_2;
      bVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_4);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


