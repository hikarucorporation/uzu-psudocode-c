// Function : operator++
// Namespace: juce:detail:RangedIteratorWrapper_long_long_
// Entry    : 00248030
// Prototype: undefined operator++(RangedIteratorWrapper<long_long> * this)
// Body     : 00248030 - 00248035


/* juce::detail::RangedIteratorWrapper<long long>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
juce::detail::RangedIteratorWrapper<long_long>::operator++(RangedIteratorWrapper<long_long> *this)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x10;
  return;
}


