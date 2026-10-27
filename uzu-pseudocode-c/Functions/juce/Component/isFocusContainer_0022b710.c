// Function : isFocusContainer
// Namespace: juce:Component
// Entry    : 0022b710
// Prototype: uint isFocusContainer(Component * this)
// Body     : 0022b710 - 0022b71d


/* juce::Component::isFocusContainer() const */

uint __thiscall juce::Component::isFocusContainer(Component *this)

{
  return (*(ushort *)(this + 0xe8) & 0x40) >> 6;
}


