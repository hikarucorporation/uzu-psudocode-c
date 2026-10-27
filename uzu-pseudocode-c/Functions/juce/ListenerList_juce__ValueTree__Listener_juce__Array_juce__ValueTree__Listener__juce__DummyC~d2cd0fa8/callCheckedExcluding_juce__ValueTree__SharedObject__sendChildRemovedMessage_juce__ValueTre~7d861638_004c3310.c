// Function : callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
// Namespace: juce:ListenerList_juce__ValueTree__Listener_juce__Array_juce__ValueTree__Listener__juce__DummyC~d2cd0fa8
// Entry    : 004c3310
// Prototype: void callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(long * param_1, undefined8 * param_2)
// Body     : 004c3310 - 004c34eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::ListenerList<juce::ValueTree::Listener, juce::Array<juce::ValueTree::Listener*,
   juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,
   int)::{lambda(juce::ValueTree::Listener&)#1}&, juce::ListenerList<juce::ValueTree::Listener,
   juce::Array<juce::ValueTree::Listener*, juce::DummyCriticalSection, 0>
   >::DummyBailOutChecker>(juce::ValueTree::Listener*, juce::ListenerList<juce::ValueTree::Listener,
   juce::Array<juce::ValueTree::Listener*, juce::DummyCriticalSection, 0> >::DummyBailOutChecker
   const&, juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,
   int)::{lambda(juce::ValueTree::Listener&)#1}&) */

void __cdecl
juce::
ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
::
callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
          (long *param_1,undefined8 *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  undefined8 *puVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  long *plVar5;
  int iVar6;
  int local_48;
  int local_44;
  undefined1 *local_40;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_38;
  undefined1 *local_30;
  
  local_40 = (undefined1 *)&local_48;
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
    local_48 = 0;
    local_44 = *(int *)((long)plVar2 + 0xc);
    this_00 = (vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
               *)param_1[2];
    puVar3 = *(undefined8 **)(this_00 + 8);
    if (puVar3 == *(undefined8 **)(this_00 + 0x10)) {
                    /* try { // try from 004c3384 to 004c338d has its CatchHandler @ 004c34ec */
      std::
      vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_00,puVar3,&local_40);
    }
    else {
      *puVar3 = &local_48;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    local_40 = (undefined1 *)param_1[2];
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
    iVar6 = local_44;
    local_38 = p_Var4;
    local_30 = (undefined1 *)&local_48;
    for (; local_48 < iVar6; local_48 = local_48 + 1) {
      plVar5 = *(long **)(*plVar2 + (long)local_48 * 8);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004c33fe to 004c3400 has its CatchHandler @ 004c34f1 */
        (**(code **)(*plVar5 + 0x20))(plVar5,*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
        iVar6 = local_44;
      }
    }
    callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&)
    ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
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
          iVar6 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar6 = (int)*(long *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar6 + -1;
        }
        if (iVar6 == 1) {
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
          iVar6 = *(int *)p_Var4;
          *(int *)p_Var4 = *(int *)p_Var4 + -1;
          UNLOCK();
        }
        else {
          iVar6 = (int)*(long *)(this + 8);
          *(int *)(this + 8) = iVar6 + -1;
        }
        if (iVar6 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
        }
      }
    }
  }
  return;
}


