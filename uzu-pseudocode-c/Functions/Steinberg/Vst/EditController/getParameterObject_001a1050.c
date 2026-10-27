// Function : getParameterObject
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a1050
// Prototype: undefined8 getParameterObject(EditController * this, uint param_1)
// Body     : 001a1050 - 001a10ca


/* Steinberg::Vst::EditController::getParameterObject(unsigned int) */

undefined8 __thiscall
Steinberg::Vst::EditController::getParameterObject(EditController *this,uint param_1)

{
  long *plVar1;
  EditController *pEVar2;
  EditController *pEVar3;
  EditController *pEVar4;
  EditController *pEVar5;
  
  plVar1 = *(long **)(this + 0x50);
  if ((plVar1 != (long *)0x0) &&
     (pEVar4 = *(EditController **)(this + 0x68), pEVar4 != (EditController *)0x0)) {
    pEVar5 = this + 0x60;
    pEVar3 = pEVar5;
    do {
      pEVar2 = pEVar4 + 0x18;
      if (param_1 <= *(uint *)(pEVar4 + 0x20)) {
        pEVar2 = pEVar4 + 0x10;
        pEVar3 = pEVar4;
      }
      pEVar4 = *(EditController **)pEVar2;
    } while (pEVar4 != (EditController *)0x0);
    if (pEVar3 != pEVar5) {
      if (param_1 < *(uint *)(pEVar3 + 0x20)) {
        pEVar3 = pEVar5;
      }
      if (pEVar3 != pEVar5) {
        if ((ulong)(plVar1[1] - *plVar1 >> 3) <= *(ulong *)(pEVar3 + 0x28)) {
                    /* WARNING: Subroutine does not return */
          std::__throw_out_of_range_fmt
                    ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
        }
        return *(undefined8 *)(*plVar1 + *(ulong *)(pEVar3 + 0x28) * 8);
      }
    }
  }
  return 0;
}


