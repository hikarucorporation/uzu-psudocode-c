// Function : paint
// Namespace: juce:CaretComponent
// Entry    : 002b6e80
// Prototype: undefined paint(CaretComponent * this, Graphics * param_1)
// Body     : 002b6e80 - 002b6ed3


/* juce::CaretComponent::paint(juce::Graphics&) */

void __thiscall juce::CaretComponent::paint(CaretComponent *this,Graphics *param_1)

{
  ulong uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = Component::findColour((Component *)this,0x1000204,'\x01');
  Graphics::setColour(param_1,(int)uVar1);
  local_18 = *(undefined8 *)(this + 0x40);
  local_20 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),&local_20,0);
  return;
}


