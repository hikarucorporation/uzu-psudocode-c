// Function : clearPrograms
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00193df0
// Prototype: undefined clearPrograms(ProgramList * this)
// Body     : 00193df0 - 00193ea7


/* Steinberg::Vst::ProgramList::clearPrograms() */

void __thiscall Steinberg::Vst::ProgramList::clearPrograms(ProgramList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var3;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var4;
  undefined8 *puVar5;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *this_00;
  
  *(undefined4 *)(this + 0x110) = 0;
  puVar1 = *(undefined8 **)(this + 0x118);
  puVar2 = *(undefined8 **)(this + 0x120);
  if (puVar2 != puVar1) {
    puVar5 = puVar1;
    do {
      if ((undefined8 *)*puVar5 != puVar5 + 2) {
        operator_delete((undefined8 *)*puVar5);
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar2);
    *(undefined8 **)(this + 0x120) = puVar1;
  }
  p_Var3 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
             **)(this + 0x130);
  p_Var4 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
             **)(this + 0x138);
  if (p_Var4 != p_Var3) {
    this_00 = p_Var3;
    do {
                    /* try { // try from 00193e64 to 00193e6b has its CatchHandler @ 00193ea8 */
      std::
      _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
      ::_M_erase(this_00,*(void **)(this_00 + 0x10));
      this_00 = this_00 + 0x30;
    } while (this_00 != p_Var4);
    *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
      **)(this + 0x138) = p_Var3;
  }
  if (*(long **)(this + 0x148) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00193e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x148) + 0xe0))();
  return;
}


