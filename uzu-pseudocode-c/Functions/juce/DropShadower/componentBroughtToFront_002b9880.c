// Function : componentBroughtToFront
// Namespace: juce:DropShadower
// Entry    : 002b9880
// Prototype: undefined componentBroughtToFront(DropShadower * this, long param_1)
// Body     : 002b9880 - 002b9894


/* juce::DropShadower::componentBroughtToFront(juce::Component&) */

void __thiscall juce::DropShadower::componentBroughtToFront(DropShadower *this,long param_1)

{
  if ((*(long *)(this + 8) == 0) || (*(long *)(*(long *)(this + 8) + 0x10) != param_1)) {
    return;
  }
  updateShadows(this);
  return;
}


