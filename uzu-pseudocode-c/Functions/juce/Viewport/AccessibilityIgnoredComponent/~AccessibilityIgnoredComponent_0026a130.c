// Function : ~AccessibilityIgnoredComponent
// Namespace: juce:Viewport:AccessibilityIgnoredComponent
// Entry    : 0026a130
// Prototype: undefined ~AccessibilityIgnoredComponent(AccessibilityIgnoredComponent * this)
// Body     : 0026a130 - 0026a141


/* juce::Viewport::AccessibilityIgnoredComponent::~AccessibilityIgnoredComponent() */

void __thiscall
juce::Viewport::AccessibilityIgnoredComponent::~AccessibilityIgnoredComponent
          (AccessibilityIgnoredComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


