// Function : inputAttemptWhenModal
// Namespace: juce:Label
// Entry    : 00235700
// Prototype: undefined inputAttemptWhenModal(Label * this)
// Body     : 00235700 - 00235720


/* juce::Label::inputAttemptWhenModal() */

void __thiscall juce::Label::inputAttemptWhenModal(Label *this)

{
  if (*(long *)(this + 0x1c0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023571e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1e0 + (ulong)(byte)this[0x212] * 8))();
  return;
}


