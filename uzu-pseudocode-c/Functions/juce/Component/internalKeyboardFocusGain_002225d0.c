// Function : internalKeyboardFocusGain
// Namespace: juce:Component
// Entry    : 002225d0
// Prototype: undefined internalKeyboardFocusGain(Component * this, ulong param_1, long * param_2, undefined4 param_3)
// Body     : 002225d0 - 0022265e


/* juce::Component::internalKeyboardFocusGain(juce::Component::FocusChangeType,
   juce::WeakReference<juce::Component, juce::ReferenceCountedObject> const&,
   juce::Component::FocusChangeDirection) */

void __thiscall
juce::Component::internalKeyboardFocusGain
          (Component *this,ulong param_1,long *param_2,undefined4 param_3)

{
  AccessibilityHandler *this_00;
  
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  (**(code **)(*(long *)this + 0x120))(this,param_1 & 0xffffffff);
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x10) != 0)) {
    if (currentlyFocusedComponent == this) {
      this_00 = (AccessibilityHandler *)getAccessibilityHandler(this);
      if ((this_00 != (AccessibilityHandler *)0x0) &&
         ((AccessibilityHandler::currentlyFocusedHandler == (AccessibilityHandler *)0x0 ||
          (AccessibilityHandler::currentlyFocusedHandler != this_00)))) {
        AccessibilityHandler::grabFocusInternal(this_00,'\x01');
      }
    }
    if ((*param_2 != 0) && (*(long *)(*param_2 + 0x10) != 0)) {
      internalChildKeyboardFocusChange(this,(int)param_1,param_2);
      return;
    }
  }
  return;
}


