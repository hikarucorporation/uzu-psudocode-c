// Function : getRange
// Namespace: juce:AccessibilityTextValueInterface
// Entry    : 00230600
// Prototype: AccessibilityTextValueInterface * getRange(AccessibilityTextValueInterface * this)
// Body     : 00230600 - 0023060d


/* juce::AccessibilityTextValueInterface::getRange() const */

AccessibilityTextValueInterface * __thiscall
juce::AccessibilityTextValueInterface::getRange(AccessibilityTextValueInterface *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}


