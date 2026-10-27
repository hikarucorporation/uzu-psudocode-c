// Function : activateBus
// Namespace: Steinberg:Vst:Component
// Entry    : 001914e0
// Prototype: undefined8 activateBus(Component * this, int param_1, int param_2, uint param_3, undefined1 param_4)
// Body     : 001914e0 - 00191547


/* Steinberg::Vst::Component::activateBus(int, int, int, unsigned char) */

undefined8 __thiscall
Steinberg::Vst::Component::activateBus
          (Component *this,int param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  Component *pCVar3;
  Component *pCVar4;
  
  uVar1 = 2;
  if (-1 < (int)param_3) {
    if (param_1 == 1) {
      pCVar3 = this + 0xe0;
      pCVar4 = this + 0xb0;
    }
    else {
      if (param_1 != 0) {
        return 2;
      }
      pCVar3 = this + 0x80;
      pCVar4 = this + 0x50;
    }
    if (param_2 != 0) {
      pCVar4 = pCVar3;
    }
    uVar2 = *(long *)(pCVar4 + 0x18) - *(long *)(pCVar4 + 0x10) >> 3;
    if ((int)param_3 < (int)uVar2) {
      if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      }
      *(undefined1 *)(*(long *)(*(long *)(pCVar4 + 0x10) + (ulong)param_3 * 8) + 0x38) = param_4;
      uVar1 = 0;
    }
  }
  return uVar1;
}


