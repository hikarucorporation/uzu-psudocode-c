// Function : setProgramName
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00194330
// Prototype: undefined8 setProgramName(ProgramList * this, uint param_1, u16string * param_2)
// Body     : 00194330 - 001943d2


/* Steinberg::Vst::ProgramList::setProgramName(int, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::ProgramList::setProgramName(ProgramList *this,uint param_1,u16string *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  if (-1 < (int)param_1) {
    lVar2 = *(long *)(this + 0x118);
    uVar4 = *(long *)(this + 0x120) - lVar2 >> 5;
    if ((int)param_1 < (int)uVar4) {
      if (uVar4 <= param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      }
      lVar5 = (ulong)param_1 * 0x20;
      uVar4 = 0xffffffffffffffff;
      do {
        lVar1 = uVar4 * 2;
        uVar4 = uVar4 + 1;
      } while (*(short *)(param_2 + lVar1 + 2) != 0);
      uVar6 = 0;
      std::__cxx11::u16string::_M_replace
                ((u16string *)(lVar2 + lVar5),0,*(ulong *)(lVar2 + 8 + lVar5),param_2,uVar4);
      plVar3 = *(long **)(this + 0x148);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,param_1,param_2);
      }
    }
  }
  return uVar6;
}


