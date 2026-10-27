// Function : setValue
// Namespace: juce:AccessibilityTextValueInterface
// Entry    : 00230560
// Prototype: undefined setValue(double param_1, AccessibilityTextValueInterface * this)
// Body     : 00230560 - 002305b3


/* juce::AccessibilityTextValueInterface::setValue(double) */

void __thiscall
juce::AccessibilityTextValueInterface::setValue
          (double param_1,AccessibilityTextValueInterface *this)

{
  int iVar1;
  long in_RAX;
  int *piVar2;
  long local_18;
  
  local_18 = in_RAX;
  juce::String::String(param_1,(String *)&local_18);
                    /* try { // try from 00230575 to 0023057d has its CatchHandler @ 002305b4 */
  (**(code **)(*(long *)this + 0x30))(this,&local_18);
  piVar2 = (int *)(local_18 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


