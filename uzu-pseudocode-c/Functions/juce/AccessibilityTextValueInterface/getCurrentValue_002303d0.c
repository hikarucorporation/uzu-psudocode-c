// Function : getCurrentValue
// Namespace: juce:AccessibilityTextValueInterface
// Entry    : 002303d0
// Prototype: undefined8 getCurrentValue(AccessibilityTextValueInterface * this)
// Body     : 002303d0 - 0023042e


/* juce::AccessibilityTextValueInterface::getCurrentValue() const */

undefined8 __thiscall
juce::AccessibilityTextValueInterface::getCurrentValue(AccessibilityTextValueInterface *this)

{
  int iVar1;
  int *piVar2;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  (**(code **)(*(long *)this + 0x20))(&local_18,this);
  local_8 = local_18;
  local_10 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_8);
  piVar2 = (int *)(local_18 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return local_10;
    }
  }
  return local_10;
}


