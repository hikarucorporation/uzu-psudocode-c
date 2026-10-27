// Function : setPaintingIsUnclipped
// Namespace: juce:Component
// Entry    : 002d7280
// Prototype: undefined setPaintingIsUnclipped(Component * this, byte param_1)
// Body     : 002d7280 - 002d72ac


/* juce::Component::setPaintingIsUnclipped(bool) */

void __thiscall juce::Component::setPaintingIsUnclipped(Component *this,byte param_1)

{
  *(undefined2 *)(this + 0xe8) = *(undefined2 *)(this + 0xe8);
  this[0xea] = (Component)((byte)this[0xea] & 0xfe | param_1);
  return;
}


