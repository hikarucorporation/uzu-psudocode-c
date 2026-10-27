// Function : ~_Optional_base
// Namespace: std:_Optional_base_juce__detail__ShapedText_false_false_
// Entry    : 00247100
// Prototype: undefined ~_Optional_base(_Optional_base<juce::detail::ShapedText,false,false> * this)
// Body     : 00247100 - 00247172


/* std::_Optional_base<juce::detail::ShapedText, false, false>::~_Optional_base() */

void __thiscall
std::_Optional_base<juce::detail::ShapedText,false,false>::~_Optional_base
          (_Optional_base<juce::detail::ShapedText,false,false> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  if (this[0x10] != (_Optional_base<juce::detail::ShapedText,false,false>)0x0) {
    this[0x10] = (_Optional_base<juce::detail::ShapedText,false,false>)0x0;
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x0024713f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
        return;
      }
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        return;
      }
    }
  }
  return;
}


