// Function : getControllerClassId
// Namespace: juce:JuceVST3Component
// Entry    : 001a7fd0
// Prototype: undefined8 getControllerClassId(undefined8 param_1_00, undefined8 * param_2)
// Body     : 001a7fd0 - 001a7fdc


/* juce::JuceVST3Component::getControllerClassId(char*) */

undefined8 __thiscall
juce::JuceVST3Component::getControllerClassId(undefined8 param_1_00,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = JuceVST3EditController::iid._16_8_;
  *param_2 = JuceVST3EditController::iid._8_8_;
  param_2[1] = uVar1;
  return 0;
}


