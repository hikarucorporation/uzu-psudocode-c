// Function : getParameterInfo
// Namespace: Steinberg:Vst:EditController
// Entry    : 001924a0
// Prototype: undefined8 getParameterInfo(EditController * this, uint param_1, void * param_2)
// Body     : 001924a0 - 00192502


/* Steinberg::Vst::EditController::getParameterInfo(int, Steinberg::Vst::ParameterInfo&) */

undefined8 __thiscall
Steinberg::Vst::EditController::getParameterInfo(EditController *this,uint param_1,void *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  void *__src;
  ulong uVar3;
  
  uVar2 = 1;
  if ((-1 < (int)param_1) && (plVar1 = *(long **)(this + 0x50), plVar1 != (long *)0x0)) {
    uVar3 = plVar1[1] - *plVar1 >> 3;
    if ((int)param_1 < (int)uVar3) {
      if (uVar3 <= param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      }
      plVar1 = *(long **)(*plVar1 + (ulong)param_1 * 8);
      if (plVar1 != (long *)0x0) {
        __src = (void *)(**(code **)(*plVar1 + 0x80))();
        memcpy(param_2,__src,0x318);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


