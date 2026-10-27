// Function : componentParentHierarchyChanged
// Namespace: juce:DropShadower
// Entry    : 002b98d0
// Prototype: undefined componentParentHierarchyChanged(DropShadower * this, long param_1)
// Body     : 002b98d0 - 002b98f2


/* juce::DropShadower::componentParentHierarchyChanged(juce::Component&) */

void __thiscall juce::DropShadower::componentParentHierarchyChanged(DropShadower *this,long param_1)

{
  if ((*(long *)(this + 8) == 0) || (*(long *)(*(long *)(this + 8) + 0x10) != param_1)) {
    return;
  }
  updateParent(this);
  updateShadows(this);
  return;
}


