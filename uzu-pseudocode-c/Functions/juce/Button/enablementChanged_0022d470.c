// Function : enablementChanged
// Namespace: juce:Button
// Entry    : 0022d470
// Prototype: undefined enablementChanged(Button * this)
// Body     : 0022d470 - 0022d48c


/* juce::Button::enablementChanged() */

void __thiscall juce::Button::enablementChanged(Button *this)

{
  updateState(this);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


