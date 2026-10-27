// Function : ~CustomSlider
// Namespace: juce:CustomSlider
// Entry    : 0016bb20
// Prototype: undefined ~CustomSlider(CustomSlider * this)
// Body     : 0016bb20 - 0016bbbf


/* juce::CustomSlider::~CustomSlider() */

void __thiscall juce::CustomSlider::~CustomSlider(CustomSlider *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  *(undefined ***)this = &PTR__CustomSlider_00701300;
  *(undefined ***)(this + 0xf0) = &PTR__CustomSlider_007014e8;
                    /* try { // try from 0016bb3f to 0016bb45 has its CatchHandler @ 0016bbc0 */
  Component::setLookAndFeel((Component *)this,0);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x1b0);
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
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  Slider::~Slider((Slider *)this);
  return;
}


