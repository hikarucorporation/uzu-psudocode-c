// Function : ~LabelAccessibilityHandler
// Namespace: juce:LabelAccessibilityHandler
// Entry    : 002832c0
// Prototype: undefined ~LabelAccessibilityHandler(LabelAccessibilityHandler * this)
// Body     : 002832c0 - 002832d1


/* juce::LabelAccessibilityHandler::~LabelAccessibilityHandler() */

void __thiscall
juce::LabelAccessibilityHandler::~LabelAccessibilityHandler(LabelAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


