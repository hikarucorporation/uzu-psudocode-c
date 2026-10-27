// Function : ~vector
// Namespace: std:vector_std__unique_ptr_juce__JuceVST3EditController__OwnedParameterListener_std__default_d~e15538dc
// Entry    : 001b3610
// Prototype: undefined ~vector(vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>> * this)
// Body     : 001b3610 - 001b3669


/* std::vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> >,
   std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,
   std::default_delete<juce::JuceVST3EditController::OwnedParameterListener> > > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
::~vector(vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
          *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)this;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}


