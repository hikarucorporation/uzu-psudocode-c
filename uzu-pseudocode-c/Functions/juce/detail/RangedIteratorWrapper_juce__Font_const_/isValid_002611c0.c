// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__Font_const_
// Entry    : 002611c0
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::Font_const> * this)
// Body     : 002611c0 - 002611cb


/* juce::detail::RangedIteratorWrapper<juce::Font const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::Font_const>::isValid
          (RangedIteratorWrapper<juce::Font_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


