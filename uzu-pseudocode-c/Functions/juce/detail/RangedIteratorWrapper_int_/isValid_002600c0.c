// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_int_
// Entry    : 002600c0
// Prototype: undefined8 isValid(RangedIteratorWrapper<int> * this)
// Body     : 002600c0 - 002600cb


/* juce::detail::RangedIteratorWrapper<int>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<int>::isValid(RangedIteratorWrapper<int> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


