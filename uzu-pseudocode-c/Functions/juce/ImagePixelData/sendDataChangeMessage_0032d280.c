// Function : sendDataChangeMessage
// Namespace: juce:ImagePixelData
// Entry    : 0032d280
// Prototype: undefined sendDataChangeMessage(ImagePixelData * this)
// Body     : 0032d280 - 0032d3e8


/* juce::ImagePixelData::sendDataChangeMessage() */

void __thiscall juce::ImagePixelData::sendDataChangeMessage(ImagePixelData *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar3;
  int iVar4;
  int local_40;
  int local_3c;
  int *local_38;
  long local_30;
  int *local_28;
  
  if (*(int *)(this + 0x48) == 2) {
    plVar2 = *(long **)(this + 0x28);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      }
    }
    local_40 = 0;
    local_3c = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x38);
    plVar3 = *(long **)(this_01 + 8);
    if (plVar3 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 0032d2f2 to 0032d2fb has its CatchHandler @ 0032d3e9 */
      local_38 = &local_40;
      std::
      vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar3,&local_38);
    }
    else {
      *plVar3 = (long)&local_40;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_38 = *(int **)(this + 0x38);
    local_30 = *(long *)(this + 0x40);
    if (local_30 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      }
    }
    iVar4 = local_3c;
    local_28 = &local_40;
    for (; local_40 < iVar4; local_40 = local_40 + 1) {
      plVar3 = *(long **)(*plVar2 + (long)local_40 * 8);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 0032d35d to 0032d362 has its CatchHandler @ 0032d3ee */
        (**(code **)(*plVar3 + 0x10))(plVar3,this);
        iVar4 = local_3c;
      }
    }
    ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::$_12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::$_12&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::__12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::__12&&)::_lambda()_1_>
                   *)&local_38);
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
          iVar4 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar4 = (int)*(long *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar4 + -1;
        }
        if (iVar4 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  return;
}


