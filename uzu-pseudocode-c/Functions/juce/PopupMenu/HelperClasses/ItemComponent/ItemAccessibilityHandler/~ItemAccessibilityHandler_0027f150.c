// Function : ~ItemAccessibilityHandler
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent:ItemAccessibilityHandler
// Entry    : 0027f150
// Prototype: undefined ~ItemAccessibilityHandler(ItemAccessibilityHandler * this)
// Body     : 0027f150 - 0027f161


/* juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::~ItemAccessibilityHandler()
    */

void __thiscall
juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::~ItemAccessibilityHandler
          (ItemAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


