// Function : modalStateFinished
// Namespace: juce:ModalCallbackFunction:create_juce__ModalCallbackFunction__forComponent_juce__ComboBox__void____int_juce__ComboBo~4fd52ad2:Callable
// Entry    : 002dd3e0
// Prototype: undefined modalStateFinished(Callable * this, undefined4 param_1)
// Body     : 002dd3e0 - 002dd3fc


/* modalStateFinished(int) */

void __thiscall
juce::ModalCallbackFunction::
create<juce::ModalCallbackFunction::forComponent<juce::ComboBox>(void(*)(int,juce::ComboBox*),juce::ComboBox*)::{lambda(int)#1}>(juce::ModalCallbackFunction::forComponent<juce::ComboBox>(void(*)(int,juce::ComboBox*),juce::ComboBox*)::{lambda(int)#1}&&)
::Callable::modalStateFinished(Callable *this,undefined4 param_1)

{
  if (*(long *)(this + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x002dd3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002dd3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 8))(param_1,*(undefined8 *)(*(long *)(this + 0x10) + 0x10));
  return;
}


