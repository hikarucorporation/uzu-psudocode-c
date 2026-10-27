// Function : activateBus
// Namespace: Steinberg:Vst:Component
// Entry    : 00191550
// Prototype: undefined8 activateBus(Component * this, int param_1, int param_2, uint param_3, undefined1 param_4)
// Body     : 00191550 - 001915c2


/* non-virtual thunk to Steinberg::Vst::Component::activateBus(int, int, int, unsigned char) */

undefined8 __thiscall
Steinberg::Vst::Component::activateBus
          (Component *this,int param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 2;
  if (-1 < (int)param_3) {
    if (param_1 == 0) {
      lVar4 = 2;
      lVar3 = 1;
    }
    else {
      if (param_1 != 1) {
        return 2;
      }
      lVar4 = 4;
      lVar3 = 3;
    }
    if (param_2 != 0) {
      lVar3 = lVar4;
    }
    uVar2 = *(long *)(this + lVar3 * 0x30 + 8) - *(long *)(this + lVar3 * 0x30) >> 3;
    if ((int)param_3 < (int)uVar2) {
      if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      }
      *(undefined1 *)(*(long *)(*(long *)(this + lVar3 * 0x30) + (ulong)param_3 * 8) + 0x38) =
           param_4;
      uVar1 = 0;
    }
  }
  return uVar1;
}


