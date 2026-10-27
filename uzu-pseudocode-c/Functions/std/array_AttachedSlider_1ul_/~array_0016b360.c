// Function : ~array
// Namespace: std:array_AttachedSlider_1ul_
// Entry    : 0016b360
// Prototype: undefined ~array(array<AttachedSlider,1ul> * this)
// Body     : 0016b360 - 0016b364


/* std::array<AttachedSlider, 1ul>::~array() */

void __thiscall std::array<AttachedSlider,1ul>::~array(array<AttachedSlider,1ul> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  juce::Component::setLookAndFeel((Component *)this,0);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x228);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
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
      }
    }
  }
  juce::SliderParameterAttachment::~SliderParameterAttachment
            ((SliderParameterAttachment *)(this + 0x1b8));
  juce::CustomSlider::~CustomSlider((CustomSlider *)this);
  return;
}


