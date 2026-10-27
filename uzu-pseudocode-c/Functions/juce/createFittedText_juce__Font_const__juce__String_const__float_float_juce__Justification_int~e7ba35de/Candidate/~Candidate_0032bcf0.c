// Function : ~Candidate
// Namespace: juce:createFittedText_juce__Font_const__juce__String_const__float_float_juce__Justification_int~e7ba35de:Candidate
// Entry    : 0032bcf0
// Prototype: undefined ~Candidate(Candidate * this)
// Body     : 0032bcf0 - 0032bd57


/* ~Candidate() */

void __thiscall
juce::
createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
::Candidate::~Candidate(Candidate *this)

{
  Candidate *pCVar1;
  int iVar2;
  
  if (this != (Candidate *)0x0) {
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x0032bd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      pCVar1 = this + 8;
      iVar2 = *(int *)pCVar1;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(this + 8);
      *(int *)(this + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this);
      return;
    }
  }
  return;
}


