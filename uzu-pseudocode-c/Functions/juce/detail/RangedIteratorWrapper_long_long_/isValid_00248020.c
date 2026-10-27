// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_long_long_
// Entry    : 00248020
// Prototype: undefined8 isValid(RangedIteratorWrapper<long_long> * this)
// Body     : 00248020 - 0024802b


/* juce::detail::RangedIteratorWrapper<long long>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<long_long>::isValid(RangedIteratorWrapper<long_long> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


