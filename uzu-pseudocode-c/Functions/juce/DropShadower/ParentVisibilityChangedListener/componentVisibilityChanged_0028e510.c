// Function : componentVisibilityChanged
// Namespace: juce:DropShadower:ParentVisibilityChangedListener
// Entry    : 0028e510
// Prototype: undefined componentVisibilityChanged(ParentVisibilityChangedListener * this, long param_1)
// Body     : 0028e510 - 0028e529


/* juce::DropShadower::ParentVisibilityChangedListener::componentVisibilityChanged(juce::Component&)
    */

void __thiscall
juce::DropShadower::ParentVisibilityChangedListener::componentVisibilityChanged
          (ParentVisibilityChangedListener *this,long param_1)

{
  if (*(long *)(this + 8) == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0028e527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x20))();
  return;
}


