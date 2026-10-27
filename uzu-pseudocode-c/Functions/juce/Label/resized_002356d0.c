// Function : resized
// Namespace: juce:Label
// Entry    : 002356d0
// Prototype: undefined resized(Label * this)
// Body     : 002356d0 - 002356f3


/* juce::Label::resized() */

void __thiscall juce::Label::resized(Label *this)

{
  if (*(long *)(this + 0x1c0) == 0) {
    return;
  }
  Component::setBounds
            ((Component *)(*(long *)(this + 0x1c0) + 8),0,0,*(int *)(this + 0x40),
             *(int *)(this + 0x44));
  return;
}


