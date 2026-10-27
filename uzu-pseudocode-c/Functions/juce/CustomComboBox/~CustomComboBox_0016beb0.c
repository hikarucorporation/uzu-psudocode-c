// Function : ~CustomComboBox
// Namespace: juce:CustomComboBox
// Entry    : 0016beb0
// Prototype: undefined ~CustomComboBox(CustomComboBox * this)
// Body     : 0016beb0 - 0016bf6d


/* juce::CustomComboBox::~CustomComboBox() */

void __thiscall juce::CustomComboBox::~CustomComboBox(CustomComboBox *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  *(undefined ***)this = &PTR__CustomComboBox_00701530;
  *(undefined ***)(this + 0xf0) = &PTR__CustomComboBox_00701700;
  *(undefined ***)(this + 0x100) = &PTR__CustomComboBox_00701730;
  *(undefined ***)(this + 0x108) = &PTR__CustomComboBox_00701758;
                    /* try { // try from 0016beeb to 0016bef1 has its CatchHandler @ 0016bf6e */
  Component::setLookAndFeel((Component *)this,0);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x1e0);
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
  ComboBox::~ComboBox((ComboBox *)this);
  return;
}


