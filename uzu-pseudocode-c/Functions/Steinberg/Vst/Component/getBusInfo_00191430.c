// Function : getBusInfo
// Namespace: Steinberg:Vst:Component
// Entry    : 00191430
// Prototype: byte getBusInfo(Component * this, int param_1, int param_2, uint param_3, int * param_4)
// Body     : 00191430 - 001914ba


/* non-virtual thunk to Steinberg::Vst::Component::getBusInfo(int, int, int,
   Steinberg::Vst::BusInfo&) */

byte __thiscall
Steinberg::Vst::Component::getBusInfo
          (Component *this,int param_1,int param_2,uint param_3,int *param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  bVar2 = 2;
  if (-1 < (int)param_3) {
    if (param_1 == 0) {
      lVar4 = 2;
      lVar6 = 1;
    }
    else {
      if (param_1 != 1) {
        return 2;
      }
      lVar4 = 4;
      lVar6 = 3;
    }
    if (param_2 != 0) {
      lVar6 = lVar4;
    }
    uVar5 = *(long *)(this + lVar6 * 0x30 + 8) - *(long *)(this + lVar6 * 0x30) >> 3;
    if ((int)param_3 < (int)uVar5) {
      uVar3 = (ulong)param_3;
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar3
                   ,uVar5);
      }
      plVar1 = *(long **)(*(long *)(this + lVar6 * 0x30) + uVar3 * 8);
      *param_4 = param_1;
      param_4[1] = param_2;
      bVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_4);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


