// Function : ~ComboBoxAccessibilityHandler
// Namespace: juce:ComboBoxAccessibilityHandler
// Entry    : 002dd400
// Prototype: undefined ~ComboBoxAccessibilityHandler(ComboBoxAccessibilityHandler * this)
// Body     : 002dd400 - 002dd411


/* juce::ComboBoxAccessibilityHandler::~ComboBoxAccessibilityHandler() */

void __thiscall
juce::ComboBoxAccessibilityHandler::~ComboBoxAccessibilityHandler
          (ComboBoxAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


