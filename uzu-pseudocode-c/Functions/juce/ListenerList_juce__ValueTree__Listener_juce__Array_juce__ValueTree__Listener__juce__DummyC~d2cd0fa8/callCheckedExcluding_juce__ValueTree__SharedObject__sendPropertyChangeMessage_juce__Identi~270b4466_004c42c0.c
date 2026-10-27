// Function : callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
// Namespace: juce:ListenerList_juce__ValueTree__Listener_juce__Array_juce__ValueTree__Listener__juce__DummyC~d2cd0fa8
// Entry    : 004c42c0
// Prototype: void callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(long * param_1, long * param_2, undefined8 * param_3)
// Body     : 004c42c0 - 004c44b1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::ListenerList<juce::ValueTree::Listener, juce::Array<juce::ValueTree::Listener*,
   juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier
   const&, juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,
   juce::ListenerList<juce::ValueTree::Listener, juce::Array<juce::ValueTree::Listener*,
   juce::DummyCriticalSection, 0> >::DummyBailOutChecker>(juce::ValueTree::Listener*,
   juce::ListenerList<juce::ValueTree::Listener, juce::Array<juce::ValueTree::Listener*,
   juce::DummyCriticalSection, 0> >::DummyBailOutChecker const&,
   juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier const&,
   juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&) */

void __cdecl
juce::
ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
::
callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
          (long *param_1,long *param_2,undefined8 *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  int iVar5;
  int local_50;
  int local_4c;
  int *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  int *local_38;
  
  if ((int)param_1[4] == 2) {
    plVar2 = (long *)*param_1;
    this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
    }
    local_50 = 0;
    local_4c = *(int *)((long)plVar2 + 0xc);
    this_00 = (vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
               *)param_1[2];
    plVar3 = *(long **)(this_00 + 8);
    if (plVar3 == *(long **)(this_00 + 0x10)) {
                    /* try { // try from 004c433b to 004c4344 has its CatchHandler @ 004c44b2 */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_00,plVar3,&local_48);
    }
    else {
      *plVar3 = (long)&local_50;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    local_48 = (int *)param_1[2];
    p_Var4 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[3];
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
      }
    }
    iVar5 = local_4c;
    local_40 = p_Var4;
    local_38 = &local_50;
    for (; local_50 < iVar5; local_50 = local_50 + 1) {
      plVar3 = *(long **)(*plVar2 + (long)local_50 * 8);
      if (plVar3 != param_2) {
                    /* try { // try from 004c43bd to 004c43bf has its CatchHandler @ 004c44b7 */
        (**(code **)(*plVar3 + 0x10))(plVar3,*param_3,param_3[1]);
        iVar5 = local_4c;
      }
    }
    callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&)
    ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = p_Var4 + 8;
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = (int)*(long *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
    if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this + 8) == 0x100000001) {
        *(undefined8 *)(this + 8) = 0;
        (**(code **)(*(long *)this + 0x10))(this);
        (**(code **)(*(long *)this + 0x18))(this);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var4 = this + 8;
          iVar5 = *(int *)p_Var4;
          *(int *)p_Var4 = *(int *)p_Var4 + -1;
          UNLOCK();
        }
        else {
          iVar5 = (int)*(long *)(this + 8);
          *(int *)(this + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
        }
      }
    }
  }
  return;
}


