// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_signed_char_
// Entry    : 002612c0
// Prototype: undefined8 isValid(RangedIteratorWrapper<signed_char> * this)
// Body     : 002612c0 - 002612cb


/* juce::detail::RangedIteratorWrapper<signed char>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<signed_char>::isValid(RangedIteratorWrapper<signed_char> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


