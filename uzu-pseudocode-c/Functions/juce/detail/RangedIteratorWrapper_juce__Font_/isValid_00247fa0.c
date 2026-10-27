// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__Font_
// Entry    : 00247fa0
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::Font> * this)
// Body     : 00247fa0 - 00247fab


/* juce::detail::RangedIteratorWrapper<juce::Font>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::Font>::isValid(RangedIteratorWrapper<juce::Font> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


