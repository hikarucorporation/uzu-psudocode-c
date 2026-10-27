// Function : operator++
// Namespace: juce:detail:RangedIteratorWrapper_int_
// Entry    : 002600d0
// Prototype: undefined operator++(RangedIteratorWrapper<int> * this)
// Body     : 002600d0 - 002600d5


/* juce::detail::RangedIteratorWrapper<int>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
juce::detail::RangedIteratorWrapper<int>::operator++(RangedIteratorWrapper<int> *this)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x10;
  return;
}


