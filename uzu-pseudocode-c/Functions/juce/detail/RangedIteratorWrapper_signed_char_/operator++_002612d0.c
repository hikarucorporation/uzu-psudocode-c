// Function : operator++
// Namespace: juce:detail:RangedIteratorWrapper_signed_char_
// Entry    : 002612d0
// Prototype: undefined operator++(RangedIteratorWrapper<signed_char> * this)
// Body     : 002612d0 - 002612d5


/* juce::detail::RangedIteratorWrapper<signed char>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
juce::detail::RangedIteratorWrapper<signed_char>::operator++
          (RangedIteratorWrapper<signed_char> *this)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x10;
  return;
}


