// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__detail__JustifiedText__DrawType_const_
// Entry    : 00261240
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const> * this)
// Body     : 00261240 - 0026124b


/* juce::detail::RangedIteratorWrapper<juce::detail::JustifiedText::DrawType const>::isValid() const
    */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const>::isValid
          (RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


