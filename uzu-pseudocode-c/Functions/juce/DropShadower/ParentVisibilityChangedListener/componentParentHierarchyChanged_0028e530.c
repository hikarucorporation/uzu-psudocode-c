// Function : componentParentHierarchyChanged
// Namespace: juce:DropShadower:ParentVisibilityChangedListener
// Entry    : 0028e530
// Prototype: undefined componentParentHierarchyChanged(ParentVisibilityChangedListener * this, long param_1)
// Body     : 0028e530 - 0028e53b


/* juce::DropShadower::ParentVisibilityChangedListener::componentParentHierarchyChanged(juce::Component&)
    */

void __thiscall
juce::DropShadower::ParentVisibilityChangedListener::componentParentHierarchyChanged
          (ParentVisibilityChangedListener *this,long param_1)

{
  if (*(long *)(this + 8) == param_1) {
    updateParentHierarchy(this);
    return;
  }
  return;
}


