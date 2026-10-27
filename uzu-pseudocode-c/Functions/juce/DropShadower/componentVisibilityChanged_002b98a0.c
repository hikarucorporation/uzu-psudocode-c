// Function : componentVisibilityChanged
// Namespace: juce:DropShadower
// Entry    : 002b98a0
// Prototype: undefined componentVisibilityChanged(DropShadower * this, long param_1)
// Body     : 002b98a0 - 002b98b4


/* juce::DropShadower::componentVisibilityChanged(juce::Component&) */

void __thiscall juce::DropShadower::componentVisibilityChanged(DropShadower *this,long param_1)

{
  if ((*(long *)(this + 8) == 0) || (*(long *)(*(long *)(this + 8) + 0x10) != param_1)) {
    return;
  }
  updateShadows(this);
  return;
}


