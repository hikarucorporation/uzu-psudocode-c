// Function : ~ItemComponent
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027e8b0
// Prototype: undefined ~ItemComponent(ItemComponent * this)
// Body     : 0027e8b0 - 0027e8c1


/* juce::PopupMenu::HelperClasses::ItemComponent::~ItemComponent() */

void __thiscall juce::PopupMenu::HelperClasses::ItemComponent::~ItemComponent(ItemComponent *this)

{
  ~ItemComponent(this);
  operator_delete(this);
  return;
}


