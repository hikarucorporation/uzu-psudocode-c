// Function : addProgram
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00193d40
// Prototype: int addProgram(ProgramList * this, undefined8 param_1)
// Body     : 00193d40 - 00193ded


/* Steinberg::Vst::ProgramList::addProgram(char16_t const*) */

int __thiscall Steinberg::Vst::ProgramList::addProgram(ProgramList *this,undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 local_10;
  
  *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
  local_10 = param_1;
  std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>::
  emplace_back<char16_t_const*&>
            ((vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> *)
             (this + 0x118),&local_10);
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
    (**(code **)(*plVar2 + 0xd0))(plVar2,local_10);
  }
  return (int)((ulong)(*(long *)(this + 0x120) - *(long *)(this + 0x118)) >> 5) + -1;
}


