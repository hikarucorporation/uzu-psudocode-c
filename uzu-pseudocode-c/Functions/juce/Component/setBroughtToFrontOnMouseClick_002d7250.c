// Function : setBroughtToFrontOnMouseClick
// Namespace: juce:Component
// Entry    : 002d7250
// Prototype: undefined setBroughtToFrontOnMouseClick(Component * this, short param_1)
// Body     : 002d7250 - 002d727b


/* juce::Component::setBroughtToFrontOnMouseClick(bool) */

void __thiscall juce::Component::setBroughtToFrontOnMouseClick(Component *this,short param_1)

{
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = *(ushort *)(this + 0xe8) & 0xdfff | param_1 << 0xd;
  return;
}


