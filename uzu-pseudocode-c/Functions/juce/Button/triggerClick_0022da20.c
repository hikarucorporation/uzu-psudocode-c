// Function : triggerClick
// Namespace: juce:Button
// Entry    : 0022da20
// Prototype: undefined triggerClick(Button * this)
// Body     : 0022da20 - 0022da29


/* juce::Button::triggerClick() */

void __thiscall juce::Button::triggerClick(Button *this)

{
  Component::postCommandMessage((Component *)this,0x2f3f4f99);
  return;
}


