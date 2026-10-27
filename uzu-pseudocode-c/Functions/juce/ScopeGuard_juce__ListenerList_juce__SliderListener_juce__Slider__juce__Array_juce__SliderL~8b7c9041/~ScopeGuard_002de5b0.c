// Function : ~ScopeGuard
// Namespace: juce:ScopeGuard_juce__ListenerList_juce__SliderListener_juce__Slider__juce__Array_juce__SliderL~8b7c9041
// Entry    : 002de5b0
// Prototype: undefined ~ScopeGuard(ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> * this)
// Body     : 002de5b0 - 002de620


/* juce::ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,
   juce::Array<juce::SliderListener<juce::Slider>*, juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},
   juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,
   juce::Component::BailOutChecker const&,
   juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>::~ScopeGuard()
    */

void __thiscall
juce::
ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>
::~ScopeGuard(ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::_lambda(juce::SliderListener<juce::Slider>&)_1_,juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::_lambda(juce::SliderListener<juce::Slider>&)_1_&&)::_lambda()_1_>
              *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>
  ::
  callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)this);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x002de5ed. Too many branches */
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


