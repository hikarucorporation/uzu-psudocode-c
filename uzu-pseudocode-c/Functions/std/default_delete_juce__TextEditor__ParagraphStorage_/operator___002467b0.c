// Function : operator()
// Namespace: std:default_delete_juce__TextEditor__ParagraphStorage_
// Entry    : 002467b0
// Prototype: undefined operator()(default_delete<juce::TextEditor::ParagraphStorage> * this)
// Body     : 002467b0 - 002468a0


/* std::default_delete<juce::TextEditor::ParagraphStorage>::TEMPNAMEPLACEHOLDERVALUE(juce::TextEditor::ParagraphStorage*)
   const */

void __thiscall
std::default_delete<juce::TextEditor::ParagraphStorage>::operator()
          (default_delete<juce::TextEditor::ParagraphStorage> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  default_delete<juce::TextEditor::ParagraphStorage> dVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int *piVar4;
  
  if (this == (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
    return;
  }
  if (this[0x48] != (default_delete<juce::TextEditor::ParagraphStorage>)0x0) {
    this[0x48] = (default_delete<juce::TextEditor::ParagraphStorage>)0x0;
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x40);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
        dVar3 = this[0x10];
        goto joined_r0x0024689d;
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
        dVar3 = this[0x10];
        goto joined_r0x0024689d;
      }
    }
  }
  dVar3 = this[0x10];
joined_r0x0024689d:
  if (dVar3 != (default_delete<juce::TextEditor::ParagraphStorage>)0x0) {
    this[0x10] = (default_delete<juce::TextEditor::ParagraphStorage>)0x0;
    piVar4 = (int *)(*(long *)(this + 8) + -0x10);
    if (piVar4 != &juce::emptyString) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar4);
      }
    }
  }
  piVar4 = (int *)(*(long *)this + -0x10);
  if (piVar4 != &juce::emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
    }
  }
  operator_delete(this);
  return;
}


