// Function : addAndMakeVisible
// Namespace: juce:Component
// Entry    : 002d5e90
// Prototype: undefined addAndMakeVisible(Component * this, Component * param_1, uint param_2)
// Body     : 002d5e90 - 002d5ec2


/* juce::Component::addAndMakeVisible(juce::Component*, int) */

void __thiscall juce::Component::addAndMakeVisible(Component *this,Component *param_1,uint param_2)

{
  if (param_1 == (Component *)0x0) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x60))(param_1,1);
  addChildComponent(this,param_1,param_2);
  return;
}


