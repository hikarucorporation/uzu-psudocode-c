// Function : addTransform
// Namespace: juce:Graphics
// Entry    : 002f5d70
// Prototype: undefined addTransform(Graphics * this, undefined8 param_1)
// Body     : 002f5d70 - 002f5da4


/* juce::Graphics::addTransform(juce::AffineTransform const&) */

void __thiscall juce::Graphics::addTransform(Graphics *this,undefined8 param_1)

{
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
                    /* WARNING: Could not recover jumptable at 0x002f5da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1);
  return;
}


