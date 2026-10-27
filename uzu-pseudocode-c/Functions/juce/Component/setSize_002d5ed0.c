// Function : setSize
// Namespace: juce:Component
// Entry    : 002d5ed0
// Prototype: undefined setSize(Component * this, int param_1, int param_2)
// Body     : 002d5ed0 - 002d5edf


/* juce::Component::setSize(int, int) */

void __thiscall juce::Component::setSize(Component *this,int param_1,int param_2)

{
  setBounds(this,*(int *)(this + 0x38),*(int *)(this + 0x3c),param_1,param_2);
  return;
}


