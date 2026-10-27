// Function : ~OwnedGlyphsSpan
// Namespace: juce:detail:OwnedGlyphsSpan
// Entry    : 003245c0
// Prototype: undefined ~OwnedGlyphsSpan(OwnedGlyphsSpan * this)
// Body     : 003245c0 - 00324641


/* juce::detail::OwnedGlyphsSpan::~OwnedGlyphsSpan() */

void __thiscall juce::detail::OwnedGlyphsSpan::~OwnedGlyphsSpan(OwnedGlyphsSpan *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  plVar4 = *(long **)(this + 0x18);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x0032460e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = this_00 + 8;
      iVar3 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar3 + -1;
    }
    if (iVar3 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}


