// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_float_const_
// Entry    : 00261280
// Prototype: undefined8 isValid(RangedIteratorWrapper<float_const> * this)
// Body     : 00261280 - 0026128b


/* juce::detail::RangedIteratorWrapper<float const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<float_const>::isValid(RangedIteratorWrapper<float_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


