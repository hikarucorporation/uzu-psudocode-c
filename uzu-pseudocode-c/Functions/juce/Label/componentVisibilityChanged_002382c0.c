// Function : componentVisibilityChanged
// Namespace: juce:Label
// Entry    : 002382c0
// Prototype: undefined componentVisibilityChanged(Label * this, long param_1)
// Body     : 002382c0 - 002382d4


/* juce::Label::componentVisibilityChanged(juce::Component&) */

void __thiscall juce::Label::componentVisibilityChanged(Label *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002382d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this,(*(ushort *)(param_1 + 0xe8) & 2) >> 1);
  return;
}


