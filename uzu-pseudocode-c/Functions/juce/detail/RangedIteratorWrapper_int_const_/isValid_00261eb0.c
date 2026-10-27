// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_int_const_
// Entry    : 00261eb0
// Prototype: undefined8 isValid(RangedIteratorWrapper<int_const> * this)
// Body     : 00261eb0 - 00261ebb


/* juce::detail::RangedIteratorWrapper<int const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<int_const>::isValid(RangedIteratorWrapper<int_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


