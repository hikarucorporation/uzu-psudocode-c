// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__Colour_const_
// Entry    : 002630b0
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::Colour_const> * this)
// Body     : 002630b0 - 002630bb


/* juce::detail::RangedIteratorWrapper<juce::Colour const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::Colour_const>::isValid
          (RangedIteratorWrapper<juce::Colour_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


