// Function : setProgramInfo
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00193eb0
// Prototype: undefined1[16] setProgramInfo(ProgramList * this, uint param_1, ulong param_2, undefined8 param_3)
// Body     : 00193eb0 - 00193f38


/* Steinberg::Vst::ProgramList::setProgramInfo(int, char const*, char16_t const*) */

undefined1  [16] __thiscall
Steinberg::Vst::ProgramList::setProgramInfo
          (ProgramList *this,uint param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong local_10;
  undefined8 local_8;
  
  if (((int)param_1 < 0) ||
     ((int)((ulong)(*(long *)(this + 0x120) - *(long *)(this + 0x118)) >> 5) <= (int)param_1)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    return auVar3 << 0x40;
  }
  uVar1 = (ulong)param_1;
  uVar2 = (*(long *)(this + 0x138) - *(long *)(this + 0x130) >> 4) * -0x5555555555555555;
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar1,
               uVar2);
  }
  local_10 = param_2;
  local_8 = param_3;
  auVar3 = std::
           _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
           ::_M_emplace_unique<std::pair<char_const*,char16_t_const*>>
                     ((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                       *)(*(long *)(this + 0x130) + uVar1 * 0x30),&local_10);
  auVar4._8_8_ = auVar3._8_8_;
  auVar4._1_7_ = auVar3._1_7_;
  auVar4[0] = 1;
  return auVar4;
}


