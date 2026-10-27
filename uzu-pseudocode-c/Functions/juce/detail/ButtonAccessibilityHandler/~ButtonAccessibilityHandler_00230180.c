// Function : ~ButtonAccessibilityHandler
// Namespace: juce:detail:ButtonAccessibilityHandler
// Entry    : 00230180
// Prototype: undefined ~ButtonAccessibilityHandler(ButtonAccessibilityHandler * this)
// Body     : 00230180 - 00230191


/* juce::detail::ButtonAccessibilityHandler::~ButtonAccessibilityHandler() */

void __thiscall
juce::detail::ButtonAccessibilityHandler::~ButtonAccessibilityHandler
          (ButtonAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


