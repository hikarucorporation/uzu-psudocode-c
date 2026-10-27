// Function : ~ListenerList
// Namespace: juce:ListenerList_juce__ShutdownDetector__Listener_juce__Array_juce__ShutdownDetector__Listener~0427d367
// Entry    : 00484b80
// Prototype: undefined ~ListenerList(ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>> * this)
// Body     : 00484b80 - 00484d03


/* juce::ListenerList<juce::ShutdownDetector::Listener,
   juce::Array<juce::ShutdownDetector::Listener*, juce::CriticalSection, 0> >::~ListenerList() */

void __thiscall
juce::
ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
::~ListenerList(ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
                *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  long *plVar5;
  
  if (*(int *)(this + 0x20) == 2) {
    __mutex = *(pthread_mutex_t **)this;
    pthread_mutex_lock(__mutex);
    __mutex_00 = *(pthread_mutex_t **)this;
    pthread_mutex_lock(__mutex_00);
    pthread_mutex_lock(__mutex_00);
    *(undefined4 *)((long)__mutex_00 + 0x34) = 0;
    pthread_mutex_unlock(__mutex_00);
    if (*(int *)((long)__mutex_00 + 0x30) != 0) {
      free((void *)__mutex_00[1].__align);
      __mutex_00[1].__align = 0;
    }
    *(undefined4 *)((long)__mutex_00 + 0x30) = 0;
    pthread_mutex_unlock(__mutex_00);
    plVar3 = (long *)(*(undefined8 **)(this + 0x10))[1];
    for (plVar5 = (long *)**(undefined8 **)(this + 0x10); plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *(undefined4 *)(*plVar5 + 4) = 0;
    }
    pthread_mutex_unlock(__mutex);
  }
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x18);
  if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      goto joined_r0x00484cde;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var4 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(p_Var4 + 8);
      *(int *)(p_Var4 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      goto joined_r0x00484cde;
    }
  }
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
joined_r0x00484cde:
  if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
                    /* WARNING: Could not recover jumptable at 0x00484ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var4 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(p_Var4 + 8);
      *(int *)(p_Var4 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      return;
    }
  }
  return;
}


