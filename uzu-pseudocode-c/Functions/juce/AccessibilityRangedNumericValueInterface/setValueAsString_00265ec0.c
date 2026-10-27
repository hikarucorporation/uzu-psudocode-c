// Function : setValueAsString
// Namespace: juce:AccessibilityRangedNumericValueInterface
// Entry    : 00265ec0
// Prototype: undefined setValueAsString(AccessibilityRangedNumericValueInterface * this, long * param_1)
// Body     : 00265ec0 - 00265eea


/* juce::AccessibilityRangedNumericValueInterface::setValueAsString(juce::String const&) */

void __thiscall
juce::AccessibilityRangedNumericValueInterface::setValueAsString
          (AccessibilityRangedNumericValueInterface *this,long *param_1)

{
  long local_10;
  
  local_10 = *param_1;
  CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_10);
                    /* WARNING: Could not recover jumptable at 0x00265ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this);
  return;
}


