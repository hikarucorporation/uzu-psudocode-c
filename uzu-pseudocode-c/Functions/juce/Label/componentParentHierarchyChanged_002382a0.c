// Function : componentParentHierarchyChanged
// Namespace: juce:Label
// Entry    : 002382a0
// Prototype: undefined componentParentHierarchyChanged(Label * this, long param_1)
// Body     : 002382a0 - 002382b9


/* juce::Label::componentParentHierarchyChanged(juce::Component&) */

void __thiscall juce::Label::componentParentHierarchyChanged(Label *this,long param_1)

{
  if (*(Component **)(param_1 + 0x30) == (Component *)0x0) {
    return;
  }
  Component::addChildComponent(*(Component **)(param_1 + 0x30),(Component *)this,0xffffffff);
  return;
}


