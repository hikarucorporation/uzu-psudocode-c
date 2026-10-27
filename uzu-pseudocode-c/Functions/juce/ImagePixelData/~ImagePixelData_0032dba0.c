// Function : ~ImagePixelData
// Namespace: juce:ImagePixelData
// Entry    : 0032dba0
// Prototype: undefined ~ImagePixelData(ImagePixelData * this)
// Body     : 0032dba0 - 0032ddcb


/* juce::ImagePixelData::~ImagePixelData() */

void __thiscall juce::ImagePixelData::~ImagePixelData(ImagePixelData *this)

{
  ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>
  *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_01;
  vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_02;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
  *(undefined ***)this = &PTR__ImagePixelData_007117b0;
  this_00 = (ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>
             *)(this + 0x28);
  if (*(int *)(this + 0x48) == 2) {
    plVar2 = *(long **)(this + 0x28);
    this_01 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
    if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
      }
    }
    local_48 = 0;
    local_44 = *(int *)((long)plVar2 + 0xc);
    this_02 = *(vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x38);
    puVar3 = *(undefined8 **)(this_02 + 8);
    if (puVar3 == *(undefined8 **)(this_02 + 0x10)) {
                    /* try { // try from 0032dc20 to 0032dc29 has its CatchHandler @ 0032ddcc */
      local_40 = (undefined1 *)&local_48;
      std::
      vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_02,puVar3,&local_40);
    }
    else {
      *puVar3 = &local_48;
      *(long *)(this_02 + 8) = *(long *)(this_02 + 8) + 8;
    }
    local_40 = *(undefined1 **)(this + 0x38);
    local_38 = *(long *)(this + 0x40);
    if (local_38 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      }
    }
    local_30 = (undefined1 *)&local_48;
    iVar6 = local_44;
    for (; local_48 < iVar6; local_48 = local_48 + 1) {
      plVar4 = *(long **)(*plVar2 + (long)local_48 * 8);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 0032dc8d to 0032dc92 has its CatchHandler @ 0032ddd1 */
        (**(code **)(*plVar4 + 0x18))(plVar4,this);
        iVar6 = local_44;
      }
    }
    ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::$_11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::$_11&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::__11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::__11&&)::_lambda()_1_>
                   *)&local_40);
    if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_01 + 8) == 0x100000001) {
        *(undefined8 *)(this_01 + 8) = 0;
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        (**(code **)(*(long *)this_01 + 0x18))(this_01);
        ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>
        ::~ListenerList(this_00);
        iVar6 = *(int *)(this + 0x24);
        goto joined_r0x0032dd9c;
      }
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_01 + 8;
        iVar6 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar6 = (int)*(long *)(this_01 + 8);
        *(int *)(this_01 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_01);
        ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>
        ::~ListenerList(this_00);
        iVar6 = *(int *)(this + 0x24);
        goto joined_r0x0032dd9c;
      }
    }
  }
  ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList(this_00);
  iVar6 = *(int *)(this + 0x24);
joined_r0x0032dd9c:
  if (0 < iVar6) {
    lVar8 = 0x10;
    lVar9 = 0;
    do {
      lVar5 = *(long *)(this + 0x18);
                    /* try { // try from 0032dd4e to 0032dd50 has its CatchHandler @ 0032de65 */
      (**(code **)(*(long *)(lVar5 + -8 + lVar8) + 0x58))(lVar5 + lVar8);
      piVar7 = (int *)(*(long *)(lVar5 + -0x10 + lVar8) + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar7);
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar9 < *(int *)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


