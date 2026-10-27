// Function : ~_Temporary_value
// Namespace: std:vector_juce__detail__GlyphsStorage_std__allocator_juce__detail__GlyphsStorage__:_Temporary_value
// Entry    : 00324860
// Prototype: undefined ~_Temporary_value(_Temporary_value * this)
// Body     : 00324860 - 003248e1


/* std::vector<juce::detail::GlyphsStorage, std::allocator<juce::detail::GlyphsStorage>
   >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::
_Temporary_value::~_Temporary_value(_Temporary_value *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  plVar4 = *(long **)(this + 0x20);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x003248ae. Too many branches */
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
      _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}


