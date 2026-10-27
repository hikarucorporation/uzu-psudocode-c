// Function : ~Callable
// Namespace: juce:ModalCallbackFunction:create_juce__ModalCallbackFunction__forComponent_juce__ComboBox__void____int_juce__ComboBo~4fd52ad2:Callable
// Entry    : 002dd3b0
// Prototype: undefined ~Callable(Callable * this)
// Body     : 002dd3b0 - 002dd3dc


/* ~Callable() */

void __thiscall
juce::ModalCallbackFunction::
create<juce::ModalCallbackFunction::forComponent<juce::ComboBox>(void(*)(int,juce::ComboBox*),juce::ComboBox*)::{lambda(int)#1}>(juce::ModalCallbackFunction::forComponent<juce::ComboBox>(void(*)(int,juce::ComboBox*),juce::ComboBox*)::{lambda(int)#1}&&)
::Callable::~Callable(Callable *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Callable_00711390;
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(this);
  return;
}


