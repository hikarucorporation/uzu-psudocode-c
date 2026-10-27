// Function : ~RangedDirectoryIterator
// Namespace: juce:RangedDirectoryIterator
// Entry    : 003033d0
// Prototype: undefined ~RangedDirectoryIterator(RangedDirectoryIterator * this)
// Body     : 003033d0 - 0030349b


/* juce::RangedDirectoryIterator::~RangedDirectoryIterator() */

void __thiscall
juce::RangedDirectoryIterator::~RangedDirectoryIterator(RangedDirectoryIterator *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int *piVar4;
  
  piVar4 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
    }
  }
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar4 = (int *)((long)plVar3 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)((long)plVar3 + 0xc);
      *(int *)((long)plVar3 + 0xc) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x00303457. Too many branches */
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
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}


