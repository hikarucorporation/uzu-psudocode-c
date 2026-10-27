// Function : componentParentHierarchyChanged
// Namespace: juce:Label
// Entry    : 00238a50
// Prototype: undefined componentParentHierarchyChanged(Label * this, long param_1)
// Body     : 00238a50 - 00238a6f


/* non-virtual thunk to juce::Label::componentParentHierarchyChanged(juce::Component&) */

void __thiscall juce::Label::componentParentHierarchyChanged(Label *this,long param_1)

{
  if (*(Component **)(param_1 + 0x30) == (Component *)0x0) {
    return;
  }
  Component::addChildComponent
            (*(Component **)(param_1 + 0x30),(Component *)(this + -0x108),0xffffffff);
  return;
}


