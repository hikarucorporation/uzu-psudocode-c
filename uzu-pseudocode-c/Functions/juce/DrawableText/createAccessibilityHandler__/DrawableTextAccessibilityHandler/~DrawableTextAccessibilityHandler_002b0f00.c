// Function : ~DrawableTextAccessibilityHandler
// Namespace: juce:DrawableText:createAccessibilityHandler__:DrawableTextAccessibilityHandler
// Entry    : 002b0f00
// Prototype: undefined ~DrawableTextAccessibilityHandler(DrawableTextAccessibilityHandler * this)
// Body     : 002b0f00 - 002b0f11


/* ~DrawableTextAccessibilityHandler() */

void __thiscall
juce::DrawableText::createAccessibilityHandler()::DrawableTextAccessibilityHandler::
~DrawableTextAccessibilityHandler(DrawableTextAccessibilityHandler *this)

{
  AccessibilityHandler::~AccessibilityHandler((AccessibilityHandler *)this);
  operator_delete(this);
  return;
}


