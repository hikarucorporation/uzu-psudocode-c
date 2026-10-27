// Function : setFont
// Namespace: juce:Graphics
// Entry    : 002f6190
// Prototype: undefined setFont(Graphics * this, undefined8 param_1)
// Body     : 002f6190 - 002f61c7


/* juce::Graphics::setFont(juce::Font const&) */

void __thiscall juce::Graphics::setFont(Graphics *this,undefined8 param_1)

{
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
                    /* WARNING: Could not recover jumptable at 0x002f61c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0xf8))(*(long **)(this + 8),param_1);
  return;
}


