// Function : ~ProgramListWithPitchNames
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 001a1cd0
// Prototype: undefined ~ProgramListWithPitchNames(ProgramListWithPitchNames * this)
// Body     : 001a1cd0 - 001a1dcd


/* Steinberg::Vst::ProgramListWithPitchNames::~ProgramListWithPitchNames() */

void __thiscall
Steinberg::Vst::ProgramListWithPitchNames::~ProgramListWithPitchNames
          (ProgramListWithPitchNames *this)

{
  _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var2;
  undefined8 *puVar3;
  _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
  *this_00;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *this_01;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR_queryInterface_00703ec0;
  this_00 = *(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
              **)(this + 0x150);
  p_Var1 = *(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
             **)(this + 0x158);
  if (this_00 != p_Var1) {
    do {
                    /* try { // try from 001a1d04 to 001a1d0b has its CatchHandler @ 001a1dd6 */
      std::
      _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
      ::_M_erase(this_00,*(void **)(this_00 + 0x10));
      this_00 = this_00 + 0x30;
    } while (this_00 != p_Var1);
    this_00 = *(_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
                **)(this + 0x150);
  }
  if (this_00 !=
      (_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
       *)0x0) {
    operator_delete(this_00);
  }
  *(undefined ***)this = &PTR_queryInterface_00703df0;
  this_01 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              **)(this + 0x130);
  p_Var2 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
             **)(this + 0x138);
  if (this_01 != p_Var2) {
    do {
                    /* try { // try from 001a1d54 to 001a1d5b has its CatchHandler @ 001a1dce */
      std::
      _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
      ::_M_erase(this_01,*(void **)(this_01 + 0x10));
      this_01 = this_01 + 0x30;
    } while (this_01 != p_Var2);
    this_01 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                **)(this + 0x130);
  }
  if (this_01 !=
      (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
       *)0x0) {
    operator_delete(this_01);
  }
  puVar4 = *(undefined8 **)(this + 0x118);
  puVar3 = *(undefined8 **)(this + 0x120);
  if (puVar4 != puVar3) {
    do {
      if ((undefined8 *)*puVar4 != puVar4 + 2) {
        operator_delete((undefined8 *)*puVar4);
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar3);
    puVar4 = *(undefined8 **)(this + 0x118);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar4);
  return;
}


