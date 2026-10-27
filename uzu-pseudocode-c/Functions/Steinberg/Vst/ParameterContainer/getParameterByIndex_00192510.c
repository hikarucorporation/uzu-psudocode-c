// Function : getParameterByIndex
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00192510
// Prototype: undefined8 getParameterByIndex(ParameterContainer * this, uint param_1)
// Body     : 00192510 - 0019254f


/* Steinberg::Vst::ParameterContainer::getParameterByIndex(int) const */

undefined8 __thiscall
Steinberg::Vst::ParameterContainer::getParameterByIndex(ParameterContainer *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (plVar1 = *(long **)this, plVar1 != (long *)0x0)) {
    uVar3 = plVar1[1] - *plVar1 >> 3;
    if ((int)uVar3 <= (int)param_1) {
      return 0;
    }
    if (uVar3 <= param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
    }
    uVar2 = *(undefined8 *)(*plVar1 + (ulong)param_1 * 8);
  }
  return uVar2;
}


