// Function : ~ProgramList
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 001a1ab0
// Prototype: undefined ~ProgramList(ProgramList * this)
// Body     : 001a1ab0 - 001a1b5d


/* Steinberg::Vst::ProgramList::~ProgramList() */

void __thiscall Steinberg::Vst::ProgramList::~ProgramList(ProgramList *this)

{
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var1;
  undefined8 *puVar2;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *this_00;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR_queryInterface_00703df0;
  this_00 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              **)(this + 0x130);
  p_Var1 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
             **)(this + 0x138);
  if (this_00 != p_Var1) {
    do {
                    /* try { // try from 001a1ae4 to 001a1aeb has its CatchHandler @ 001a1b5e */
      std::
      _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
      ::_M_erase(this_00,*(void **)(this_00 + 0x10));
      this_00 = this_00 + 0x30;
    } while (this_00 != p_Var1);
    this_00 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                **)(this + 0x130);
  }
  if (this_00 !=
      (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
       *)0x0) {
    operator_delete(this_00);
  }
  puVar3 = *(undefined8 **)(this + 0x118);
  puVar2 = *(undefined8 **)(this + 0x120);
  if (puVar3 != puVar2) {
    do {
      if ((undefined8 *)*puVar3 != puVar3 + 2) {
        operator_delete((undefined8 *)*puVar3);
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x118);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}


