// Function : unregisterFdCallback
// Namespace: juce:InternalRunLoop
// Entry    : 00480bc0
// Prototype: undefined unregisterFdCallback(InternalRunLoop * this, int param_1)
// Body     : 00480bc0 - 00480ff2


/* juce::InternalRunLoop::unregisterFdCallback(int) */

void __thiscall juce::InternalRunLoop::unregisterFdCallback(InternalRunLoop *this,int param_1)

{
  _Rb_tree_node_base *p_Var1;
  int *__src;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  pthread_mutex_t *__mutex;
  _Rb_tree_node_base *p_Var7;
  int *piVar8;
  _Rb_tree_node_base *p_Var9;
  void *pvVar10;
  _Rb_tree_node_base *p_Var11;
  _Rb_tree_node_base *p_Var12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  _Rb_tree_node_base *p_Var16;
  int *__dest;
  _Rb_tree_node_base *p_Var17;
  int local_60;
  int local_5c;
  InternalRunLoop *local_58;
  int *local_50;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_48;
  int *local_40;
  pthread_mutex_t *local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  local_58 = this + 0x28;
  p_Var1 = (_Rb_tree_node_base *)(this + 0x30);
  p_Var9 = *(_Rb_tree_node_base **)(this + 0x38);
  p_Var17 = p_Var1;
  if (p_Var9 == (_Rb_tree_node_base *)0x0) {
    p_Var12 = p_Var1;
  }
  else {
    p_Var11 = p_Var9;
    do {
      if (*(int *)(p_Var11 + 0x20) < param_1) {
        p_Var12 = p_Var11 + 0x18;
      }
      else {
        if (*(int *)(p_Var11 + 0x20) <= param_1) {
          p_Var7 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
          p_Var12 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          while (p_Var12 != (_Rb_tree_node_base *)0x0) {
            p_Var16 = p_Var12 + 0x18;
            if (param_1 <= *(int *)(p_Var12 + 0x20)) {
              p_Var16 = p_Var12 + 0x10;
              p_Var11 = p_Var12;
            }
            p_Var12 = *(_Rb_tree_node_base **)p_Var16;
          }
          while( true ) {
            p_Var12 = p_Var11;
            if (p_Var7 == (_Rb_tree_node_base *)0x0) break;
            p_Var12 = p_Var7 + 0x18;
            if (param_1 < *(int *)(p_Var7 + 0x20)) {
              p_Var12 = p_Var7 + 0x10;
              p_Var17 = p_Var7;
            }
            p_Var7 = *(_Rb_tree_node_base **)p_Var12;
          }
          break;
        }
        p_Var12 = p_Var11 + 0x10;
        p_Var17 = p_Var11;
      }
      p_Var11 = *(_Rb_tree_node_base **)p_Var12;
      p_Var12 = p_Var17;
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
  }
  local_38 = (pthread_mutex_t *)this;
  if ((*(_Rb_tree_node_base **)(this + 0x40) == p_Var12) && (p_Var17 == p_Var1)) {
                    /* try { // try from 00480c91 to 00480c95 has its CatchHandler @ 00480ff8 */
    std::
    _Rb_tree<int,std::pair<int_const,std::shared_ptr<std::function<void()>>>,std::_Select1st<std::pair<int_const,std::shared_ptr<std::function<void()>>>>,std::less<int>,std::allocator<std::pair<int_const,std::shared_ptr<std::function<void()>>>>>
    ::_M_erase(p_Var9);
    *(undefined8 *)(local_58 + 0x10) = 0;
    *(_Rb_tree_node_base **)(local_58 + 0x18) = p_Var1;
    *(_Rb_tree_node_base **)(local_58 + 0x20) = p_Var1;
    *(undefined8 *)(local_58 + 0x28) = 0;
  }
  else {
    while (p_Var12 != p_Var17) {
      p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var12);
      pvVar10 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var12,p_Var1);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 0x30);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(p_Var4 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var6 = p_Var4 + 8;
            iVar15 = *(int *)p_Var6;
            *(int *)p_Var6 = *(int *)p_Var6 + -1;
            UNLOCK();
          }
          else {
            iVar15 = (int)*(long *)(p_Var4 + 8);
            *(int *)(p_Var4 + 8) = iVar15 + -1;
          }
          if (iVar15 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
      operator_delete(pvVar10);
      *(long *)(local_58 + 0x28) = *(long *)(local_58 + 0x28) + -1;
      p_Var12 = p_Var9;
    }
  }
  __mutex = local_38;
  __dest = *(int **)((long)local_38 + 0x70);
  piVar8 = (int *)local_38[3].__align;
  if (0 < (long)piVar8 - (long)__dest) {
    uVar13 = (ulong)((long)piVar8 - (long)__dest) >> 3;
    do {
      uVar14 = uVar13 >> 1;
      if (__dest[uVar14 * 2] < param_1) {
        uVar13 = ~uVar14 + uVar13;
        __dest = __dest + uVar14 * 2 + 2;
      }
      else {
        uVar13 = uVar14;
      }
    } while (0 < (long)uVar13);
  }
  if ((__dest != piVar8) && (*__dest == param_1)) {
    __src = __dest + 2;
    if ((__src != piVar8) && (uVar13 = (long)piVar8 - (long)__src, 0 < (long)uVar13)) {
      memmove(__dest,__src,(((uVar13 >> 3) - 1) + (ulong)(uVar13 < 8)) * 8 + 8);
      piVar8 = (int *)__mutex[3].__align;
    }
    __mutex[3].__align = (long)(piVar8 + -2);
  }
  pthread_mutex_unlock(__mutex);
  if (*(int *)((long)__mutex + 0xa8) == 2) {
    plVar3 = *(long **)((long)__mutex + 0x88);
    p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)__mutex + 0x90);
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
    local_60 = 0;
    local_5c = *(int *)((long)plVar3 + 0xc);
    this_00 = *(vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)((long)__mutex + 0x98);
    plVar5 = *(long **)(this_00 + 8);
    if (plVar5 == *(long **)(this_00 + 0x10)) {
                    /* try { // try from 00480e88 to 00480e91 has its CatchHandler @ 00480ff3 */
      local_50 = &local_60;
      std::
      vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_00,plVar5,&local_50);
    }
    else {
      *plVar5 = (long)&local_60;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    local_50 = *(int **)((long)__mutex + 0x98);
    p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&__mutex[4].__data;
    if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
      }
    }
    local_48 = p_Var6;
    local_40 = &local_60;
    iVar15 = local_5c;
    for (; local_60 < iVar15; local_60 = local_60 + 1) {
      plVar5 = *(long **)(*plVar3 + (long)local_60 * 8);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 00480f06 to 00480f08 has its CatchHandler @ 00481000 */
        (**(code **)(*plVar5 + 0x10))();
        iVar15 = local_5c;
      }
    }
    ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>
    ::
    callCheckedExcluding<juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1}&&)
    ::{lambda()#1}::operator()((_lambda___1_ *)&local_50);
    if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var6 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var6 + 8) = 0;
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = p_Var6 + 8;
          iVar15 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar15 = (int)*(long *)(p_Var6 + 8);
          *(int *)(p_Var6 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
        }
      }
    }
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var6 = p_Var4 + 8;
          iVar15 = *(int *)p_Var6;
          *(int *)p_Var6 = *(int *)p_Var6 + -1;
          UNLOCK();
        }
        else {
          iVar15 = (int)*(long *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
  }
  return;
}


