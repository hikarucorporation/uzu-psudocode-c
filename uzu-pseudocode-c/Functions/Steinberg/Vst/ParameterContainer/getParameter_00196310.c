// Function : getParameter
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00196310
// Prototype: undefined8 getParameter(ParameterContainer * this, uint param_1)
// Body     : 00196310 - 0019638a


/* Steinberg::Vst::ParameterContainer::getParameter(unsigned int) const */

undefined8 __thiscall
Steinberg::Vst::ParameterContainer::getParameter(ParameterContainer *this,uint param_1)

{
  long *plVar1;
  ParameterContainer *pPVar2;
  ParameterContainer *pPVar3;
  ParameterContainer *pPVar4;
  ParameterContainer *pPVar5;
  
  plVar1 = *(long **)this;
  if ((plVar1 != (long *)0x0) &&
     (pPVar4 = *(ParameterContainer **)(this + 0x18), pPVar4 != (ParameterContainer *)0x0)) {
    pPVar5 = this + 0x10;
    pPVar3 = pPVar5;
    do {
      pPVar2 = pPVar4 + 0x18;
      if (param_1 <= *(uint *)(pPVar4 + 0x20)) {
        pPVar2 = pPVar4 + 0x10;
        pPVar3 = pPVar4;
      }
      pPVar4 = *(ParameterContainer **)pPVar2;
    } while (pPVar4 != (ParameterContainer *)0x0);
    if (pPVar3 != pPVar5) {
      if (param_1 < *(uint *)(pPVar3 + 0x20)) {
        pPVar3 = pPVar5;
      }
      if (pPVar3 != pPVar5) {
        if ((ulong)(plVar1[1] - *plVar1 >> 3) <= *(ulong *)(pPVar3 + 0x28)) {
                    /* WARNING: Subroutine does not return */
          std::__throw_out_of_range_fmt
                    ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
        }
        return *(undefined8 *)(*plVar1 + *(ulong *)(pPVar3 + 0x28) * 8);
      }
    }
  }
  return 0;
}


