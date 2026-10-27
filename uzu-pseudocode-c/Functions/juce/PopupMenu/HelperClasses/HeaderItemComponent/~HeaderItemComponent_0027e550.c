// Function : ~HeaderItemComponent
// Namespace: juce:PopupMenu:HelperClasses:HeaderItemComponent
// Entry    : 0027e550
// Prototype: undefined ~HeaderItemComponent(HeaderItemComponent * this)
// Body     : 0027e550 - 0027e56f


/* juce::PopupMenu::HelperClasses::HeaderItemComponent::~HeaderItemComponent() */

void __thiscall
juce::PopupMenu::HelperClasses::HeaderItemComponent::~HeaderItemComponent(HeaderItemComponent *this)

{
  *(undefined ***)(this + 0xf0) = &PTR__SingleThreadedReferenceCountedObject_00713c80;
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


