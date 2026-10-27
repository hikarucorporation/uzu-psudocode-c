// Function : hasPitchNames
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 001949c0
// Prototype: bool hasPitchNames(ProgramListWithPitchNames * this, uint param_1)
// Body     : 001949c0 - 00194a1e


/* Steinberg::Vst::ProgramListWithPitchNames::hasPitchNames(int) */

bool __thiscall
Steinberg::Vst::ProgramListWithPitchNames::hasPitchNames
          (ProgramListWithPitchNames *this,uint param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(this + 0x110))) {
    if ((ulong)((*(long *)(this + 0x158) - *(long *)(this + 0x150) >> 4) * -0x5555555555555555) <=
        (ulong)param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
    }
    bVar1 = *(long *)(*(long *)(this + 0x150) + 0x28 + (ulong)param_1 * 0x30) == 0;
  }
  return bVar1;
}


