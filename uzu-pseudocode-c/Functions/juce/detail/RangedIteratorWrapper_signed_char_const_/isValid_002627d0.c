// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_signed_char_const_
// Entry    : 002627d0
// Prototype: undefined8 isValid(RangedIteratorWrapper<signed_char_const> * this)
// Body     : 002627d0 - 002627db


/* juce::detail::RangedIteratorWrapper<signed char const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<signed_char_const>::isValid
          (RangedIteratorWrapper<signed_char_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


