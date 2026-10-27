// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Component__EffectState_std__default_delete_juce__Component__EffectState__
// Entry    : 00220390
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>> * this)
// Body     : 00220390 - 002203ca


/* std::unique_ptr<juce::Component::EffectState, std::default_delete<juce::Component::EffectState>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>>::
~unique_ptr(unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>>
            *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    operator_delete(plVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


