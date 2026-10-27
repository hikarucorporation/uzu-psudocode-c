// Function : ~AttachedComboBox
// Namespace: AttachedComboBox
// Entry    : 0016ad90
// Prototype: undefined ~AttachedComboBox(AttachedComboBox * this)
// Body     : 0016ad90 - 0016ae23


/* AttachedComboBox::~AttachedComboBox() */

void __thiscall AttachedComboBox::~AttachedComboBox(AttachedComboBox *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
                    /* try { // try from 0016ad97 to 0016ad9d has its CatchHandler @ 0016ae24 */
  juce::Component::setLookAndFeel((Component *)this,0);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x260);
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
  juce::ComboBoxParameterAttachment::~ComboBoxParameterAttachment
            ((ComboBoxParameterAttachment *)(this + 0x1e8));
  juce::CustomComboBox::~CustomComboBox((CustomComboBox *)this);
  return;
}


