// Function : isKeyboardFocusContainer
// Namespace: juce:Component
// Entry    : 002265c0
// Prototype: byte isKeyboardFocusContainer(Component * this)
// Body     : 002265c0 - 002265ca


/* juce::Component::isKeyboardFocusContainer() const */

byte __thiscall juce::Component::isKeyboardFocusContainer(Component *this)

{
  return (byte)this[0xe8] >> 7;
}


