// Function : componentParentHierarchyChanged
// Namespace: juce:DropShadower:VirtualDesktopWatcher
// Entry    : 0028e0f0
// Prototype: undefined componentParentHierarchyChanged(VirtualDesktopWatcher * this, long param_1)
// Body     : 0028e0f0 - 0028e104


/* juce::DropShadower::VirtualDesktopWatcher::componentParentHierarchyChanged(juce::Component&) */

void __thiscall
juce::DropShadower::VirtualDesktopWatcher::componentParentHierarchyChanged
          (VirtualDesktopWatcher *this,long param_1)

{
  if ((*(long *)(this + 0x30) == 0) || (*(long *)(*(long *)(this + 0x30) + 0x10) != param_1)) {
    return;
  }
  update(this);
  return;
}


