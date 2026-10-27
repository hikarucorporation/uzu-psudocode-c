// Function : setTopLeftPosition
// Namespace: juce:Component
// Entry    : 002d71c0
// Prototype: undefined setTopLeftPosition(Component * this, int param_1, int param_2)
// Body     : 002d71c0 - 002d71cb


/* juce::Component::setTopLeftPosition(int, int) */

void __thiscall juce::Component::setTopLeftPosition(Component *this,int param_1,int param_2)

{
  setBounds(this,param_1,param_2,*(int *)(this + 0x40),*(int *)(this + 0x44));
  return;
}


