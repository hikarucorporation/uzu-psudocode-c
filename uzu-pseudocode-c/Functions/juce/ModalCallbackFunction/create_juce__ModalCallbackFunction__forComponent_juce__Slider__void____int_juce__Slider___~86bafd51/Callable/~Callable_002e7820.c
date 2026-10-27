// Function : ~Callable
// Namespace: juce:ModalCallbackFunction:create_juce__ModalCallbackFunction__forComponent_juce__Slider__void____int_juce__Slider___~86bafd51:Callable
// Entry    : 002e7820
// Prototype: undefined ~Callable(Callable * this)
// Body     : 002e7820 - 002e784c


/* ~Callable() */

void __thiscall
juce::ModalCallbackFunction::
create<juce::ModalCallbackFunction::forComponent<juce::Slider>(void(*)(int,juce::Slider*),juce::Slider*)::{lambda(int)#1}>(juce::ModalCallbackFunction::forComponent<juce::Slider>(void(*)(int,juce::Slider*),juce::Slider*)::{lambda(int)#1}&&)
::Callable::~Callable(Callable *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Callable_00710278;
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


