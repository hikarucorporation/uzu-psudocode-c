// Function : componentVisibilityChanged
// Namespace: juce:Label
// Entry    : 00238a30
// Prototype: undefined componentVisibilityChanged(Label * this, long param_1)
// Body     : 00238a30 - 00238a4f


/* non-virtual thunk to juce::Label::componentVisibilityChanged(juce::Component&) */

void __thiscall juce::Label::componentVisibilityChanged(Label *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00238a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x108) + 0x60))
            (this + -0x108,(*(ushort *)(param_1 + 0xe8) & 2) >> 1);
  return;
}


