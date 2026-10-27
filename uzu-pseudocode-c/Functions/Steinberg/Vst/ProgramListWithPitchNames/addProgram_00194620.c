// Function : addProgram
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 00194620
// Prototype: int addProgram(ProgramListWithPitchNames * this, undefined8 param_1)
// Body     : 00194620 - 0019471f


/* Steinberg::Vst::ProgramListWithPitchNames::addProgram(char16_t const*) */

int __thiscall
Steinberg::Vst::ProgramListWithPitchNames::addProgram
          (ProgramListWithPitchNames *this,undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 local_18;
  
  *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
  local_18 = param_1;
  std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>::
  emplace_back<char16_t_const*&>
            ((vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> *)
             (this + 0x118),&local_18);
  puVar1 = *(undefined8 **)(this + 0x138);
  if (puVar1 == *(undefined8 **)(this + 0x140)) {
    std::
    vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>
    ::_M_realloc_insert<>
              ((vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>
                *)(this + 0x130),puVar1);
    plVar2 = *(long **)(this + 0x148);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1 + 1;
    puVar1[4] = puVar1 + 1;
    puVar1[5] = 0;
    *(long *)(this + 0x138) = *(long *)(this + 0x138) + 0x30;
    plVar2 = *(long **)(this + 0x148);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xd0))(plVar2,local_18);
  }
  iVar3 = (int)((ulong)(*(long *)(this + 0x120) - *(long *)(this + 0x118)) >> 5);
  if (0 < iVar3) {
    puVar1 = *(undefined8 **)(this + 0x158);
    if (puVar1 == *(undefined8 **)(this + 0x160)) {
      std::
      vector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>>
      ::_M_realloc_insert<>
                ((vector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>>
                  *)(this + 0x150),puVar1);
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = puVar1 + 1;
      puVar1[4] = puVar1 + 1;
      puVar1[5] = 0;
      *(long *)(this + 0x158) = *(long *)(this + 0x158) + 0x30;
    }
  }
  return iVar3 + -1;
}


