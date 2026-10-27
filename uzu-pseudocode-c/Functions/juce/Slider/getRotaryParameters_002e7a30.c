// Function : getRotaryParameters
// Namespace: juce:Slider
// Entry    : 002e7a30
// Prototype: undefined8 getRotaryParameters(Slider * this)
// Body     : 002e7a30 - 002e7a45


/* juce::Slider::getRotaryParameters() const */

undefined8 __thiscall juce::Slider::getRotaryParameters(Slider *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x1a0) >> 8),
                  *(undefined1 *)(*(long *)(this + 0x1a0) + 0x1c4));
}


