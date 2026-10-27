// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__Colour_
// Entry    : 00247fe0
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::Colour> * this)
// Body     : 00247fe0 - 00247feb


/* juce::detail::RangedIteratorWrapper<juce::Colour>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::Colour>::isValid
          (RangedIteratorWrapper<juce::Colour> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


