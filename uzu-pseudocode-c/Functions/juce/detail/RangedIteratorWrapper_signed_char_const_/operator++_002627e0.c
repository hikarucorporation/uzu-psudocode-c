// Function : operator++
// Namespace: juce:detail:RangedIteratorWrapper_signed_char_const_
// Entry    : 002627e0
// Prototype: undefined operator++(RangedIteratorWrapper<signed_char_const> * this)
// Body     : 002627e0 - 002627e5


/* juce::detail::RangedIteratorWrapper<signed char const>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
juce::detail::RangedIteratorWrapper<signed_char_const>::operator++
          (RangedIteratorWrapper<signed_char_const> *this)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x10;
  return;
}


