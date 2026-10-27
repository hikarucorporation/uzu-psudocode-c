// Function : setJustificationType
// Namespace: juce:Label
// Entry    : 002d8150
// Prototype: undefined setJustificationType(Label * this, int param_1)
// Body     : 002d8150 - 002d816e


/* juce::Label::setJustificationType(juce::Justification) */

void __thiscall juce::Label::setJustificationType(Label *this,int param_1)

{
  if (*(int *)(this + 0x1b8) == param_1) {
    return;
  }
  *(int *)(this + 0x1b8) = param_1;
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


