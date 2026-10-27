// Function : ~SliderAccessibilityHandler
// Namespace: juce:SliderAccessibilityHandler
// Entry    : 002e51b0
// Prototype: undefined ~SliderAccessibilityHandler(SliderAccessibilityHandler * this)
// Body     : 002e51b0 - 002e51c1


/* juce::SliderAccessibilityHandler::~SliderAccessibilityHandler() */

void __thiscall
juce::SliderAccessibilityHandler::~SliderAccessibilityHandler(SliderAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


