// Function : modalStateFinished
// Namespace: juce:ModalCallbackFunction:create_juce__ModalCallbackFunction__forComponent_juce__Slider__void____int_juce__Slider___~86bafd51:Callable
// Entry    : 002e7850
// Prototype: undefined modalStateFinished(Callable * this, undefined4 param_1)
// Body     : 002e7850 - 002e786c


/* modalStateFinished(int) */

void __thiscall
juce::ModalCallbackFunction::
create<juce::ModalCallbackFunction::forComponent<juce::Slider>(void(*)(int,juce::Slider*),juce::Slider*)::{lambda(int)#1}>(juce::ModalCallbackFunction::forComponent<juce::Slider>(void(*)(int,juce::Slider*),juce::Slider*)::{lambda(int)#1}&&)
::Callable::modalStateFinished(Callable *this,undefined4 param_1)

{
  if (*(long *)(this + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x002e786b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002e7865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 8))(param_1,*(undefined8 *)(*(long *)(this + 0x10) + 0x10));
  return;
}


