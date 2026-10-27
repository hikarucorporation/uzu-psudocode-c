// Function : sendDragEnd
// Namespace: juce:Slider:Pimpl
// Entry    : 002de9e0
// Prototype: undefined sendDragEnd(Pimpl * this)
// Body     : 002de9e0 - 002decae


/* juce::Slider::Pimpl::sendDragEnd() */

void __thiscall juce::Slider::Pimpl::sendDragEnd(Pimpl *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  long *plVar6;
  int iVar7;
  int local_50;
  int local_4c;
  int *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  int *local_38;
  
  (**(code **)(**(long **)(this + 0x18) + 0x1a0))();
  *(undefined4 *)(this + 0x1e0) = 0xffffffff;
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 == 0) {
LAB_002dea84:
    plVar6 = (long *)0x0;
    iVar7 = *(int *)(this + 0x48);
  }
  else {
    plVar6 = *(long **)(lVar2 + 0xd8);
    if (plVar6 == (long *)0x0) {
      plVar6 = operator_new(0x18);
      *(undefined4 *)(plVar6 + 1) = 0;
      *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar6[2] = lVar2;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar3 = *(long **)(lVar2 + 0xd8);
      *(long **)(lVar2 + 0xd8) = plVar6;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar6 = *(long **)(lVar2 + 0xd8);
        if (plVar6 == (long *)0x0) goto LAB_002dea84;
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    iVar7 = *(int *)(this + 0x48);
  }
  if (iVar7 == 2) {
    plVar3 = *(long **)(this + 0x28);
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
    local_50 = 0;
    local_4c = *(int *)((long)plVar3 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x38);
    plVar4 = *(long **)(this_01 + 8);
    if (plVar4 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 002deaeb to 002deaf4 has its CatchHandler @ 002decaf */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar4,&local_48);
    }
    else {
      *plVar4 = (long)&local_50;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_48 = *(int **)(this + 0x38);
    p_Var5 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x40);
    if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var5 + 8) = *(int *)(p_Var5 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var5 + 8) = *(int *)(p_Var5 + 8) + 1;
      }
    }
    iVar7 = local_4c;
    local_40 = p_Var5;
    local_38 = &local_50;
    while (((local_50 < iVar7 && (plVar6 != (long *)0x0)) && (plVar6[2] != 0))) {
      plVar4 = *(long **)(*plVar3 + (long)local_50 * 8);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 002deb6e to 002deb70 has its CatchHandler @ 002decc6 */
        (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)(this + 0x18));
        iVar7 = local_4c;
      }
      local_50 = local_50 + 1;
    }
    ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>
    ::
    callCheckedExcluding<juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)
    ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
    if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var5 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var5 + 8) = 0;
        (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
        (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = p_Var5 + 8;
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = (int)*(long *)(p_Var5 + 8);
          *(int *)(p_Var5 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var5);
        }
      }
    }
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var5 = this_00 + 8;
          iVar7 = *(int *)p_Var5;
          *(int *)p_Var5 = *(int *)p_Var5 + -1;
          UNLOCK();
        }
        else {
          iVar7 = (int)*(long *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    if ((plVar6[2] != 0) && (lVar2 = *(long *)(this + 0x18), *(long *)(lVar2 + 0x150) != 0)) {
                    /* try { // try from 002dec7b to 002dec80 has its CatchHandler @ 002decc1 */
      (**(code **)(lVar2 + 0x158))(lVar2 + 0x140);
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return;
}


